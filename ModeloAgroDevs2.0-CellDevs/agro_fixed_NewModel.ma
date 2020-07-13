%#include(parametros.inc)
%#include(tablasEj5x5.inc)
%#include(inicializacionEj5x5.inc)
%#include(tablas.inc)
%#include(inicializacion.inc)

#include(153/parametros.inc)
#include(153/tablas.inc)
#include(153/NewModelComp1.inc)



[top]
components : campo ambiente@Queue
in: in_m_amb done_m_amb
link : in_m_amb in@ambiente
link : done_m_amb done@ambiente
link : out@ambiente in_ambiente@campo

[campo]
type : cell 
%dim : (5, 5)
dim : (10, 10)
delay : transport
defaultDelayTime : 0
border : nowrapped
neighbors : campo(-1,-1)  campo(-1,0)  campo(-1,1)
neighbors : campo(0,-1)   campo(0,0)   campo(0,1)
neighbors : campo(1,-1)   campo(1,0)   campo(1,1)
% Se inicializan en macro inicializacion
% -0.5 = valor que no se usa en .val
% En particular se ponen con valor -1 a -n en .val
initialvalue : -0.5
%initialCellsvalue : val-ej5x5.val
initialCellsvalue : 153/agro.val

% variables
% cam cantidad de campañas procesadas
% sum_deg suma parcial para degradacion
% clu flag copia lu
% aju tipo de ajuste, 1 resultado ok, 2 resultado error, 3 contexto
% variables para copiar valores del vecino
% clu1 valor a copiar en lu1
% clu2 valor a copiar en lu2
% clu3 valor a copiar en lu3
% cue_cota valor a copiar en ue_cota
% cmgm valor a copiar en mgm
StateVariables: cam sum_deg clu aju clu1 clu2 clu3 cue_cota cmgm
StateValues: 0 0 0 0 ? ? ? ? ?

% puertos
in : in_ambiente
% representan valores externos
% amb ambiente (1 Muy malo, 2 Malo, 3 Medio, 4 Bueno, 5 Muy bueno)
% representan perfil productor
% mgm manejo (1 Bajo, 2 Medio, 3 Alto)
% ua_tipo tipo de umbral ambiental (1 menor, 2 igual, 3 mayor)
% ue_cota umbral economico
% ua_cota umbral ambiental
% representan composicion campo
% lu1 porcentaje de lu tipo maiz
% lu2 porcentaje de lu tipo trigo/soja
% lu3 porcentaje de lu tipo soja primera
% pro profit
% eme emergia
% deg indice degracacion
% uae cantidad de campañas sin cumplir ua
% uao cantidad de campañas que cumple ua
% uee cantidad de campañas sin cumplir ue
% ueo cantidad de campañas que cumple ue
% alq valor alquiler del establecimiento
neighborports: amb mgm lu1 lu2 lu3 pro eme ua_tipo ua_cota ue_cota deg uae uao uee ueo alq etapa camp_fullfil_economic_beh camp_fullfil_enviromental_beh
link : in_ambiente amb@campo(0,0)

% reglas
localtransition : cell-rule
portInTransition : amb@campo(0,0) setAmbiente

[cell-rule]
% Propagacion Ambiente
rule: { 
		~amb 	:= (0,-1)~amb; 
		#macro(SetEtapaAmbienteRecibido)
	}
	{
		$cam := $cam + 1;
	}
	 0
	{ 
		(0,0)#macro(inicio) 	and
		(not isUndefined((0,-1)~amb)) 	and
		(0,-1)#macro(ambienteRecibido)	and
		(0,0)~amb	 	!= (0,-1)~amb
	}

rule: { 
		~amb 	:= (-1,0)~amb; 	
		#macro(SetEtapaAmbienteRecibido)
	}
	{
		$cam := $cam + 1;
	}
	 0
	{ 
		(0,0)#macro(inicio) 			and
		(not isUndefined((-1,0)~amb)) 	and
		(-1,0)#macro(ambienteRecibido)	and
		(0,0)~amb 	!= (-1,0)~amb 
	}

% Procesamiento
% 1 - Calculo Profit / Emergia
rule: { 
		~pro 	:=  (((0,0)~lu1/ 100) * ((#macro(rinde_lu1) * #macro(precio_lu1)) - #macro(costo_lu1))) + 
					(((0,0)~lu2/ 100) * ((#macro(rinde_lu2) * #macro(precio_lu2)) - #macro(costo_lu2))) + 
					(((0,0)~lu3/ 100) * (((#macro(rinde_lu4) * #macro(precio_lu4)) + (#macro(rinde_lu5) * #macro(precio_lu2))) - #macro(costo_lu3))) -
					((0,0)~alq * (#macro(precio_lu2)));
		~eme 	:=  (((0,0)~lu1/ 100) * #macro(emergia_lu1)) + 
					(((0,0)~lu2/ 100) * #macro(emergia_lu2)) + 
					(((0,0)~lu3/ 100) * #macro(emergia_lu3));
		#macro(SetEtapaParametrosCalculados)
	}
		0
	{ 
		(0,0)#macro(ambienteRecibido) 	and
		(not isUndefined((0,0)~lu1)) 	and
		(not isUndefined((0,0)~lu2)) 	and
		(not isUndefined((0,0)~lu3)) 	and
		(not isUndefined((0,0)~mgm))
	}

rule: { 
		~pro 	:=  ?;
		~eme 	:=  ?;
		#macro(SetEtapaParametrosCalculados)
	}
	 0
	{ 
		(0,0)#macro(ambienteRecibido)
	}


% 2 - Control UE cumplido
rule: { 
		~ueo := (0,0)~ueo + 1;
		#macro(SetEtapaUEOkEsperaVecinos)
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		(0,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))
	}	

% 3 - Control UE No cumplido
% Prepara cmgmio %LU
% Prepara adaptacion UE al contexto
rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,0)~lu1;
		$clu2 		:= (-1,0)~lu2;
		$clu3	 	:= (-1,0)~lu3;
		$cue_cota 	:= (-1,0)~ue_cota;
		$cmgm 		:= (-1,0)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,0)~pro))	 		and
		(
			(-1,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (-1,0)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,0)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,0)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,0)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (-1,0)~pro)	and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (-1,0)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (-1,0)~pro)		
		)
	}


rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,1)~lu1;
		$clu2 		:= (-1,1)~lu2;
		$clu3	 	:= (-1,1)~lu3;
		$cue_cota 	:= (-1,1)~ue_cota;
		$cmgm 		:= (-1,1)~mgm;
	}
		0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((-1,1)~pro)) 			and
		(
			(-1,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,1)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,1)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,1)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (-1,1)~pro)	and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (-1,1)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (-1,1)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (-1,1)~pro)
		)									
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (0,1)~lu1;
		$clu2 		:= (0,1)~lu2;
		$clu3	 	:= (0,1)~lu3;
		$cue_cota 	:= (0,1)~ue_cota;
		$cmgm 		:= (0,1)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados)	 	and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((0,1)~pro)) 			and
		(
			(0,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (0,1)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (0,1)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (0,1)~pro)	and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (0,1)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (0,1)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (0,1)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (0,1)~pro)
		)
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,1)~lu1;
		$clu2 		:= (1,1)~lu2;
		$clu3	 	:= (1,1)~lu3;
		$cue_cota 	:= (1,1)~ue_cota;
		$cmgm 		:= (1,1)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((1,1)~pro)) 			and
		(
			(1,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (1,1)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (1,1)~pro)	and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (1,1)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,1)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (1,1)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro 	<= (1,1)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,1)~pro)	
		)
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,0)~lu1;
		$clu2 		:= (1,0)~lu2;
		$clu3	 	:= (1,0)~lu3;
		$cue_cota 	:= (1,0)~ue_cota;
		$cmgm 		:= (1,0)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((1,0)~pro)) 			and
		(
			(1,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and	
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (1,0)~pro)	and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (1,0)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,0)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (1,0)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (1,0)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,0)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (1,0)~pro)	
		)
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,-1)~lu1;
		$clu2 		:= (1,-1)~lu2;
		$clu3	 	:= (1,-1)~lu3;
		$cue_cota 	:= (1,-1)~ue_cota;
		$cmgm 		:= (1,-1)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((1,-1)~pro)) 			and
		(
			(1,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and	
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (1,-1)~pro)	and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,-1)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (1,-1)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro 	<= (1,-1)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,-1)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (1,-1)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (1,-1)~pro)	
		)
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (0,-1)~lu1;
		$clu2 		:= (0,-1)~lu2;
		$clu3	 	:= (0,-1)~lu3;
		$cue_cota 	:= (0,-1)~ue_cota;
		$cmgm 		:= (0,-1)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((0,-1)~pro)) 			and
		(
			(0,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (0,-1)~pro)	and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (0,-1)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (0,-1)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (0,-1)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (0,-1)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (0,-1)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (0,-1)~pro)	
		)
	}

rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,-1)~lu1;
		$clu2 		:= (-1,-1)~lu2;
		$clu3	 	:= (-1,-1)~lu3;
		$cue_cota 	:= (-1,-1)~ue_cota;
		$cmgm 		:= (-1,-1)~mgm;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		#macro(vecinosParametrosCalculados) 	and
		(not isUndefined((-1,-1)~pro)) 			and
		(
			(-1,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (-1,-1)~pro)	and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (-1,-1)~pro)	and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,-1)~pro)	and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,-1)~pro)	and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,-1)~pro)	and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (-1,-1)~pro)	and	
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (-1,-1)~pro)	
		)
	}

% Ningun vecino cumple la ME (cambia el productor)
% Prepara adaptacion UE al resultado
rule: { 
		~uee 		:= (0,0)~uee + 1;						
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
	}
	{
		$clu 		:= 0;
		$aju 		:= 2;
	}
		0
	{ 
		(0,0)#macro(parametrosCalculados)		and
		#macro(vecinosParametrosCalculados) 	
	}

% Pasa de etapa cuando todos controlaron UE
rule: { 
		#macro(SetEtapaUECumplida)
	}
	 0
	{ 
		(0,0)#macro(UEOkEsperaVecinos) 		and
		#macro(vecinosUeControlado) 	
	}	

rule: { 
		#macro(SetEtapaProcesamiento)
	}
	 0
	{ 
		(0,0)#macro(UEErrorEsperaVecinos) 		and
		#macro(vecinosUeControlado) 	
	}	
	
% 3 - Control UA cumplido
% Prepara adaptacion UE al resultado
rule: { 
		~uao 		:=  (0,0)~uao + 1;
		#macro(SetEtapaProcesamiento)
	}
	{
		$clu 		:= 0;
		$aju 		:= 1;
	}
		0
	{ 
		(0,0)#macro(UECumplida) 				and
		(
			(
				(0,0)~ua_tipo 	= #macro(menor)	and
				(0,0)~eme 		< (0,0)~ua_cota		
			) 								or
			(
				(0,0)~ua_tipo 	= #macro(igual)	and
				(0,0)~eme 		= (0,0)~ua_cota		
			)								or
			(
				(0,0)~ua_tipo 	= #macro(mayor) and
				(0,0)~eme 		> (0,0)~ua_cota		
			)
		)
	}	

% 4 - Control MA No cumplida (Calculo degradacion)
% Prepara adaptacion UE al resultado
rule: { 
		~deg 		:=  (((0,0)~eme - (0,0)~ua_cota) / (0,0)~ua_cota) * 100;
		~uae 		:=  (0,0)~uae + 1;		
		#macro(SetEtapaProcesamiento)
	}
	{
		$clu 		:= 0;
		$aju 		:= 1;
	}
	 0
	{ 
		(0,0)#macro(UECumplida)
	}	


% 5 - Procesamiento
% Cambio de LU si aplica
% Adapta UE segun tipo:
% 0 no ajusta
% 1 ajusta por resultado ok
% 2 ajusta por resultado error
% 3 ajusta por contexto
% si el ajusta es < 0, queda 0
% Adapta MGM si aplica
rule: { 
		~lu1 		:= 	if ($clu = 1, $clu1, (0,0)~lu1);
		~lu2 		:= 	if ($clu = 1, $clu2, (0,0)~lu2);
		~lu3 		:= 	if ($clu = 1, $clu3, (0,0)~lu3);
		~ue_cota	:= 	if ($aju = 0, (0,0)~ue_cota, 0) +
						if ($aju = 1, 
							if (((0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro)) > 0, (0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro), 0), 
							0) +
						if ($aju = 2, 
							if (((0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro)) > 0, (0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro), 0), 
							0) +
						if ($aju = 3, 
							if ((($cue_cota + ($cue_cota * #macro(ajuste_ambiente))) + 
								(
									($cue_cota + ($cue_cota * #macro(ajuste_ambiente))) * 
									(
										if (#macro(hay_MGM_adaptativo) = 1, 
											if ((0,0)~pro > #macro(wc_maximo_mgm_3), 
												#macro(ajuste_entorno_mgm_3), 
												if ((0,0)~pro > #macro(wc_maximo_mgm_2), 
													#macro(ajuste_entorno_mgm_2), 
													#macro(ajuste_entorno_mgm_1)
												)
											),
											#macro(ajuste_entorno)
										)									
									)
								) > 0), 
								($cue_cota + ($cue_cota * #macro(ajuste_ambiente))) + 
								(
									($cue_cota + ($cue_cota * #macro(ajuste_ambiente))) * 
									( 	
										if (#macro(hay_MGM_adaptativo) = 1, 
											if ((0,0)~pro > #macro(wc_maximo_mgm_3), 
												#macro(ajuste_entorno_mgm_3), 
												if ((0,0)~pro > #macro(wc_maximo_mgm_2), 
													#macro(ajuste_entorno_mgm_2), 
													#macro(ajuste_entorno_mgm_1)
												)
											),
											#macro(ajuste_entorno)
										)									
									)
								), 
								0),
							0);
		~mgm 		:= 	if (#macro(hay_MGM_adaptativo) = 1, 
							if ((0,0)~pro > #macro(wc_maximo_mgm_3), 
								3, 
								if ((0,0)~pro > #macro(wc_maximo_mgm_2), 
									2, 
									1
								)
							),
							(0,0)~mgm
						);
		#macro(SetEtapaFinal)
	}
	 0
	{ 
		(0,0)#macro(Procesamiento) 		and
		#macro(vecinosProcesamiento) 	
	}	

% 6 - Cierre ciclo
% Vuelve a Inicio cuando todos terminan
% Antes de ir al inicio se pone amb en nulo
% Para permitir secuencas de amb iguales
rule: { 
		~amb 	:=  ?;
		#macro(SetEtapaInicio)
	}
	{
		$clu 		:= 0;
		$aju 		:= 0;
		$clu1	 	:= ?;
		$clu2 		:= ?;
		$clu3	 	:= ?;
		$cue_cota 	:= ?;
		$cmgm 		:= ?;
	}
		0
	{ 
		(0,0)#macro(Final) 		and
		#macro(vecinosFinal) 	
	}		
% Procesamiento FIN


% Inicializacion
#Macro(inicializar)
	
% Default
rule : { 
	}
	{ }
	 0 
	{ t }

% Reglas transicion externo-celldevs

[setAmbiente]
% Procesa el ambiente externo recibido
% No hace nada pero si hubiera procesamiento va aca
rule : { 
		~amb 	:= portValue(thisPort);
		#macro(SetEtapaAmbienteRecibido)
	}
	{
		$cam := $cam + 1;
	}
 	 0
	{ t }

% Parametros Atomicos auxiliares
	
[ambiente]
preparation : 00:00:00:001
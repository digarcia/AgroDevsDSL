%#include(parametros.inc)
%#include(tablasEj5x5.inc)
%#include(inicializacionEj5x5.inc)
%#include(tablas.inc)
%#include(inicializacion.inc)

%#include(153/parametros.inc)
%#include(153/tablas.inc)

#include(pergamino2020/parametros.inc)
#include(pergamino2020/tablas.inc)
%#include(pergamino2020/tablaremake.inc)

%inicializacion
%#include(153/NewModelComp1.inc)
%#include(153/inicializacion13profit.inc)
%#include(153/inicializacionCopiaEconomicaAmbiental.inc)
%#include(153/inicializacionProfit.inc)


%inicializacionEscenarios
%#include(escenarios/inicializacion-modifica-LU-vecinos-clima-x-Maiz.inc)
%#include(escenarios/inicializacion-modifica-LU-vecinos-clima-x-TS.inc)
%#include(escenarios/inicializacion-modifica-TL-clima-5.inc)
%#include(escenarios/inicializacion-modifica-TL-precio-aumenta.inc)
%#include(pergamino2020/inicializacionModeloDaniela.inc)
%#include(pergamino2020/inicializacionModeloDaniela5x5.inc)
%#include(pergamino2020/inicializacionModeloDaniela_CopyBehaviour5x5.inc)
#include(pergamino2020/inicializacionModeloDaniela_CopyBehaviouvrV2_5x5.inc)



%#include(pergamino2020/inicializacion-Ejemplo-5x5.inc)
%#include(pergamino2020/inicializacionPergamino2020CopiaEcyAmb.inc)


%#include(pergamino2020/inicializacionPergamino2020PropietariosEcoyAmb_RestoEc.inc)
%#include(pergamino2020/inicializacionPergamino2020Ec_CambioLUClimatexCrop0.inc)
%#include(pergamino2020/inicializacionPergamino2020Ec_CambioLUandTLClimatexCrop0.inc)
%#include(pergamino2020/inicializacionPergamino2020IncEc_PropEcAmb_CambioLUandTLClimatexCrop0.inc)


%#include(pergamino2020/inicializacionPergamino2020Ec_TLClimate.inc)

%#include(pergamino2020/inicializacionPergamino2020SoloAmb.inc)
%#include(pergamino2020/inicializacionPergamino2020ClimatexLUxcrop1.inc)

%#include(pergamino2020/inicializacionPergamino2020propAmbClimatexLUxcrop1.inc)

%#include(pergamino2020/inicializacionPergamino2020pruebainidesdeexcel.inc)
%#include(pergamino2020/inicializacionPergamino2020pruebainiEXCELecoamb.inc)

%#include(pergamino2020/R32.inc)
%#include(pergamino2020/R24.inc)
%#include(pergamino2020/R2.inc)
%#include(pergamino2020/R12.inc)
%#include(pergamino2020/R080.inc)

%#include(pergamino2020/OT10.inc)
%#include(pergamino2020/OT30.inc)
%#include(pergamino2020/OT50.inc)
%#include(pergamino2020/OT70.inc)
%#include(pergamino2020/OT90.inc)



%#include(pergamino2020/inicializacionPruebaUmbralEc_EcoyAmb.inc)
%#include(pergamino2020/inicializacionPruebaEcoyambCambia1erAgente.inc)
%#include(pergamino2020/inicializacionPruebaEcoyambCambia1erAgentey17-18.inc)
%#include(pergamino2020/inicializacionPruebaEcoyambCambia1erAgenty19-20-24.inc)











[top]
components : campo ambiente@Queue curr_lu1_price@Queue curr_lu2_price@Queue curr_lu4_price@Queue
in: in_m_amb done_m_amb in_curr_lu1_price done_curr_lu1_price in_curr_lu2_price done_curr_lu2_price in_curr_lu4_price done_curr_lu4_price
link : in_m_amb in@ambiente 
link : done_m_amb done@ambiente
link : out@ambiente in_ambiente@campo

link: in_curr_lu1_price in@curr_lu1_price
link: done_curr_lu1_price done@curr_lu1_price
link: out@curr_lu1_price  in_curr_lu1_price@campo

link: in_curr_lu2_price in@curr_lu2_price
link: done_curr_lu2_price done@curr_lu2_price
link: out@curr_lu2_price  in_curr_lu2_price@campo

link: in_curr_lu4_price in@curr_lu4_price
link: done_curr_lu4_price done@curr_lu4_price
link: out@curr_lu4_price  in_curr_lu4_price@campo

[campo]
type : cell 
dim : (5, 5)
%dim : (10, 10)
%dim : (25, 25)
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
%initialCellsvalue : 153/agro.val
initialCellsvalue : pergamino2020/agro5x5.val
%initialCellsvalue :  pergamino2020/agro25x25.val


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
StateVariables: cam sum_deg clu aju clu1 clu2 clu3 cue_cota cmgm  copia_ae cae_aju cae_lu1 cae_lu2 cae_lu3 cae_ue_cota cae_mgm copia_a ca_aju ca_lu1 ca_lu2 ca_lu3 ca_ue_cota ca_mgm  	cae_camp_fullfil_economic_beh cae_camp_fullfil_enviromental_beh	cae_plu_adj cae_wlu_adj cae_wlu_adj_cro	cae_ptl_adj cae_wtl_adj		c_camp_fullfil_economic_beh c_camp_fullfil_enviromental_beh c_plu_adj  c_wlu_adj c_wlu_adj_cro c_ptl_adj  c_wtl_adj  ca_camp_fullfil_economic_beh ca_camp_fullfil_enviromental_beh ca_plu_adj  ca_wlu_adj ca_wlu_adj_cro ca_ptl_adj ca_wtl_adj c_cont_failed_campaign	c_cont_succesfull_campaign	
StateValues: 0 0 0 0 ? ? ? ? ?  ? ? ? ? ? ? ?  ? ? ? ? ? ? ?     ? ? ? ? ? ? ?    ? ? ? ? ? ? ?    ? ? ? ? ? ? ?   ? ?

					
				

% puertos
in : in_ambiente in_curr_lu1_price in_curr_lu2_price in_curr_lu4_price
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
%
% plu_adj price land use adjustment
% wlu_adj weather land use adjustment
% wlu_adj_cro weather land use adjustment crops

%copy_behaviour indicates if the agent "learns" the enviromental or economic behaviour from its best neighbor. (1 yes, 0 or ? no)

neighborports: amb mgm lu1 lu2 lu3 pro eme ua_tipo ua_cota ue_cota deg uae uao uee ueo alq etapa camp_fullfil_economic_beh camp_fullfil_enviromental_beh flag_paso flag_cae flag_value curr_lu1_price curr_lu2_price curr_lu4_price prev_lu1_price prev_lu2_price prev_lu4_price lu_total   plu_adj wlu_adj wlu_adj_cro  roi rue_cota ptl_adj wtl_adj initial_corner_cell cont_failed_campaign cont_succesfull_campaign copy_behaviour




link : in_ambiente amb@campo(0,0)
link : in_curr_lu1_price curr_lu1_price@campo(0,0)
link : in_curr_lu2_price curr_lu2_price@campo(0,0)
link : in_curr_lu4_price curr_lu4_price@campo(0,0)

% reglas
localtransition : cell-rule
portInTransition : amb@campo(0,0) setAmbiente
portInTransition : curr_lu1_price@campo(0,0) setPrecioLu1
portInTransition : curr_lu2_price@campo(0,0) setPrecioLu2
portInTransition : curr_lu4_price@campo(0,0) setPrecioLu4

[cell-rule]


% Copia de previous price para la celda (0,0)
rule: { 
		%saves previous price
		~prev_lu1_price  := (0,0)~curr_lu1_price;
		~prev_lu2_price  := (0,0)~curr_lu2_price;
		~prev_lu4_price  := (0,0)~curr_lu4_price;
		~flag_cae := 1.99 ;
	}
	0
	{
	(0,0)#macro(inicio) 	
	and (0,0)~initial_corner_cell = 1 
	}
	

% Propagacion Ambiente y precios
rule: { 
		~amb 	:= (0,-1)~amb; 
		%saves previous price
		~prev_lu1_price  := (0,0)~curr_lu1_price;
		~prev_lu2_price  := (0,0)~curr_lu2_price;
		~prev_lu4_price  := (0,0)~curr_lu4_price;
		%propagates price
		~curr_lu1_price := (0,-1)~curr_lu1_price; 
		~curr_lu2_price := (0,-1)~curr_lu2_price; 
		~curr_lu4_price := (0,-1)~curr_lu4_price; 
		#macro(SetEtapaAmbienteRecibido)
		~flag_paso := 1.01 ;
		~flag_cae := 1.01;	
		~flag_value := $cam;
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
		%and 1 != 1
	}

rule: { 
		~amb 	:= (-1,0)~amb; 	
		%saves previous price
		~prev_lu1_price  := (0,0)~curr_lu1_price;
		~prev_lu2_price  := (0,0)~curr_lu2_price;
		~prev_lu4_price  := (0,0)~curr_lu4_price;
		%propagates price
		~curr_lu1_price := (-1,0)~curr_lu1_price; 
		~curr_lu2_price := (-1,0)~curr_lu2_price; 
		~curr_lu4_price := (-1,0)~curr_lu4_price; 
		#macro(SetEtapaAmbienteRecibido)
		~flag_paso := 1.02 ;
		~flag_cae := 1.02;	
		~flag_value := $cam;
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
		%and 1 != 1
	}

	
	
% Variacion de LandUse por precio
rule: { 
	%(lu_nueva_precio-lu_orig_precio)/(lu_orig_precio)		

	~lu1 := if( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) or
				(((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)  >0.1) ,
				if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) and
				(((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1),
				(0,0)~lu1 +  (0,0)~lu2 * 0.125 + (0,0)~lu3 * 0.125 ,
				if ( abs((((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)) - (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))>0.1,
					if ( (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)) < (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)),
					(0,0)~lu1 + (0,0)~lu2 * 0.125,
					(0,0)~lu1 + (0,0)~lu3 * 0.125),
				(0,0)~lu1 +  (0,0)~lu2 * 0.125 + (0,0)~lu3 * 0.125
				)),
				if ( (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) or 
					(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) ,
					if ( (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) and 
						(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) ,
						(0,0)~lu1 - (0,0)~lu1 * 0.25,
						if(abs((((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)) - (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))>0.1,
							(0,0)~lu1 - (0,0)~lu1 * 0.125,
							(0,0)~lu1 - (0,0)~lu1 * 0.25
							)  ),
				(0,0)~lu1 )			
				);
				
	

		~lu2 := if( (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) or
				(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)  >0.1) ,
				if ( (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) and
				(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1),
				(0,0)~lu2 +  (0,0)~lu1 * 0.125 + (0,0)~lu3 * 0.125	,
				if ( abs((((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) - (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))>0.1,			
				if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) < (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)),
				(0,0)~lu2 + (0,0)~lu1 * 0.125,
				(0,0)~lu2 + (0,0)~lu3 * 0.125),
				(0,0)~lu2 +  (0,0)~lu1 * 0.125 + (0,0)~lu3 * 0.125			
				)
				),			
				if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) or 
					(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) ,
					if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) and 
						(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1) ,
						(0,0)~lu2 - (0,0)~lu2 * 0.25,
						if(abs((((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) - (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))>0.1,
							(0,0)~lu2 - (0,0)~lu2 * 0.125,
							(0,0)~lu2 - (0,0)~lu2 * 0.25
							)  ),
				(0,0)~lu2 )	
				);
				
				
				
		~lu3 := if( (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) or
				(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)  >0.1) ,
				if ( (((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) >0.1) and
				(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) - ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) >0.1),
				(0,0)~lu3 +  (0,0)~lu1 * 0.125 + (0,0)~lu2 * 0.125	,
				if ( abs((((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) - (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)))>0.1,				
				if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) < (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)),
				(0,0)~lu3 + (0,0)~lu1 * 0.125,
				(0,0)~lu3 + (0,0)~lu2 * 0.125),
				(0,0)~lu3 +  (0,0)~lu1 * 0.125 + (0,0)~lu2 * 0.125					
				)
				),
				if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1) or 
					(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1) ,
					if ( (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1) and 
						(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2) - ((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4) >0.1) ,
						(0,0)~lu3 - (0,0)~lu3 * 0.25,
						if(abs((((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) - (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2)))>0.1,
							(0,0)~lu3 - (0,0)~lu3 * 0.125,
							(0,0)~lu3 - (0,0)~lu3 * 0.25
							)  ),
				(0,0)~lu3 )					
				);		
		~lu_total	:= 	 (0,0)~lu1 +  (0,0)~lu2 +  (0,0)~lu3 ;
	
	%~lu1 := (0,0)~lu1 * 1.20;	
	#macro(SetAjusteLandUsePrice)
	~flag_paso := 1.11 ;
	%~flag_cae := 1.11 ;	
	%~flag_cae := ((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1);
	%~flag_cae  := ((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2);
	%~flag_cae := (0,0)~lu1 * 0.125  ;
	%~flag_cae  :=  (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1)) - (((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2));	
	
	}
	 0
	{ 
		(0,0)#macro(ambienteRecibido) 	
		and ( (0,0)~plu_adj = 1 )

	}	
	
rule: { 	
		%No hace ajuste land use por precio
		#macro(SetAjusteLandUsePrice)
		~flag_paso := 1.12;	
		%~flag_cae  := (0,0)~plu_adj ;
	}
	 0
	{ 
		% if plu_adj is no initialized has the initial cell value (that is negative)
		(0,0)#macro(ambienteRecibido) 	
		and (isUndefined((0,0)~plu_adj) or  ((0,0)~plu_adj = 0) or ((0,0)~plu_adj < 0)) 
	}	
	
rule: { 	
		%Hace ajuste land use por clima
		#macro(SetAjusteLandUseWeather)
		
		~lu1 := if (  (0,0)~wlu_adj =1   ,  
						if (  (0,0)~wlu_adj_cro =0  ,
								if ( (0,0)~amb = 5	,
										(0,0)~lu1 +  (0,0)~lu2 * 0.25,
										if ((0,0)~amb = 1,
											(0,0)~lu1 * 0.75,
											(0,0)~lu1)	
										)
								,(0,0)~lu1)
						 ,(0,0)~lu1);
		
			~lu2 := if (  (0,0)~wlu_adj =1   ,  
						if (  (0,0)~wlu_adj_cro =0  ,
								if ( (0,0)~amb = 1	,
										(0,0)~lu2 +  (0,0)~lu1 * 0.25,
										if ((0,0)~amb = 5,
											(0,0)~lu2 * 0.75,
											(0,0)~lu2)	
										),
								if ( (0,0)~wlu_adj_cro =1	,
									if ( (0,0)~amb = 1	,
										(0,0)~lu2 +  (0,0)~lu3 * 0.25,
										if ((0,0)~amb = 5,
											(0,0)~lu2 * 0.75,
											(0,0)~lu2)	
										),
										(0,0)~lu2)					
								)
						 ,(0,0)~lu2);
						 
			~lu3 := if (  (0,0)~wlu_adj =1   ,  
						if (  (0,0)~wlu_adj_cro =1  ,
								if ( (0,0)~amb = 5	,
										(0,0)~lu3 +  (0,0)~lu2 * 0.25,
										if ((0,0)~amb = 1,
											(0,0)~lu3 * 0.75,
											(0,0)~lu3)	
										)
								,(0,0)~lu3)
						 ,(0,0)~lu3);			 
		
			~lu_total	:= 	 (0,0)~lu1 +  (0,0)~lu2 +  (0,0)~lu3 ;
		
		~flag_paso := 1.21;	
		~flag_cae  := (0,0)~amb;
	}
	 0
	{ 
		(0,0)#macro(ajusteLandUsePrice) 	
		% and ( (0,0)~wlu_adj = 1 )
	}	
	
	
rule: { 	
		%No hace ajuste land use por clima
		#macro(SetAjusteLandUseWeather)
		~flag_paso := 1.22;	
		%~flag_cae  := (0,0)~wlu_adj ;
	}
	 0
	{ 
		% if wlu_adj is no initialized has the initial cell value (that is negative)
		(0,0)#macro(ajusteLandUsePrice) 	
		and (isUndefined((0,0)~wlu_adj) or  ((0,0)~wlu_adj = 0) or ((0,0)~wlu_adj < 0)) 
	}
	
% Variacion Nivel Tecnologico por Clima
rule: { 	
		%Hace ajuste nivel tecnologico por clima
		#macro(SetAjusteMgmWeather)
		
		
		~mgm 		:=  if ( ((0,0)~amb = 4) or ((0,0)~amb = 5 ) ,
									if ((0,0)~pro > #macro(wc_maximo_mgm_3), 
										3, 
										if ((0,0)~pro > #macro(wc_maximo_mgm_2), 
											2, 
											1
										)
									),
									if (((0,0)~amb = 1) or ((0,0)~amb =2 )	,
												if ((0,0)~mgm = 3, 2, 1),
												(0,0)~mgm)	
							);
				
		
		~flag_paso := 1.31;	
		%~flag_cae  := (0,0)~wtl_adj ;
	}
	 0
	{ 
		(0,0)#macro(ajusteLandUseWeather) 	
		and ( ((0,0)~wtl_adj = 1) ) 
	}

rule: { 	
		%No hace ajuste nivel tecnologico por clima
		#macro(SetAjusteMgmWeather)
		~flag_paso := 1.32;	
		%~flag_cae  := (0,0)~wtl_adj ;
	}
	 0
	{ 
		% if wtl_adj is no initialized has the initial cell value (that is negative)
		(0,0)#macro(ajusteLandUseWeather) 	
		and (isUndefined((0,0)~wtl_adj) or  ((0,0)~wtl_adj = 0) or ((0,0)~wtl_adj < 0)) 
	}	

% Variacion Nivel Tecnologico por Precio
rule: { 	
		%Hace ajuste nivel tecnologico por precio
		#macro(SetAjusteMgmPrice)
		
		
		%~mgm 		:=  (0,0)~mgm;
				
		~mgm 		:= if (not isUndefined((0,0)~pro) ,	
							if ( 
							(((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1))*((0,0)~lu1/100) + 
							(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))*((0,0)~lu2/100) + 
							(((((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))+
							(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))/2)*((0,0)~lu3/100) > 0.1   ,						
								if (((0,0)~mgm = 3) or ((0,0)~mgm = 2 ) and 	((0,0)~pro > #macro(wc_maximo_mgm_3)), 
										3, 
											if (((0,0)~mgm = 2) or ((0,0)~mgm = 1 ) and ((0,0)~pro > #macro(wc_maximo_mgm_2)), 
													2, 
													1
										)
									)
							,		
							if (
							(((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1))*((0,0)~lu1/100) + 
							(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))*((0,0)~lu2/100) + 
							(((((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))+
							(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))/2)*((0,0)~lu3/100) < -0.1 
							,
								if ( ((0,0)~mgm = 3),
										2,
										1
								),
								(0,0)~mgm
							)),
							(0,0)~mgm);
		
		
		
		~flag_paso := 1.41;	
		~flag_cae  := (((0,0)~curr_lu1_price - #macro(precio_lu1))/#macro(precio_lu1))*((0,0)~lu1/100) + 
							(((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))*((0,0)~lu2/100) + 
							(((((0,0)~curr_lu2_price - #macro(precio_lu2))/#macro(precio_lu2))+
							(((0,0)~curr_lu4_price - #macro(precio_lu4))/#macro(precio_lu4)))/2)*((0,0)~lu3/100) ;
	}
	 0
	{ 
		(0,0)#macro(ajusteMgmWeather) 	
		and ( ((0,0)~ptl_adj = 1) ) 
	}	
	
rule: { 	
		%No hace ajuste nivel tecnologico por precio
		#macro(SetAjusteMgmPrice)
		
	
		~flag_paso := 1.42;	
		%~flag_cae  := (0,0)~wtl_adj ;
	}
	 0
	{ 
		(0,0)#macro(ajusteMgmWeather) 	
		and (isUndefined((0,0)~ptl_adj) or  ((0,0)~ptl_adj = 0) or ((0,0)~ptl_adj < 0)) 
	}	
	
% Procesamiento
% 1 - Calculo Profit / Emergia
% TODO: sacar inicializacion flag_cae
rule: { 
		~pro 	:=  (((0,0)~lu1/ 100) * ((#macro(rinde_lu1) * #macro(precio_lu1)) - #macro(costo_lu1))) + 
					(((0,0)~lu2/ 100) * ((#macro(rinde_lu2) * #macro(precio_lu2)) - #macro(costo_lu2))) + 
					(((0,0)~lu3/ 100) * (((#macro(rinde_lu4) * #macro(precio_lu4)) + (#macro(rinde_lu5) * #macro(precio_lu2))) - #macro(costo_lu3))) -
					((0,0)~alq * (#macro(precio_lu2)));
					
		~eme 	:=  (((0,0)~lu1/ 100) * #macro(emergia_lu1)) + 
					(((0,0)~lu2/ 100) * #macro(emergia_lu2)) + 
					(((0,0)~lu3/ 100) * #macro(emergia_lu3));
		#macro(SetEtapaParametrosCalculados)
		~flag_paso := 2.1 ;
		%~flag_cae := 2.1;	
		%~flag_cae := (0,0)~lu1;

	}
		0
	{ 
		(0,0)#macro(ajusteMgmPrice) 	and
		(not isUndefined((0,0)~lu1)) 	and
		(not isUndefined((0,0)~lu2)) 	and
		(not isUndefined((0,0)~lu3)) 	and
		(not isUndefined((0,0)~mgm))
	}

rule: { 
		~pro 	:=  ?;
		~eme 	:=  ?;
		#macro(SetEtapaParametrosCalculados)
		~flag_paso := 2.2 ;
		%~flag_cae := 2.2;
	}
	 0
	{ 
		(0,0)#macro(ajusteMgmPrice)
	}


% 2 - Control UE y UA cumplido
rule: { 
		~ueo := (0,0)~ueo + 1;
		
		% contadores campañas sucesivas exitosas o fallidas.
		~cont_failed_campaign		:=  0;
		~cont_succesfull_campaign	:=  (0,0)~cont_succesfull_campaign + 1;	
		
		
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 3.1 ;
		%~flag_cae := 3.1 ;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		(0,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
		(0,0)~eme >  ((0,0)~ua_cota)  and		
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   
	}	


% 2 - Control UE cumplido
rule: { 
		~ueo := (0,0)~ueo + 1;
		
		% contadores campañas sucesivas exitosas o fallidas.
		~cont_failed_campaign		:=  0;
		~cont_succesfull_campaign	:=  (0,0)~cont_succesfull_campaign + 1;			
		
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 3.11 ;
		%~flag_cae := 3.11 ;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		(0,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 0)   
	}	


% 2a - Control UA cumplida
rule: { 
		% correcto no contar ueo ya que cumplio solo el ambiental.
		%~ueo := (0,0)~ueo + 1;
		
		% contadores campañas sucesivas exitosas o fallidas.
		~cont_failed_campaign		:=  0;
		~cont_succesfull_campaign	:=  (0,0)~cont_succesfull_campaign + 1;			
		
		
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 3.12 ;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		(0,0)~eme >  ((0,0)~ua_cota)  			and
		((0,0)~camp_fullfil_economic_beh = 0 )   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   			
	}	
	
% no tiene activado ningun flag, nunca copia.	
	rule: { 
		%~ueo := (0,0)~ueo + 1;
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 3.13 ;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		and
		((0,0)~camp_fullfil_economic_beh = 0  or isUndefined((0,0)~camp_fullfil_economic_beh) )   and
		((0,0)~camp_fullfil_enviromental_beh = 0 or isUndefined((0,0)~camp_fullfil_enviromental_beh ) )   			
	}	
	

	
	
	
%------------------------------------------------------------------	
	
% Calculo de contadores de campañas fallidas.	
	rule: { 
		%~ueo := (0,0)~ueo + 1;
		% ver si corresponde otro nombre de etapa, ContadorCampañasFallidas?
		#macro(SetEtapaUmbralesCalculados)
		
		~cont_failed_campaign := (0,0)~cont_failed_campaign+1	;
		~cont_succesfull_campaign := 0 ;
		
		~flag_paso := 3.14 ;
	}
	 0
	{ 
		(0,0)#macro(parametrosCalculados) 		  
		% is not necessary to compare if the agente wants economic and enviromental success,
		% or just economic success , or just enviromental.
		% if it didn't match with the previous steps, indicate a failed campaign,
		% so the failure counter, counts in the same way.		
	}	
		
	
	
	
	
%------------------------------------------------------------------		
	
% 4.3 - Copia vecinos economico y ambiental	
rule: { 
		
		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.31 ;
		%~flag_cae := 4.31 ;
		%~flag_cae := 55.31;
	}
	{
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (-1,0)~lu1;
		$cae_lu2 		:= (-1,0)~lu2;
		$cae_lu3	 	:= (-1,0)~lu3;
		$cae_ue_cota 	:= (-1,0)~ue_cota;
		$cae_mgm 		:= (-1,0)~mgm;
		
		$c_camp_fullfil_economic_beh 					:= (-1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (-1,0)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (-1,0)~plu_adj ;
		$cae_wlu_adj									:= (-1,0)~wlu_adj ;
		$cae_wlu_adj_cro								:= (-1,0)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (-1,0)~ptl_adj ;
		$cae_wtl_adj									:= (-1,0)~wtl_adj ;		
		$c_cont_failed_campaign							:= (-1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (-1,0)~cont_succesfull_campaign ;	
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,0)~pro))	 		and
		(not isUndefined((-1,0)~eme))	 		and
		(
			(-1,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(-1,0)~eme > ((0,0)~ua_cota) and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (-1,0)~pro	or ( (-1,1)~pro > (-1,0)~pro and (-1,1)~eme < (0,0)~ua_cota)) and			
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,0)~pro   or ( (0,1)~pro  > (-1,0)~pro  and (0,1)~eme < (0,0)~ua_cota)) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,0)~pro   or ( (1,1)~pro 	> (-1,0)~pro and  (1,1)~eme < (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,0)~pro   or ( (1,0)~pro 	> (-1,0)~pro and  (1,0)~eme < (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (-1,0)~pro 	or ( (1,-1)~pro > (-1,0)~pro and  (1,-1)~eme < (0,0)~ua_cota)) and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (-1,0)~pro   or ( (0,-1)~pro > (-1,0)~pro and  (0,-1)~eme < (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (-1,0)~pro   or ( (-1,-1)~pro > (-1,0)~pro and (-1,-1)~eme < (0,0)~ua_cota)) 
			and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (-1,0)~eme or ((-1,1)~eme  > (-1,0)~eme  and (-1,0)~pro > (-1,1)~pro )) and	
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (-1,0)~eme or ((0,1)~eme   > (-1,0)~eme  and (-1,0)~pro > (0,1)~pro  )) and	
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (-1,0)~eme or ((1,1)~eme   > (-1,0)~eme  and (-1,0)~pro > (1,1)~pro  )) and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (-1,0)~eme or ((1,0)~eme   > (-1,0)~eme  and (-1,0)~pro > (1,0)~pro  )) and	 
			(isUndefined((1,-1)~eme) or  (1,-1)~eme 	<= (-1,0)~eme or ((1,-1)~eme  > (-1,0)~eme  and (-1,0)~pro > (1,-1)~pro )) and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (-1,0)~eme or ((0,-1)~eme  > (-1,0)~eme  and (-1,0)~pro > (0,-1)~pro )) and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (-1,0)~eme or ((-1,-1)~eme > (-1,0)~eme  and (-1,0)~pro > (-1,-1)~pro))						
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.32 ;
	}
	{
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (-1,1)~lu1;
		$cae_lu2 		:= (-1,1)~lu2;
		$cae_lu3	 	:= (-1,1)~lu3;
		$cae_ue_cota 	:= (-1,1)~ue_cota;
		$cae_mgm 		:= (-1,1)~mgm;
		
		$c_camp_fullfil_economic_beh 					:= (-1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (-1,1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (-1,1)~plu_adj ;
		$cae_wlu_adj									:= (-1,1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (-1,1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (-1,1)~ptl_adj ;
		$cae_wtl_adj									:= (-1,1)~wtl_adj ;				
		$c_cont_failed_campaign							:= (-1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (-1,1)~cont_succesfull_campaign ;			
	}
		0
	{ 		
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and			
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,1)~pro))	 		and
		(not isUndefined((-1,1)~eme))	 		and		
		(
			(-1,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(-1,1)~eme > ((0,0)~ua_cota) and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,1)~pro or ( (0,1)~pro > (-1,1)~pro	and (0,1)~eme 	< (0,0)~ua_cota)) and	
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,1)~pro or ( (1,1)~pro > (-1,1)~pro	and (1,1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,1)~pro or ( (1,0)~pro > (-1,1)~pro	and (1,0)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (-1,1)~pro or ( (1,-1)~pro > (-1,1)~pro	and (1,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (-1,1)~pro or ( (0,-1)~pro > (-1,1)~pro	and (0,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (-1,1)~pro or ( (-1,-1)~pro > (-1,1)~pro	and (-1,-1)~eme < (0,0)~ua_cota)) and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (-1,1)~pro or ( (-1,0)~pro  > (-1,1)~pro	and (-1,0)~eme  < (0,0)~ua_cota)) 
			and
			(isUndefined((0,1)~eme)  or   (0,1)~eme  <= (-1,1)~eme or ((0,1)~eme   > (-1,1)~eme  and (-1,1)~pro > (0,1)~pro   )) and
			(isUndefined((1,1)~eme)  or   (1,1)~eme  <= (-1,1)~eme or ((1,1)~eme   > (-1,1)~eme  and (-1,1)~pro > (1,1)~pro   )) and
			(isUndefined((1,0)~eme)  or   (1,0)~eme  <= (-1,1)~eme or ((1,0)~eme   > (-1,1)~eme  and (-1,1)~pro > (1,0)~pro   )) and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme  <= (-1,1)~eme or ((1,-1)~eme  > (-1,1)~eme  and (-1,1)~pro > (1,-1)~pro  )) and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme  <= (-1,1)~eme or ((0,-1)~eme  > (-1,1)~eme  and (-1,1)~pro > (0,-1)~pro  )) and
			(isUndefined((-1,-1)~eme) or (-1,-1)~eme <= (-1,1)~eme or ((-1,-1)~eme > (-1,1)~eme  and (-1,1)~pro > (-1,-1)~pro )) and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme  <= (-1,1)~eme or ((-1,0)~eme  > (-1,1)~eme  and (-1,1)~pro > (-1,0)~pro  ))			
		)									
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.33 ;
	}
	{	
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (0,1)~lu1;
		$cae_lu2 		:= (0,1)~lu2;
		$cae_lu3	 	:= (0,1)~lu3;
		$cae_ue_cota 	:= (0,1)~ue_cota;
		$cae_mgm 		:= (0,1)~mgm;
		
		$c_camp_fullfil_economic_beh 					:= (0,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (0,1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (0,1)~plu_adj ;
		$cae_wlu_adj									:= (0,1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (0,1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (0,1)~ptl_adj ;
		$cae_wtl_adj									:= (0,1)~wtl_adj ;	
		$c_cont_failed_campaign							:= (0,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (0,1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((0,1)~pro))	 		and
		(not isUndefined((0,1)~eme))	 		and		
		
		(
			(0,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(0,1)~eme > ((0,0)~ua_cota) and			
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (0,1)~pro or ( (1,1)~pro 	> (0,1)~pro	and (1,1)~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (0,1)~pro or ( (1,0)~pro 	> (0,1)~pro	and (1,0)~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (0,1)~pro or ( (1,-1)~pro 	> (0,1)~pro	and (1,-1)~eme < (0,0)~ua_cota)) and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (0,1)~pro or ( (0,-1)~pro 	> (0,1)~pro	and (0,-1)~eme < (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (0,1)~pro or ( (-1,-1)~pro 	> (0,1)~pro	and (-1,-1)~eme < (0,0)~ua_cota)) and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (0,1)~pro or ( (-1,0)~pro   	> (0,1)~pro	and (-1,0)~eme < (0,0)~ua_cota)) and  
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (0,1)~pro or ( (-1,1)~pro	> (0,1)~pro and (-1,1)~eme < (0,0)~ua_cota))		
			and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (0,1)~eme or ((1,1)~eme 	> (0,1)~eme  and   (0,1)~pro > 	(1,1)~pro   )) and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (0,1)~eme or ((1,0)~eme 	> (0,1)~eme  and   (0,1)~pro > 	(1,0)~pro   )) and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (0,1)~eme or ((1,-1)~eme > (0,1)~eme  and   (0,1)~pro > 	(1,-1)~pro  )) and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme		<= (0,1)~eme or ((0,-1)~eme > (0,1)~eme  and   (0,1)~pro > 	(0,-1)~pro  )) and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (0,1)~eme or ((-1,-1)~eme > (0,1)~eme  and   (0,1)~pro > (-1,-1)~pro )) and 
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (0,1)~eme or ((-1,0)~eme  > (0,1)~eme  and   (0,1)~pro > (-1,0)~pro  )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (0,1)~eme or ((-1,1)~eme  > (0,1)~eme  and   (0,1)~pro > (-1,1)~pro  ))		
			
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.34 ;
	}
	{
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (1,1)~lu1;
		$cae_lu2 		:= (1,1)~lu2;
		$cae_lu3	 	:= (1,1)~lu3;
		$cae_ue_cota 	:= (1,1)~ue_cota;
		$cae_mgm 		:= (1,1)~mgm;		
		
		$c_camp_fullfil_economic_beh 					:= (1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (1,1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (1,1)~plu_adj ;
		$cae_wlu_adj									:= (1,1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (1,1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (1,1)~ptl_adj ;
		$cae_wtl_adj									:= (1,1)~wtl_adj ;	
		$c_cont_failed_campaign							:= (1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (1,1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and			
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,1)~pro))	 		and
		(not isUndefined((1,1)~eme))	 		and						
		(
			(1,1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(1,1)~eme > ((0,0)~ua_cota) and			
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (1,1)~pro or ( (1,0)~pro 	> (1,1)~pro	and (1,0)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro 	<= (1,1)~pro or ( (1,-1)~pro 	> (1,1)~pro	and (1,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (1,1)~pro or ( (0,-1)~pro 	> (1,1)~pro	and (0,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,1)~pro or ( (-1,-1)~pro 	> (1,1)~pro	and (-1,-1)~eme < (0,0)~ua_cota)) and
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (1,1)~pro or ( (-1,0)~pro   	> (1,1)~pro	and (-1,0)~eme  < (0,0)~ua_cota)) and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro 	<= (1,1)~pro or ( (-1,1)~pro	> (1,1)~pro and (-1,1)~eme 	< (0,0)~ua_cota)) and  
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,1)~pro or ( (0,1)~pro 	> (1,1)~pro and (0,1) ~eme 	< (0,0)~ua_cota))
			and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (1,1)~eme or ((1,0)~eme 	 > (1,1)~eme  and   (1,1)~pro > (1,0)~pro   )) and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme 	<= (1,1)~eme or ((1,-1)~eme  > (1,1)~eme  and   (1,1)~pro > (1,-1)~pro  )) and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (1,1)~eme or ((0,-1)~eme  > (1,1)~eme  and   (1,1)~pro > (0,-1)~pro  )) and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,1)~eme or ((-1,-1)~eme > (1,1)~eme  and   (1,1)~pro > (-1,-1)~pro )) and
			(isUndefined((-1,0)~eme) or  (-1,0)~eme 	<= (1,1)~eme or ((-1,0)~eme  > (1,1)~eme  and   (1,1)~pro > (-1,0)~pro  )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme 	<= (1,1)~eme or ((-1,1)~eme  > (1,1)~eme  and   (1,1)~pro > (-1,1)~pro  )) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,1)~eme or ((0,1)~eme   >  (1,1)~eme and   (1,1)~pro > (0,1)~pro   ))		
			
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.35 ;
	}
	{
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (1,0)~lu1;
		$cae_lu2 		:= (1,0)~lu2;
		$cae_lu3	 	:= (1,0)~lu3;
		$cae_ue_cota 	:= (1,0)~ue_cota;
		$cae_mgm 		:= (1,0)~mgm;			
		
		$c_camp_fullfil_economic_beh 					:= (1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (1,0)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (1,0)~plu_adj ;
		$cae_wlu_adj									:= (1,0)~wlu_adj ;
		$cae_wlu_adj_cro								:= (1,0)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (1,0)~ptl_adj ;
		$cae_wtl_adj									:= (1,0)~wtl_adj ;	
		$c_cont_failed_campaign							:= (1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (1,0)~cont_succesfull_campaign ;			
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and				
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,0)~pro))	 		and
		(not isUndefined((1,0)~eme))	 		and		
		
		(
			(1,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and	
			(1,0)~eme > ((0,0)~ua_cota) and			
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (1,0)~pro or ( (1,-1)~pro 	> (1,0)~pro	and (1,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (1,0)~pro or ( (0,-1)~pro 	> (1,0)~pro	and (0,-1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,0)~pro or ( (-1,-1)~pro 	> (1,0)~pro	and (-1,-1)~eme < (0,0)~ua_cota)) and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (1,0)~pro or ( (-1,0)~pro   	> (1,0)~pro	and (-1,0)~eme  < (0,0)~ua_cota)) and  
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (1,0)~pro or ( (-1,1)~pro	> (1,0)~pro and (-1,1)~eme 	< (0,0)~ua_cota)) and
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,0)~pro or ( (0,1)~pro 	> (1,0)~pro and (0,1) ~eme 	< (0,0)~ua_cota)) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (1,0)~pro or ( (1,1)~pro 	> (1,0)~pro and (1,1) ~eme 	< (0,0)~ua_cota))	
			and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (1,0)~eme or ((1,-1)~eme 	> (1,0)~eme  and   (1,0)~pro > 	(1,-1)~pro )) and	
			(isUndefined((0,-1)~eme) or  (0,-1)~eme		<= (1,0)~eme or ((0,-1)~eme 	> (1,0)~eme  and   (1,0)~pro > 	(0,-1)~pro )) and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,0)~eme or ((-1,-1)~eme > (1,0)~eme  and   (1,0)~pro > 	(-1,-1)~pro )) and 
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (1,0)~eme or ((-1,0)~eme  > (1,0)~eme  and   (1,0)~pro > 	(-1,0)~pro )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (1,0)~eme or ((-1,1)~eme  > (1,0)~eme  and   (1,0)~pro > 	(-1,1)~pro )) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,0)~eme or ((0,1)~eme  >  (1,0)~eme  and   (1,0)~pro > 	(0,1)~pro )) and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (1,0)~eme or ((1,1)~eme   > (1,0)~eme  and   (1,0)~pro > 	(1,1)~pro ))			
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.36 ;
	}
	{	
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (1,-1)~lu1;
		$cae_lu2 		:= (1,-1)~lu2;
		$cae_lu3	 	:= (1,-1)~lu3;
		$cae_ue_cota 	:= (1,-1)~ue_cota;
		$cae_mgm 		:= (1,-1)~mgm;			
		
		$c_camp_fullfil_economic_beh 					:= (1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (1,-1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (1,-1)~plu_adj ;
		$cae_wlu_adj									:= (1,-1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (1,-1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (1,-1)~ptl_adj ;
		$cae_wtl_adj									:= (1,-1)~wtl_adj ;	
		$c_cont_failed_campaign							:= (1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (1,-1)~cont_succesfull_campaign ;			
				
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and				
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,-1)~pro))	 		and
		(not isUndefined((1,-1)~eme))	 		and		
		
		(
			(1,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and	
			(1,-1)~eme > ((0,0)~ua_cota) and			
			(isUndefined((0,-1)~pro) or  (0,-1)~pro 	<= (1,-1)~pro or ( (0,-1)~pro 	> (1,-1)~pro and  (0,-1)~eme  < (0,0)~ua_cota)) and
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (1,-1)~pro or ( (-1,-1)~pro 	> (1,-1)~pro and  (-1,-1)~eme < (0,0)~ua_cota)) and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro 	<= (1,-1)~pro or ( (-1,0)~pro   > (1,-1)~pro and (-1,0)~eme   < (0,0)~ua_cota)) and
			(isUndefined((-1,1)~pro) or  (-1,1)~pro 	<= (1,-1)~pro or ( (-1,1)~pro	> (1,-1)~pro and (-1,1)~eme   < (0,0)~ua_cota)) and 
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (1,-1)~pro or ( (0,1)~pro 	> (1,-1)~pro and (0,1) ~eme   < (0,0)~ua_cota)) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (1,-1)~pro or ( (1,1)~pro 	> (1,-1)~pro and (1,1) ~eme   < (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (1,-1)~pro or ( (1,0)~pro  	> (1,-1)~pro and (1,0) ~eme   < (0,0)~ua_cota))
			and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (1,-1)~eme or ((0,-1)~eme > (1,-1)~eme   and  (1,-1)~pro > 	(0,-1)~pro  )) and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,-1)~eme or ((-1,-1)~eme > (1,-1)~eme  and  (1,-1)~pro > 	(-1,-1)~pro )) and 
			(isUndefined((-1,0)~eme) or  (-1,0)~eme 	<= (1,-1)~eme or ((-1,0)~eme  > (1,-1)~eme  and  (1,-1)~pro > 	(-1,0)~pro  )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme 	<= (1,-1)~eme or ((-1,1)~eme  > (1,-1)~eme  and  (1,-1)~pro > 	(-1,1)~pro  )) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,-1)~eme or ((0,1)~eme  >  (1,-1)~eme  and  (1,-1)~pro > 	(0,1)~pro   )) and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (1,-1)~eme or ((1,1)~eme   > (1,-1)~eme  and  (1,-1)~pro > 	(1,1)~pro   )) and 
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (1,-1)~eme or ((1,0)~eme   > (1,-1)~eme  and  (1,-1)~pro > 	(1,0)~pro   ))				
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.37 ;
	}
	{		
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (0,-1)~lu1;
		$cae_lu2 		:= (0,-1)~lu2;
		$cae_lu3	 	:= (0,-1)~lu3;
		$cae_ue_cota 	:= (0,-1)~ue_cota;
		$cae_mgm 		:= (0,-1)~mgm;		
		
		$c_camp_fullfil_economic_beh 					:= (0,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (0,-1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (0,-1)~plu_adj ;
		$cae_wlu_adj									:= (0,-1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (0,-1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (0,-1)~ptl_adj ;
		$cae_wtl_adj									:= (0,-1)~wtl_adj ;		
		$c_cont_failed_campaign							:= (0,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (0,-1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((0,-1)~pro))	 		and
		(not isUndefined((0,-1)~eme))	 		and				
		(
			(0,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(0,-1)~eme > ((0,0)~ua_cota) and			
			(isUndefined((-1,-1)~pro) or  (-1,-1)~pro 	<= (0,-1)~pro or ( (-1,-1)~pro 	> (0,-1)~pro and (-1,-1)~eme < (0,0)~ua_cota)) and	
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (0,-1)~pro or ( (-1,0)~pro   > (0,-1)~pro and (-1,0)~eme  < (0,0)~ua_cota)) and 
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (0,-1)~pro or ( (-1,1)~pro	> (0,-1)~pro and (-1,1)~eme  < (0,0)~ua_cota)) and  
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (0,-1)~pro or ( (0,1)~pro 	> (0,-1)~pro and (0,1) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (0,-1)~pro or ( (1,1)~pro 	> (0,-1)~pro and (1,1) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (0,-1)~pro or ( (1,0)~pro  	> (0,-1)~pro and (1,0) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (0,-1)~pro or ( (1,-1)~pro	> (0,-1)~pro and (1,-1) ~eme < (0,0)~ua_cota))
			and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (0,-1)~eme or ((-1,-1)~eme > (0,-1)~eme  and  (0,-1)~pro > (-1,-1)~pro )) and 
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (0,-1)~eme or ((-1,0)~eme  > (0,-1)~eme  and  (0,-1)~pro > (-1,0)~pro  )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (0,-1)~eme or ((-1,1)~eme  > (0,-1)~eme  and  (0,-1)~pro > (-1,1)~pro  )) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (0,-1)~eme or ((0,1)~eme   > (0,-1)~eme  and  (0,-1)~pro > (0,1)~pro   )) and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (0,-1)~eme or ((1,1)~eme   > (0,-1)~eme  and  (0,-1)~pro > (1,1)~pro   )) and 
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (0,-1)~eme or ((1,0)~eme   > (0,-1)~eme  and  (0,-1)~pro > (1,0)~pro   )) and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (0,-1)~eme or ((1,-1)~eme  > (0,-1)~eme  and  (0,-1)~pro > (1,-1)~pro  )) 		
		)
	}

rule: { 

		%#macro(SetEtapaCampFallidaCopiaEcYAmb)
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.38 ;
	}
	{
		$copia_ae 		:= 1;
		$cae_aju 		:= 3;
		$cae_lu1	 	:= (-1,-1)~lu1;
		$cae_lu2 		:= (-1,-1)~lu2;
		$cae_lu3	 	:= (-1,-1)~lu3;
		$cae_ue_cota 	:= (-1,-1)~ue_cota;
		$cae_mgm 		:= (-1,-1)~mgm;	
		
		$c_camp_fullfil_economic_beh 					:= (-1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh				:= (-1,-1)~camp_fullfil_enviromental_beh ;
		$cae_plu_adj 									:= (-1,-1)~plu_adj ;
		$cae_wlu_adj									:= (-1,-1)~wlu_adj ;
		$cae_wlu_adj_cro								:= (-1,-1)~wlu_adj_cro ;
		$cae_ptl_adj 									:= (-1,-1)~ptl_adj ;
		$cae_wtl_adj									:= (-1,-1)~wtl_adj ;	
		$c_cont_failed_campaign							:= (-1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign						:= (-1,-1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		((0,0)~camp_fullfil_enviromental_beh = 1)   and				
		(0,0)#macro(umbralesCalculados) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,-1)~pro))	 		and
		(not isUndefined((-1,-1)~eme))	 		and			
				
		(
			(-1,-1)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
			(-1,-1)~eme > ((0,0)~ua_cota) and			
			(isUndefined((-1,0)~pro) or  (-1,0)~pro		<= (-1,-1)~pro or ( (-1,0)~pro > (-1,-1)~pro and (-1,0)~eme  < (0,0)~ua_cota)) and     
			(isUndefined((-1,1)~pro) or  (-1,1)~pro		<= (-1,-1)~pro or ( (-1,1)~pro > (-1,-1)~pro and (-1,1)~eme  < (0,0)~ua_cota)) and  
			(isUndefined((0,1)~pro) or  (0,1)~pro 		<= (-1,-1)~pro or ( (0,1)~pro  > (-1,-1)~pro and (0,1) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,1)~pro) or  (1,1)~pro 		<= (-1,-1)~pro or ( (1,1)~pro  > (-1,-1)~pro and (1,1) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,0)~pro) or  (1,0)~pro 		<= (-1,-1)~pro or ( (1,0)~pro  > (-1,-1)~pro and (1,0) ~eme  < (0,0)~ua_cota)) and
			(isUndefined((1,-1)~pro) or  (1,-1)~pro		<= (-1,-1)~pro or ( (1,-1)~pro > (-1,-1)~pro and (1,-1) ~eme < (0,0)~ua_cota)) and	
			(isUndefined((0,-1)~pro) or  (0,-1)~pro		<= (-1,-1)~pro or ( (0,-1)~pro > (-1,-1)~pro and (0,-1) ~eme < (0,0)~ua_cota))
			and
			(isUndefined((-1,0)~eme) or  (-1,0)~eme	<= (-1,-1)~eme or ((-1,0)~eme  > (0,-1)~eme  and  (0,-1)~pro > 	(-1,0)~pro )) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme	<= (-1,-1)~eme or ((-1,1)~eme  > (0,-1)~eme  and  (0,-1)~pro > 	(-1,1)~pro )) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 	<= (-1,-1)~eme or ((0,1)~eme   > (0,-1)~eme  and  (0,-1)~pro > 	(0,1)~pro )) and
			(isUndefined((1,1)~eme) or  (1,1)~eme 	<= (-1,-1)~eme or ((1,1)~eme   > (0,-1)~eme  and  (0,-1)~pro > 	(1,1)~pro )) and 
			(isUndefined((1,0)~eme) or  (1,0)~eme 	<= (-1,-1)~eme or ((1,0)~eme   > (0,-1)~eme  and  (0,-1)~pro > 	(1,0)~pro )) and 
			(isUndefined((1,-1)~eme) or  (1,-1)~eme	<= (-1,-1)~eme or ((1,-1)~eme  > (-1,-1)~eme  and  (-1,-1)~pro > (1,-1)~pro )) and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme	<= (-1,-1)~eme or ((0,-1)~eme  > (-1,-1)~eme  and  (-1,-1)~pro > (0,-1)~pro))							
		)
	}
	

% Ningun vecino cumple la condicion de mejor economico y ambiental
rule: { 

		% Este no suma contadores fallidos, ya que sigue evaluando.

		#macro(SetEtapaCampFallidaCopiaEcYAmb)
		%#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.39 ;
		%~flag_cae := (1,-1)~etapa;
		%~flag_cae := (1,-1)~eme	;
	}
	{
		$copia_ae 		:= 0;
		$cae_aju 		:= 2;
	}
		0
	{ 
		%((0,0)~camp_fullfil_economic_beh = 1)   and
		%((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(umbralesCalculados)		and
		#macro(vecinosParametrosCalculados) 	
	}	

	
%---------------------

% 2 - Control UE cumplido, cuando fallo la copia economica y ambiental
% - Si da ue ok, no hace copia economica.
rule: { 
		~ueo := (0,0)~ueo + 1;
		
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 4.10 ;
		%~flag_cae := 4.10 ;
	}
	 0
	{ 
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
		(0,0)~pro > ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente))) and
		((0,0)~camp_fullfil_economic_beh = 1)     
	}	



%-------------------------	
	
	

% Copia vecinos solo en lo economico.
	
% 3 - Control UE No cumplido
% Prepara cmgmio %LU
% Prepara adaptacion UE al contexto
rule: { 
		~uee 		:= (0,0)~uee + 1;	
		
		#macro(actualizaCantidadUADegrada)
		#macro(SetEtapaUEErrorEsperaVecinos)
		%#macro(SetEtapaCampFallidaCopiaEc)		
		~flag_paso := 4.11 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,0)~lu1;
		$clu2 		:= (-1,0)~lu2;
		$clu3	 	:= (-1,0)~lu3;
		$cue_cota 	:= (-1,0)~ue_cota;
		$cmgm 		:= (-1,0)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (-1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,0)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (-1,0)~plu_adj ;
		$c_wlu_adj									:= (-1,0)~wlu_adj ;
		$c_wlu_adj_cro								:= (-1,0)~wlu_adj_cro ;
		$c_ptl_adj 									:= (-1,0)~ptl_adj ;
		$c_wtl_adj									:= (-1,0)~wtl_adj ;				
		$c_cont_failed_campaign						:= (-1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,0)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.12 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,1)~lu1;
		$clu2 		:= (-1,1)~lu2;
		$clu3	 	:= (-1,1)~lu3;
		$cue_cota 	:= (-1,1)~ue_cota;
		$cmgm 		:= (-1,1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (-1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (-1,1)~plu_adj ;
		$c_wlu_adj									:= (-1,1)~wlu_adj ;
		$c_wlu_adj_cro								:= (-1,1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (-1,1)~ptl_adj ;
		$c_wtl_adj									:= (-1,1)~wtl_adj ;	
		$c_cont_failed_campaign						:= (-1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,1)~cont_succesfull_campaign ;			
		
		
	}
		0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.13 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (0,1)~lu1;
		$clu2 		:= (0,1)~lu2;
		$clu3	 	:= (0,1)~lu3;
		$cue_cota 	:= (0,1)~ue_cota;
		$cmgm 		:= (0,1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (0,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (0,1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (0,1)~plu_adj ;
		$c_wlu_adj									:= (0,1)~wlu_adj ;
		$c_wlu_adj_cro								:= (0,1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (0,1)~ptl_adj ;
		$c_wtl_adj									:= (0,1)~wtl_adj ;						
		$c_cont_failed_campaign						:= (0,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (0,1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb)	 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.14 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,1)~lu1;
		$clu2 		:= (1,1)~lu2;
		$clu3	 	:= (1,1)~lu3;
		$cue_cota 	:= (1,1)~ue_cota;
		$cmgm 		:= (1,1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (1,1)~plu_adj ;
		$c_wlu_adj									:= (1,1)~wlu_adj ;
		$c_wlu_adj_cro								:= (1,1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (1,1)~ptl_adj ;
		$c_wtl_adj									:= (1,1)~wtl_adj ;	
		$c_cont_failed_campaign						:= (1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,1)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.15 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,0)~lu1;
		$clu2 		:= (1,0)~lu2;
		$clu3	 	:= (1,0)~lu3;
		$cue_cota 	:= (1,0)~ue_cota;
		$cmgm 		:= (1,0)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,0)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (1,0)~plu_adj ;
		$c_wlu_adj									:= (1,0)~wlu_adj ;
		$c_wlu_adj_cro								:= (1,0)~wlu_adj_cro ;
		$c_ptl_adj 									:= (1,0)~ptl_adj ;
		$c_wtl_adj									:= (1,0)~wtl_adj ;		
		$c_cont_failed_campaign						:= (1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,0)~cont_succesfull_campaign ;				
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.16 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (1,-1)~lu1;
		$clu2 		:= (1,-1)~lu2;
		$clu3	 	:= (1,-1)~lu3;
		$cue_cota 	:= (1,-1)~ue_cota;
		$cmgm 		:= (1,-1)~mgm;

		$c_camp_fullfil_economic_beh 				:= (1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,-1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (1,-1)~plu_adj ;
		$c_wlu_adj									:= (1,-1)~wlu_adj ;
		$c_wlu_adj_cro								:= (1,-1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (1,-1)~ptl_adj ;
		$c_wtl_adj									:= (1,-1)~wtl_adj ;		
		$c_cont_failed_campaign						:= (1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,-1)~cont_succesfull_campaign ;				
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)	
		~flag_paso := 4.17 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (0,-1)~lu1;
		$clu2 		:= (0,-1)~lu2;
		$clu3	 	:= (0,-1)~lu3;
		$cue_cota 	:= (0,-1)~ue_cota;
		$cmgm 		:= (0,-1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (0,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (0,-1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (0,-1)~plu_adj ;
		$c_wlu_adj									:= (0,-1)~wlu_adj ;
		$c_wlu_adj_cro								:= (0,-1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (0,-1)~ptl_adj ;
		$c_wtl_adj									:= (0,-1)~wtl_adj ;		
		$c_cont_failed_campaign						:= (0,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (0,-1)~cont_succesfull_campaign ;				
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and	
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		%#macro(SetEtapaCampFallidaCopiaEc)			
		~flag_paso := 4.18 ;
	}
	{
		$clu 		:= 1;
		$aju 		:= 3;
		$clu1	 	:= (-1,-1)~lu1;
		$clu2 		:= (-1,-1)~lu2;
		$clu3	 	:= (-1,-1)~lu3;
		$cue_cota 	:= (-1,-1)~ue_cota;
		$cmgm 		:= (-1,-1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (-1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,-1)~camp_fullfil_enviromental_beh ;
		$c_plu_adj 									:= (-1,-1)~plu_adj ;
		$c_wlu_adj									:= (-1,-1)~wlu_adj ;
		$c_wlu_adj_cro								:= (-1,-1)~wlu_adj_cro ;
		$c_ptl_adj 									:= (-1,-1)~ptl_adj ;
		$c_wtl_adj									:= (-1,-1)~wtl_adj ;
		$c_cont_failed_campaign						:= (-1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,-1)~cont_succesfull_campaign ;	
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_economic_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEcYAmb) 	and
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
		~uee 						:= (0,0)~uee + 1;		
		
		
		% si ningun vecino cumple a condicion economica y sigo comparando.
		#macro(actualizaCantidadUADegrada)
		%#macro(SetEtapaUEErrorEsperaVecinos)
		#macro(SetEtapaCampFallidaCopiaEc)	
		~flag_paso := 4.19 ;
	}
	{
		$clu 		:= 0;
		$aju 		:= 2;
	}
		0
	{ 
		%((0,0)~camp_fullfil_economic_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEcYAmb)		and
		#macro(vecinosParametrosCalculados) 	
	}

%------------------------------------------------------------------		

% 2a - Control UA cumplida, cuando fallo la copia economica
% - Si da ua ok, no hace copia ambiental.
rule: { 

		%~ueo := (0,0)~ueo + 1;
		#macro(SetEtapaUEOkEsperaVecinos)
		~flag_paso := 4.20 ;
	}
	 0
	{ 
		(0,0)#macro(umbralesCalculados) 		and
		(0,0)~eme >  ((0,0)~ua_cota)  			and
		((0,0)~camp_fullfil_enviromental_beh = 1)   			
	}	

%---------------------



% 4.2 - Copia vecinos solo ambiental	

% Nota: Queda todo con copia de nivel tecnologico (mgm) en cmgm en vez de ca_mgm
% ver despues cual es el modo correcto de hacer la copia en estos casos.

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.21 ;
	}
	{
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (-1,0)~lu1;
		$ca_lu2 		:= (-1,0)~lu2;
		$ca_lu3	 		:= (-1,0)~lu3;
		$ca_ue_cota 	:= (-1,0)~ue_cota;
		$cmgm 			:= (-1,0)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (-1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,0)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (-1,0)~plu_adj ;
		$ca_wlu_adj									:= (-1,0)~wlu_adj ;
		$ca_wlu_adj_cro								:= (-1,0)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (-1,0)~ptl_adj ;
		$ca_wtl_adj									:= (-1,0)~wtl_adj ;			
		$c_cont_failed_campaign						:= (-1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,0)~cont_succesfull_campaign ;			
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_enviromental_beh = 1)   and	
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,0)~eme))	 		and
		(
			(-1,0)~eme > ((0,0)~ua_cota) and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (-1,0)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (-1,0)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (-1,0)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (-1,0)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme 	<= (-1,0)~eme)	and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (-1,0)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (-1,0)~eme)	
					
		)
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.22 ;
	}
	{
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (-1,1)~lu1;
		$ca_lu2 		:= (-1,1)~lu2;
		$ca_lu3	 		:= (-1,1)~lu3;
		$ca_ue_cota 	:= (-1,1)~ue_cota;
		$cmgm	 		:= (-1,1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (-1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (-1,1)~plu_adj ;
		$ca_wlu_adj									:= (-1,1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (-1,1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (-1,1)~ptl_adj ;
		$ca_wtl_adj									:= (-1,1)~wtl_adj ;		
		$c_cont_failed_campaign						:= (-1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,1)~cont_succesfull_campaign ;			
		
	}
		0
	{ 		
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,1)~eme))	 		and		
		(
			(-1,1)~eme > ((0,0)~ua_cota) and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (-1,1)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (-1,1)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (-1,1)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme 	<= (-1,1)~eme)	and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (-1,1)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (-1,1)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme 	<= (-1,1)~eme)			
		)									
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.23 ;
	}
	{	
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (0,1)~lu1;
		$ca_lu2 		:= (0,1)~lu2;
		$ca_lu3	 		:= (0,1)~lu3;
		$ca_ue_cota 	:= (0,1)~ue_cota;
		$cmgm	 		:= (0,1)~mgm;
		
		$c_camp_fullfil_economic_beh 				:= (0,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (0,1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (0,1)~plu_adj ;
		$ca_wlu_adj									:= (0,1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (0,1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (0,1)~ptl_adj ;
		$ca_wtl_adj									:= (0,1)~wtl_adj ;	
		$c_cont_failed_campaign						:= (0,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (0,1)~cont_succesfull_campaign ;		
		
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_enviromental_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((0,1)~eme))	 		and		
		
		(
			(0,1)~eme > ((0,0)~ua_cota) and	
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (0,1)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (0,1)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (0,1)~eme)	and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme		<= (0,1)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (0,1)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (0,1)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (0,1)~eme)						
		)
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.24 ;
	}
	{
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (1,1)~lu1;
		$ca_lu2 		:= (1,1)~lu2;
		$ca_lu3	 		:= (1,1)~lu3;
		$ca_ue_cota 	:= (1,1)~ue_cota;
		$cmgm	 		:= (1,1)~mgm;		
		
		$c_camp_fullfil_economic_beh 				:= (1,1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (1,1)~plu_adj ;
		$ca_wlu_adj									:= (1,1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (1,1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (1,1)~ptl_adj ;
		$ca_wtl_adj									:= (1,1)~wtl_adj ;	
		$c_cont_failed_campaign						:= (1,1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,1)~cont_succesfull_campaign ;		
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_enviromental_beh = 1)   and	
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,1)~eme))	 		and						
		(
			(1,1)~eme > ((0,0)~ua_cota) and		
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (1,1)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme 	<= (1,1)~eme)	and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (1,1)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,1)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme 	<= (1,1)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme 	<= (1,1)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,1)~eme)						
		)
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.25 ;
	}
	{
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (1,0)~lu1;
		$ca_lu2 		:= (1,0)~lu2;
		$ca_lu3	 		:= (1,0)~lu3;
		$ca_ue_cota 	:= (1,0)~ue_cota;
		$cmgm	 		:= (1,0)~mgm;		

		$c_camp_fullfil_economic_beh 				:= (1,0)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,0)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (1,0)~plu_adj ;
		$ca_wlu_adj									:= (1,0)~wlu_adj ;
		$ca_wlu_adj_cro								:= (1,0)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (1,0)~ptl_adj ;
		$ca_wtl_adj									:= (1,0)~wtl_adj ;	
		$c_cont_failed_campaign						:= (1,0)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,0)~cont_succesfull_campaign ;		
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,0)~eme))	 		and				
		(
			(1,0)~eme > ((0,0)~ua_cota) and		
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (1,0)~eme)	and
			(isUndefined((0,-1)~eme) or  (0,-1)~eme		<= (1,0)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,0)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (1,0)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (1,0)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,0)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (1,0)~eme)						
		)
	}

rule: { 

		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.26 ;
	}
	{	
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (1,-1)~lu1;
		$ca_lu2 		:= (1,-1)~lu2;
		$ca_lu3	 		:= (1,-1)~lu3;
		$ca_ue_cota 	:= (1,-1)~ue_cota;
		$cmgm	 		:= (1,-1)~mgm;			
		
		$c_camp_fullfil_economic_beh 				:= (1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (1,-1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (1,-1)~plu_adj ;
		$ca_wlu_adj									:= (1,-1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (1,-1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (1,-1)~ptl_adj ;
		$ca_wtl_adj									:= (1,-1)~wtl_adj ;			
		$c_cont_failed_campaign						:= (1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (1,-1)~cont_succesfull_campaign ;		
		
	}
	 0
	{ 

		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((1,-1)~eme))	 		and				
		(
			(1,-1)~eme > ((0,0)~ua_cota) and	
			(isUndefined((0,-1)~eme) or  (0,-1)~eme 	<= (1,-1)~eme)	and
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (1,-1)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme 	<= (1,-1)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme 	<= (1,-1)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (1,-1)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (1,-1)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (1,-1)~eme)			
		)
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.27 ;
	}
	{		
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1	 		:= (0,-1)~lu1;
		$ca_lu2 		:= (0,-1)~lu2;
		$ca_lu3	 		:= (0,-1)~lu3;
		$ca_ue_cota 	:= (0,-1)~ue_cota;
		$cmgm	 		:= (0,-1)~mgm;		
		
		$c_camp_fullfil_economic_beh 				:= (0,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (0,-1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (0,-1)~plu_adj ;
		$ca_wlu_adj									:= (0,-1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (0,-1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (0,-1)~ptl_adj ;
		$ca_wtl_adj									:= (0,-1)~wtl_adj ;		
		$c_cont_failed_campaign						:= (0,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (0,-1)~cont_succesfull_campaign ;		
		
	}
	 0
	{ 

		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((0,-1)~eme))	 		and				
		(
			(0,-1)~eme > ((0,0)~ua_cota) and	
			(isUndefined((-1,-1)~eme) or  (-1,-1)~eme 	<= (0,-1)~eme)	and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (0,-1)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (0,-1)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (0,-1)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (0,-1)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (0,-1)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (0,-1)~eme)				
		)
	}

rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.28 ;
	}
	{
		$copia_a 		:= 1;
		$ca_aju 		:= 3;
		$ca_lu1		 	:= (-1,-1)~lu1;
		$ca_lu2 		:= (-1,-1)~lu2;
		$ca_lu3	 		:= (-1,-1)~lu3;
		$ca_ue_cota 	:= (-1,-1)~ue_cota;
		$cmgm	 		:= (-1,-1)~mgm;	
		
		$c_camp_fullfil_economic_beh 				:= (-1,-1)~camp_fullfil_economic_beh ;
		$c_camp_fullfil_enviromental_beh			:= (-1,-1)~camp_fullfil_enviromental_beh ;
		$ca_plu_adj 								:= (-1,-1)~plu_adj ;
		$ca_wlu_adj									:= (-1,-1)~wlu_adj ;
		$ca_wlu_adj_cro								:= (-1,-1)~wlu_adj_cro ;
		$ca_ptl_adj 								:= (-1,-1)~ptl_adj ;
		$ca_wtl_adj									:= (-1,-1)~wtl_adj ;	
		$c_cont_failed_campaign						:= (-1,-1)~cont_failed_campaign	 ;	
		$c_cont_succesfull_campaign					:= (-1,-1)~cont_succesfull_campaign ;		
		
	}
	 0
	{ 
		((0,0)~camp_fullfil_enviromental_beh = 1)   and		
		(0,0)#macro(CampFallidaCopiaEc) 		and
		(#macro(vecinosParametrosCalculados)) 	and
		(not isUndefined((-1,-1)~eme))	 		and						
		(
			(-1,-1)~eme > ((0,0)~ua_cota) and	
			(isUndefined((-1,0)~eme) or  (-1,0)~eme		<= (-1,-1)~eme)	and
			(isUndefined((-1,1)~eme) or  (-1,1)~eme		<= (-1,-1)~eme)	and
			(isUndefined((0,1)~eme) or  (0,1)~eme 		<= (-1,-1)~eme)	and
			(isUndefined((1,1)~eme) or  (1,1)~eme 		<= (-1,-1)~eme)	and
			(isUndefined((1,0)~eme) or  (1,0)~eme 		<= (-1,-1)~eme)	and
			(isUndefined((1,-1)~eme) or  (1,-1)~eme		<= (-1,-1)~eme)	and	
			(isUndefined((0,-1)~eme) or  (0,-1)~eme		<= (-1,-1)~eme)				
		)
	}
	

% Ningun vecino cumple la condicion de mejor ambiental
rule: { 
		#macro(SetEtapaUEErrorEsperaVecinos)
		~flag_paso := 4.29 ;
	}
	{
		$copia_a 		:= 0;
		$ca_aju 		:= 2;
	}
		0
	{ 
		%((0,0)~camp_fullfil_enviromental_beh = 1)   and
		(0,0)#macro(CampFallidaCopiaEc)		and
		#macro(vecinosParametrosCalculados) 	
	}		

	
	
%------------------------------------------------------------------		
	
	
	
	
	
	
% Pasa de etapa cuando todos controlaron UE
rule: { 
		#macro(SetEtapaUECumplida)
		%~flag_paso := 5.1 ;	
	}
	 0
	{ 
		(0,0)#macro(UEOkEsperaVecinos) 		and
		#macro(vecinosUeControlado) 	
	}	

%sacar. regla temporal
%rule: { 
%		~flag_paso := 5.2 ;	
		%~flag_value := (-1,0)~etapa+(-1,1)~etapa+(0,1)~etapa+(1,1)~etapa +  (1,0)~etapa + (1,-1)~etapa +  (0,-1)~etapa + (-1,-1)~etapa ;
%	}
%	 0
%	{ 
%		(0,0)#macro(UEOkEsperaVecinos) 	
%	}		
	
	
rule: { 
		#macro(SetEtapaProcesamiento)
		%~flag_paso := 6.1 ;
	}
	 0
	{ 
		(0,0)#macro(UEErrorEsperaVecinos) 		and
		#macro(vecinosUeControlado) 	
	}	
	
% 3 - Control UA cumplido
% Prepara adaptacion UE al resultado
rule: { 

		% contadores campañas sucesivas exitosas o fallidas.
		% no hace falta en este step ya se hizo en el momento de la copia

		~uao 		:=  (0,0)~uao + 1;
		#macro(SetEtapaProcesamiento)
		%~flag_paso := 6.2 ;
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


		% contadores campañas sucesivas exitosas o fallidas.
		% no hace falta en este step ya se hizo en el momento de la copia

		~deg 		:=  (((0,0)~eme - (0,0)~ua_cota) / (0,0)~ua_cota) * 100;
		~uae 		:=  (0,0)~uae + 1;		
		#macro(SetEtapaProcesamiento)
		%~flag_paso := 6.3 ;
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
		 %~flag_cae := #macro(hay_MGM_adaptativo)+100 ;
		 ~flag_cae := $aju ;	 
		#macro(SetEtapaAprendizaje)
		%~flag_paso := 7.1 ;
	}
	 0
	{ 
		(0,0)#macro(Procesamiento) 		and
		#macro(vecinosProcesamiento) 	and $clu = 1
	}	

%Copia ambiental y economica
rule: { 
		~lu1 		:= 	if ($copia_ae = 1, $cae_lu1, (0,0)~lu1);
		%~lu1 		:= 	150;
		~lu2 		:= 	if ($copia_ae = 1, $cae_lu2, (0,0)~lu2);
		~lu3 		:= 	if ($copia_ae = 1, $cae_lu3, (0,0)~lu3);
		%Corregir ajuste de cota
		%~ue_cota	:= 	if ($cae_aju  = 0, (0,0)~ue_cota, 0) +
		%				if ($cae_aju  = 3, 
		%					if (((0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro)) > 0, (0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro), 0), 
		%					0) ;
							
		~ue_cota	:= 	if ($cae_aju = 0, (0,0)~ue_cota, 0) +
						if ($cae_aju = 1, 
							if (((0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro)) > 0, (0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro), 0), 
							0) +
						if ($cae_aju = 2, 
							if (((0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro)) > 0, (0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro), 0), 
							0) +
						if ($cae_aju = 3, 
							if ((($cae_ue_cota  + ($cae_ue_cota  * #macro(ajuste_ambiente))) + 
								(
									($cae_ue_cota  + ($cae_ue_cota  * #macro(ajuste_ambiente))) * 
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
								($cae_ue_cota  + ($cae_ue_cota  * #macro(ajuste_ambiente))) + 
								(
									($cae_ue_cota  + ($cae_ue_cota  * #macro(ajuste_ambiente))) * 
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
						
		%~flag_cae := #macro(hay_MGM_adaptativo) +200 ;	
		~flag_cae := $cae_aju ;		
		#macro(SetEtapaAprendizaje)
		%~flag_paso := 7.2 ;
		%~flag_value := (0,0)~lu1;
	}
	 0
	{ 
		(0,0)#macro(Procesamiento) 		and
		#macro(vecinosProcesamiento) 	and $copia_ae = 1
	}
	
	
	
%Copia ambiental 
rule: { 
		~lu1 		:= 	if ($copia_a = 1, $ca_lu1, (0,0)~lu1);
		~lu2 		:= 	if ($copia_a = 1, $ca_lu2, (0,0)~lu2);
		~lu3 		:= 	if ($copia_a = 1, $ca_lu3, (0,0)~lu3);
		%Corregir ajuste de cota
		%~ue_cota	:= 	if ($ca_aju  = 0, (0,0)~ue_cota, 0) +
		%				if ($ca_aju  = 3, 
		%					if (((0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro)) > 0, (0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro), 0), 
		%					0) ;
							
		~ue_cota	:= 	if ($ca_aju = 0, (0,0)~ue_cota, 0) +
						if ($ca_aju = 1, 
							if (((0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro)) > 0, (0.45 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.55 * (0,0)~pro), 0), 
							0) +
						if ($ca_aju = 2, 
							if (((0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro)) > 0, (0.55 * ((0,0)~ue_cota + ((0,0)~ue_cota * #macro(ajuste_ambiente)))) + (0.45 * (0,0)~pro), 0), 
							0) +
						if ($ca_aju = 3, 
							if ((($ca_ue_cota  + ($ca_ue_cota  * #macro(ajuste_ambiente))) + 
								(
									($ca_ue_cota  + ($ca_ue_cota  * #macro(ajuste_ambiente))) * 
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
								($ca_ue_cota  + ($ca_ue_cota  * #macro(ajuste_ambiente))) + 
								(
									($ca_ue_cota  + ($ca_ue_cota  * #macro(ajuste_ambiente))) * 
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
							
							
							
		%~mgm 		:= 	$ca_mgm ;
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
		
		
		
		%~flag_cae := #macro(hay_MGM_adaptativo) +300;
		%~flag_cae := $ca_aju ;	
		%~flag_cae :=	if (#macro(hay_MGM_adaptativo) = 1, 
		%									if ((0,0)~pro > #macro(wc_maximo_mgm_3), 
		%										#macro(ajuste_entorno_mgm_3), 
		%										if ((0,0)~pro > #macro(wc_maximo_mgm_2), 
		%											#macro(ajuste_entorno_mgm_2), 
		%											#macro(ajuste_entorno_mgm_1)
		%										)
		%									),
		%									#macro(ajuste_entorno)
		%								);	
										
		%~flag_cae :=	($ca_ue_cota  + ($ca_ue_cota  * #macro(ajuste_ambiente)));
		
		
		#macro(SetEtapaAprendizaje)
		~flag_paso := 7.3 ;
		%~flag_value := (0,0)~lu1;
	}
	 0
	{ 
		(0,0)#macro(Procesamiento) 		and
		#macro(vecinosProcesamiento) 	and $copia_a = 1
	}
	
	
	
%Cuando no hubo copia
rule: { 
		~lu1 		:= 	(0,0)~lu1;
		~lu2 		:= 	(0,0)~lu2;
		~lu3 		:= 	(0,0)~lu3;
		%~ue_cota	:= 	(0,0)~ue_cota;
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
		
		%~mgm 		:= 	(0,0)~mgm;
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
		
		
		%~flag_cae := #macro(hay_MGM_adaptativo) + 400 ;
		
		#macro(SetEtapaAprendizaje)
		%~flag_paso := 7.4 ;
		%~flag_value := 7.4;
	}
	 0
	{ 
		(0,0)#macro(Procesamiento) 		and
		#macro(vecinosProcesamiento) 	
	}	

%Cuando no hubo copia y los vecinos no estan en procesamiento
%rule: { 
%		~lu1 		:= 	(0,0)~lu1;
%		~lu2 		:= 	(0,0)~lu2;
%		~lu3 		:= 	(0,0)~lu3;
%		~ue_cota	:= 	(0,0)~ue_cota;
%		~mgm 		:= 	(0,0)~mgm;
%		#macro(SetEtapaFinal)
		%~flag_paso := 7.4 ;
		%~flag_value := (-1,0)~etapa  ;
%	}
%	 0
%	{ 
%		(0,0)#macro(Procesamiento) 		
%	}
	
% 5.1 - Etapa de Aprendizaje
% Etapa de Aprendizaje de comportamiento en base a exito o fracaso consecutivos de un agente y vecinos.
rule: { 
		%~amb 	:=  ?;
		
		
		
		~camp_fullfil_economic_beh := if ( ((0,0)~cont_failed_campaign >=1  and $c_cont_succesfull_campaign >=1 and  (0,0)~copy_behaviour =1 ) , $c_camp_fullfil_economic_beh, (0,0)~camp_fullfil_economic_beh );
		~camp_fullfil_enviromental_beh := if ( ((0,0)~cont_failed_campaign >=1 and $c_cont_succesfull_campaign >=1  and  (0,0)~copy_behaviour =1) , $c_camp_fullfil_enviromental_beh, (0,0)~camp_fullfil_enviromental_beh);
		

		
		#macro(SetEtapaFinal)
		~flag_paso := 8.1 ;
		~flag_cae := if ( ((0,0)~cont_failed_campaign >=1  and $c_cont_succesfull_campaign >=1 and  (0,0)~copy_behaviour =1 ),81.1 , 81.0 );
	}
	{
		%copia economica reset
		%$clu 		:= 0;



	}
		0
	{ 
		(0,0)#macro(Aprendizaje) 		
	}
 
	
% 6 - Cierre ciclo
% Vuelve a Inicio cuando todos terminan
% Antes de ir al inicio se pone amb en nulo
% Para permitir secuencas de amb iguales
rule: { 
		~amb 	:=  ?;
		#macro(SetEtapaInicio)
		%~flag_paso := 0.1 ;
		%~flag_cae := 0.1;	
	}
	{
		%copia economica reset
		$clu 		:= 0;
		$aju 		:= 0;
		$clu1	 	:= ?;
		$clu2 		:= ?;
		$clu3	 	:= ?;
		$cue_cota 	:= ?;
		$cmgm 		:= ?;		
		
		%copia ambiental economica reset		
		$copia_ae 		:= 0;
		$cae_aju 		:= 0;
		$cae_lu1	 	:= ?;
		$cae_lu2 		:= ?;
		$cae_lu3	 	:= ?;
		$cae_ue_cota 	:= ?;
		$cae_mgm 		:= ?;	
		
				
		%copia ambiental reset			
		$copia_a    := 0;
		$ca_aju 	:= 0;		
		$ca_lu1     := ?;
		$ca_lu2     := ?;
		$ca_lu3     := ?;
		$ca_ue_cota 	:= ?;
		$ca_mgm 		:= ?;	
		

	}
		0
	{ 
		(0,0)#macro(Final) 		and
		#macro(vecinosFinal) 	
	}		
	
%rule: { 
%		~amb 	:=  ?;
%		#macro(SetEtapaInicio)
		%~flag_paso := 0.2 ;
%		~flag_cae := 0.2;	
%	}
%	{
%		$clu 		:= 0;
%		$aju 		:= 0;
%		$clu1	 	:= ?;
%		$clu2 		:= ?;
%		$clu3	 	:= ?;
%		$cue_cota 	:= ?;
%		$cmgm 		:= ?;
%	}
%		0
%	{ 
%		(0,0)#macro(Final) 	
%	}		
	
	
% Procesamiento FIN


% Inicializacion
#Macro(inicializar)
	
% Default
rule : { 
	%~flag_paso := 9.1 ;
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
		~flag_cae := 0.9;	
		~flag_value := $cam;
		~initial_corner_cell := 1;
		#macro(SetEtapaAmbienteRecibido)

	}
	{
		$cam := $cam + 1;
	}
 	 0
	{ t }

[setPrecioLu1]
% Procesa el precio externo recibido
% No hace nada pero si hubiera procesamiento va aca
rule : { 
		%saves previous price
		~prev_lu1_price  := (0,0)~curr_lu1_price;
		%receive the new price
		~curr_lu1_price := portValue(thisPort);
		~flag_cae := 0.91;	
		#macro(SetEtapaAmbienteRecibido)

	}
 	 0
	{ t }	
	
[setPrecioLu2]
% Procesa el precio externo recibido
% No hace nada pero si hubiera procesamiento va aca
rule : { 
		%saves previous price
		~prev_lu2_price  := (0,0)~curr_lu2_price;
		%receive the new price
		~curr_lu2_price := portValue(thisPort);

		~flag_cae := 0.92;	
		#macro(SetEtapaAmbienteRecibido)

	}
 	 0
	{ t }	

[setPrecioLu4]
% Procesa el precio externo recibido
% No hace nada pero si hubiera procesamiento va aca
rule : { 
		%saves previous price
		~prev_lu4_price  := (0,0)~curr_lu4_price;
		%receive the new price
		~curr_lu4_price := portValue(thisPort);
		
		~flag_cae := 0.94;	
		#macro(SetEtapaAmbienteRecibido)

	}
 	 0
	{ t }	
	
	
% Parametros Atomicos auxiliares
	
[ambiente]
preparation : 00:00:00:001

[curr_lu1_price]
preparation : 00:00:00:001

[curr_lu2_price]
preparation : 00:00:00:001

[curr_lu4_price]
preparation : 00:00:00:001
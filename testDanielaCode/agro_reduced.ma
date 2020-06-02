#include(parametros.inc)
#include(tablas.inc)
#include(inicializacion.inc)

[top]
components : campo ambiente@Queue
in: in_m_amb done_m_amb
link : in_m_amb in@ambiente
link : done_m_amb done@ambiente
link : out@ambiente in_ambiente@campo

[campo]
type : cell 
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
initialCellsvalue : agro.val

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
neighborports: amb mgm lu1 lu2 lu3 pro eme ua_tipo ua_cota ue_cota deg uae uao uee ueo alq etapa 
link : in_ambiente amb@campo(0,0)

% reglas
localtransition : cell-rule
portInTransition : amb@campo(0,0) setAmbiente

[cell-rule]
%0-Definiciones iniciales
rule: { ~etapa := (0,0)~etapa  ;
	    ~pro := 3; }
{
$clu := 1 ;
}
100
{
(0,0)~pro = 3
}

%1-Definiciones iniciales
rule: {
%~rend1 := uniform(0,100) ;
#macro(SetEtapaProcesamiento)
}
{
$clu := 1;
$sum_deg := 100 ;
$cue_cota := 15 ;
}
0
{
(0,0)#macro(Inicio) 
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
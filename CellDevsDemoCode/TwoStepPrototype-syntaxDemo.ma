#include(agrodevs_macros.inc)
[top]
components : campo 

%Reglas de prueba
% Recordatorio de regla:
% <port_assigns> [ <assignments> ] <delay> <condition>


[campo]
type : cell
dim : (15, 15)
delay : transport
defaultDelayTime : 20
border : nowrapped
neighbors : campo(-1,-1) campo(-1,0) campo(-1,1)
neighbors : campo(0,-1) campo(0,0) campo(0,1)
neighbors : campo(1,-1) campo(1,0) campo(1,1)
initialvalue : -0.5

# clu = tipo de cultivo
StateVariables:  clu precio1 costo1
StateValues: 0 0 0
neighborports: etapa pro rend1 result
localtransition : cell-rule


[cell-rule]

%1-Definiciones iniciales
rule: { ~etapa := (0,0)~etapa  ;
	    ~pro := 3; }
{
$clu := 1 ;
}
100
{
(0,0)~pro = 3
}

%2-Definiciones iniciales
rule: { ~etapa := (0,0)~etapa  ;}
{
$clu := 1 ;
}
100
{
t 
}



%constant rule
rule :0 100 { t }

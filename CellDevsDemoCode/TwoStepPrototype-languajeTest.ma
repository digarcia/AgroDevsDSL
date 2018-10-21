#include(agrodevs_macros.inc)
[top]
components : campo 

%Reglas de prueba
% Recordatorio de regla:
% <port_assigns> [ <assignments> ] <delay> <condition>


[campo]
type : cell
dim : (20, 20)
delay : transport
defaultDelayTime : 100
border : nowrapped
neighbors : campo(-1,-1) campo(-1,0) campo(-1,1)
neighbors : campo(0,-1) campo(0,0) campo(0,1)
neighbors : campo(1,-1) campo(1,0) campo(1,1)
initialvalue : 0



# clu = tipo de cultivo
StateVariables:  clu 
StateValues: 0 
neighborports: etapa out
localtransition : cell-rule


[cell-rule]
rule: 1 100 { uniform(0,100) >  50 }
rule: 0 100 { uniform(0,100) <= 50 }


%constant rule
rule :0 100 { t }



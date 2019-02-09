%Reglas de prueba
% Recordatorio de regla:
% <port_assigns> [ <assignments> ] <delay> <condition>

[top]
components : campo 

[campo]
type : cell
dim : (15, 15)
delay : transport
defaultDelayTime : 0
border : nowrapped
neighbors : campo(-1,-1) campo(-1,0) campo(-1,1)
neighbors : campo(0,-1) campo(0,0) campo(0,1)
neighbors : campo(1,-1) campo(1,0) campo(1,1)
initialvalue : -0.5

# clu = tipo de cultivo
StateVariables:  clu precio1
StateValues: 0 
neighborports: pro rend1 etapa
localtransition : cell-rule

%1-Definiciones iniciales
rule: {
~rend1 := uniform(0,100);
#macro(SetEtapaProcesamiento)
}
{
$clu := 1;
$precio1 := 100;
$costo1 := 15;
}
0
{
(0,0)#macro(Inicio) 
}



%2-EtapaProcesamiento
rule: { ~pro := (0,0)~rend1/ 100) * $precio1 - $costo1;
#macro(SetEtapaFinal)
}
0
{
(0,0)#macro(Procesamiento) 
}

%3-EtapaFinal
{
#macro(SetEtapaCierre)
}
0
{
(0,0)#macro(Final)
}


% 4 - Etapa Cierre
rule: {
~pro := ?;
~rend1 := ?;
#macro(SetEtapaInicio)
}
{
	$clu := ?;
    $precio1 := ? ;
}
0
{
(	0,0)#macro(Cierre)
}



#Etapas
# Inicio -> Procesamiento -> Final -> Cierre

#BeginMacro(Inicio)
~etapa = 1
#EndMacro
#BeginMacro(Procesamiento)
~etapa =2
#EndMacro
#BeginMacro(Final)
~etapa = 3
#EndMacro
#BeginMacro(Cierre)
~etapa = 4
#EndMacro


#BeginMacro(SetEtapaInicio)
~etapa := 1;
#EndMacro
#BeginMacro(SetEtapaProcesamiento)
~etapa := 2;
#EndMacro
#BeginMacro(SetEtapaFinal)
~etapa := 3;
#EndMacro
#BeginMacro(SetEtapaCierre)
~etapa := 4;
#EndMacro
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Adaptacion manejo         %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Flag para adaptar MGM     %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(hay_MGM_adaptativo) 
(0)
#EndMacro

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Suma resultado UA         %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(actualizaCantidadUADegrada) 
	~uao := (0,0)~uao + if (((0,0)~ua_tipo = 1 and (0,0)~eme < (0,0)~ua_cota) or ((0,0)~ua_tipo = 2 and (0,0)~eme = (0,0)~ua_cota) or ((0,0)~ua_tipo = 3 and (0,0)~eme > (0,0)~ua_cota), 1, 0);
	~uae := (0,0)~uae + if (((0,0)~ua_tipo = 1 and (0,0)~eme < (0,0)~ua_cota) or ((0,0)~ua_tipo = 2 and (0,0)~eme = (0,0)~ua_cota) or ((0,0)~ua_tipo = 3 and (0,0)~eme > (0,0)~ua_cota), 0, 1);
	~deg := if (((0,0)~ua_tipo = 1 and (0,0)~eme < (0,0)~ua_cota) or ((0,0)~ua_tipo = 2 and (0,0)~eme = (0,0)~ua_cota) or ((0,0)~ua_tipo = 3 and (0,0)~eme > (0,0)~ua_cota), 0, (((0,0)~eme - (0,0)~ua_cota) / (0,0)~ua_cota) * 100);
#EndMacro
	

	
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Valores y nombre para     %
% las etapas                %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(inicio) 
	~etapa = 0
#EndMacro

#BeginMacro(ambienteRecibido) 
	~etapa = 1
#EndMacro

#BeginMacro(ajusteLandUsePrice) 
	~etapa = 1.1
#EndMacro

#BeginMacro(ajusteLandUseWeather) 
	~etapa = 1.2
#EndMacro

#BeginMacro(ajusteMgmWeather) 
	~etapa = 1.3
#EndMacro

#BeginMacro(ajusteMgmPrice) 
	~etapa = 1.4
#EndMacro

#BeginMacro(parametrosCalculados) 
	~etapa = 2
#EndMacro

#BeginMacro(UEOkEsperaVecinos) 
	~etapa = 3
#EndMacro

#BeginMacro(CampFallidaCopiaEcYAmb) 
	~etapa = 4.3
#EndMacro

#BeginMacro(CampFallidaCopiaAmb) 
	~etapa = 4.2
#EndMacro

#BeginMacro(UEErrorEsperaVecinos) 
	~etapa = 4.1
#EndMacro

#BeginMacro(UECumplida) 
	~etapa = 5
#EndMacro

#BeginMacro(Procesamiento) 
	~etapa = 6
#EndMacro

#BeginMacro(Final) 
	~etapa = 7
#EndMacro

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Seteo de las etapas       %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(SetEtapaInicio) 
	~etapa	:= 0;
#EndMacro

#BeginMacro(SetEtapaAmbienteRecibido) 
	~etapa	:= 1;
#EndMacro

#BeginMacro(SetAjusteLandUsePrice) 
	~etapa	:= 1.1;
#EndMacro

#BeginMacro(SetAjusteLandUseWeather) 
	~etapa	:= 1.2;
#EndMacro

#BeginMacro(SetAjusteMgmWeather) 
	~etapa	:= 1.3;
#EndMacro

#BeginMacro(SetAjusteMgmPrice) 
	~etapa	:= 1.4;
#EndMacro

#BeginMacro(SetEtapaParametrosCalculados) 
	~etapa	:= 2;
#EndMacro

#BeginMacro(SetEtapaUEOkEsperaVecinos) 
	~etapa	:= 3;
#EndMacro

#BeginMacro(SetEtapaCampFallidaCopiaEcYAmb) 
	~etapa	:= 4.3;
#EndMacro

#BeginMacro(SetEtapaCampFallidaCopiaAmb) 
	~etapa	:= 4.2;
#EndMacro

#BeginMacro(SetEtapaUEErrorEsperaVecinos) 
	~etapa	:= 4.1;
#EndMacro

#BeginMacro(SetEtapaUECumplida) 
	~etapa	:= 5;
#EndMacro

#BeginMacro(SetEtapaProcesamiento) 
	~etapa	:= 6;
#EndMacro

#BeginMacro(SetEtapaFinal) 
	~etapa	:= 7;
#EndMacro

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Valores y nombre para     %
% tipos de metricas         %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(menor) 
	1
#EndMacro

#BeginMacro(igual) 
	2
#EndMacro

#BeginMacro(mayor) 
	3
#EndMacro

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Control para todos los    %
% vecinos igual etapa       %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(vecinosParametrosCalculados) 
	(isUndefined((-1,0)~etapa) 	or (-1,0)~etapa > 1.9) 	and
	(isUndefined((-1,1)~etapa) 	or (-1,1)~etapa > 1.9) 	and
	(isUndefined((0,1)~etapa) 	or (0,1)~etapa > 1.9) 	and
	(isUndefined((1,1)~etapa) 	or (1,1)~etapa > 1.9) 	and
	(isUndefined((1,0)~etapa) 	or (1,0)~etapa > 1.9) 	and
	(isUndefined((1,-1)~etapa) 	or (1,-1)~etapa > 1.9) 	and
	(isUndefined((0,-1)~etapa) 	or (0,-1)~etapa > 1.9) 	and
	(isUndefined((-1,-1)~etapa) or (-1,-1)~etapa > 1.9)
#EndMacro

#BeginMacro(vecinosUeControlado) 
	(isUndefined((-1,0)~etapa) 	or (-1,0)~etapa > 2) 	and
	(isUndefined((-1,1)~etapa) 	or (-1,1)~etapa > 2) 	and
	(isUndefined((0,1)~etapa) 	or (0,1)~etapa > 2) 	and
	(isUndefined((1,1)~etapa) 	or (1,1)~etapa > 2) 	and
	(isUndefined((1,0)~etapa) 	or (1,0)~etapa > 2) 	and
	(isUndefined((1,-1)~etapa) 	or (1,-1)~etapa > 2) 	and
	(isUndefined((0,-1)~etapa) 	or (0,-1)~etapa > 2) 	and
	(isUndefined((-1,-1)~etapa) or (-1,-1)~etapa > 2)
#EndMacro

#BeginMacro(vecinosProcesamiento) 
	(isUndefined((-1,0)~etapa) 	or (-1,0)~etapa > 5) 	and
	(isUndefined((-1,1)~etapa) 	or (-1,1)~etapa > 5) 	and
	(isUndefined((0,1)~etapa) 	or (0,1)~etapa > 5) 	and
	(isUndefined((1,1)~etapa) 	or (1,1)~etapa > 5) 	and
	(isUndefined((1,0)~etapa) 	or (1,0)~etapa > 5) 	and
	(isUndefined((1,-1)~etapa) 	or (1,-1)~etapa > 5) 	and
	(isUndefined((0,-1)~etapa) 	or (0,-1)~etapa > 5) 	and
	(isUndefined((-1,-1)~etapa) or (-1,-1)~etapa > 5)
#EndMacro

#BeginMacro(vecinosFinal) 
	(isUndefined((-1,0)~etapa) 	or (-1,0)~etapa = 0 or (-1,0)~etapa = 7) 	and
	(isUndefined((-1,1)~etapa) 	or (-1,1)~etapa = 0 or (-1,1)~etapa = 7) 	and
	(isUndefined((0,1)~etapa) 	or (0,1)~etapa = 0 	or (0,1)~etapa = 7) 	and
	(isUndefined((1,1)~etapa) 	or (1,1)~etapa = 0 	or (1,1)~etapa = 7) 	and
	(isUndefined((1,0)~etapa) 	or (1,0)~etapa = 0 	or (1,0)~etapa = 7) 	and
	(isUndefined((1,-1)~etapa) 	or (1,-1)~etapa = 0 or (1,-1)~etapa = 7) 	and
	(isUndefined((0,-1)~etapa) 	or (0,-1)~etapa = 0 or (0,-1)~etapa = 7) 	and
	(isUndefined((-1,-1)~etapa) or (-1,-1)~etapa = 0 or (-1,-1)~etapa = 7)
#EndMacro

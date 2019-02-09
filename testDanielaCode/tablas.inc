%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Precios                   %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(precio_lu1) 
( 166.000 ) 
#EndMacro

#BeginMacro(precio_lu2) 
( 322.000 ) 
#EndMacro

#BeginMacro(precio_lu4) 
( 252.000 ) 
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Costos                    %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(costo_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 658.90002, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 755.63000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 812.91998, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 855.28998, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 887.26001, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 795.51001, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 909.29999, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 946.71100, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 1026.55103, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 1064.16394, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 942.95898, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 1073.82495, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 1151.34009, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 1208.65637, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 1251.91174, 0)  
)
#EndMacro

#BeginMacro(costo_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 369.41599, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 391.33401, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 421.25601, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 453.67200, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 473.41101, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 474.18741, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 499.97299, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 535.17499, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 573.31268, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 596.53540, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 495.10583, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 524.75897, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 565.24249, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 609.09991, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 635.80609, 0)  
)
#EndMacro

#BeginMacro(costo_lu3)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 764.67798, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 829.39148, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 901.83423, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 960.01190, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 1014.39301, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 888.85199, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 964.98499, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 1050.21216, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 1118.65662, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 1182.63403, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 949.32898, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 1036.88196, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 1134.89294, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 1213.60400, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 1287.17798, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Rinde                     %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(rinde_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 4.69387, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 6.28159, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 7.22203, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 7.91741, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 8.44220, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 5.52220, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 7.39010, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 8.49650, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 9.31460, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 9.93200, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 6.35053, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 8.49862, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 9.77098, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 10.71179, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 11.42180, 0)  
)
#EndMacro

#BeginMacro(rinde_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 2.01195, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 2.38391, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 2.89170, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 3.44182, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 3.77681, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 2.36700, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 2.80460, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 3.40200, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 4.04920, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 4.44330, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 2.72205, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 3.22529, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 3.91230, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 4.65658, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 5.10980, 0)  
)
#EndMacro

#BeginMacro(rinde_lu5)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 0.50048, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 1.07253, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 1.82920, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 2.52586, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 2.98333, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 0.58880, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 1.26180, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 2.15200, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 2.97160, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 3.50980, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 0.67712, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 1.45107, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 2.47480, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 3.41734, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 4.03627, 0)  
)
#EndMacro

#BeginMacro(rinde_lu4)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 2.59879, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 3.03510, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 3.37493, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 3.53413, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 3.93049, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 3.05740, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 3.57070, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 3.97050, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 4.15780, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 4.62410, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 3.51601, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 4.10631, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 4.56608, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 4.78147, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 5.31772, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Emergia                   %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(emergia_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 60.025, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 68.651, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 77.276, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 73.966, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 70.656, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 58.646, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 63.634, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 68.621, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 64.481, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 60.341, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 44.804, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 51.101, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 57.399, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 52.878, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 48.356, 0)  
)
#EndMacro

#BeginMacro(emergia_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 55.726, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 59.512, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 63.297, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 58.312, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 53.328, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 48.678, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 50.681, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 52.684, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 51.867, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 51.050, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 54.663, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 54.235, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 53.807, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 51.099, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 48.391, 0)  
)
#EndMacro

#BeginMacro(emergia_lu3)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 67.328, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 62.945, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 58.562, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 59.959, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 61.356, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 63.969, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 57.113, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 50.256, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 50.626, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 50.995, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 49.410, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 49.988, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 50.567, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 48.911, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 47.255, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Ajustes UE                %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
#BeginMacro(ajuste_ambiente)
( 
 if ((0,0)~amb = 1, -0.40, 0) + 
 if ((0,0)~amb = 2, -0.20, 0) + 
 if ((0,0)~amb = 3, 0.00, 0) + 
 if ((0,0)~amb = 4, 0.20, 0) + 
 if ((0,0)~amb = 5, 0.40, 0)  
)
#EndMacro

#BeginMacro(ajuste_entorno)
( 
 if (($cmgm = 1 and (0,0)~mgm = 1), 0.00, 0) + 
 if (($cmgm = 1 and (0,0)~mgm = 2), 0.20, 0) + 
 if (($cmgm = 1 and (0,0)~mgm = 3), 0.45, 0) + 
 if (($cmgm = 2 and (0,0)~mgm = 1), -0.25, 0) + 
 if (($cmgm = 2 and (0,0)~mgm = 2), 0.00, 0) + 
 if (($cmgm = 2 and (0,0)~mgm = 3), 0.20, 0) + 
 if (($cmgm = 3 and (0,0)~mgm = 1), -0.55, 0) + 
 if (($cmgm = 3 and (0,0)~mgm = 2), -0.25, 0) + 
 if (($cmgm = 3 and (0,0)~mgm = 3), 0.00, 0)  
)
#EndMacro


#BeginMacro(ajuste_entorno_mgm_1)
( 
 if ($cmgm = 1, 0.00, 0) + 
 if ($cmgm = 2, -0.25, 0) + 
 if ($cmgm = 3, -0.55, 0)  
)
#EndMacro

#BeginMacro(ajuste_entorno_mgm_2)
( 
 if ($cmgm = 1, 0.20, 0) + 
 if ($cmgm = 2, 0.00, 0) + 
 if ($cmgm = 3, -0.25, 0)  
)
#EndMacro

#BeginMacro(ajuste_entorno_mgm_3)
( 
 if ($cmgm = 1, 0.45, 0) + 
 if ($cmgm = 2, 0.20, 0) + 
 if ($cmgm = 3, 0.00, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Rangos Capital de Trabajo %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(wc_maximo_mgm_1) 
( 292.60001 ) 
#EndMacro

#BeginMacro(wc_maximo_mgm_2) 
( 338.20001 ) 
#EndMacro

#BeginMacro(wc_maximo_mgm_3) 
( 353.20999 ) 
#EndMacro


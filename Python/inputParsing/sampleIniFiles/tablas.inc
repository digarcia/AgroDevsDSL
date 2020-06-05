%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Precios                   %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(precio_lu1) 
( 207.000 ) 
#EndMacro

#BeginMacro(precio_lu2) 
( 286.000 ) 
#EndMacro

#BeginMacro(precio_lu4) 
( 179.000 ) 
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Costos                    %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(costo_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 481.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 550.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 583.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 654.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 689.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 591.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 682.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 723.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 818.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 862.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 693.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 795.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 863.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 959.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 1014.00000, 0)  
)
#EndMacro

#BeginMacro(costo_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 271.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 290.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 301.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 314.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 332.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 351.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 373.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 385.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 400.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 421.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 431.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 456.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 469.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 486.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 509.00000, 0)  
)
#EndMacro

#BeginMacro(costo_lu3)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 462.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 491.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 518.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 535.00000, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 561.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 585.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 622.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 653.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 672.00000, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 704.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 715.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 760.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 799.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 821.00000, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 860.00000, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Rinde                     %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(rinde_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 3.62543, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 5.38959, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 6.22959, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 8.04222, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 8.91399, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 4.35581, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 6.67140, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 7.71737, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 10.14316, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 11.27153, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 4.89684, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 7.50126, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 9.22632, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 11.67368, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 13.08295, 0)  
)
#EndMacro

#BeginMacro(rinde_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 1.30294, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 1.75501, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 1.99584, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 2.31232, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 2.72925, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 1.46580, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 1.97438, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 2.24532, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 2.60136, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 3.07040, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 1.62867, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 2.19376, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 2.49480, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 2.89040, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 3.41156, 0)  
)
#EndMacro

#BeginMacro(rinde_lu5)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 1.17235, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 1.32735, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 1.66197, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 1.93369, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 2.28717, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 1.31889, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 1.49327, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 1.86971, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 2.17540, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 2.57306, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 1.46543, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 1.65919, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 2.07746, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 2.41711, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 2.85896, 0)  
)
#EndMacro

#BeginMacro(rinde_lu4)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 1.61180, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 2.49615, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 2.91905, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 3.01032, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 3.33820, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 1.91915, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 3.08371, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 3.54917, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 3.70339, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 4.16093, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 2.48442, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 3.95602, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 4.67163, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 4.84953, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 5.55363, 0)  
)
#EndMacro


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Emergia                   %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(emergia_lu1)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 44.527, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 53.363, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 64.916, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 63.506, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 66.397, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 43.678, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 49.060, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 56.788, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 54.113, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 55.483, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 33.247, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 39.278, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 45.704, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 43.557, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 43.413, 0)  
)
#EndMacro

#BeginMacro(emergia_lu2)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 57.502, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 62.916, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 69.377, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 64.685, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 60.279, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 50.269, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 53.496, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 57.492, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 57.252, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 57.377, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 56.479, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 57.187, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 58.540, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 56.211, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 54.171, 0)  
)
#EndMacro

#BeginMacro(emergia_lu3)
( 
 if (((0,0)~mgm = 1 and (0,0)~amb = 1), 71.827, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 2), 68.311, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 3), 63.699, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 4), 66.067, 0) + 
 if (((0,0)~mgm = 1 and (0,0)~amb = 5), 68.670, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 1), 69.084, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 2), 62.575, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 3), 55.153, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 4), 56.173, 0) + 
 if (((0,0)~mgm = 2 and (0,0)~amb = 5), 57.350, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 1), 53.771, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 2), 55.101, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 3), 55.810, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 4), 54.514, 0) + 
 if (((0,0)~mgm = 3 and (0,0)~amb = 5), 53.311, 0)  
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
( 280.00000 ) 
#EndMacro

#BeginMacro(wc_maximo_mgm_2) 
( 273.00000 ) 
#EndMacro

#BeginMacro(wc_maximo_mgm_3) 
( 112.00000 ) 
#EndMacro


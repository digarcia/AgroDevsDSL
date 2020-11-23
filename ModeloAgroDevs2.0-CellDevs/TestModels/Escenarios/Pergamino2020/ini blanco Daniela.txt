%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Reglas para inicializar   %
% valores de las celdas     %
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

#BeginMacro(inicializar) 

rule : { 
		~mgm		:= ?;
		~lu1 		:= ?;
		~lu2 		:= ?;
		~lu3 		:= ?;
		~ue_cota 	:= ?;
		~ua_tipo 	:= ?;
		~ua_cota 	:= ?;
		~alq		:= 0; 
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= ?;
		~camp_fullfil_economic_beh 	:= ?;
		~camp_fullfil_enviromental_beh	:= ?;
		~ptl_adj			:= ?;
		~plu_adj			:= ?;
		~wtl_adj			:= ?;
		~wlu_adj			:= ?;
		~wlu_adj_cro			:= ?;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -0.5
	}


rule : { 
		~mgm	:= 2.00;
		~lu1	:= 58.00;
		~lu2	:= 5.00;
		~lu3	:= 37.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -1
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 18.00;
		~lu2	:= 1.00;
		~lu3	:= 81.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -2
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 16.00;
		~lu2	:= 28.00;
		~lu3	:= 56.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -3
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 83.00;
		~lu2	:= 8.00;
		~lu3	:= 9.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -4
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 61.00;
		~lu2	:= 2.00;
		~lu3	:= 37.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -5
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 30.00;
		~lu2	:= 11.00;
		~lu3	:= 59.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -6
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 78.00;
		~lu3	:= 13.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -7
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 25.00;
		~lu2	:= 62.00;
		~lu3	:= 13.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -8
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 51.00;
		~lu2	:= 25.00;
		~lu3	:= 24.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -9
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 0.00;
		~lu3	:= 96.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -10
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 36.00;
		~lu2	:= 51.00;
		~lu3	:= 13.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -11
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 0.00;
		~lu3	:= 98.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -12
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 95.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -13
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 24.00;
		~lu2	:= 69.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -14
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 53.00;
		~lu3	:= 29.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -15
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 55.00;
		~lu2	:= 10.00;
		~lu3	:= 35.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -16
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 25.00;
		~lu2	:= 57.00;
		~lu3	:= 18.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -17
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 70.00;
		~lu2	:= 14.00;
		~lu3	:= 16.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -18
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 18.00;
		~lu2	:= 2.00;
		~lu3	:= 80.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -19
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 15.00;
		~lu2	:= 49.00;
		~lu3	:= 36.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -20
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 29.00;
		~lu2	:= 24.00;
		~lu3	:= 47.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -21
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 56.00;
		~lu2	:= 22.00;
		~lu3	:= 22.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -22
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 15.00;
		~lu2	:= 24.00;
		~lu3	:= 61.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -23
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 32.00;
		~lu2	:= 59.00;
		~lu3	:= 9.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -24
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 74.00;
		~lu3	:= 26.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -25
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 77.00;
		~lu2	:= 2.00;
		~lu3	:= 21.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -26
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 54.00;
		~lu2	:= 35.00;
		~lu3	:= 11.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -27
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 29.00;
		~lu2	:= 0.00;
		~lu3	:= 71.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -28
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 65.00;
		~lu2	:= 4.00;
		~lu3	:= 31.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -29
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 3.00;
		~lu2	:= 12.00;
		~lu3	:= 85.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -30
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 58.00;
		~lu2	:= 1.00;
		~lu3	:= 41.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -31
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 12.00;
		~lu2	:= 9.00;
		~lu3	:= 79.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -32
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 16.00;
		~lu2	:= 3.00;
		~lu3	:= 81.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -33
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 56.00;
		~lu3	:= 33.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -34
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 82.00;
		~lu2	:= 1.00;
		~lu3	:= 17.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -35
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 35.00;
		~lu2	:= 0.00;
		~lu3	:= 65.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -36
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 80.00;
		~lu2	:= 16.00;
		~lu3	:= 4.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -37
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 76.00;
		~lu2	:= 8.00;
		~lu3	:= 16.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -38
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 26.00;
		~lu2	:= 26.00;
		~lu3	:= 48.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -39
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 62.00;
		~lu3	:= 35.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -40
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 42.00;
		~lu2	:= 51.00;
		~lu3	:= 7.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -41
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 9.00;
		~lu2	:= 49.00;
		~lu3	:= 42.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -42
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 87.00;
		~lu2	:= 5.00;
		~lu3	:= 8.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -43
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 22.00;
		~lu2	:= 35.00;
		~lu3	:= 43.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -44
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 49.00;
		~lu3	:= 40.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -45
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 66.00;
		~lu2	:= 33.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -46
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 56.00;
		~lu2	:= 37.00;
		~lu3	:= 7.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -47
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 12.00;
		~lu3	:= 75.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -48
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 71.00;
		~lu2	:= 29.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -49
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 64.00;
		~lu2	:= 36.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -50
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 14.00;
		~lu3	:= 85.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -51
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 3.00;
		~lu2	:= 28.00;
		~lu3	:= 69.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -52
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 96.00;
		~lu2	:= 0.00;
		~lu3	:= 4.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -53
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 16.00;
		~lu2	:= 6.00;
		~lu3	:= 78.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -54
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 37.00;
		~lu2	:= 39.00;
		~lu3	:= 24.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -55
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 55.00;
		~lu2	:= 4.00;
		~lu3	:= 41.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -56
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 8.00;
		~lu3	:= 79.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -57
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 99.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -58
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 97.00;
		~lu2	:= 3.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -59
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 54.00;
		~lu2	:= 37.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -60
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 6.00;
		~lu2	:= 66.00;
		~lu3	:= 28.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -61
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 21.00;
		~lu3	:= 78.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -62
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 10.00;
		~lu3	:= 90.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -63
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 4.00;
		~lu3	:= 96.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -64
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 5.00;
		~lu2	:= 53.00;
		~lu3	:= 42.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -65
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 40.00;
		~lu2	:= 39.00;
		~lu3	:= 21.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -66
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 40.00;
		~lu3	:= 51.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -67
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 14.00;
		~lu2	:= 57.00;
		~lu3	:= 29.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -68
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 8.00;
		~lu2	:= 21.00;
		~lu3	:= 71.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -69
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 8.00;
		~lu2	:= 27.00;
		~lu3	:= 65.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -70
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 12.00;
		~lu2	:= 70.00;
		~lu3	:= 18.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -71
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 56.00;
		~lu3	:= 42.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -72
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 5.00;
		~lu3	:= 77.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -73
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 77.00;
		~lu3	:= 22.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -74
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 44.00;
		~lu2	:= 47.00;
		~lu3	:= 9.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -75
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 29.00;
		~lu2	:= 6.00;
		~lu3	:= 65.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -76
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 55.00;
		~lu2	:= 27.00;
		~lu3	:= 18.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -77
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 70.00;
		~lu2	:= 27.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -78
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 14.00;
		~lu2	:= 66.00;
		~lu3	:= 20.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -79
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 70.00;
		~lu2	:= 2.00;
		~lu3	:= 28.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -80
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 91.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -81
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 27.00;
		~lu2	:= 70.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -82
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 59.00;
		~lu2	:= 38.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -83
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 5.00;
		~lu2	:= 52.00;
		~lu3	:= 43.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -84
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 23.00;
		~lu2	:= 13.00;
		~lu3	:= 64.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -85
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 24.00;
		~lu2	:= 50.00;
		~lu3	:= 26.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -86
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 16.00;
		~lu2	:= 13.00;
		~lu3	:= 71.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -87
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 10.00;
		~lu2	:= 13.00;
		~lu3	:= 77.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -88
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 93.00;
		~lu2	:= 7.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -89
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 31.00;
		~lu2	:= 44.00;
		~lu3	:= 25.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -90
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 27.00;
		~lu2	:= 68.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -91
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 43.00;
		~lu2	:= 50.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -92
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 84.00;
		~lu2	:= 10.00;
		~lu3	:= 6.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -93
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 95.00;
		~lu2	:= 5.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -94
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 16.00;
		~lu2	:= 48.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -95
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 51.00;
		~lu2	:= 34.00;
		~lu3	:= 15.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -96
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 92.00;
		~lu2	:= 8.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -97
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 17.00;
		~lu2	:= 68.00;
		~lu3	:= 15.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -98
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 23.00;
		~lu2	:= 76.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -99
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 62.00;
		~lu2	:= 14.00;
		~lu3	:= 24.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -100
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 87.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -101
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 2.00;
		~lu2	:= 91.00;
		~lu3	:= 7.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -102
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 48.00;
		~lu2	:= 17.00;
		~lu3	:= 35.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -103
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 2.00;
		~lu3	:= 89.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -104
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 52.00;
		~lu2	:= 36.00;
		~lu3	:= 12.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -105
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 29.00;
		~lu2	:= 2.00;
		~lu3	:= 69.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -106
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 62.00;
		~lu2	:= 28.00;
		~lu3	:= 10.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -107
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 54.00;
		~lu2	:= 29.00;
		~lu3	:= 17.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -108
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 99.00;
		~lu2	:= 0.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -109
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 52.00;
		~lu2	:= 2.00;
		~lu3	:= 46.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -110
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 99.00;
		~lu2	:= 0.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -111
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 13.00;
		~lu2	:= 43.00;
		~lu3	:= 44.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -112
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 15.00;
		~lu3	:= 83.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -113
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 42.00;
		~lu2	:= 23.00;
		~lu3	:= 35.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -114
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 36.00;
		~lu3	:= 63.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -115
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 8.00;
		~lu2	:= 92.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -116
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 48.00;
		~lu2	:= 27.00;
		~lu3	:= 25.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -117
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 25.00;
		~lu2	:= 3.00;
		~lu3	:= 72.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -118
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 34.00;
		~lu2	:= 30.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -119
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 84.00;
		~lu2	:= 15.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -120
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 36.00;
		~lu2	:= 2.00;
		~lu3	:= 62.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -121
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 6.00;
		~lu2	:= 3.00;
		~lu3	:= 91.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -122
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 61.00;
		~lu2	:= 36.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -123
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 64.00;
		~lu3	:= 18.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -124
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 49.00;
		~lu2	:= 36.00;
		~lu3	:= 15.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -125
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 82.00;
		~lu2	:= 4.00;
		~lu3	:= 14.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -126
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 9.00;
		~lu2	:= 76.00;
		~lu3	:= 15.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -127
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 7.00;
		~lu2	:= 23.00;
		~lu3	:= 70.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -128
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 49.00;
		~lu2	:= 48.00;
		~lu3	:= 3.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -129
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 60.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -130
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 6.00;
		~lu2	:= 89.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -131
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 41.00;
		~lu3	:= 41.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -132
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 87.00;
		~lu3	:= 13.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -133
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 39.00;
		~lu2	:= 0.00;
		~lu3	:= 61.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -134
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 3.00;
		~lu2	:= 61.00;
		~lu3	:= 36.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -135
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 96.00;
		~lu2	:= 4.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -136
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 22.00;
		~lu3	:= 78.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -137
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 87.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -138
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 42.00;
		~lu2	:= 16.00;
		~lu3	:= 42.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -139
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 26.00;
		~lu3	:= 72.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -140
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 96.00;
		~lu2	:= 1.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -141
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 3.00;
		~lu2	:= 27.00;
		~lu3	:= 70.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -142
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 72.00;
		~lu2	:= 10.00;
		~lu3	:= 18.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -143
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 40.00;
		~lu3	:= 56.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -144
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 14.00;
		~lu2	:= 1.00;
		~lu3	:= 85.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -145
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 66.00;
		~lu2	:= 33.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -146
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 45.00;
		~lu2	:= 55.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -147
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 70.00;
		~lu3	:= 17.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -148
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 6.00;
		~lu2	:= 4.00;
		~lu3	:= 90.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -149
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 97.00;
		~lu2	:= 2.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -150
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 96.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -151
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 73.00;
		~lu3	:= 16.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -152
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 28.00;
		~lu2	:= 33.00;
		~lu3	:= 39.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -153
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 50.00;
		~lu2	:= 48.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -154
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 26.00;
		~lu2	:= 35.00;
		~lu3	:= 39.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -155
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 77.00;
		~lu3	:= 5.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -156
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 8.00;
		~lu2	:= 13.00;
		~lu3	:= 79.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -157
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 51.00;
		~lu2	:= 37.00;
		~lu3	:= 12.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -158
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 33.00;
		~lu2	:= 3.00;
		~lu3	:= 64.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -159
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 3.00;
		~lu2	:= 38.00;
		~lu3	:= 59.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -160
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 6.00;
		~lu2	:= 17.00;
		~lu3	:= 77.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -161
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 32.00;
		~lu2	:= 12.00;
		~lu3	:= 56.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -162
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 2.00;
		~lu3	:= 91.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -163
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 66.00;
		~lu2	:= 31.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -164
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 64.00;
		~lu2	:= 33.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -165
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 56.00;
		~lu2	:= 36.00;
		~lu3	:= 8.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -166
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 3.00;
		~lu3	:= 79.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -167
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 2.00;
		~lu2	:= 2.00;
		~lu3	:= 96.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -168
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 2.00;
		~lu3	:= 98.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -169
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 4.00;
		~lu2	:= 63.00;
		~lu3	:= 33.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -170
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 58.00;
		~lu2	:= 41.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -171
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 10.00;
		~lu2	:= 75.00;
		~lu3	:= 15.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -172
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 9.00;
		~lu2	:= 0.00;
		~lu3	:= 91.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -173
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 46.00;
		~lu2	:= 51.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -174
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 78.00;
		~lu2	:= 2.00;
		~lu3	:= 20.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -175
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 13.00;
		~lu3	:= 83.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -176
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 49.00;
		~lu2	:= 0.00;
		~lu3	:= 51.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -177
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 31.00;
		~lu2	:= 68.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -178
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 56.00;
		~lu2	:= 41.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -179
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 2.00;
		~lu3	:= 98.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -180
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 47.00;
		~lu2	:= 3.00;
		~lu3	:= 50.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -181
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 71.00;
		~lu2	:= 9.00;
		~lu3	:= 20.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -182
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 75.00;
		~lu2	:= 8.00;
		~lu3	:= 17.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -183
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 63.00;
		~lu2	:= 29.00;
		~lu3	:= 8.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -184
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 91.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -185
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 26.00;
		~lu3	:= 72.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -186
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 49.00;
		~lu2	:= 12.00;
		~lu3	:= 39.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -187
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 22.00;
		~lu2	:= 32.00;
		~lu3	:= 46.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -188
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 14.00;
		~lu2	:= 74.00;
		~lu3	:= 12.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -189
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 74.00;
		~lu2	:= 4.00;
		~lu3	:= 22.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -190
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 19.00;
		~lu2	:= 71.00;
		~lu3	:= 10.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -191
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 16.00;
		~lu2	:= 4.00;
		~lu3	:= 80.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -192
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 61.00;
		~lu2	:= 18.00;
		~lu3	:= 21.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -193
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 44.00;
		~lu2	:= 31.00;
		~lu3	:= 25.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -194
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 41.00;
		~lu2	:= 15.00;
		~lu3	:= 44.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -195
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 15.00;
		~lu2	:= 64.00;
		~lu3	:= 21.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -196
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 46.00;
		~lu2	:= 25.00;
		~lu3	:= 29.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -197
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 65.00;
		~lu2	:= 35.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -198
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 78.00;
		~lu3	:= 13.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -199
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 78.00;
		~lu2	:= 7.00;
		~lu3	:= 15.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -200
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 66.00;
		~lu2	:= 2.00;
		~lu3	:= 32.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -201
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 58.00;
		~lu3	:= 42.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -202
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 16.00;
		~lu2	:= 66.00;
		~lu3	:= 18.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -203
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 6.00;
		~lu2	:= 24.00;
		~lu3	:= 70.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -204
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 42.00;
		~lu2	:= 15.00;
		~lu3	:= 43.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -205
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 85.00;
		~lu2	:= 13.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -206
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 88.00;
		~lu2	:= 7.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -207
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 80.00;
		~lu2	:= 0.00;
		~lu3	:= 20.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -208
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 92.00;
		~lu3	:= 6.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -209
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 65.00;
		~lu2	:= 31.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -210
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 89.00;
		~lu3	:= 4.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -211
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 29.00;
		~lu2	:= 48.00;
		~lu3	:= 23.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -212
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 35.00;
		~lu2	:= 62.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -213
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 67.00;
		~lu3	:= 24.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -214
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 79.00;
		~lu3	:= 12.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -215
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 50.00;
		~lu2	:= 50.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -216
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 71.00;
		~lu2	:= 15.00;
		~lu3	:= 14.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -217
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 100.00;
		~lu2	:= 0.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -218
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 5.00;
		~lu2	:= 0.00;
		~lu3	:= 95.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -219
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 12.00;
		~lu2	:= 10.00;
		~lu3	:= 78.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -220
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 11.00;
		~lu2	:= 34.00;
		~lu3	:= 55.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -221
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 70.00;
		~lu2	:= 1.00;
		~lu3	:= 29.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -222
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 59.00;
		~lu2	:= 5.00;
		~lu3	:= 36.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -223
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 97.00;
		~lu2	:= 1.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -224
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 2.00;
		~lu3	:= 97.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -225
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 33.00;
		~lu2	:= 34.00;
		~lu3	:= 33.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -226
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 63.00;
		~lu2	:= 35.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -227
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 10.00;
		~lu2	:= 73.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -228
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 31.00;
		~lu2	:= 25.00;
		~lu3	:= 44.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -229
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 98.00;
		~lu2	:= 0.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -230
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 39.00;
		~lu2	:= 61.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -231
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 68.00;
		~lu2	:= 31.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -232
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 66.00;
		~lu2	:= 0.00;
		~lu3	:= 34.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -233
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 47.00;
		~lu3	:= 51.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -234
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 75.00;
		~lu3	:= 16.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -235
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 39.00;
		~lu2	:= 6.00;
		~lu3	:= 55.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -236
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 15.00;
		~lu2	:= 23.00;
		~lu3	:= 62.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -237
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 26.00;
		~lu2	:= 2.00;
		~lu3	:= 72.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -238
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 87.00;
		~lu2	:= 11.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -239
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 3.00;
		~lu2	:= 6.00;
		~lu3	:= 91.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -240
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 49.00;
		~lu2	:= 50.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -241
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 40.00;
		~lu2	:= 32.00;
		~lu3	:= 28.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -242
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 10.00;
		~lu2	:= 13.00;
		~lu3	:= 77.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -243
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 10.00;
		~lu2	:= 48.00;
		~lu3	:= 42.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -244
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 22.00;
		~lu2	:= 42.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -245
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 62.00;
		~lu2	:= 3.00;
		~lu3	:= 35.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -246
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 0.00;
		~lu3	:= 97.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -247
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 2.00;
		~lu2	:= 94.00;
		~lu3	:= 4.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -248
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 55.00;
		~lu2	:= 43.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -249
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 78.00;
		~lu2	:= 9.00;
		~lu3	:= 13.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -250
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 21.00;
		~lu2	:= 51.00;
		~lu3	:= 28.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -251
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 75.00;
		~lu2	:= 15.00;
		~lu3	:= 10.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -252
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 52.00;
		~lu3	:= 46.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -253
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 90.00;
		~lu2	:= 5.00;
		~lu3	:= 5.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -254
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 33.00;
		~lu2	:= 17.00;
		~lu3	:= 50.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -255
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 46.00;
		~lu2	:= 44.00;
		~lu3	:= 10.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -256
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 22.00;
		~lu2	:= 69.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -257
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 69.00;
		~lu2	:= 3.00;
		~lu3	:= 28.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -258
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 15.00;
		~lu2	:= 12.00;
		~lu3	:= 73.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -259
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 79.00;
		~lu2	:= 10.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -260
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 38.00;
		~lu2	:= 7.00;
		~lu3	:= 55.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -261
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 63.00;
		~lu2	:= 1.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -262
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 43.00;
		~lu2	:= 48.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -263
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 13.00;
		~lu2	:= 4.00;
		~lu3	:= 83.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -264
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 6.00;
		~lu2	:= 3.00;
		~lu3	:= 91.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -265
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 70.00;
		~lu2	:= 7.00;
		~lu3	:= 23.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -266
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 10.00;
		~lu2	:= 8.00;
		~lu3	:= 82.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -267
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 100.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -268
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 46.00;
		~lu2	:= 39.00;
		~lu3	:= 15.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -269
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 28.00;
		~lu2	:= 66.00;
		~lu3	:= 6.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -270
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 45.00;
		~lu2	:= 12.00;
		~lu3	:= 43.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -271
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 54.00;
		~lu2	:= 9.00;
		~lu3	:= 37.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -272
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 19.00;
		~lu2	:= 9.00;
		~lu3	:= 72.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -273
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 29.00;
		~lu2	:= 51.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -274
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 34.00;
		~lu2	:= 61.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -275
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 73.00;
		~lu3	:= 16.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -276
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 81.00;
		~lu2	:= 14.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -277
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 24.00;
		~lu2	:= 8.00;
		~lu3	:= 68.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -278
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 43.00;
		~lu2	:= 46.00;
		~lu3	:= 11.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -279
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 46.00;
		~lu2	:= 23.00;
		~lu3	:= 31.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -280
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 19.00;
		~lu3	:= 63.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -281
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 78.00;
		~lu2	:= 22.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -282
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 76.00;
		~lu2	:= 9.00;
		~lu3	:= 15.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -283
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 85.00;
		~lu3	:= 15.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -284
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 10.00;
		~lu2	:= 58.00;
		~lu3	:= 32.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -285
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 95.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -286
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 9.00;
		~lu2	:= 15.00;
		~lu3	:= 76.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -287
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 25.00;
		~lu2	:= 39.00;
		~lu3	:= 36.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -288
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 68.00;
		~lu2	:= 32.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -289
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 0.00;
		~lu3	:= 100.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -290
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 31.00;
		~lu2	:= 33.00;
		~lu3	:= 36.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -291
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 76.00;
		~lu3	:= 6.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -292
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 99.00;
		~lu2	:= 1.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -293
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 97.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -294
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 98.00;
		~lu2	:= 0.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -295
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 72.00;
		~lu2	:= 0.00;
		~lu3	:= 28.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -296
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 6.00;
		~lu2	:= 85.00;
		~lu3	:= 9.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -297
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 14.00;
		~lu2	:= 69.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -298
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 55.00;
		~lu2	:= 36.00;
		~lu3	:= 9.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -299
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 58.00;
		~lu2	:= 12.00;
		~lu3	:= 30.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -300
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 31.00;
		~lu2	:= 25.00;
		~lu3	:= 44.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -301
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 14.00;
		~lu2	:= 62.00;
		~lu3	:= 24.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -302
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 0.00;
		~lu3	:= 100.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -303
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 6.00;
		~lu2	:= 94.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -304
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 20.00;
		~lu2	:= 41.00;
		~lu3	:= 39.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -305
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 70.00;
		~lu2	:= 14.00;
		~lu3	:= 16.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -306
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 84.00;
		~lu3	:= 12.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -307
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 8.00;
		~lu2	:= 57.00;
		~lu3	:= 35.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -308
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 9.00;
		~lu2	:= 10.00;
		~lu3	:= 81.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -309
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 5.00;
		~lu2	:= 40.00;
		~lu3	:= 55.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -310
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 43.00;
		~lu2	:= 53.00;
		~lu3	:= 4.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -311
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 57.00;
		~lu2	:= 13.00;
		~lu3	:= 30.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -312
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 20.00;
		~lu3	:= 78.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -313
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 2.00;
		~lu3	:= 91.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -314
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 94.00;
		~lu2	:= 6.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -315
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 32.00;
		~lu3	:= 65.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -316
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 37.00;
		~lu2	:= 5.00;
		~lu3	:= 58.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -317
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 30.00;
		~lu2	:= 22.00;
		~lu3	:= 48.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -318
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 24.00;
		~lu2	:= 55.00;
		~lu3	:= 21.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -319
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 6.00;
		~lu2	:= 0.00;
		~lu3	:= 94.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -320
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 32.00;
		~lu2	:= 47.00;
		~lu3	:= 21.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -321
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 70.00;
		~lu2	:= 4.00;
		~lu3	:= 26.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -322
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 63.00;
		~lu2	:= 0.00;
		~lu3	:= 37.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -323
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 61.00;
		~lu2	:= 0.00;
		~lu3	:= 39.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -324
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 21.00;
		~lu2	:= 78.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -325
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 13.00;
		~lu2	:= 2.00;
		~lu3	:= 85.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -326
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 97.00;
		~lu2	:= 3.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -327
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 57.00;
		~lu2	:= 6.00;
		~lu3	:= 37.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -328
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 89.00;
		~lu2	:= 7.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -329
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 89.00;
		~lu2	:= 11.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -330
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 2.00;
		~lu2	:= 96.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -331
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 63.00;
		~lu2	:= 32.00;
		~lu3	:= 5.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -332
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 22.00;
		~lu2	:= 24.00;
		~lu3	:= 54.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -333
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 8.00;
		~lu2	:= 42.00;
		~lu3	:= 50.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -334
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 43.00;
		~lu2	:= 11.00;
		~lu3	:= 46.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -335
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 28.00;
		~lu2	:= 44.00;
		~lu3	:= 28.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -336
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 91.00;
		~lu2	:= 1.00;
		~lu3	:= 8.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -337
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 98.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -338
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 92.00;
		~lu2	:= 1.00;
		~lu3	:= 7.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -339
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 21.00;
		~lu2	:= 73.00;
		~lu3	:= 6.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -340
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 17.00;
		~lu3	:= 74.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -341
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 28.00;
		~lu2	:= 48.00;
		~lu3	:= 24.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -342
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 84.00;
		~lu3	:= 15.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -343
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 83.00;
		~lu3	:= 14.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -344
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 88.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -345
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 55.00;
		~lu2	:= 5.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -346
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 98.00;
		~lu2	:= 1.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -347
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 5.00;
		~lu3	:= 91.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -348
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 50.00;
		~lu2	:= 34.00;
		~lu3	:= 16.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -349
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 71.00;
		~lu3	:= 25.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -350
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 63.00;
		~lu3	:= 19.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -351
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 77.00;
		~lu3	:= 10.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -352
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 42.00;
		~lu2	:= 53.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -353
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 93.00;
		~lu2	:= 0.00;
		~lu3	:= 7.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -354
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 15.00;
		~lu2	:= 69.00;
		~lu3	:= 16.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -355
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 86.00;
		~lu2	:= 6.00;
		~lu3	:= 8.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -356
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 20.00;
		~lu2	:= 29.00;
		~lu3	:= 51.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -357
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 79.00;
		~lu2	:= 0.00;
		~lu3	:= 21.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -358
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 15.00;
		~lu2	:= 46.00;
		~lu3	:= 39.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -359
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 66.00;
		~lu2	:= 16.00;
		~lu3	:= 18.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -360
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 9.00;
		~lu2	:= 48.00;
		~lu3	:= 43.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -361
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 30.00;
		~lu2	:= 62.00;
		~lu3	:= 8.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -362
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 81.00;
		~lu3	:= 12.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -363
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 14.00;
		~lu2	:= 85.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -364
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 32.00;
		~lu3	:= 68.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -365
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 46.00;
		~lu2	:= 32.00;
		~lu3	:= 22.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -366
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 89.00;
		~lu2	:= 11.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -367
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 24.00;
		~lu2	:= 72.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -368
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 35.00;
		~lu3	:= 47.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -369
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 74.00;
		~lu2	:= 19.00;
		~lu3	:= 7.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -370
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 75.00;
		~lu2	:= 18.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -371
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 41.00;
		~lu2	:= 39.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -372
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 91.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -373
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 13.00;
		~lu2	:= 33.00;
		~lu3	:= 54.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -374
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 3.00;
		~lu3	:= 94.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -375
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 28.00;
		~lu2	:= 14.00;
		~lu3	:= 58.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -376
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 21.00;
		~lu2	:= 26.00;
		~lu3	:= 53.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -377
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 2.00;
		~lu2	:= 75.00;
		~lu3	:= 23.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -378
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 14.00;
		~lu2	:= 28.00;
		~lu3	:= 58.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -379
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 29.00;
		~lu2	:= 15.00;
		~lu3	:= 56.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -380
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 20.00;
		~lu3	:= 79.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -381
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 30.00;
		~lu2	:= 5.00;
		~lu3	:= 65.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -382
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 63.00;
		~lu2	:= 6.00;
		~lu3	:= 31.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -383
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 41.00;
		~lu2	:= 1.00;
		~lu3	:= 58.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -384
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 86.00;
		~lu2	:= 4.00;
		~lu3	:= 10.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -385
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 72.00;
		~lu2	:= 28.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -386
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 83.00;
		~lu2	:= 4.00;
		~lu3	:= 13.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -387
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 79.00;
		~lu3	:= 10.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -388
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 43.00;
		~lu2	:= 14.00;
		~lu3	:= 43.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -389
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 57.00;
		~lu2	:= 13.00;
		~lu3	:= 30.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -390
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 5.00;
		~lu2	:= 36.00;
		~lu3	:= 59.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -391
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 40.00;
		~lu2	:= 24.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -392
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 62.00;
		~lu2	:= 10.00;
		~lu3	:= 28.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -393
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 53.00;
		~lu2	:= 12.00;
		~lu3	:= 35.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -394
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 1.00;
		~lu3	:= 99.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -395
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 76.00;
		~lu2	:= 7.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -396
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 52.00;
		~lu2	:= 13.00;
		~lu3	:= 35.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -397
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 6.00;
		~lu2	:= 86.00;
		~lu3	:= 8.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -398
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 81.00;
		~lu2	:= 14.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -399
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 71.00;
		~lu2	:= 1.00;
		~lu3	:= 28.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -400
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 60.00;
		~lu2	:= 0.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -401
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 7.00;
		~lu3	:= 93.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -402
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 65.00;
		~lu3	:= 17.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -403
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 66.00;
		~lu3	:= 16.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -404
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 12.00;
		~lu2	:= 37.00;
		~lu3	:= 51.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -405
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 99.00;
		~lu2	:= 1.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -406
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 56.00;
		~lu2	:= 22.00;
		~lu3	:= 22.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -407
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 5.00;
		~lu2	:= 75.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -408
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 40.00;
		~lu2	:= 45.00;
		~lu3	:= 15.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -409
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 38.00;
		~lu2	:= 28.00;
		~lu3	:= 34.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -410
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 93.00;
		~lu3	:= 3.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -411
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 13.00;
		~lu3	:= 76.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -412
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 53.00;
		~lu2	:= 42.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -413
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 84.00;
		~lu2	:= 11.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -414
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 48.00;
		~lu2	:= 12.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -415
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 7.00;
		~lu2	:= 88.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -416
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 69.00;
		~lu2	:= 29.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -417
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 12.00;
		~lu2	:= 11.00;
		~lu3	:= 77.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -418
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 57.00;
		~lu2	:= 0.00;
		~lu3	:= 43.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -419
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 45.00;
		~lu2	:= 52.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -420
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 49.00;
		~lu2	:= 1.00;
		~lu3	:= 50.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -421
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 41.00;
		~lu2	:= 56.00;
		~lu3	:= 3.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -422
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 87.00;
		~lu2	:= 7.00;
		~lu3	:= 6.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -423
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 4.00;
		~lu3	:= 96.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -424
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 60.00;
		~lu2	:= 38.00;
		~lu3	:= 2.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -425
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 45.00;
		~lu2	:= 11.00;
		~lu3	:= 44.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -426
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 23.00;
		~lu3	:= 76.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -427
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 25.00;
		~lu2	:= 52.00;
		~lu3	:= 23.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -428
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 59.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -429
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 21.00;
		~lu2	:= 76.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -430
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 10.00;
		~lu2	:= 22.00;
		~lu3	:= 68.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -431
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 3.00;
		~lu2	:= 7.00;
		~lu3	:= 90.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -432
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 79.00;
		~lu2	:= 17.00;
		~lu3	:= 4.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -433
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 39.00;
		~lu3	:= 59.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -434
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 31.00;
		~lu2	:= 68.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -435
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 85.00;
		~lu2	:= 4.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -436
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 94.00;
		~lu3	:= 2.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -437
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 22.00;
		~lu3	:= 65.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -438
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 20.00;
		~lu2	:= 25.00;
		~lu3	:= 55.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -439
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 23.00;
		~lu2	:= 65.00;
		~lu3	:= 12.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -440
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 48.00;
		~lu2	:= 51.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -441
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 14.00;
		~lu2	:= 69.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -442
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 10.00;
		~lu2	:= 2.00;
		~lu3	:= 88.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -443
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 23.00;
		~lu2	:= 29.00;
		~lu3	:= 48.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -444
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 0.00;
		~lu3	:= 99.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -445
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 73.00;
		~lu2	:= 27.00;
		~lu3	:= 0.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -446
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 67.00;
		~lu2	:= 27.00;
		~lu3	:= 6.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -447
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 14.00;
		~lu2	:= 45.00;
		~lu3	:= 41.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -448
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 7.00;
		~lu2	:= 6.00;
		~lu3	:= 87.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -449
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 58.00;
		~lu2	:= 22.00;
		~lu3	:= 20.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -450
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 33.00;
		~lu2	:= 36.00;
		~lu3	:= 31.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -451
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 69.00;
		~lu2	:= 29.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -452
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 16.00;
		~lu2	:= 53.00;
		~lu3	:= 31.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -453
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 4.00;
		~lu2	:= 96.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -454
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 77.00;
		~lu2	:= 14.00;
		~lu3	:= 9.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -455
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 77.00;
		~lu2	:= 3.00;
		~lu3	:= 20.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -456
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 11.00;
		~lu2	:= 11.00;
		~lu3	:= 78.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -457
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 46.00;
		~lu2	:= 1.00;
		~lu3	:= 53.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -458
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 47.00;
		~lu2	:= 5.00;
		~lu3	:= 48.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -459
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 53.00;
		~lu2	:= 47.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -460
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 58.00;
		~lu2	:= 31.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -461
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 20.00;
		~lu2	:= 73.00;
		~lu3	:= 7.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -462
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 85.00;
		~lu3	:= 14.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -463
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 26.00;
		~lu2	:= 27.00;
		~lu3	:= 47.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -464
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 10.00;
		~lu2	:= 88.00;
		~lu3	:= 2.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -465
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 70.00;
		~lu2	:= 26.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -466
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 73.00;
		~lu2	:= 0.00;
		~lu3	:= 27.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -467
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 35.00;
		~lu2	:= 23.00;
		~lu3	:= 42.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -468
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 4.00;
		~lu2	:= 15.00;
		~lu3	:= 81.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -469
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 45.00;
		~lu2	:= 41.00;
		~lu3	:= 14.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -470
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 7.00;
		~lu2	:= 13.00;
		~lu3	:= 80.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -471
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 69.00;
		~lu3	:= 30.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -472
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 37.00;
		~lu2	:= 14.00;
		~lu3	:= 49.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -473
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 97.00;
		~lu2	:= 1.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -474
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 97.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -475
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 67.00;
		~lu2	:= 11.00;
		~lu3	:= 22.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -476
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 18.00;
		~lu2	:= 18.00;
		~lu3	:= 64.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -477
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 0.00;
		~lu3	:= 82.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -478
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 33.00;
		~lu3	:= 60.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -479
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 15.00;
		~lu2	:= 6.00;
		~lu3	:= 79.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -480
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 42.00;
		~lu2	:= 1.00;
		~lu3	:= 57.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -481
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 4.00;
		~lu2	:= 35.00;
		~lu3	:= 61.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -482
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 11.00;
		~lu2	:= 72.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -483
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 24.00;
		~lu2	:= 58.00;
		~lu3	:= 18.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -484
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 30.00;
		~lu2	:= 65.00;
		~lu3	:= 5.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -485
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 0.00;
		~lu2	:= 93.00;
		~lu3	:= 7.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -486
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 5.00;
		~lu2	:= 7.00;
		~lu3	:= 88.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -487
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 6.00;
		~lu2	:= 11.00;
		~lu3	:= 83.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -488
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 82.00;
		~lu3	:= 17.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -489
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 87.00;
		~lu2	:= 12.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -490
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 33.00;
		~lu3	:= 64.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -491
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 90.00;
		~lu2	:= 10.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -492
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 7.00;
		~lu3	:= 92.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -493
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 13.00;
		~lu2	:= 57.00;
		~lu3	:= 30.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -494
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 56.00;
		~lu3	:= 43.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -495
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 53.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -496
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 33.00;
		~lu2	:= 17.00;
		~lu3	:= 50.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -497
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 16.00;
		~lu2	:= 79.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -498
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 16.00;
		~lu2	:= 44.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -499
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 74.00;
		~lu2	:= 13.00;
		~lu3	:= 13.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -500
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 3.00;
		~lu2	:= 52.00;
		~lu3	:= 45.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -501
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 33.00;
		~lu2	:= 62.00;
		~lu3	:= 5.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -502
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 33.00;
		~lu2	:= 3.00;
		~lu3	:= 64.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -503
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 56.00;
		~lu2	:= 6.00;
		~lu3	:= 38.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -504
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 73.00;
		~lu2	:= 2.00;
		~lu3	:= 25.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -505
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 18.00;
		~lu2	:= 5.00;
		~lu3	:= 77.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -506
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 94.00;
		~lu2	:= 0.00;
		~lu3	:= 6.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -507
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 34.00;
		~lu2	:= 18.00;
		~lu3	:= 48.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -508
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 20.00;
		~lu2	:= 27.00;
		~lu3	:= 53.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -509
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 17.00;
		~lu2	:= 81.00;
		~lu3	:= 2.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -510
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 77.00;
		~lu2	:= 12.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -511
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 10.00;
		~lu2	:= 32.00;
		~lu3	:= 58.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -512
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 92.00;
		~lu2	:= 2.00;
		~lu3	:= 6.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -513
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 97.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -514
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 3.00;
		~lu2	:= 80.00;
		~lu3	:= 17.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -515
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 3.00;
		~lu2	:= 86.00;
		~lu3	:= 11.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -516
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 52.00;
		~lu2	:= 9.00;
		~lu3	:= 39.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -517
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 52.00;
		~lu2	:= 0.00;
		~lu3	:= 48.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -518
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 72.00;
		~lu2	:= 6.00;
		~lu3	:= 22.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -519
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 38.00;
		~lu2	:= 8.00;
		~lu3	:= 54.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -520
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 24.00;
		~lu2	:= 17.00;
		~lu3	:= 59.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -521
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 1.00;
		~lu3	:= 99.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -522
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 85.00;
		~lu2	:= 12.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -523
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 0.00;
		~lu3	:= 100.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -524
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 88.00;
		~lu2	:= 4.00;
		~lu3	:= 8.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -525
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 52.00;
		~lu2	:= 14.00;
		~lu3	:= 34.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -526
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 80.00;
		~lu2	:= 18.00;
		~lu3	:= 2.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -527
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 83.00;
		~lu3	:= 15.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -528
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 66.00;
		~lu2	:= 34.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -529
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 81.00;
		~lu2	:= 16.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -530
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 63.00;
		~lu3	:= 33.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -531
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 18.00;
		~lu2	:= 77.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -532
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 1.00;
		~lu2	:= 36.00;
		~lu3	:= 63.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -533
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 22.00;
		~lu2	:= 31.00;
		~lu3	:= 47.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -534
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 33.00;
		~lu2	:= 25.00;
		~lu3	:= 42.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -535
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 4.00;
		~lu2	:= 20.00;
		~lu3	:= 76.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -536
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 2.00;
		~lu2	:= 78.00;
		~lu3	:= 20.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -537
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 21.00;
		~lu2	:= 29.00;
		~lu3	:= 50.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -538
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 12.00;
		~lu2	:= 47.00;
		~lu3	:= 41.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -539
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 39.00;
		~lu2	:= 20.00;
		~lu3	:= 41.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -540
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 92.00;
		~lu2	:= 1.00;
		~lu3	:= 7.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -541
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 5.00;
		~lu3	:= 94.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -542
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 11.00;
		~lu2	:= 2.00;
		~lu3	:= 87.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -543
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 21.00;
		~lu2	:= 79.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -544
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 37.00;
		~lu2	:= 38.00;
		~lu3	:= 25.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -545
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 17.00;
		~lu2	:= 83.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -546
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 22.00;
		~lu2	:= 33.00;
		~lu3	:= 45.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -547
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 28.00;
		~lu2	:= 65.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -548
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 51.00;
		~lu2	:= 7.00;
		~lu3	:= 42.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -549
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 20.00;
		~lu2	:= 80.00;
		~lu3	:= 0.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -550
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 26.00;
		~lu2	:= 17.00;
		~lu3	:= 57.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -551
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 21.00;
		~lu2	:= 1.00;
		~lu3	:= 78.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -552
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 78.00;
		~lu2	:= 10.00;
		~lu3	:= 12.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -553
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 86.00;
		~lu2	:= 7.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -554
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 7.00;
		~lu2	:= 73.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -555
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 21.00;
		~lu2	:= 74.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -556
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 26.00;
		~lu2	:= 2.00;
		~lu3	:= 72.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -557
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 0.00;
		~lu2	:= 0.00;
		~lu3	:= 100.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -558
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 19.00;
		~lu2	:= 41.00;
		~lu3	:= 40.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -559
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 15.00;
		~lu2	:= 49.00;
		~lu3	:= 36.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -560
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 39.00;
		~lu2	:= 27.00;
		~lu3	:= 34.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -561
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 48.00;
		~lu2	:= 50.00;
		~lu3	:= 2.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -562
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 39.00;
		~lu2	:= 12.00;
		~lu3	:= 49.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -563
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 65.00;
		~lu2	:= 13.00;
		~lu3	:= 22.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -564
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 52.00;
		~lu3	:= 39.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -565
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 62.00;
		~lu2	:= 18.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -566
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 15.00;
		~lu2	:= 24.00;
		~lu3	:= 61.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -567
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 12.00;
		~lu2	:= 44.00;
		~lu3	:= 44.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -568
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 17.00;
		~lu2	:= 1.00;
		~lu3	:= 82.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -569
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 77.00;
		~lu2	:= 11.00;
		~lu3	:= 12.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -570
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 8.00;
		~lu2	:= 48.00;
		~lu3	:= 44.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -571
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 65.00;
		~lu2	:= 9.00;
		~lu3	:= 26.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -572
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 9.00;
		~lu2	:= 63.00;
		~lu3	:= 28.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -573
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 98.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -574
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 8.00;
		~lu2	:= 62.00;
		~lu3	:= 30.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -575
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 91.00;
		~lu2	:= 8.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -576
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 69.00;
		~lu2	:= 22.00;
		~lu3	:= 9.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -577
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 37.00;
		~lu2	:= 41.00;
		~lu3	:= 22.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -578
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 13.00;
		~lu2	:= 70.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -579
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 45.00;
		~lu2	:= 21.00;
		~lu3	:= 34.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -580
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 51.00;
		~lu2	:= 18.00;
		~lu3	:= 31.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -581
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 67.00;
		~lu2	:= 17.00;
		~lu3	:= 16.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -582
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 97.00;
		~lu2	:= 0.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -583
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 14.00;
		~lu2	:= 77.00;
		~lu3	:= 9.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -584
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 54.00;
		~lu2	:= 23.00;
		~lu3	:= 23.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -585
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 15.00;
		~lu2	:= 61.00;
		~lu3	:= 24.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -586
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 22.00;
		~lu2	:= 13.00;
		~lu3	:= 65.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -587
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 86.00;
		~lu2	:= 2.00;
		~lu3	:= 12.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -588
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 72.00;
		~lu2	:= 27.00;
		~lu3	:= 1.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -589
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 1.00;
		~lu2	:= 92.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -590
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 1.00;
		~lu2	:= 9.00;
		~lu3	:= 90.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -591
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 6.00;
		~lu2	:= 11.00;
		~lu3	:= 83.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -592
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 6.00;
		~lu2	:= 93.00;
		~lu3	:= 1.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -593
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 75.00;
		~lu2	:= 20.00;
		~lu3	:= 5.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -594
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 29.00;
		~lu2	:= 64.00;
		~lu3	:= 7.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -595
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 0.00;
		~lu2	:= 46.00;
		~lu3	:= 54.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -596
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 85.00;
		~lu2	:= 4.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -597
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 6.00;
		~lu2	:= 14.00;
		~lu3	:= 80.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -598
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 75.00;
		~lu2	:= 7.00;
		~lu3	:= 18.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -599
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 11.00;
		~lu2	:= 1.00;
		~lu3	:= 88.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -600
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 47.00;
		~lu2	:= 8.00;
		~lu3	:= 45.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -601
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 28.00;
		~lu2	:= 52.00;
		~lu3	:= 20.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -602
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 36.00;
		~lu2	:= 60.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -603
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 76.00;
		~lu3	:= 22.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -604
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 47.00;
		~lu2	:= 2.00;
		~lu3	:= 51.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -605
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 95.00;
		~lu2	:= 2.00;
		~lu3	:= 3.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -606
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 89.00;
		~lu2	:= 7.00;
		~lu3	:= 4.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -607
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 13.00;
		~lu2	:= 86.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -608
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 62.00;
		~lu2	:= 20.00;
		~lu3	:= 18.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -609
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 89.00;
		~lu2	:= 0.00;
		~lu3	:= 11.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -610
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 84.00;
		~lu2	:= 3.00;
		~lu3	:= 13.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -611
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 18.00;
		~lu2	:= 50.00;
		~lu3	:= 32.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -612
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 21.00;
		~lu2	:= 2.00;
		~lu3	:= 77.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -613
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 58.00;
		~lu2	:= 25.00;
		~lu3	:= 17.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -614
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 24.00;
		~lu2	:= 5.00;
		~lu3	:= 71.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -615
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 12.00;
		~lu2	:= 76.00;
		~lu3	:= 12.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -616
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 94.00;
		~lu2	:= 1.00;
		~lu3	:= 5.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -617
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 22.00;
		~lu2	:= 52.00;
		~lu3	:= 26.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -618
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 100.00;
		~lu2	:= 0.00;
		~lu3	:= 0.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -619
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 86.00;
		~lu3	:= 3.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 1.60;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -620
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 43.00;
		~lu2	:= 11.00;
		~lu3	:= 46.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -621
	}

rule : { 
		~mgm	:= 1.00;
		~lu1	:= 48.00;
		~lu2	:= 49.00;
		~lu3	:= 3.00;
		~ue_cota	:= 252.33;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -622
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 2.00;
		~lu2	:= 75.00;
		~lu3	:= 23.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -623
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 95.00;
		~lu2	:= 4.00;
		~lu3	:= 1.00;
		~ue_cota	:= 332.51;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -624
	}

rule : { 
		~mgm	:= 3.00;
		~lu1	:= 11.00;
		~lu2	:= 2.00;
		~lu3	:= 87.00;
		~ue_cota	:= 412.69;
		~ua_tipo	:= 3.00;
		~ua_cota	:= 49.99;
		~alq	:= 0.00;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
	
	}
	 0 
	{ 
		(0,0)~mgm	= -625
	}

#EndMacro
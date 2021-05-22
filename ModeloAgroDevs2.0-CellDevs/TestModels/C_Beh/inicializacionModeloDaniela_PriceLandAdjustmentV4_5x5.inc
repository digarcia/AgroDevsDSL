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
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;		
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;	
		~copy_behaviour := 0;		
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;	
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;		
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
	}
	 0 
	{ 
		(0,0)~mgm	= -12
	}

rule : { 
		~mgm	:= 2.00;
		~lu1	:= 50.00;
		~lu2	:= 25.00;
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 1;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			

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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
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
		~camp_fullfil_economic_beh 	:= 0;
		~camp_fullfil_enviromental_beh	:= 0;
		~ptl_adj			:= 0;
		~plu_adj			:= 0;
		~wtl_adj			:= 0;
		~wlu_adj			:= 0;
		~wlu_adj_cro			:= 0;
		~cont_failed_campaign		:= 0;
		~cont_succesfull_campaign	:=  0;			
		~copy_behaviour := 0;			
	
	}
	 0 
	{ 
		(0,0)~mgm	= -25
	}

#EndMacro
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
		~mgm	:= 2;
		~lu1	:= 21;
		~lu2	:= 79;
		~lu3	:= 0;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 1;
		~lu2	:= 26;
		~lu3	:= 73;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 45;
		~lu2	:= 55;
		~lu3	:= 0;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 12;
		~lu2	:= 45;
		~lu3	:= 43;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 8;
		~lu2	:= 63;
		~lu3	:= 29;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 13;
		~lu2	:= 2;
		~lu3	:= 85;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 31;
		~lu2	:= 59;
		~lu3	:= 10;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 6;
		~lu2	:= 28;
		~lu3	:= 66;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 28;
		~lu2	:= 10;
		~lu3	:= 62;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 89;
		~lu2	:= 4;
		~lu3	:= 7;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 63;
		~lu2	:= 16;
		~lu3	:= 21;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 7;
		~lu2	:= 65;
		~lu3	:= 28;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 4;
		~lu2	:= 34;
		~lu3	:= 62;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 5;
		~lu2	:= 14;
		~lu3	:= 81;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 44;
		~lu2	:= 18;
		~lu3	:= 38;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 59;
		~lu2	:= 36;
		~lu3	:= 5;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 3;
		~lu2	:= 83;
		~lu3	:= 14;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 9;
		~lu2	:= 84;
		~lu3	:= 7;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 34;
		~lu2	:= 25;
		~lu3	:= 41;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 71;
		~lu2	:= 15;
		~lu3	:= 14;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 3;
		~lu1	:= 100;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 47;
		~lu2	:= 40;
		~lu3	:= 13;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 19;
		~lu2	:= 4;
		~lu3	:= 77;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 2;
		~lu1	:= 70;
		~lu2	:= 18;
		~lu3	:= 12;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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
		~mgm	:= 1;
		~lu1	:= 12;
		~lu2	:= 70;
		~lu3	:= 18;
		~ue_cota	:= 200;
		~ua_tipo	:= 1;
		~ua_cota	:= 44;
		~alq	:= 1.6;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;
		~roi                            := ?;
		~rue_cota			:= 0.1;
		~camp_fullfil_economic_beh 	:= 1;
		~camp_fullfil_enviromental_beh	:= 1;
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

#EndMacro
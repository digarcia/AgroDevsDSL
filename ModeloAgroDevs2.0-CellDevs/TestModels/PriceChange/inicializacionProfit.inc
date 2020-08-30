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
	}
	 0 
	{ 
		(0,0)~mgm	= -0.5
	}


rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -1
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -2
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -3
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -4
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -5
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -6
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -7
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -8
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -9
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -10
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -11
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -12
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 90;
		~lu2	:= 5;
		~lu3	:= 5;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 1;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -13
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -14
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -15
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -16
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -17
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 40;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -18
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -19
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -20
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -21
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -22
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -23
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -24
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 0;
		~lu2	:= 0;
		~lu3	:= 0;
		~ue_cota	:= 400;
		~ua_tipo	:= 3;
		~ua_cota	:= 50;
		~alq	:= 0;
		~amb 		:= ?;
		~pro 		:= ?;
		~eme	 	:= ?;
		~uae	 	:= 0;
		~uao	 	:= 0;
		~uee	 	:= 0;
		~ueo	 	:= 0;
		~deg		:= 0; 
		~etapa		:= 0; 
		~curr_lu1_price := ?;
		~curr_lu2_price := ?;
		~curr_lu4_price := ?;		
	}
	 0 
	{ 
		(0,0)~mgm	= -25
	}


#EndMacro
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
	}
	 0 
	{ 
		(0,0)~mgm	= -0.5
	}


rule : { 
		~mgm	:= 1;
		~lu1	:= 61;
		~lu2	:= 25;
		~lu3	:= 14;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -1
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 80;
		~lu2	:= 2;
		~lu3	:= 18;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -2
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 78;
		~lu2	:= 1;
		~lu3	:= 21;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -3
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 35;
		~lu2	:= 51;
		~lu3	:= 14;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -4
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 9;
		~lu2	:= 86;
		~lu3	:= 5;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -5
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 86;
		~lu2	:= 12;
		~lu3	:= 2;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -6
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 90;
		~lu2	:= 5;
		~lu3	:= 5;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -7
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 6;
		~lu2	:= 89;
		~lu3	:= 5;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -8
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 74;
		~lu2	:= 20;
		~lu3	:= 6;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -9
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 48;
		~lu2	:= 40;
		~lu3	:= 12;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -10
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 13;
		~lu2	:= 39;
		~lu3	:= 48;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -11
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 44;
		~lu2	:= 22;
		~lu3	:= 34;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -12
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 41;
		~lu2	:= 54;
		~lu3	:= 5;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -13
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 41;
		~lu2	:= 8;
		~lu3	:= 51;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -14
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 47;
		~lu2	:= 20;
		~lu3	:= 33;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -15
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 52;
		~lu2	:= 29;
		~lu3	:= 19;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -16
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 45;
		~lu2	:= 33;
		~lu3	:= 22;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -17
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 72;
		~lu2	:= 26;
		~lu3	:= 2;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -18
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 81;
		~lu2	:= 15;
		~lu3	:= 4;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -19
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 75;
		~lu2	:= 16;
		~lu3	:= 9;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -20
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 66;
		~lu2	:= 20;
		~lu3	:= 14;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -21
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 62;
		~lu2	:= 23;
		~lu3	:= 15;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -22
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 26;
		~lu2	:= 3;
		~lu3	:= 71;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -23
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 60;
		~lu2	:= 7;
		~lu3	:= 33;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -24
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 45;
		~lu2	:= 53;
		~lu3	:= 2;
		~ue_cota	:= 242.31;
		~ua_tipo	:= 3;
		~ua_cota	:= 57;
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
	}
	 0 
	{ 
		(0,0)~mgm	= -25
	}
	
	
#EndMacro
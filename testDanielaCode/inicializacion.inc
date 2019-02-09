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
		(0,0)~mgm	= -26
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 61;
		~lu2	:= 29;
		~lu3	:= 10;
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
		(0,0)~mgm	= -27
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 70;
		~lu2	:= 9;
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
		(0,0)~mgm	= -28
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 98;
		~lu2	:= 0;
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
		(0,0)~mgm	= -29
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 87;
		~lu2	:= 13;
		~lu3	:= 0;
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
		(0,0)~mgm	= -30
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 10;
		~lu2	:= 24;
		~lu3	:= 66;
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
		(0,0)~mgm	= -31
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 81;
		~lu2	:= 4;
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
		(0,0)~mgm	= -32
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 71;
		~lu2	:= 8;
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
		(0,0)~mgm	= -33
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 19;
		~lu2	:= 34;
		~lu3	:= 47;
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
		(0,0)~mgm	= -34
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 17;
		~lu2	:= 76;
		~lu3	:= 7;
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
		(0,0)~mgm	= -35
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 47;
		~lu2	:= 45;
		~lu3	:= 8;
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
		(0,0)~mgm	= -36
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 56;
		~lu2	:= 28;
		~lu3	:= 16;
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
		(0,0)~mgm	= -37
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 31;
		~lu2	:= 39;
		~lu3	:= 30;
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
		(0,0)~mgm	= -38
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 2;
		~lu2	:= 79;
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
		(0,0)~mgm	= -39
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 89;
		~lu2	:= 3;
		~lu3	:= 8;
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
		(0,0)~mgm	= -40
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 11;
		~lu2	:= 24;
		~lu3	:= 65;
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
		(0,0)~mgm	= -41
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 4;
		~lu2	:= 84;
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
		(0,0)~mgm	= -42
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 90;
		~lu2	:= 3;
		~lu3	:= 7;
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
		(0,0)~mgm	= -43
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 89;
		~lu2	:= 9;
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
		(0,0)~mgm	= -44
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 8;
		~lu2	:= 78;
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
		(0,0)~mgm	= -45
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 91;
		~lu2	:= 4;
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
		(0,0)~mgm	= -46
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 47;
		~lu2	:= 51;
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
		(0,0)~mgm	= -47
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 58;
		~lu2	:= 42;
		~lu3	:= 0;
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
		(0,0)~mgm	= -48
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 5;
		~lu2	:= 13;
		~lu3	:= 82;
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
		(0,0)~mgm	= -49
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 21;
		~lu2	:= 30;
		~lu3	:= 49;
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
		(0,0)~mgm	= -50
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 18;
		~lu2	:= 59;
		~lu3	:= 23;
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
		(0,0)~mgm	= -51
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 19;
		~lu2	:= 49;
		~lu3	:= 32;
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
		(0,0)~mgm	= -52
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 20;
		~lu2	:= 63;
		~lu3	:= 17;
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
		(0,0)~mgm	= -53
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 36;
		~lu2	:= 26;
		~lu3	:= 38;
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
		(0,0)~mgm	= -54
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 91;
		~lu2	:= 5;
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
		(0,0)~mgm	= -55
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 99;
		~lu2	:= 0;
		~lu3	:= 1;
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
		(0,0)~mgm	= -56
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 36;
		~lu2	:= 64;
		~lu3	:= 0;
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
		(0,0)~mgm	= -57
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 62;
		~lu2	:= 35;
		~lu3	:= 3;
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
		(0,0)~mgm	= -58
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 75;
		~lu2	:= 14;
		~lu3	:= 11;
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
		(0,0)~mgm	= -59
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 85;
		~lu2	:= 9;
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
		(0,0)~mgm	= -60
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 43;
		~lu2	:= 41;
		~lu3	:= 16;
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
		(0,0)~mgm	= -61
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 72;
		~lu2	:= 28;
		~lu3	:= 0;
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
		(0,0)~mgm	= -62
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 54;
		~lu2	:= 44;
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
		(0,0)~mgm	= -63
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 62;
		~lu2	:= 0;
		~lu3	:= 38;
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
		(0,0)~mgm	= -64
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 20;
		~lu2	:= 68;
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
		(0,0)~mgm	= -65
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 27;
		~lu2	:= 19;
		~lu3	:= 54;
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
		(0,0)~mgm	= -66
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 32;
		~lu2	:= 20;
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
		(0,0)~mgm	= -67
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 63;
		~lu2	:= 37;
		~lu3	:= 0;
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
		(0,0)~mgm	= -68
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 4;
		~lu2	:= 73;
		~lu3	:= 23;
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
		(0,0)~mgm	= -69
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 50;
		~lu2	:= 46;
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
		(0,0)~mgm	= -70
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 62;
		~lu2	:= 33;
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
		(0,0)~mgm	= -71
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 56;
		~lu2	:= 18;
		~lu3	:= 26;
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
		(0,0)~mgm	= -72
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 80;
		~lu2	:= 6;
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
		(0,0)~mgm	= -73
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 34;
		~lu2	:= 33;
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
		(0,0)~mgm	= -74
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 71;
		~lu2	:= 2;
		~lu3	:= 27;
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
		(0,0)~mgm	= -75
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 16;
		~lu2	:= 79;
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
		(0,0)~mgm	= -76
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 73;
		~lu2	:= 17;
		~lu3	:= 10;
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
		(0,0)~mgm	= -77
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 66;
		~lu2	:= 14;
		~lu3	:= 20;
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
		(0,0)~mgm	= -78
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 46;
		~lu2	:= 49;
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
		(0,0)~mgm	= -79
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 55;
		~lu2	:= 11;
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
		(0,0)~mgm	= -80
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 35;
		~lu2	:= 8;
		~lu3	:= 57;
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
		(0,0)~mgm	= -81
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 36;
		~lu2	:= 64;
		~lu3	:= 0;
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
		(0,0)~mgm	= -82
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 6;
		~lu2	:= 68;
		~lu3	:= 26;
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
		(0,0)~mgm	= -83
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 44;
		~lu2	:= 43;
		~lu3	:= 13;
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
		(0,0)~mgm	= -84
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 6;
		~lu2	:= 57;
		~lu3	:= 37;
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
		(0,0)~mgm	= -85
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 57;
		~lu2	:= 39;
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
		(0,0)~mgm	= -86
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 78;
		~lu2	:= 10;
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
		(0,0)~mgm	= -87
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 67;
		~lu2	:= 21;
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
		(0,0)~mgm	= -88
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 3;
		~lu2	:= 88;
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
		(0,0)~mgm	= -89
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 27;
		~lu2	:= 51;
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
		(0,0)~mgm	= -90
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 34;
		~lu2	:= 44;
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
		(0,0)~mgm	= -91
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 57;
		~lu2	:= 34;
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
		(0,0)~mgm	= -92
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 76;
		~lu2	:= 18;
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
		(0,0)~mgm	= -93
	}

rule : { 
		~mgm	:= 1;
		~lu1	:= 16;
		~lu2	:= 33;
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
		(0,0)~mgm	= -94
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 96;
		~lu2	:= 4;
		~lu3	:= 0;
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
		(0,0)~mgm	= -95
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 18;
		~lu2	:= 60;
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
		(0,0)~mgm	= -96
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 51;
		~lu2	:= 45;
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
		(0,0)~mgm	= -97
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 20;
		~lu2	:= 23;
		~lu3	:= 57;
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
		(0,0)~mgm	= -98
	}

rule : { 
		~mgm	:= 3;
		~lu1	:= 64;
		~lu2	:= 10;
		~lu3	:= 26;
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
		(0,0)~mgm	= -99
	}

rule : { 
		~mgm	:= 2;
		~lu1	:= 11;
		~lu2	:= 8;
		~lu3	:= 81;
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
		(0,0)~mgm	= -100
	}

#EndMacro
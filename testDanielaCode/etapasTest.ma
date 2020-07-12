[top]
components : changetest
[changetest]
type : cell
width : 12
height : 12
delay : transport
defaultDelayTime : 100
border : wrapped
neighbors : changetest(-1,-1) changetest(-1,0) changetest(-1,1)
neighbors : changetest(0,-1) changetest(0,0) changetest(0,1)
neighbors : changetest(1,-1) changetest(1,0) changetest(1,1)
initialvalue : 0
%initialrowvalue : 4 01001110
%initialrowvalue : 5 11001110
%initialrowvalue : 6 00001100
initialrowvalue : 4 010011100000
initialrowvalue : 5 110011100000
initialrowvalue : 6 000011000001
initialrowvalue : 11 000000000001

localtransition : move-rule

neighborports: value umbralok flag_paso
[move-rule]

rule : { ~value := ? ; } 100
{ (0,0)~value = 5 }

%rule : { ~value := 0 ; } 100
%{ (0,0)~value = ? }  Works OK !

rule : { ~value := 0 ; ~umbralok := ((0,0)~value); } 100
{ (0,0)~value = ? } %Works OK!

%rule : { ~value := 0 ; } 100
%{ isUndefined((0,0)~value) } %Parsing error syntax error, unexpected ')', expecting '!'


rule : { ~value := (0,0)~value+1; 
	 	 ~umbralok := 1; 
	 	 ~flag_paso := 2.3 ;
	 	} 
	 	100
{ ((0,0)~value = 2) or ((0,0)~value = 3) and ((0,0)~umbralok = 0 ) } 

rule : { ~value := (0,0)~value+1; 
	 	 ~umbralok := 2; 
	 	 ~flag_paso := 2.4 ;
	 	} 
	 	100
	 	{ (((0,0)~value = 2) or ((0,0)~value = 3))   } 
		

rule : { ~value := (0,0)~value+1; 
		~flag_paso := 0 ;
		 ~umbralok := 0; 
} 100
{ t }



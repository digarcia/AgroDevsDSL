[top]
components : changeTest
[changeTest]
type : cell
width : 8
height : 8
delay : transport
defaultDelayTime : 100
border : wrapped
neighbors : changeTest(-1,-1) changeTest(-1,0) changeTest(-1,1)
neighbors : changeTest(0,-1) changeTest(0,0) changeTest(0,1)
neighbors : changeTest(1,-1) changeTest(1,0) changeTest(1,1)
initialvalue : 0
initialrowvalue : 4 01001110
initialrowvalue : 5 11001110
initialrowvalue : 6 00001100

localtransition : move-rule


neighborports: value port0
[move-rule]

%rule : { ~value := ? ; } 100
%{ (0,0)~value = 5 }

%rule : { ~value := 0 ;  } 100
%{ (0,0)~value = ? } %Works OK!

%rule : { ~value := 0 ; ~port0 := ((0,0)~value); } 100
%{ isUndefined((0,0)~value) } %Parsing error syntax error, unexpected ')', expecting '!'

rule : { ~value := (0,0)~value+1; } 100
{ t }

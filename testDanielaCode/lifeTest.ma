[top]
components : life
[life]
type : cell
width : 21
height : 21
delay : transport
defaultDelayTime : 100
border : wrapped
neighbors : life(-1,-1) life(-1,0) life(-1,1)
neighbors : life(0,-1) life(0,0) life(0,1)
neighbors : life(1,-1) life(1,0) life(1,1)
initialvalue : 0
initialrowvalue : 4 000011100000000000000
initialrowvalue : 5 000011100010000000000
initialrowvalue : 6 000011100110000000000
initialrowvalue : 10 000000000111000000000
initialrowvalue : 11 000000000111000100000
initialrowvalue : 12 000000000111001100000
initialrowvalue : 14 000000000000001110000
initialrowvalue : 15 000000000000001110001
initialrowvalue : 16 000000000000001110011
localtransition : conrad-rule
neighborports : value
[conrad-rule]
rule : { ~value := 1; } 100
{ (0,0)~value = 1 and (statecount(1, ~value) = 3 or
statecount(1, ~value) = 4) }
rule : { ~value := 0; } 100
{ (0,0)~value = 1 and (statecount(1, ~value) < 3 or
statecount(1, ~value) > 4) }
rule : { ~value := 1; } 100
{ (0,0)~value = 0 and statecount(1, ~value) = 3 }
rule : { ~value := 0; } 100
{ (0,0)~value = 0 and statecount(1, ~value) != 3 }
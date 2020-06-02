[top]
components : campo 

[campo]
type : cell 
dim : (10, 10)
delay : transport
defaultDelayTime : 0
border : nowrapped
neighbors : campo(-1,-1)  campo(-1,0)  campo(-1,1)
neighbors : campo(0,-1)   campo(0,0)   campo(0,1)
neighbors : campo(1,-1)   campo(1,0)   campo(1,1)

initialvalue : 1


% variables
StateVariables: var1 var2
StateValues: 0 ?

% puertos
neighborports: port1 port2


% reglas
localtransition : cell-rule

[cell-rule]
rule: { 
		~port1 	:= (0,-1)~port1;
	}
	{
		$var1 := $var1 + 1;
	}
	 0
	{ 
		%isUndefined(4)		 and			% ok
		%not isUndefined(4) 	 and			% ok
		%isUndefined( $var1 ) and			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
		%isUndefined( $var2 ) %and			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
		isUndefined( $var2 ! 0) and			% ok: But dont know why. I Asume that takes $var2 as a tuple
		isUndefined( $var2 ! 4) and			% ok: But dont know why. I Asume that takes $var2 as a tuple
		isUndefined( [?]!0 )   % and		% ok: I asume that what happens is that isUndefined expects a tuple. But don't work with plain undef value
		%isUndefined(?)		 and			% not ok: Parsing error syntax error, unexpected UNDEF
		%isUndefined( (0,0)~port1 )			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
	}



% Default
rule : { 
	}
	{ }
	 0 
	{ t }

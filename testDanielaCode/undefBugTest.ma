[top]
components : campo 

[campo]
type : cell 
dim : (5, 5)
delay : transport
defaultDelayTime : 0
border : wrapped
neighbors : campo(-1,-1)  campo(-1,0)  campo(-1,1)
neighbors : campo(0,-1)   campo(0,0)   campo(0,1)
neighbors : campo(1,-1)   campo(1,0)   campo(1,1)

 initialvalue : -1


% variables
StateVariables: var0 var1 var2
StateValues: 0 1 ?

% puertos
neighborports: port0 port1 port2


% reglas
localtransition : cell-rule

[cell-rule]
rule: { 
		~port0 	:= 1; %$var0;
		~port1 	:= 2; %(0,-1)~port0;
		~port2 	:= 3; %$var2;
	}
	{
		$var0 := $var0 + 1;
	}
	 0
	{ 
		(0,0)~port1 = (0,-1)~port0
		%isUndefined(4)		 and			% ok
		%not isUndefined(4) 	 and			% ok
		%isUndefined( $var1 ) and			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
		%isUndefined( $var2 ) %and			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
		%isUndefined( $var2 ! 0) and			% ok: But dont know why. I Asume that takes $var2 as a tuple
		%isUndefined( $var2 ! 4) and			% ok: But dont know why. I Asume that takes $var2 as a tuple
		%isUndefined( [?]!0 )   % and		% ok: I asume that what happens is that isUndefined expects a tuple. But don't work with plain undef value
		%isUndefined(?)		 and			% not ok: Parsing error syntax error, unexpected UNDEF
		%isUndefined( (0,0)~port1 )			% not ok: Parsing error syntax error, unexpected ')', expecting '!'
	}

rule: { 
		~port0 	:= $var0;
		~port1 	:= (-1,0)~port0;
		~port2 	:= $var2;
	}
	{
		$var0 := $var0 + 0.5;
	}
	 0
	{ 
		t
	}

% Default
rule : { 
	}
	{ }
	 0 
	{ t }

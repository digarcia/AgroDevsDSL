// Define a grammar called AgroDevsDSL
grammar AgroDevsDSL;
program : steps ;                              // un programa es una inicializacion y una serie de pasos.
steps : (step)+ ;                              // La lista de pasos es una lista de pasos no vacia

// un paso tiene una precondicion,  variables de entrada, de salida y una lista de operaciones
step:  stepDeclaration stepName '{' precondition inputVars? outputVars? operations  '}' ;     
operations: (operation)+ ;
operation: tableAccess | calculation | cellDevsCodeDef | valueDelayCondition | valueDelaySelectNeighbour;


stepDeclaration: 'STEP' ;
stepName: ID ;
precondition: 'precondition' ':' '{' pasos '}' ;
pasos: (paso)* ;
paso: ID;
inputVars: 'inputVars' ':' '{'  varlist '}';
outputVars: 'outputVars'':' '{' varlist '}' ;
tableAccess: 'tableAccess' ;
calculation: 'calculation' ;
cellDevsCodeDef: 'cellDevsCode'':' cellDevsCodeValue ;
cellDevsCodeValue: STRING ;
valueDelayCondition: 'value'':' valueCode delay? 'condition'':' conditionCode ;
valueDelaySelectNeighbour: 'value'':' valueCode delay? 'selectNeighbour'':' selectNeighbourCode ;
delay: 'delay'':' delayCode ;
valueCode: STRING ;
delayCode: STRING ;
conditionCode: STRING ;
//selectNeighbourCode: STRING ;
selectNeighbourCode: '{' 'var'':' selectVarCode 'op'':' selectOperatorCode  'comparison'':' selectComparisonCode '}' ;
selectVarCode: STRING ;
selectOperatorCode: STRING ;
selectComparisonCode: STRING ; 

varlist:  varName (',' varName)* ;
varName: ID ;


//Lex part


//Standards
LINE_COMMENT : '//' .*? '\r'? '\n' -> skip ; // Match "//" stuff '\n'
COMMENT : '/*' .*? '*/' -> skip ; // Match "/*" stuff "*/"

ID : ('a'..'z'|'A'..'Z'|[0-9])+ ;
INT : [0-9]+ ;
STRING : '"' .*? '"' ; // match anything in "..."
WS : [ \t\n\r]+ -> skip ;

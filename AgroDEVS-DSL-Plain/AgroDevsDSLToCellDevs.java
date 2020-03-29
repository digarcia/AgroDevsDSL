/***
 * Excerpted from "The Definitive ANTLR 4 Reference",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/tpantlr2 for more book information.
***/
/** Convert AgroDevsDSL code into CellDevs Code */


import java.lang.String;
import java.util.ArrayList;

public class AgroDevsDSLToCellDevs extends AgroDevsDSLBaseListener {
	
	//Stack<Integer> stack = new Stack<Integer>();
	ArrayList<String> ports = new ArrayList<String>();
	ArrayList<String> vars = new ArrayList<String>();
	String newline = System.lineSeparator();
	
	
	// declaredVarlist
	// nodeVars
	// varDeclaration
	/** 
	 *  Translate an AgroDevs variable declaration into 
	 *  a cellDevs port declaration and a cellDevs "copy" var declaration.
	 *  Add both to global ports and vars lists
	 */
	@Override public void enterVarDeclaration(AgroDevsDSLParser.VarDeclarationContext ctx) { 
		//AgroDevsDSLParser.DeclaredVarlistContext declaredVarlist = ctx.declaredVarlist();
		String varDeclarationDescription = ctx.varDescription().getText();
		String varDeclarationID = ctx.ID().getText();
		//System.out.println("# varDeclarationDescription: ");
		ports.add(varDeclarationID);
		vars.add("c"+varDeclarationID);
		System.out.println("%"+varDeclarationID+":"+varDeclarationDescription);	
	}
	
	
	//nodeVars
	/** Generates 
	 *  a cellDevs port declaration and a cellDevs "copy" var declaration lists
	 */
	@Override public void exitNodeVars(AgroDevsDSLParser.NodeVarsContext ctx) { 
		//AgroDevsDSLParser.DeclaredVarlistContext declaredVarlist = ctx.declaredVarlist();
		//String varDeclarationDescription = ctx.varDescription().getText();
		//String varDeclarationID = ctx.ID().getText();
		//System.out.println("# varDeclarationDescription: ");
		//StateVariables
		System.out.print("StateVariables:");
		for(String var: vars) {
			System.out.print(" "+var);
		}
		System.out.println();
		System.out.print("StateValues:");
		for(String var: vars) {
			System.out.print(" 0");
		}
		System.out.println();
		
		System.out.print("neighborports:");
		for(String port: ports) {
			System.out.print(" "+port);
		}
		System.out.println();
		
	}
	
	
	
	
	/** Translate a Step into a CellDevs Step set of rules.
	* 1-Generate Step header comment
	*/
	@Override public void enterStep(AgroDevsDSLParser.StepContext ctx) { 
		String stepName = ctx.stepName().getText();
		System.out.println("# Step : "+stepName);	
	}
	
	
	/** Translate a CellDevs inline code declaration 
	 *  into cellDevsCode
	 */
	@Override public void enterCellDevsCodeDef(AgroDevsDSLParser.CellDevsCodeDefContext ctx) { 
		String cellDevsCode = ctx.cellDevsCodeValue().getText().replace("\"", "").replace("#", "#macro")  ;
		System.out.println("# CellDevs Code : ");	
		System.out.println(cellDevsCode);	
	}
	
	
	
	/** Translate a value-delay-condition declaration 
	 *  into cellDevsCode
	 */
	@Override public void enterValueDelayCondition(AgroDevsDSLParser.ValueDelayConditionContext ctx) { 
		String valueCode = ctx.valueCode().getText().replace("\"", "").replace("#", "#macro") ;
		AgroDevsDSLParser.DelayContext delay = ctx.delay();
		String delayCode = (delay == null || delay.delayCode() == null || delay.delayCode().equals(""))?"0":delay.delayCode().getText().replace("\"", "") ;
		String conditionCode = ctx.conditionCode().getText().replace("\"", "").replace("#", "#macro") ;;
		System.out.println("# ValueDelayCondition : ");	
		System.out.println("rule: {"+valueCode+"} "+delayCode+" { "+conditionCode+" }");	
	}
	
	
	/** Translate a value-delay-selectNeighbour declaration 
	 *  into cellDevsCode
	 */
	@Override public void enterValueDelaySelectNeighbour(AgroDevsDSLParser.ValueDelaySelectNeighbourContext ctx) { 
		String valueCode = ctx.valueCode().getText().replace("\"", "").replace("#", "#macro") ;
		AgroDevsDSLParser.DelayContext delay = ctx.delay();
		String delayCode = (delay == null || delay.delayCode() == null || delay.delayCode().equals(""))?"0":delay.delayCode().getText().replace("\"", "") ;
		// AgroDevsDSLParser.SelectNeighbourCodeContext
		AgroDevsDSLParser.SelectNeighbourCodeContext selectNeighbourCode = ctx.selectNeighbourCode();
		System.out.println("# ValueDelaySelectNeighbour : ");	
		//System.out.println("rule {"+valueCode+"} "+delayCode+" { "+selectNeighbourCode+" }");	
		//System.out.print("rule: {"+valueCode+"} "+delayCode+" " );
		String selectVarCode = selectNeighbourCode.selectVarCode().getText().replace("\"", "") ;
		String selectOperatorCode = selectNeighbourCode.selectOperatorCode().getText().replace("\"", "") ;
		String selectComparisonCode = selectNeighbourCode.selectComparisonCode().getText().replace("\"", "");		
		System.out.println("rule: {"+valueCode+"} "+delayCode+" SelectNeighbour("+selectVarCode+", "+selectOperatorCode+","+selectComparisonCode+")" );
		generateNeighboursRules(valueCode,delayCode,selectVarCode,selectOperatorCode,selectComparisonCode);
	}
	
	
	/** Translate a value-delay-selectNeighbour declaration 
	 *  into cellDevsCode
	 */
	 public void generateNeighboursRules(String valueCode, String delayCode, String selectVarCode, String selectOperatorCode, String selectComparisonCode ) {
		
	for (int i = -1; i <= 1; i++) {
		for (int j = -1; j <= 1; j++) {
		  if ( i != 0 || j!= 0 ) {
			  		String cellValue = "("+i+","+j+")";
					System.out.println("%"+cellValue);
					System.out.println(generateSingleNeighbourCopy(cellValue));
					generateSingleNeighbourRules(cellValue,valueCode,delayCode,selectVarCode,selectOperatorCode,selectComparisonCode);
		  }
		}
	}
		
	}
	
	public String generateSingleNeighbourCopy(String cellValue){
	String copyPortsToVars = "{"+newline+
		"$clu 		:= 1;"+newline+
		"$aju 		:= 3;"+newline+
		"$clu1 		:= "+cellValue+"~lu1"+newline+
		"}";
		return copyPortsToVars;
	}
	
	/** Translate a value-delay-selectNeighbour declaration 
	 *  into cellDevsCode
	 */
	 public void generateSingleNeighbourRules(String cellValue,String valueCode, String delayCode, String selectVarCode, String selectOperatorCode, String selectComparisonCode ) {
		 
		String cellVar = generateCellVar(cellValue,selectVarCode); // Ex: (0,1)~pro
		System.out.println("(not isUndefined("+cellValue+"~"+selectVarCode+")) and");
		System.out.println("(");
		System.out.println(cellVar+" "+selectOperatorCode+" "+selectComparisonCode+" ");
		for (int i = -1; i <= 1; i++) {
			for (int j = -1; j <= 1; j++) {
			  if ( i != 0 || j!= 0 ) {
						String otherCellValue = "("+i+","+j+")";
						if (!otherCellValue.equals(cellValue)) {
							String otherCellVar = generateCellVar(otherCellValue,selectVarCode);
							//Generate opposite operator
							System.out.println("and (isUndefined("+otherCellVar+") or "+otherCellVar+" <= "+cellVar+")");
						}
			  }
			}
		}
		System.out.println(")");
		 
	}
	
	private String generateCellVar(String cellValue, String varCode) {
		String cellVar = cellValue+"~"+varCode; // Ex: (0,1)~pro
		return cellVar;
	}
	
	
	/** Translate a selectNeighbourCode declaration 
	 *  into cellDevsCode
	 */
	@Override public void enterSelectNeighbourCode(AgroDevsDSLParser.SelectNeighbourCodeContext ctx) { 
		String selectVarCode = ctx.selectVarCode().getText().replace("\"", "") ;
		String selectOperatorCode = ctx.selectOperatorCode().getText().replace("\"", "") ;
		String selectComparisonCode = ctx.selectComparisonCode().getText().replace("\"", "");
		// System.out.println("# SelectNeighbour : ");	
		// System.out.println("SelectNeighbour("+selectVarCode+", "+selectOperatorCode+","+selectComparisonCode+")");	
	}
	
}

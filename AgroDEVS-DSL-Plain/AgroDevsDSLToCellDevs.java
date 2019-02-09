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

public class AgroDevsDSLToCellDevs extends AgroDevsDSLBaseListener {
	
	
	
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
		System.out.println("rule {"+valueCode+"} "+delayCode+" { "+conditionCode+" }");	
	}
	
}

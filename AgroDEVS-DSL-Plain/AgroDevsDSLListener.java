// Generated from AgroDevsDSL.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link AgroDevsDSLParser}.
 */
public interface AgroDevsDSLListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(AgroDevsDSLParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(AgroDevsDSLParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#steps}.
	 * @param ctx the parse tree
	 */
	void enterSteps(AgroDevsDSLParser.StepsContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#steps}.
	 * @param ctx the parse tree
	 */
	void exitSteps(AgroDevsDSLParser.StepsContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#step}.
	 * @param ctx the parse tree
	 */
	void enterStep(AgroDevsDSLParser.StepContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#step}.
	 * @param ctx the parse tree
	 */
	void exitStep(AgroDevsDSLParser.StepContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#operations}.
	 * @param ctx the parse tree
	 */
	void enterOperations(AgroDevsDSLParser.OperationsContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#operations}.
	 * @param ctx the parse tree
	 */
	void exitOperations(AgroDevsDSLParser.OperationsContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#operation}.
	 * @param ctx the parse tree
	 */
	void enterOperation(AgroDevsDSLParser.OperationContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#operation}.
	 * @param ctx the parse tree
	 */
	void exitOperation(AgroDevsDSLParser.OperationContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#stepDeclaration}.
	 * @param ctx the parse tree
	 */
	void enterStepDeclaration(AgroDevsDSLParser.StepDeclarationContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#stepDeclaration}.
	 * @param ctx the parse tree
	 */
	void exitStepDeclaration(AgroDevsDSLParser.StepDeclarationContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#stepName}.
	 * @param ctx the parse tree
	 */
	void enterStepName(AgroDevsDSLParser.StepNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#stepName}.
	 * @param ctx the parse tree
	 */
	void exitStepName(AgroDevsDSLParser.StepNameContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#precondition}.
	 * @param ctx the parse tree
	 */
	void enterPrecondition(AgroDevsDSLParser.PreconditionContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#precondition}.
	 * @param ctx the parse tree
	 */
	void exitPrecondition(AgroDevsDSLParser.PreconditionContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#inputVars}.
	 * @param ctx the parse tree
	 */
	void enterInputVars(AgroDevsDSLParser.InputVarsContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#inputVars}.
	 * @param ctx the parse tree
	 */
	void exitInputVars(AgroDevsDSLParser.InputVarsContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#outputVars}.
	 * @param ctx the parse tree
	 */
	void enterOutputVars(AgroDevsDSLParser.OutputVarsContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#outputVars}.
	 * @param ctx the parse tree
	 */
	void exitOutputVars(AgroDevsDSLParser.OutputVarsContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#tableAccess}.
	 * @param ctx the parse tree
	 */
	void enterTableAccess(AgroDevsDSLParser.TableAccessContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#tableAccess}.
	 * @param ctx the parse tree
	 */
	void exitTableAccess(AgroDevsDSLParser.TableAccessContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#calculation}.
	 * @param ctx the parse tree
	 */
	void enterCalculation(AgroDevsDSLParser.CalculationContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#calculation}.
	 * @param ctx the parse tree
	 */
	void exitCalculation(AgroDevsDSLParser.CalculationContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#varlist}.
	 * @param ctx the parse tree
	 */
	void enterVarlist(AgroDevsDSLParser.VarlistContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#varlist}.
	 * @param ctx the parse tree
	 */
	void exitVarlist(AgroDevsDSLParser.VarlistContext ctx);
	/**
	 * Enter a parse tree produced by {@link AgroDevsDSLParser#varName}.
	 * @param ctx the parse tree
	 */
	void enterVarName(AgroDevsDSLParser.VarNameContext ctx);
	/**
	 * Exit a parse tree produced by {@link AgroDevsDSLParser#varName}.
	 * @param ctx the parse tree
	 */
	void exitVarName(AgroDevsDSLParser.VarNameContext ctx);
}
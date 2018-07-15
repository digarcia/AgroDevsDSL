// Generated from Arithmetic.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeListener;

/**
 * This interface defines a complete listener for a parse tree produced by
 * {@link ArithmeticParser}.
 */
public interface ArithmeticListener extends ParseTreeListener {
	/**
	 * Enter a parse tree produced by {@link ArithmeticParser#program}.
	 * @param ctx the parse tree
	 */
	void enterProgram(ArithmeticParser.ProgramContext ctx);
	/**
	 * Exit a parse tree produced by {@link ArithmeticParser#program}.
	 * @param ctx the parse tree
	 */
	void exitProgram(ArithmeticParser.ProgramContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AlgebraicSum}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAlgebraicSum(ArithmeticParser.AlgebraicSumContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AlgebraicSum}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAlgebraicSum(ArithmeticParser.AlgebraicSumContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Multiplication}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterMultiplication(ArithmeticParser.MultiplicationContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Multiplication}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitMultiplication(ArithmeticParser.MultiplicationContext ctx);
	/**
	 * Enter a parse tree produced by the {@code AtomicTerm}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void enterAtomicTerm(ArithmeticParser.AtomicTermContext ctx);
	/**
	 * Exit a parse tree produced by the {@code AtomicTerm}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 */
	void exitAtomicTerm(ArithmeticParser.AtomicTermContext ctx);
	/**
	 * Enter a parse tree produced by the {@code Number}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 */
	void enterNumber(ArithmeticParser.NumberContext ctx);
	/**
	 * Exit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 */
	void exitNumber(ArithmeticParser.NumberContext ctx);
	/**
	 * Enter a parse tree produced by the {@code InnerExpression}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 */
	void enterInnerExpression(ArithmeticParser.InnerExpressionContext ctx);
	/**
	 * Exit a parse tree produced by the {@code InnerExpression}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 */
	void exitInnerExpression(ArithmeticParser.InnerExpressionContext ctx);
	/**
	 * Enter a parse tree produced by {@link ArithmeticParser#realNumber}.
	 * @param ctx the parse tree
	 */
	void enterRealNumber(ArithmeticParser.RealNumberContext ctx);
	/**
	 * Exit a parse tree produced by {@link ArithmeticParser#realNumber}.
	 * @param ctx the parse tree
	 */
	void exitRealNumber(ArithmeticParser.RealNumberContext ctx);
}
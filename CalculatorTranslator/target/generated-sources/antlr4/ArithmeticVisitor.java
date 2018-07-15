// Generated from Arithmetic.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.tree.ParseTreeVisitor;

/**
 * This interface defines a complete generic visitor for a parse tree produced
 * by {@link ArithmeticParser}.
 *
 * @param <T> The return type of the visit operation. Use {@link Void} for
 * operations with no return type.
 */
public interface ArithmeticVisitor<T> extends ParseTreeVisitor<T> {
	/**
	 * Visit a parse tree produced by {@link ArithmeticParser#program}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitProgram(ArithmeticParser.ProgramContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AlgebraicSum}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAlgebraicSum(ArithmeticParser.AlgebraicSumContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Multiplication}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitMultiplication(ArithmeticParser.MultiplicationContext ctx);
	/**
	 * Visit a parse tree produced by the {@code AtomicTerm}
	 * labeled alternative in {@link ArithmeticParser#expression}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitAtomicTerm(ArithmeticParser.AtomicTermContext ctx);
	/**
	 * Visit a parse tree produced by the {@code Number}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitNumber(ArithmeticParser.NumberContext ctx);
	/**
	 * Visit a parse tree produced by the {@code InnerExpression}
	 * labeled alternative in {@link ArithmeticParser#term}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitInnerExpression(ArithmeticParser.InnerExpressionContext ctx);
	/**
	 * Visit a parse tree produced by {@link ArithmeticParser#realNumber}.
	 * @param ctx the parse tree
	 * @return the visitor result
	 */
	T visitRealNumber(ArithmeticParser.RealNumberContext ctx);
}
/***
 * Excerpted from "The Definitive ANTLR 4 Reference",
 * published by The Pragmatic Bookshelf.
 * Copyrights apply to this code. It may not be used to create training material, 
 * courses, books, articles, and the like. Contact us if you are in doubt.
 * We make no guarantees that this code is fit for any purpose. 
 * Visit http://www.pragmaticprogrammer.com/titles/tpantlr2 for more book information.
***/
// import ANTLR's runtime libraries
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.tree.*;

public class Translate {
    public static void main(String[] args) throws Exception {
        // create a CharStream that reads from standard input
        //ANTLRInputStream input = new ANTLRInputStream(System.in);
        CharStream input = CharStreams.fromFileName(args[0]);
        // create a lexer that feeds off of input CharStream
        AgroDevsDSLLexer lexer = new AgroDevsDSLLexer(input);
        // create a buffer of tokens pulled from the lexer
        CommonTokenStream tokens = new CommonTokenStream(lexer);
        // create a parser that feeds off the tokens buffer
        AgroDevsDSLParser parser = new AgroDevsDSLParser(tokens);
        ParseTree tree = parser.program(); // begin parsing at program rule

        // Create a generic parse tree walker that can trigger callbacks
        ParseTreeWalker walker = new ParseTreeWalker();
        // Walk the tree created during the parse, trigger callbacks
        walker.walk(new AgroDevsDSLToCellDevs(), tree);
        System.out.println(); // print a \n after translation
    }
}

package antlr4;


import jdk.nashorn.internal.ir.annotations.Ignore;
import org.antlr.runtime.*;
import org.junit.jupiter.api.Disabled;
import org.junit.jupiter.api.Test;

import java.io.IOException;
import java.io.InputStream;
import java.io.StringReader;


public class CalculatorTranslatorTest {

    @Test
    public void testExploratoryString() throws Exception {

        String simplestProgram = "1+2+3";

        /*CharStream inputCharStream = new ANTLRInputStream(new StringReader(simplestProgram));
        TokenSource tokenSource = new ArithmeticLexer(inputCharStream);
        TokenStream inputTokenStream = new CommonTokenStream(tokenSource);
        ShapePlacerParser parser = new ArithmeticParser(inputTokenStream);

        parser.addErrorListener(new TestErrorListener());

        ArithmeticParser.ProgramContext context = parser.program();

        logger.info(context.toString());*/
    }

    @Disabled
    @Test
    public void testFailedTestCase() throws Exception {
        String simplestProgram = "1+2+3";
        throw new Exception();
    }
}



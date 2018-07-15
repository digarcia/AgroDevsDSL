// Generated from AgroDevsDSL.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class AgroDevsDSLLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		T__0=1, T__1=2, T__2=3, T__3=4, T__4=5, T__5=6, T__6=7, T__7=8, T__8=9, 
		T__9=10, LINE_COMMENT=11, COMMENT=12, ID=13, INT=14, STRING=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
		"T__9", "LINE_COMMENT", "COMMENT", "ID", "INT", "STRING"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'{'", "'}'", "'STEP'", "'precondition'", "':'", "'inputVars'", 
		"'outputVars'", "'TableAccess'", "'Calculation'", "','"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, null, null, null, null, null, null, null, null, null, null, "LINE_COMMENT", 
		"COMMENT", "ID", "INT", "STRING"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}


	public AgroDevsDSLLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "AgroDevsDSL.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\21\u0099\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\3\2\3\2\3\3\3\3"+
		"\3\4\3\4\3\4\3\4\3\4\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3\5\3"+
		"\5\3\6\3\6\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\7\3\b\3\b\3\b\3\b\3\b"+
		"\3\b\3\b\3\b\3\b\3\b\3\b\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3\t\3"+
		"\t\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\n\3\13\3\13\3\f\3\f\3"+
		"\f\3\f\7\fm\n\f\f\f\16\fp\13\f\3\f\5\fs\n\f\3\f\3\f\3\f\3\f\3\r\3\r\3"+
		"\r\3\r\7\r}\n\r\f\r\16\r\u0080\13\r\3\r\3\r\3\r\3\r\3\r\3\16\6\16\u0088"+
		"\n\16\r\16\16\16\u0089\3\17\6\17\u008d\n\17\r\17\16\17\u008e\3\20\3\20"+
		"\7\20\u0093\n\20\f\20\16\20\u0096\13\20\3\20\3\20\5n~\u0094\2\21\3\3\5"+
		"\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17\35\20\37\21"+
		"\3\2\4\5\2\62;C\\c|\3\2\62;\2\u009e\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2"+
		"\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23"+
		"\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2"+
		"\2\2\2\37\3\2\2\2\3!\3\2\2\2\5#\3\2\2\2\7%\3\2\2\2\t*\3\2\2\2\13\67\3"+
		"\2\2\2\r9\3\2\2\2\17C\3\2\2\2\21N\3\2\2\2\23Z\3\2\2\2\25f\3\2\2\2\27h"+
		"\3\2\2\2\31x\3\2\2\2\33\u0087\3\2\2\2\35\u008c\3\2\2\2\37\u0090\3\2\2"+
		"\2!\"\7}\2\2\"\4\3\2\2\2#$\7\177\2\2$\6\3\2\2\2%&\7U\2\2&\'\7V\2\2\'("+
		"\7G\2\2()\7R\2\2)\b\3\2\2\2*+\7r\2\2+,\7t\2\2,-\7g\2\2-.\7e\2\2./\7q\2"+
		"\2/\60\7p\2\2\60\61\7f\2\2\61\62\7k\2\2\62\63\7v\2\2\63\64\7k\2\2\64\65"+
		"\7q\2\2\65\66\7p\2\2\66\n\3\2\2\2\678\7<\2\28\f\3\2\2\29:\7k\2\2:;\7p"+
		"\2\2;<\7r\2\2<=\7w\2\2=>\7v\2\2>?\7X\2\2?@\7c\2\2@A\7t\2\2AB\7u\2\2B\16"+
		"\3\2\2\2CD\7q\2\2DE\7w\2\2EF\7v\2\2FG\7r\2\2GH\7w\2\2HI\7v\2\2IJ\7X\2"+
		"\2JK\7c\2\2KL\7t\2\2LM\7u\2\2M\20\3\2\2\2NO\7V\2\2OP\7c\2\2PQ\7d\2\2Q"+
		"R\7n\2\2RS\7g\2\2ST\7C\2\2TU\7e\2\2UV\7e\2\2VW\7g\2\2WX\7u\2\2XY\7u\2"+
		"\2Y\22\3\2\2\2Z[\7E\2\2[\\\7c\2\2\\]\7n\2\2]^\7e\2\2^_\7w\2\2_`\7n\2\2"+
		"`a\7c\2\2ab\7v\2\2bc\7k\2\2cd\7q\2\2de\7p\2\2e\24\3\2\2\2fg\7.\2\2g\26"+
		"\3\2\2\2hi\7\61\2\2ij\7\61\2\2jn\3\2\2\2km\13\2\2\2lk\3\2\2\2mp\3\2\2"+
		"\2no\3\2\2\2nl\3\2\2\2or\3\2\2\2pn\3\2\2\2qs\7\17\2\2rq\3\2\2\2rs\3\2"+
		"\2\2st\3\2\2\2tu\7\f\2\2uv\3\2\2\2vw\b\f\2\2w\30\3\2\2\2xy\7\61\2\2yz"+
		"\7,\2\2z~\3\2\2\2{}\13\2\2\2|{\3\2\2\2}\u0080\3\2\2\2~\177\3\2\2\2~|\3"+
		"\2\2\2\177\u0081\3\2\2\2\u0080~\3\2\2\2\u0081\u0082\7,\2\2\u0082\u0083"+
		"\7\61\2\2\u0083\u0084\3\2\2\2\u0084\u0085\b\r\2\2\u0085\32\3\2\2\2\u0086"+
		"\u0088\t\2\2\2\u0087\u0086\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u0087\3\2"+
		"\2\2\u0089\u008a\3\2\2\2\u008a\34\3\2\2\2\u008b\u008d\t\3\2\2\u008c\u008b"+
		"\3\2\2\2\u008d\u008e\3\2\2\2\u008e\u008c\3\2\2\2\u008e\u008f\3\2\2\2\u008f"+
		"\36\3\2\2\2\u0090\u0094\7$\2\2\u0091\u0093\13\2\2\2\u0092\u0091\3\2\2"+
		"\2\u0093\u0096\3\2\2\2\u0094\u0095\3\2\2\2\u0094\u0092\3\2\2\2\u0095\u0097"+
		"\3\2\2\2\u0096\u0094\3\2\2\2\u0097\u0098\7$\2\2\u0098 \3\2\2\2\n\2nr~"+
		"\u0087\u0089\u008e\u0094\3\b\2\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}
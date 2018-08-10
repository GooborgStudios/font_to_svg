//
// unicode_blocks/symbols.hpp - font_to_svg
// Vinyl Darkscratch © 2018, MIT License.
// www.queengoob.org
// 
// Unicode Standard Version: 11.0
// This file contains the following unicode blocks:
// - Unicode Symbols
// - Block Elements
// - Geometric Shapes
// - General Punctuation
// - Superscripts and Subscripts
// - Currency Symbols
// - Letterlike Symbols
// - Number Forms
// - Arrows
// - Miscellaneous Symbols and Arrows
// - Supplemental Arrows-A
// - Supplemental Arrows-B
// - Supplemental Arrows-C
// - Mathematical Operators
// - Supplemental Mathematical Operators
// - Miscellaneous Mathematical Symbols-A
// - Miscellaneous Mathematical Symbols-B
// - Mathematical Alphanumeric Symbols
// - Miscellaneous Technical
// - Optical Character Recognition
// - Enclosed Alphanumerics
// - Box Drawing
// - Miscellaneous Symbols
// - Dingbat
// - Braille Patterns
// - Musical Symbols
// - Byzantine Musical Symbols
// - Ancient Greek Musical Notation
// - Duployan
// - Shorthand Format Controls
// - Sutton SignWriting
// - Alchemical Symbols
// - Chess Symbols
// - Domino Tiles
// - Mahjong Tiles
// - Playing Cards
// 

#define UNICODE_SYMBOLS \
	genSvg(fontname, "0x2013", "EN DASH"); \
	genSvg(fontname, "0x2014", "EM DASH"); \
	genSvg(fontname, "0x2015", "HORIZONTAL BAR"); \
	genSvg(fontname, "0x2017", "DOUBLE LOW LINE"); \
	genSvg(fontname, "0x2018", "LEFT SINGLE QUOTATION MARK"); \
	genSvg(fontname, "0x2019", "RIGHT SINGLE QUOTATION MARK"); \
	genSvg(fontname, "0x201A", "SINGLE LOW-9 QUOTATION MARK"); \
	genSvg(fontname, "0x201B", "SINGLE HIGH-REVERSED-9 QUOTATION MARK"); \
	genSvg(fontname, "0x201C", "LEFT DOUBLE QUOTATION MARK"); \
	genSvg(fontname, "0x201D", "RIGHT DOUBLE QUOTATION MARK"); \
	genSvg(fontname, "0x201E", "DOUBLE LOW-9 QUOTATION MARK"); \
	genSvg(fontname, "0x2020", "DAGGER"); \
	genSvg(fontname, "0x2021", "DOUBLE DAGGER"); \
	genSvg(fontname, "0x2022", "BULLET"); \
	genSvg(fontname, "0x2026", "HORIZONTAL ELLIPSIS"); \
	genSvg(fontname, "0x2030", "PER MILLE SIGN"); \
	genSvg(fontname, "0x2032", "PRIME"); \
	genSvg(fontname, "0x2033", "DOUBLE PRIME"); \
	genSvg(fontname, "0x2039", "SINGLE LEFT-POINTING ANGLE QUOTATION MARK"); \
	genSvg(fontname, "0x203A", "SINGLE RIGHT-POINTING ANGLE QUOTATION MARK"); \
	genSvg(fontname, "0x203C", "DOUBLE EXCLAMATION MARK"); \
	genSvg(fontname, "0x203E", "OVERLINE"); \
	genSvg(fontname, "0x2044", "FRACTION SLASH"); \
	genSvg(fontname, "0x204A", "TIRONIAN ET SIGN");

#define GENERAL_PUNCTUATION \
	genSvg(fontname, "0x2000", "EN QUAD"); \
	genSvg(fontname, "0x2001", "EM QUAD"); \
	genSvg(fontname, "0x2002", "EN SPACE"); \
	genSvg(fontname, "0x2003", "EM SPACE"); \
	genSvg(fontname, "0x2004", "THREE-PER-EM SPACE"); \
	genSvg(fontname, "0x2005", "FOUR-PER-EM SPACE"); \
	genSvg(fontname, "0x2006", "SIX-PER-EM SPACE"); \
	genSvg(fontname, "0x2007", "FIGURE SPACE"); \
	genSvg(fontname, "0x2008", "PUNCTUATION SPACE"); \
	genSvg(fontname, "0x2009", "THIN SPACE"); \
	genSvg(fontname, "0x200A", "HAIR SPACE"); \
	genSvg(fontname, "0x200B", "ZERO WIDTH SPACE"); \
	genSvg(fontname, "0x200C", "ZERO WIDTH NON-JOINER"); \
	genSvg(fontname, "0x200D", "ZERO WIDTH JOINER"); \
	genSvg(fontname, "0x200E", "LEFT-TO-RIGHT MARK"); \
	genSvg(fontname, "0x200F", "RIGHT-TO-LEFT MARK"); \
	genSvg(fontname, "0x2010", "HYPHEN"); \
	genSvg(fontname, "0x2011", "NON-BREAKING HYPHEN"); \
	genSvg(fontname, "0x2012", "FIGURE DASH"); \
	genSvg(fontname, "0x2013", "EN DASH"); \
	genSvg(fontname, "0x2014", "EM DASH"); \
	genSvg(fontname, "0x2015", "HORIZONTAL BAR"); \
	genSvg(fontname, "0x2016", "DOUBLE VERTICAL LINE"); \
	genSvg(fontname, "0x2017", "DOUBLE LOW LINE"); \
	genSvg(fontname, "0x2018", "LEFT SINGLE QUOTATION MARK"); \
	genSvg(fontname, "0x2019", "RIGHT SINGLE QUOTATION MARK"); \
	genSvg(fontname, "0x201A", "SINGLE LOW-9 QUOTATION MARK"); \
	genSvg(fontname, "0x201B", "SINGLE HIGH-REVERSED-9 QUOTATION MARK"); \
	genSvg(fontname, "0x201C", "LEFT DOUBLE QUOTATION MARK"); \
	genSvg(fontname, "0x201D", "RIGHT DOUBLE QUOTATION MARK"); \
	genSvg(fontname, "0x201E", "DOUBLE LOW-9 QUOTATION MARK"); \
	genSvg(fontname, "0x201F", "DOUBLE HIGH-REVERSED-9 QUOTATION MARK"); \
	genSvg(fontname, "0x2020", "DAGGER"); \
	genSvg(fontname, "0x2021", "DOUBLE DAGGER"); \
	genSvg(fontname, "0x2022", "BULLET"); \
	genSvg(fontname, "0x2023", "TRIANGULAR BULLET"); \
	genSvg(fontname, "0x2024", "ONE DOT LEADER"); \
	genSvg(fontname, "0x2025", "TWO DOT LEADER"); \
	genSvg(fontname, "0x2026", "HORIZONTAL ELLIPSIS"); \
	genSvg(fontname, "0x2027", "HYPHENATION POINT"); \
	genSvg(fontname, "0x2028", "LINE SEPARATOR"); \
	genSvg(fontname, "0x2029", "PARAGRAPH SEPARATOR"); \
	genSvg(fontname, "0x202A", "LEFT-TO-RIGHT EMBEDDING"); \
	genSvg(fontname, "0x202B", "RIGHT-TO-LEFT EMBEDDING"); \
	genSvg(fontname, "0x202C", "POP DIRECTIONAL FORMATTING"); \
	genSvg(fontname, "0x202D", "LEFT-TO-RIGHT OVERRIDE"); \
	genSvg(fontname, "0x202E", "RIGHT-TO-LEFT OVERRIDE"); \
	genSvg(fontname, "0x202F", "NARROW NO-BREAK SPACE"); \
	genSvg(fontname, "0x2030", "PER MILLE SIGN"); \
	genSvg(fontname, "0x2031", "PER TEN THOUSAND SIGN"); \
	genSvg(fontname, "0x2032", "PRIME"); \
	genSvg(fontname, "0x2033", "DOUBLE PRIME"); \
	genSvg(fontname, "0x2034", "TRIPLE PRIME"); \
	genSvg(fontname, "0x2035", "REVERSED PRIME"); \
	genSvg(fontname, "0x2036", "REVERSED DOUBLE PRIME"); \
	genSvg(fontname, "0x2037", "REVERSED TRIPLE PRIME"); \
	genSvg(fontname, "0x2038", "CARET"); \
	genSvg(fontname, "0x2039", "SINGLE LEFT-POINTING ANGLE QUOTATION MARK"); \
	genSvg(fontname, "0x203A", "SINGLE RIGHT-POINTING ANGLE QUOTATION MARK"); \
	genSvg(fontname, "0x203B", "REFERENCE MARK"); \
	genSvg(fontname, "0x203C", "DOUBLE EXCLAMATION MARK"); \
	genSvg(fontname, "0x203D", "INTERROBANG"); \
	genSvg(fontname, "0x203E", "OVERLINE"); \
	genSvg(fontname, "0x203F", "UNDERTIE"); \
	genSvg(fontname, "0x2040", "CHARACTER TIE"); \
	genSvg(fontname, "0x2041", "CARET INSERTION POINT"); \
	genSvg(fontname, "0x2042", "ASTERISM"); \
	genSvg(fontname, "0x2043", "HYPHEN BULLET"); \
	genSvg(fontname, "0x2044", "FRACTION SLASH"); \
	genSvg(fontname, "0x2045", "LEFT SQUARE BRACKET WITH QUILL"); \
	genSvg(fontname, "0x2046", "RIGHT SQUARE BRACKET WITH QUILL"); \
	genSvg(fontname, "0x2047", "DOUBLE QUESTION MARK"); \
	genSvg(fontname, "0x2048", "QUESTION EXCLAMATION MARK"); \
	genSvg(fontname, "0x2049", "EXCLAMATION QUESTION MARK"); \
	genSvg(fontname, "0x204A", "TIRONIAN SIGN ET"); \
	genSvg(fontname, "0x204B", "REVERSED PILCROW SIGN"); \
	genSvg(fontname, "0x204C", "BLACK LEFTWARDS BULLET"); \
	genSvg(fontname, "0x204D", "BLACK RIGHTWARDS BULLET"); \
	genSvg(fontname, "0x204E", "LOW ASTERISK"); \
	genSvg(fontname, "0x204F", "REVERSED SEMICOLON"); \
	genSvg(fontname, "0x2050", "CLOSE UP"); \
	genSvg(fontname, "0x2051", "TWO ASTERISKS ALIGNED VERTICALLY"); \
	genSvg(fontname, "0x2052", "COMMERCIAL MINUS SIGN"); \
	genSvg(fontname, "0x2053", "SWUNG DASH"); \
	genSvg(fontname, "0x2054", "INVERTED UNDERTIE"); \
	genSvg(fontname, "0x2055", "FLOWER PUNCTUATION MARK"); \
	genSvg(fontname, "0x2056", "THREE DOT PUNCTUATION"); \
	genSvg(fontname, "0x2057", "QUADRUPLE PRIME"); \
	genSvg(fontname, "0x2058", "FOUR DOT PUNCTUATION"); \
	genSvg(fontname, "0x2059", "FIVE DOT PUNCTUATION"); \
	genSvg(fontname, "0x205A", "TWO DOT PUNCTUATION"); \
	genSvg(fontname, "0x205B", "FOUR DOT MARK"); \
	genSvg(fontname, "0x205C", "DOTTED CROSS"); \
	genSvg(fontname, "0x205D", "TRICOLON"); \
	genSvg(fontname, "0x205E", "VERTICAL FOUR DOTS"); \
	genSvg(fontname, "0x205F", "MEDIUM MATHEMATICAL SPACE"); \
	genSvg(fontname, "0x2060", "WORD JOINER"); \
	genSvg(fontname, "0x2061", "FUNCTION APPLICATION"); \
	genSvg(fontname, "0x2062", "INVISIBLE TIMES"); \
	genSvg(fontname, "0x2063", "INVISIBLE SEPARATOR"); \
	genSvg(fontname, "0x2064", "INVISIBLE PLUS"); \
	genSvg(fontname, "0x2066", "LEFT-TO-RIGHT ISOLATE"); \
	genSvg(fontname, "0x2067", "RIGHT-TO-LEFT ISOLATE"); \
	genSvg(fontname, "0x2068", "FIRST STRONG ISOLATE"); \
	genSvg(fontname, "0x2069", "POP DIRECTIONAL ISOLATE"); \
	genSvg(fontname, "0x206A", "INHIBIT SYMMETRIC SWAPPING"); \
	genSvg(fontname, "0x206B", "ACTIVATE SYMMETRIC SWAPPING"); \
	genSvg(fontname, "0x206C", "INHIBIT ARABIC FORM SHAPING"); \
	genSvg(fontname, "0x206D", "ACTIVATE ARABIC FORM SHAPING"); \
	genSvg(fontname, "0x206E", "NATIONAL DIGIT SHAPES"); \
	genSvg(fontname, "0x206F", "NOMINAL DIGIT SHAPES");

#define SUPERSCRIPTS_AND_SUBSCRIPTS \
	genSvg(fontname, "0x2070", "SUPERSCRIPT ZERO"); \
	genSvg(fontname, "0x2071", "SUPERSCRIPT LATIN SMALL LETTER I"); \
	genSvg(fontname, "0x2074", "SUPERSCRIPT FOUR"); \
	genSvg(fontname, "0x2075", "SUPERSCRIPT FIVE"); \
	genSvg(fontname, "0x2076", "SUPERSCRIPT SIX"); \
	genSvg(fontname, "0x2077", "SUPERSCRIPT SEVEN"); \
	genSvg(fontname, "0x2078", "SUPERSCRIPT EIGHT"); \
	genSvg(fontname, "0x2079", "SUPERSCRIPT NINE"); \
	genSvg(fontname, "0x207A", "SUPERSCRIPT PLUS SIGN"); \
	genSvg(fontname, "0x207B", "SUPERSCRIPT MINUS"); \
	genSvg(fontname, "0x207C", "SUPERSCRIPT EQUALS SIGN"); \
	genSvg(fontname, "0x207D", "SUPERSCRIPT LEFT PARENTHESIS"); \
	genSvg(fontname, "0x207E", "SUPERSCRIPT RIGHT PARENTHESIS"); \
	genSvg(fontname, "0x207F", "SUPERSCRIPT LATIN SMALL LETTER N"); \
	genSvg(fontname, "0x2080", "SUBSCRIPT ZERO"); \
	genSvg(fontname, "0x2081", "SUBSCRIPT ONE"); \
	genSvg(fontname, "0x2082", "SUBSCRIPT TWO"); \
	genSvg(fontname, "0x2083", "SUBSCRIPT THREE"); \
	genSvg(fontname, "0x2084", "SUBSCRIPT FOUR"); \
	genSvg(fontname, "0x2085", "SUBSCRIPT FIVE"); \
	genSvg(fontname, "0x2086", "SUBSCRIPT SIX"); \
	genSvg(fontname, "0x2087", "SUBSCRIPT SEVEN"); \
	genSvg(fontname, "0x2088", "SUBSCRIPT EIGHT"); \
	genSvg(fontname, "0x2089", "SUBSCRIPT NINE"); \
	genSvg(fontname, "0x208A", "SUBSCRIPT PLUS SIGN"); \
	genSvg(fontname, "0x208B", "SUBSCRIPT MINUS"); \
	genSvg(fontname, "0x208C", "SUBSCRIPT EQUALS SIGN"); \
	genSvg(fontname, "0x208D", "SUBSCRIPT LEFT PARENTHESIS"); \
	genSvg(fontname, "0x208E", "SUBSCRIPT RIGHT PARENTHESIS"); \
	genSvg(fontname, "0x2090", "LATIN SUBSCRIPT SMALL LETTER A"); \
	genSvg(fontname, "0x2091", "LATIN SUBSCRIPT SMALL LETTER E"); \
	genSvg(fontname, "0x2092", "LATIN SUBSCRIPT SMALL LETTER O"); \
	genSvg(fontname, "0x2093", "LATIN SUBSCRIPT SMALL LETTER X"); \
	genSvg(fontname, "0x2094", "LATIN SUBSCRIPT SMALL LETTER SCHWA"); \
	genSvg(fontname, "0x2095", "LATIN SUBSCRIPT SMALL LETTER H"); \
	genSvg(fontname, "0x2096", "LATIN SUBSCRIPT SMALL LETTER K"); \
	genSvg(fontname, "0x2097", "LATIN SUBSCRIPT SMALL LETTER L"); \
	genSvg(fontname, "0x2098", "LATIN SUBSCRIPT SMALL LETTER M"); \
	genSvg(fontname, "0x2099", "LATIN SUBSCRIPT SMALL LETTER N"); \
	genSvg(fontname, "0x209A", "LATIN SUBSCRIPT SMALL LETTER P"); \
	genSvg(fontname, "0x209B", "LATIN SUBSCRIPT SMALL LETTER S"); \
	genSvg(fontname, "0x209C", "LATIN SUBSCRIPT SMALL LETTER T");

#define CURRENCY_SYMBOLS \
	genSvg(fontname, "0x20A0", "EURO-CURRENCY SIGN"); \
	genSvg(fontname, "0x20A1", "COLON SIGN"); \
	genSvg(fontname, "0x20A2", "CRUZEIRO SIGN"); \
	genSvg(fontname, "0x20A3", "FRENCH FRANC SIGN"); \
	genSvg(fontname, "0x20A4", "LIRA SIGN"); \
	genSvg(fontname, "0x20A5", "MILL SIGN"); \
	genSvg(fontname, "0x20A6", "NAIRA SIGN"); \
	genSvg(fontname, "0x20A7", "PESETA SIGN"); \
	genSvg(fontname, "0x20A8", "RUPEE SIGN"); \
	genSvg(fontname, "0x20A9", "WON SIGN"); \
	genSvg(fontname, "0x20AA", "NEW SHEQEL SIGN"); \
	genSvg(fontname, "0x20AB", "DONG SIGN"); \
	genSvg(fontname, "0x20AC", "EURO SIGN"); \
	genSvg(fontname, "0x20AD", "KIP SIGN"); \
	genSvg(fontname, "0x20AE", "TUGRIK SIGN"); \
	genSvg(fontname, "0x20AF", "DRACHMA SIGN"); \
	genSvg(fontname, "0x20B0", "GERMAN PENNY SIGN"); \
	genSvg(fontname, "0x20B1", "PESO SIGN"); \
	genSvg(fontname, "0x20B2", "GUARANI SIGN"); \
	genSvg(fontname, "0x20B3", "AUSTRAL SIGN"); \
	genSvg(fontname, "0x20B4", "HRYVNIA SIGN"); \
	genSvg(fontname, "0x20B5", "CEDI SIGN"); \
	genSvg(fontname, "0x20B6", "LIVRE TOURNOIS SIGN"); \
	genSvg(fontname, "0x20B7", "SPESMILO SIGN"); \
	genSvg(fontname, "0x20B8", "TENGE SIGN"); \
	genSvg(fontname, "0x20B9", "INDIAN RUPEE SIGN"); \
	genSvg(fontname, "0x20BA", "TURKISH LIRA SIGN"); \
	genSvg(fontname, "0x20BB", "NORDIC MARK SIGN"); \
	genSvg(fontname, "0x20BC", "MANAT SIGN"); \
	genSvg(fontname, "0x20BD", "RUBLE SIGN"); \
	genSvg(fontname, "0x20BE", "LARI SIGN"); \
	genSvg(fontname, "0x20BF", "BITCOIN SIGN");

#define LETTERLIKE_SYMBOLS \
	genSvg(fontname, "0x2100", "ACCOUNT OF"); \
	genSvg(fontname, "0x2101", "ADDRESSED TO THE SUBJECT"); \
	genSvg(fontname, "0x2102", "DOUBLE-STRUCK CAPITAL C"); \
	genSvg(fontname, "0x2103", "DEGREE CELSIUS"); \
	genSvg(fontname, "0x2104", "CENTRE LINE SYMBOL"); \
	genSvg(fontname, "0x2105", "CARE OF"); \
	genSvg(fontname, "0x2106", "CADA UNA"); \
	genSvg(fontname, "0x2107", "EULER CONSTANT"); \
	genSvg(fontname, "0x2108", "SCRUPLE"); \
	genSvg(fontname, "0x2109", "DEGREE FAHRENHEIT"); \
	genSvg(fontname, "0x210A", "SCRIPT SMALL G"); \
	genSvg(fontname, "0x210B", "SCRIPT CAPITAL H"); \
	genSvg(fontname, "0x210C", "BLACK-LETTER CAPITAL H"); \
	genSvg(fontname, "0x210D", "DOUBLE-STRUCK CAPITAL H"); \
	genSvg(fontname, "0x210E", "PLANCK CONSTANT"); \
	genSvg(fontname, "0x210F", "PLANCK CONSTANT OVER TWO PI"); \
	genSvg(fontname, "0x2110", "SCRIPT CAPITAL I"); \
	genSvg(fontname, "0x2111", "BLACK-LETTER CAPITAL I"); \
	genSvg(fontname, "0x2112", "SCRIPT CAPITAL L"); \
	genSvg(fontname, "0x2113", "SCRIPT SMALL L"); \
	genSvg(fontname, "0x2114", "L B BAR SYMBOL"); \
	genSvg(fontname, "0x2115", "DOUBLE-STRUCK CAPITAL N"); \
	genSvg(fontname, "0x2116", "NUMERO SIGN"); \
	genSvg(fontname, "0x2117", "SOUND RECORDING COPYRIGHT"); \
	genSvg(fontname, "0x2118", "SCRIPT CAPITAL P"); \
	genSvg(fontname, "0x2119", "DOUBLE-STRUCK CAPITAL P"); \
	genSvg(fontname, "0x211A", "DOUBLE-STRUCK CAPITAL Q"); \
	genSvg(fontname, "0x211B", "SCRIPT CAPITAL R"); \
	genSvg(fontname, "0x211C", "BLACK-LETTER CAPITAL R"); \
	genSvg(fontname, "0x211D", "DOUBLE-STRUCK CAPITAL R"); \
	genSvg(fontname, "0x211E", "PRESCRIPTION TAKE"); \
	genSvg(fontname, "0x211F", "RESPONSE"); \
	genSvg(fontname, "0x2120", "SERVICE MARK"); \
	genSvg(fontname, "0x2121", "TELEPHONE SIGN"); \
	genSvg(fontname, "0x2122", "TRADE MARK SIGN"); \
	genSvg(fontname, "0x2123", "VERSICLE"); \
	genSvg(fontname, "0x2124", "DOUBLE-STRUCK CAPITAL Z"); \
	genSvg(fontname, "0x2125", "OUNCE SIGN"); \
	genSvg(fontname, "0x2126", "OHM SIGN"); \
	genSvg(fontname, "0x2127", "INVERTED OHM SIGN"); \
	genSvg(fontname, "0x2128", "BLACK-LETTER CAPITAL Z"); \
	genSvg(fontname, "0x2129", "TURNED GREEK SMALL LETTER IOTA"); \
	genSvg(fontname, "0x212A", "KELVIN SIGN"); \
	genSvg(fontname, "0x212B", "ANGSTROM SIGN"); \
	genSvg(fontname, "0x212C", "SCRIPT CAPITAL B"); \
	genSvg(fontname, "0x212D", "BLACK-LETTER CAPITAL C"); \
	genSvg(fontname, "0x212E", "ESTIMATED SYMBOL"); \
	genSvg(fontname, "0x212F", "SCRIPT SMALL E"); \
	genSvg(fontname, "0x2130", "SCRIPT CAPITAL E"); \
	genSvg(fontname, "0x2131", "SCRIPT CAPITAL F"); \
	genSvg(fontname, "0x2132", "TURNED CAPITAL F"); \
	genSvg(fontname, "0x2133", "SCRIPT CAPITAL M"); \
	genSvg(fontname, "0x2134", "SCRIPT SMALL O"); \
	genSvg(fontname, "0x2135", "ALEF SYMBOL"); \
	genSvg(fontname, "0x2136", "BET SYMBOL"); \
	genSvg(fontname, "0x2137", "GIMEL SYMBOL"); \
	genSvg(fontname, "0x2138", "DALET SYMBOL"); \
	genSvg(fontname, "0x2139", "INFORMATION SOURCE"); \
	genSvg(fontname, "0x213A", "ROTATED CAPITAL Q"); \
	genSvg(fontname, "0x213B", "FACSIMILE SIGN"); \
	genSvg(fontname, "0x213C", "DOUBLE-STRUCK SMALL PI"); \
	genSvg(fontname, "0x213D", "DOUBLE-STRUCK SMALL GAMMA"); \
	genSvg(fontname, "0x213E", "DOUBLE-STRUCK CAPITAL GAMMA"); \
	genSvg(fontname, "0x213F", "DOUBLE-STRUCK CAPITAL PI"); \
	genSvg(fontname, "0x2140", "DOUBLE-STRUCK N-ARY SUMMATION"); \
	genSvg(fontname, "0x2141", "TURNED SANS-SERIF CAPITAL G"); \
	genSvg(fontname, "0x2142", "TURNED SANS-SERIF CAPITAL L"); \
	genSvg(fontname, "0x2143", "REVERSED SANS-SERIF CAPITAL L"); \
	genSvg(fontname, "0x2144", "TURNED SANS-SERIF CAPITAL Y"); \
	genSvg(fontname, "0x2145", "DOUBLE-STRUCK ITALIC CAPITAL D"); \
	genSvg(fontname, "0x2146", "DOUBLE-STRUCK ITALIC SMALL D"); \
	genSvg(fontname, "0x2147", "DOUBLE-STRUCK ITALIC SMALL E"); \
	genSvg(fontname, "0x2148", "DOUBLE-STRUCK ITALIC SMALL I"); \
	genSvg(fontname, "0x2149", "DOUBLE-STRUCK ITALIC SMALL J"); \
	genSvg(fontname, "0x214A", "PROPERTY LINE"); \
	genSvg(fontname, "0x214B", "TURNED AMPERSAND"); \
	genSvg(fontname, "0x214C", "PER SIGN"); \
	genSvg(fontname, "0x214D", "AKTIESELSKAB"); \
	genSvg(fontname, "0x214E", "TURNED SMALL F"); \
	genSvg(fontname, "0x214F", "SYMBOL FOR SAMARITAN SOURCE");

#define NUMBER_FORMS \
	genSvg(fontname, "0x2150", "VULGAR FRACTION ONE SEVENTH"); \
	genSvg(fontname, "0x2151", "VULGAR FRACTION ONE NINTH"); \
	genSvg(fontname, "0x2152", "VULGAR FRACTION ONE TENTH"); \
	genSvg(fontname, "0x2153", "VULGAR FRACTION ONE THIRD"); \
	genSvg(fontname, "0x2154", "VULGAR FRACTION TWO THIRDS"); \
	genSvg(fontname, "0x2155", "VULGAR FRACTION ONE FIFTH"); \
	genSvg(fontname, "0x2156", "VULGAR FRACTION TWO FIFTHS"); \
	genSvg(fontname, "0x2157", "VULGAR FRACTION THREE FIFTHS"); \
	genSvg(fontname, "0x2158", "VULGAR FRACTION FOUR FIFTHS"); \
	genSvg(fontname, "0x2159", "VULGAR FRACTION ONE SIXTH"); \
	genSvg(fontname, "0x215A", "VULGAR FRACTION FIVE SIXTHS"); \
	genSvg(fontname, "0x215B", "VULGAR FRACTION ONE EIGHTH"); \
	genSvg(fontname, "0x215C", "VULGAR FRACTION THREE EIGHTHS"); \
	genSvg(fontname, "0x215D", "VULGAR FRACTION FIVE EIGHTHS"); \
	genSvg(fontname, "0x215E", "VULGAR FRACTION SEVEN EIGHTHS"); \
	genSvg(fontname, "0x215F", "FRACTION NUMERATOR ONE"); \
	genSvg(fontname, "0x2160", "ROMAN NUMERAL ONE"); \
	genSvg(fontname, "0x2161", "ROMAN NUMERAL TWO"); \
	genSvg(fontname, "0x2162", "ROMAN NUMERAL THREE"); \
	genSvg(fontname, "0x2163", "ROMAN NUMERAL FOUR"); \
	genSvg(fontname, "0x2164", "ROMAN NUMERAL FIVE"); \
	genSvg(fontname, "0x2165", "ROMAN NUMERAL SIX"); \
	genSvg(fontname, "0x2166", "ROMAN NUMERAL SEVEN"); \
	genSvg(fontname, "0x2167", "ROMAN NUMERAL EIGHT"); \
	genSvg(fontname, "0x2168", "ROMAN NUMERAL NINE"); \
	genSvg(fontname, "0x2169", "ROMAN NUMERAL TEN"); \
	genSvg(fontname, "0x216A", "ROMAN NUMERAL ELEVEN"); \
	genSvg(fontname, "0x216B", "ROMAN NUMERAL TWELVE"); \
	genSvg(fontname, "0x216C", "ROMAN NUMERAL FIFTY"); \
	genSvg(fontname, "0x216D", "ROMAN NUMERAL ONE HUNDRED"); \
	genSvg(fontname, "0x216E", "ROMAN NUMERAL FIVE HUNDRED"); \
	genSvg(fontname, "0x216F", "ROMAN NUMERAL ONE THOUSAND"); \
	genSvg(fontname, "0x2170", "SMALL ROMAN NUMERAL ONE"); \
	genSvg(fontname, "0x2171", "SMALL ROMAN NUMERAL TWO"); \
	genSvg(fontname, "0x2172", "SMALL ROMAN NUMERAL THREE"); \
	genSvg(fontname, "0x2173", "SMALL ROMAN NUMERAL FOUR"); \
	genSvg(fontname, "0x2174", "SMALL ROMAN NUMERAL FIVE"); \
	genSvg(fontname, "0x2175", "SMALL ROMAN NUMERAL SIX"); \
	genSvg(fontname, "0x2176", "SMALL ROMAN NUMERAL SEVEN"); \
	genSvg(fontname, "0x2177", "SMALL ROMAN NUMERAL EIGHT"); \
	genSvg(fontname, "0x2178", "SMALL ROMAN NUMERAL NINE"); \
	genSvg(fontname, "0x2179", "SMALL ROMAN NUMERAL TEN"); \
	genSvg(fontname, "0x217A", "SMALL ROMAN NUMERAL ELEVEN"); \
	genSvg(fontname, "0x217B", "SMALL ROMAN NUMERAL TWELVE"); \
	genSvg(fontname, "0x217C", "SMALL ROMAN NUMERAL FIFTY"); \
	genSvg(fontname, "0x217D", "SMALL ROMAN NUMERAL ONE HUNDRED"); \
	genSvg(fontname, "0x217E", "SMALL ROMAN NUMERAL FIVE HUNDRED"); \
	genSvg(fontname, "0x217F", "SMALL ROMAN NUMERAL ONE THOUSAND"); \
	genSvg(fontname, "0x2180", "ROMAN NUMERAL ONE THOUSAND C D"); \
	genSvg(fontname, "0x2181", "ROMAN NUMERAL FIVE THOUSAND"); \
	genSvg(fontname, "0x2182", "ROMAN NUMERAL TEN THOUSAND"); \
	genSvg(fontname, "0x2183", "ROMAN NUMERAL REVERSED ONE HUNDRED"); \
	genSvg(fontname, "0x2184", "LATIN SMALL LETTER REVERSED C"); \
	genSvg(fontname, "0x2185", "ROMAN NUMERAL SIX LATE FORM"); \
	genSvg(fontname, "0x2186", "ROMAN NUMERAL FIFTY EARLY FORM"); \
	genSvg(fontname, "0x2187", "ROMAN NUMERAL FIFTY THOUSAND"); \
	genSvg(fontname, "0x2188", "ROMAN NUMERAL ONE HUNDRED THOUSAND"); \
	genSvg(fontname, "0x2189", "VULGAR FRACTION ZERO THIRDS"); \
	genSvg(fontname, "0x218A", "TURNED DIGIT TWO"); \
	genSvg(fontname, "0x218B", "TURNED DIGIT THREE");

#define ARROWS \
	genSvg(fontname, "0x2190", "LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2191", "UPWARDS ARROW"); \
	genSvg(fontname, "0x2192", "RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2193", "DOWNWARDS ARROW"); \
	genSvg(fontname, "0x2194", "LEFT RIGHT ARROW"); \
	genSvg(fontname, "0x2195", "UP DOWN ARROW"); \
	genSvg(fontname, "0x2196", "NORTH WEST ARROW"); \
	genSvg(fontname, "0x2197", "NORTH EAST ARROW"); \
	genSvg(fontname, "0x2198", "SOUTH EAST ARROW"); \
	genSvg(fontname, "0x2199", "SOUTH WEST ARROW"); \
	genSvg(fontname, "0x219A", "LEFTWARDS ARROW WITH STROKE"); \
	genSvg(fontname, "0x219B", "RIGHTWARDS ARROW WITH STROKE"); \
	genSvg(fontname, "0x219C", "LEFTWARDS WAVE ARROW"); \
	genSvg(fontname, "0x219D", "RIGHTWARDS WAVE ARROW"); \
	genSvg(fontname, "0x219E", "LEFTWARDS TWO HEADED ARROW"); \
	genSvg(fontname, "0x219F", "UPWARDS TWO HEADED ARROW"); \
	genSvg(fontname, "0x21A0", "RIGHTWARDS TWO HEADED ARROW"); \
	genSvg(fontname, "0x21A1", "DOWNWARDS TWO HEADED ARROW"); \
	genSvg(fontname, "0x21A2", "LEFTWARDS ARROW WITH TAIL"); \
	genSvg(fontname, "0x21A3", "RIGHTWARDS ARROW WITH TAIL"); \
	genSvg(fontname, "0x21A4", "LEFTWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x21A5", "UPWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x21A6", "RIGHTWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x21A7", "DOWNWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x21A8", "UP DOWN ARROW WITH BASE"); \
	genSvg(fontname, "0x21A9", "LEFTWARDS ARROW WITH HOOK"); \
	genSvg(fontname, "0x21AA", "RIGHTWARDS ARROW WITH HOOK"); \
	genSvg(fontname, "0x21AB", "LEFTWARDS ARROW WITH LOOP"); \
	genSvg(fontname, "0x21AC", "RIGHTWARDS ARROW WITH LOOP"); \
	genSvg(fontname, "0x21AD", "LEFT RIGHT WAVE ARROW"); \
	genSvg(fontname, "0x21AE", "LEFT RIGHT ARROW WITH STROKE"); \
	genSvg(fontname, "0x21AF", "DOWNWARDS ZIGZAG ARROW"); \
	genSvg(fontname, "0x21B0", "UPWARDS ARROW WITH TIP LEFTWARDS"); \
	genSvg(fontname, "0x21B1", "UPWARDS ARROW WITH TIP RIGHTWARDS"); \
	genSvg(fontname, "0x21B2", "DOWNWARDS ARROW WITH TIP LEFTWARDS"); \
	genSvg(fontname, "0x21B3", "DOWNWARDS ARROW WITH TIP RIGHTWARDS"); \
	genSvg(fontname, "0x21B4", "RIGHTWARDS ARROW WITH CORNER DOWNWARDS"); \
	genSvg(fontname, "0x21B5", "DOWNWARDS ARROW WITH CORNER LEFTWARDS"); \
	genSvg(fontname, "0x21B6", "ANTICLOCKWISE TOP SEMICIRCLE ARROW"); \
	genSvg(fontname, "0x21B7", "CLOCKWISE TOP SEMICIRCLE ARROW"); \
	genSvg(fontname, "0x21B8", "NORTH WEST ARROW TO LONG BAR"); \
	genSvg(fontname, "0x21B9", "LEFTWARDS ARROW TO BAR OVER RIGHTWARDS ARROW TO BAR"); \
	genSvg(fontname, "0x21BA", "ANTICLOCKWISE OPEN CIRCLE ARROW"); \
	genSvg(fontname, "0x21BB", "CLOCKWISE OPEN CIRCLE ARROW"); \
	genSvg(fontname, "0x21BC", "LEFTWARDS HARPOON WITH BARB UPWARDS"); \
	genSvg(fontname, "0x21BD", "LEFTWARDS HARPOON WITH BARB DOWNWARDS"); \
	genSvg(fontname, "0x21BE", "UPWARDS HARPOON WITH BARB RIGHTWARDS"); \
	genSvg(fontname, "0x21BF", "UPWARDS HARPOON WITH BARB LEFTWARDS"); \
	genSvg(fontname, "0x21C0", "RIGHTWARDS HARPOON WITH BARB UPWARDS"); \
	genSvg(fontname, "0x21C1", "RIGHTWARDS HARPOON WITH BARB DOWNWARDS"); \
	genSvg(fontname, "0x21C2", "DOWNWARDS HARPOON WITH BARB RIGHTWARDS"); \
	genSvg(fontname, "0x21C3", "DOWNWARDS HARPOON WITH BARB LEFTWARDS"); \
	genSvg(fontname, "0x21C4", "RIGHTWARDS ARROW OVER LEFTWARDS ARROW"); \
	genSvg(fontname, "0x21C5", "UPWARDS ARROW LEFTWARDS OF DOWNWARDS ARROW"); \
	genSvg(fontname, "0x21C6", "LEFTWARDS ARROW OVER RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x21C7", "LEFTWARDS PAIRED ARROWS"); \
	genSvg(fontname, "0x21C8", "UPWARDS PAIRED ARROWS"); \
	genSvg(fontname, "0x21C9", "RIGHTWARDS PAIRED ARROWS"); \
	genSvg(fontname, "0x21CA", "DOWNWARDS PAIRED ARROWS"); \
	genSvg(fontname, "0x21CB", "LEFTWARDS HARPOON OVER RIGHTWARDS HARPOON"); \
	genSvg(fontname, "0x21CC", "RIGHTWARDS HARPOON OVER LEFTWARDS HARPOON"); \
	genSvg(fontname, "0x21CD", "LEFTWARDS DOUBLE ARROW WITH STROKE"); \
	genSvg(fontname, "0x21CE", "LEFT RIGHT DOUBLE ARROW WITH STROKE"); \
	genSvg(fontname, "0x21CF", "RIGHTWARDS DOUBLE ARROW WITH STROKE"); \
	genSvg(fontname, "0x21D0", "LEFTWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x21D1", "UPWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x21D2", "RIGHTWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x21D3", "DOWNWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x21D4", "LEFT RIGHT DOUBLE ARROW"); \
	genSvg(fontname, "0x21D5", "UP DOWN DOUBLE ARROW"); \
	genSvg(fontname, "0x21D6", "NORTH WEST DOUBLE ARROW"); \
	genSvg(fontname, "0x21D7", "NORTH EAST DOUBLE ARROW"); \
	genSvg(fontname, "0x21D8", "SOUTH EAST DOUBLE ARROW"); \
	genSvg(fontname, "0x21D9", "SOUTH WEST DOUBLE ARROW"); \
	genSvg(fontname, "0x21DA", "LEFTWARDS TRIPLE ARROW"); \
	genSvg(fontname, "0x21DB", "RIGHTWARDS TRIPLE ARROW"); \
	genSvg(fontname, "0x21DC", "LEFTWARDS SQUIGGLE ARROW"); \
	genSvg(fontname, "0x21DD", "RIGHTWARDS SQUIGGLE ARROW"); \
	genSvg(fontname, "0x21DE", "UPWARDS ARROW WITH DOUBLE STROKE"); \
	genSvg(fontname, "0x21DF", "DOWNWARDS ARROW WITH DOUBLE STROKE"); \
	genSvg(fontname, "0x21E0", "LEFTWARDS DASHED ARROW"); \
	genSvg(fontname, "0x21E1", "UPWARDS DASHED ARROW"); \
	genSvg(fontname, "0x21E2", "RIGHTWARDS DASHED ARROW"); \
	genSvg(fontname, "0x21E3", "DOWNWARDS DASHED ARROW"); \
	genSvg(fontname, "0x21E4", "LEFTWARDS ARROW TO BAR"); \
	genSvg(fontname, "0x21E5", "RIGHTWARDS ARROW TO BAR"); \
	genSvg(fontname, "0x21E6", "LEFTWARDS WHITE ARROW"); \
	genSvg(fontname, "0x21E7", "UPWARDS WHITE ARROW"); \
	genSvg(fontname, "0x21E8", "RIGHTWARDS WHITE ARROW"); \
	genSvg(fontname, "0x21E9", "DOWNWARDS WHITE ARROW"); \
	genSvg(fontname, "0x21EA", "UPWARDS WHITE ARROW FROM BAR"); \
	genSvg(fontname, "0x21EB", "UPWARDS WHITE ARROW ON PEDESTAL"); \
	genSvg(fontname, "0x21EC", "UPWARDS WHITE ARROW ON PEDESTAL WITH HORIZONTAL BAR"); \
	genSvg(fontname, "0x21ED", "UPWARDS WHITE ARROW ON PEDESTAL WITH VERTICAL BAR"); \
	genSvg(fontname, "0x21EE", "UPWARDS WHITE DOUBLE ARROW"); \
	genSvg(fontname, "0x21EF", "UPWARDS WHITE DOUBLE ARROW ON PEDESTAL"); \
	genSvg(fontname, "0x21F0", "RIGHTWARDS WHITE ARROW FROM WALL"); \
	genSvg(fontname, "0x21F1", "NORTH WEST ARROW TO CORNER"); \
	genSvg(fontname, "0x21F2", "SOUTH EAST ARROW TO CORNER"); \
	genSvg(fontname, "0x21F3", "UP DOWN WHITE ARROW"); \
	genSvg(fontname, "0x21F4", "RIGHT ARROW WITH SMALL CIRCLE"); \
	genSvg(fontname, "0x21F5", "DOWNWARDS ARROW LEFTWARDS OF UPWARDS ARROW"); \
	genSvg(fontname, "0x21F6", "THREE RIGHTWARDS ARROWS"); \
	genSvg(fontname, "0x21F7", "LEFTWARDS ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x21F8", "RIGHTWARDS ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x21F9", "LEFT RIGHT ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x21FA", "LEFTWARDS ARROW WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x21FB", "RIGHTWARDS ARROW WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x21FC", "LEFT RIGHT ARROW WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x21FD", "LEFTWARDS OPEN-HEADED ARROW"); \
	genSvg(fontname, "0x21FE", "RIGHTWARDS OPEN-HEADED ARROW"); \
	genSvg(fontname, "0x21FF", "LEFT RIGHT OPEN-HEADED ARROW");

#define MISCELLANEOUS_SYMBOLS_AND_ARROWS \
	genSvg(fontname, "0x2B00", "NORTH EAST WHITE ARROW"); \
	genSvg(fontname, "0x2B01", "NORTH WEST WHITE ARROW"); \
	genSvg(fontname, "0x2B02", "SOUTH EAST WHITE ARROW"); \
	genSvg(fontname, "0x2B03", "SOUTH WEST WHITE ARROW"); \
	genSvg(fontname, "0x2B04", "LEFT RIGHT WHITE ARROW"); \
	genSvg(fontname, "0x2B05", "LEFTWARDS BLACK ARROW"); \
	genSvg(fontname, "0x2B06", "UPWARDS BLACK ARROW"); \
	genSvg(fontname, "0x2B07", "DOWNWARDS BLACK ARROW"); \
	genSvg(fontname, "0x2B08", "NORTH EAST BLACK ARROW"); \
	genSvg(fontname, "0x2B09", "NORTH WEST BLACK ARROW"); \
	genSvg(fontname, "0x2B0A", "SOUTH EAST BLACK ARROW"); \
	genSvg(fontname, "0x2B0B", "SOUTH WEST BLACK ARROW"); \
	genSvg(fontname, "0x2B0C", "LEFT RIGHT BLACK ARROW"); \
	genSvg(fontname, "0x2B0D", "UP DOWN BLACK ARROW"); \
	genSvg(fontname, "0x2B0E", "RIGHTWARDS ARROW WITH TIP DOWNWARDS"); \
	genSvg(fontname, "0x2B0F", "RIGHTWARDS ARROW WITH TIP UPWARDS"); \
	genSvg(fontname, "0x2B10", "LEFTWARDS ARROW WITH TIP DOWNWARDS"); \
	genSvg(fontname, "0x2B11", "LEFTWARDS ARROW WITH TIP UPWARDS"); \
	genSvg(fontname, "0x2B12", "SQUARE WITH TOP HALF BLACK"); \
	genSvg(fontname, "0x2B13", "SQUARE WITH BOTTOM HALF BLACK"); \
	genSvg(fontname, "0x2B14", "SQUARE WITH UPPER RIGHT DIAGONAL HALF BLACK"); \
	genSvg(fontname, "0x2B15", "SQUARE WITH LOWER LEFT DIAGONAL HALF BLACK"); \
	genSvg(fontname, "0x2B16", "DIAMOND WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x2B17", "DIAMOND WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x2B18", "DIAMOND WITH TOP HALF BLACK"); \
	genSvg(fontname, "0x2B19", "DIAMOND WITH BOTTOM HALF BLACK"); \
	genSvg(fontname, "0x2B1A", "DOTTED SQUARE"); \
	genSvg(fontname, "0x2B1B", "BLACK LARGE SQUARE"); \
	genSvg(fontname, "0x2B1C", "WHITE LARGE SQUARE"); \
	genSvg(fontname, "0x2B1D", "BLACK VERY SMALL SQUARE"); \
	genSvg(fontname, "0x2B1E", "WHITE VERY SMALL SQUARE"); \
	genSvg(fontname, "0x2B1F", "BLACK PENTAGON"); \
	genSvg(fontname, "0x2B20", "WHITE PENTAGON"); \
	genSvg(fontname, "0x2B21", "WHITE HEXAGON"); \
	genSvg(fontname, "0x2B22", "BLACK HEXAGON"); \
	genSvg(fontname, "0x2B23", "HORIZONTAL BLACK HEXAGON"); \
	genSvg(fontname, "0x2B24", "BLACK LARGE CIRCLE"); \
	genSvg(fontname, "0x2B25", "BLACK MEDIUM DIAMOND"); \
	genSvg(fontname, "0x2B26", "WHITE MEDIUM DIAMOND"); \
	genSvg(fontname, "0x2B27", "BLACK MEDIUM LOZENGE"); \
	genSvg(fontname, "0x2B28", "WHITE MEDIUM LOZENGE"); \
	genSvg(fontname, "0x2B29", "BLACK SMALL DIAMOND"); \
	genSvg(fontname, "0x2B2A", "BLACK SMALL LOZENGE"); \
	genSvg(fontname, "0x2B2B", "WHITE SMALL LOZENGE"); \
	genSvg(fontname, "0x2B2C", "BLACK HORIZONTAL ELLIPSE"); \
	genSvg(fontname, "0x2B2D", "WHITE HORIZONTAL ELLIPSE"); \
	genSvg(fontname, "0x2B2E", "BLACK VERTICAL ELLIPSE"); \
	genSvg(fontname, "0x2B2F", "WHITE VERTICAL ELLIPSE"); \
	genSvg(fontname, "0x2B30", "LEFT ARROW WITH SMALL CIRCLE"); \
	genSvg(fontname, "0x2B31", "THREE LEFTWARDS ARROWS"); \
	genSvg(fontname, "0x2B32", "LEFT ARROW WITH CIRCLED PLUS"); \
	genSvg(fontname, "0x2B33", "LONG LEFTWARDS SQUIGGLE ARROW"); \
	genSvg(fontname, "0x2B34", "LEFTWARDS TWO-HEADED ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2B35", "LEFTWARDS TWO-HEADED ARROW WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2B36", "LEFTWARDS TWO-HEADED ARROW FROM BAR"); \
	genSvg(fontname, "0x2B37", "LEFTWARDS TWO-HEADED TRIPLE DASH ARROW"); \
	genSvg(fontname, "0x2B38", "LEFTWARDS ARROW WITH DOTTED STEM"); \
	genSvg(fontname, "0x2B39", "LEFTWARDS ARROW WITH TAIL WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2B3A", "LEFTWARDS ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2B3B", "LEFTWARDS TWO-HEADED ARROW WITH TAIL"); \
	genSvg(fontname, "0x2B3C", "LEFTWARDS TWO-HEADED ARROW WITH TAIL WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2B3D", "LEFTWARDS TWO-HEADED ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2B3E", "LEFTWARDS ARROW THROUGH X"); \
	genSvg(fontname, "0x2B3F", "WAVE ARROW POINTING DIRECTLY LEFT"); \
	genSvg(fontname, "0x2B40", "EQUALS SIGN ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2B41", "REVERSE TILDE OPERATOR ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2B42", "LEFTWARDS ARROW ABOVE REVERSE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2B43", "RIGHTWARDS ARROW THROUGH GREATER-THAN"); \
	genSvg(fontname, "0x2B44", "RIGHTWARDS ARROW THROUGH SUPERSET"); \
	genSvg(fontname, "0x2B45", "LEFTWARDS QUADRUPLE ARROW"); \
	genSvg(fontname, "0x2B46", "RIGHTWARDS QUADRUPLE ARROW"); \
	genSvg(fontname, "0x2B47", "REVERSE TILDE OPERATOR ABOVE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2B48", "RIGHTWARDS ARROW ABOVE REVERSE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2B49", "TILDE OPERATOR ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2B4A", "LEFTWARDS ARROW ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2B4B", "LEFTWARDS ARROW ABOVE REVERSE TILDE OPERATOR"); \
	genSvg(fontname, "0x2B4C", "RIGHTWARDS ARROW ABOVE REVERSE TILDE OPERATOR"); \
	genSvg(fontname, "0x2B4D", "DOWNWARDS TRIANGLE-HEADED ZIGZAG ARROW"); \
	genSvg(fontname, "0x2B4E", "SHORT SLANTED NORTH ARROW"); \
	genSvg(fontname, "0x2B4F", "SHORT BACKSLANTED SOUTH ARROW"); \
	genSvg(fontname, "0x2B50", "WHITE MEDIUM STAR"); \
	genSvg(fontname, "0x2B51", "BLACK SMALL STAR"); \
	genSvg(fontname, "0x2B52", "WHITE SMALL STAR"); \
	genSvg(fontname, "0x2B53", "BLACK RIGHT-POINTING PENTAGON"); \
	genSvg(fontname, "0x2B54", "WHITE RIGHT-POINTING PENTAGON"); \
	genSvg(fontname, "0x2B55", "HEAVY LARGE CIRCLE"); \
	genSvg(fontname, "0x2B56", "HEAVY OVAL WITH OVAL INSIDE"); \
	genSvg(fontname, "0x2B57", "HEAVY CIRCLE WITH CIRCLE INSIDE"); \
	genSvg(fontname, "0x2B58", "HEAVY CIRCLE"); \
	genSvg(fontname, "0x2B59", "HEAVY CIRCLED SALTIRE"); \
	genSvg(fontname, "0x2B5A", "SLANTED NORTH ARROW WITH HOOKED HEAD"); \
	genSvg(fontname, "0x2B5B", "BACKSLANTED SOUTH ARROW WITH HOOKED TAIL"); \
	genSvg(fontname, "0x2B5C", "SLANTED NORTH ARROW WITH HORIZONTAL TAIL"); \
	genSvg(fontname, "0x2B5D", "BACKSLANTED SOUTH ARROW WITH HORIZONTAL TAIL"); \
	genSvg(fontname, "0x2B5E", "BENT ARROW POINTING DOWNWARDS THEN NORTH EAST"); \
	genSvg(fontname, "0x2B5F", "SHORT BENT ARROW POINTING DOWNWARDS THEN NORTH EAST"); \
	genSvg(fontname, "0x2B60", "LEFTWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B61", "UPWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B62", "RIGHTWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B63", "DOWNWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B64", "LEFT RIGHT TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B65", "UP DOWN TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B66", "NORTH WEST TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B67", "NORTH EAST TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B68", "SOUTH EAST TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B69", "SOUTH WEST TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B6A", "LEFTWARDS TRIANGLE-HEADED DASHED ARROW"); \
	genSvg(fontname, "0x2B6B", "UPWARDS TRIANGLE-HEADED DASHED ARROW"); \
	genSvg(fontname, "0x2B6C", "RIGHTWARDS TRIANGLE-HEADED DASHED ARROW"); \
	genSvg(fontname, "0x2B6D", "DOWNWARDS TRIANGLE-HEADED DASHED ARROW"); \
	genSvg(fontname, "0x2B6E", "CLOCKWISE TRIANGLE-HEADED OPEN CIRCLE ARROW"); \
	genSvg(fontname, "0x2B6F", "ANTICLOCKWISE TRIANGLE-HEADED OPEN CIRCLE ARROW"); \
	genSvg(fontname, "0x2B70", "LEFTWARDS TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B71", "UPWARDS TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B72", "RIGHTWARDS TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B73", "DOWNWARDS TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B76", "NORTH WEST TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B77", "NORTH EAST TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B78", "SOUTH EAST TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B79", "SOUTH WEST TRIANGLE-HEADED ARROW TO BAR"); \
	genSvg(fontname, "0x2B7A", "LEFTWARDS TRIANGLE-HEADED ARROW WITH DOUBLE HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2B7B", "UPWARDS TRIANGLE-HEADED ARROW WITH DOUBLE HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2B7C", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH DOUBLE HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2B7D", "DOWNWARDS TRIANGLE-HEADED ARROW WITH DOUBLE HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2B7E", "HORIZONTAL TAB KEY"); \
	genSvg(fontname, "0x2B7F", "VERTICAL TAB KEY"); \
	genSvg(fontname, "0x2B80", "LEFTWARDS TRIANGLE-HEADED ARROW OVER RIGHTWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B81", "UPWARDS TRIANGLE-HEADED ARROW LEFTWARDS OF DOWNWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B82", "RIGHTWARDS TRIANGLE-HEADED ARROW OVER LEFTWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B83", "DOWNWARDS TRIANGLE-HEADED ARROW LEFTWARDS OF UPWARDS TRIANGLE-HEADED ARROW"); \
	genSvg(fontname, "0x2B84", "LEFTWARDS TRIANGLE-HEADED PAIRED ARROWS"); \
	genSvg(fontname, "0x2B85", "UPWARDS TRIANGLE-HEADED PAIRED ARROWS"); \
	genSvg(fontname, "0x2B86", "RIGHTWARDS TRIANGLE-HEADED PAIRED ARROWS"); \
	genSvg(fontname, "0x2B87", "DOWNWARDS TRIANGLE-HEADED PAIRED ARROWS"); \
	genSvg(fontname, "0x2B88", "LEFTWARDS BLACK CIRCLED WHITE ARROW"); \
	genSvg(fontname, "0x2B89", "UPWARDS BLACK CIRCLED WHITE ARROW"); \
	genSvg(fontname, "0x2B8A", "RIGHTWARDS BLACK CIRCLED WHITE ARROW"); \
	genSvg(fontname, "0x2B8B", "DOWNWARDS BLACK CIRCLED WHITE ARROW"); \
	genSvg(fontname, "0x2B8C", "ANTICLOCKWISE TRIANGLE-HEADED RIGHT U-SHAPED ARROW"); \
	genSvg(fontname, "0x2B8D", "ANTICLOCKWISE TRIANGLE-HEADED BOTTOM U-SHAPED ARROW"); \
	genSvg(fontname, "0x2B8E", "ANTICLOCKWISE TRIANGLE-HEADED LEFT U-SHAPED ARROW"); \
	genSvg(fontname, "0x2B8F", "ANTICLOCKWISE TRIANGLE-HEADED TOP U-SHAPED ARROW"); \
	genSvg(fontname, "0x2B90", "RETURN LEFT"); \
	genSvg(fontname, "0x2B91", "RETURN RIGHT"); \
	genSvg(fontname, "0x2B92", "NEWLINE LEFT"); \
	genSvg(fontname, "0x2B93", "NEWLINE RIGHT"); \
	genSvg(fontname, "0x2B94", "FOUR CORNER ARROWS CIRCLING ANTICLOCKWISE"); \
	genSvg(fontname, "0x2B95", "RIGHTWARDS BLACK ARROW"); \
	genSvg(fontname, "0x2B98", "THREE-D TOP-LIGHTED LEFTWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B99", "THREE-D RIGHT-LIGHTED UPWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9A", "THREE-D TOP-LIGHTED RIGHTWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9B", "THREE-D LEFT-LIGHTED DOWNWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9C", "BLACK LEFTWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9D", "BLACK UPWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9E", "BLACK RIGHTWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2B9F", "BLACK DOWNWARDS EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x2BA0", "DOWNWARDS TRIANGLE-HEADED ARROW WITH LONG TIP LEFTWARDS"); \
	genSvg(fontname, "0x2BA1", "DOWNWARDS TRIANGLE-HEADED ARROW WITH LONG TIP RIGHTWARDS"); \
	genSvg(fontname, "0x2BA2", "UPWARDS TRIANGLE-HEADED ARROW WITH LONG TIP LEFTWARDS"); \
	genSvg(fontname, "0x2BA3", "UPWARDS TRIANGLE-HEADED ARROW WITH LONG TIP RIGHTWARDS"); \
	genSvg(fontname, "0x2BA4", "LEFTWARDS TRIANGLE-HEADED ARROW WITH LONG TIP UPWARDS"); \
	genSvg(fontname, "0x2BA5", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH LONG TIP UPWARDS"); \
	genSvg(fontname, "0x2BA6", "LEFTWARDS TRIANGLE-HEADED ARROW WITH LONG TIP DOWNWARDS"); \
	genSvg(fontname, "0x2BA7", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH LONG TIP DOWNWARDS"); \
	genSvg(fontname, "0x2BA8", "BLACK CURVED DOWNWARDS AND LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2BA9", "BLACK CURVED DOWNWARDS AND RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2BAA", "BLACK CURVED UPWARDS AND LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2BAB", "BLACK CURVED UPWARDS AND RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2BAC", "BLACK CURVED LEFTWARDS AND UPWARDS ARROW"); \
	genSvg(fontname, "0x2BAD", "BLACK CURVED RIGHTWARDS AND UPWARDS ARROW"); \
	genSvg(fontname, "0x2BAE", "BLACK CURVED LEFTWARDS AND DOWNWARDS ARROW"); \
	genSvg(fontname, "0x2BAF", "BLACK CURVED RIGHTWARDS AND DOWNWARDS ARROW"); \
	genSvg(fontname, "0x2BB0", "RIBBON ARROW DOWN LEFT"); \
	genSvg(fontname, "0x2BB1", "RIBBON ARROW DOWN RIGHT"); \
	genSvg(fontname, "0x2BB2", "RIBBON ARROW UP LEFT"); \
	genSvg(fontname, "0x2BB3", "RIBBON ARROW UP RIGHT"); \
	genSvg(fontname, "0x2BB4", "RIBBON ARROW LEFT UP"); \
	genSvg(fontname, "0x2BB5", "RIBBON ARROW RIGHT UP"); \
	genSvg(fontname, "0x2BB6", "RIBBON ARROW LEFT DOWN"); \
	genSvg(fontname, "0x2BB7", "RIBBON ARROW RIGHT DOWN"); \
	genSvg(fontname, "0x2BB8", "UPWARDS WHITE ARROW FROM BAR WITH HORIZONTAL BAR"); \
	genSvg(fontname, "0x2BB9", "UP ARROWHEAD IN A RECTANGLE BOX"); \
	genSvg(fontname, "0x2BBA", "OVERLAPPING WHITE SQUARES"); \
	genSvg(fontname, "0x2BBB", "OVERLAPPING WHITE AND BLACK SQUARES"); \
	genSvg(fontname, "0x2BBC", "OVERLAPPING BLACK SQUARES"); \
	genSvg(fontname, "0x2BBD", "BALLOT BOX WITH LIGHT X"); \
	genSvg(fontname, "0x2BBE", "CIRCLED X"); \
	genSvg(fontname, "0x2BBF", "CIRCLED BOLD X"); \
	genSvg(fontname, "0x2BC0", "BLACK SQUARE CENTRED"); \
	genSvg(fontname, "0x2BC1", "BLACK DIAMOND CENTRED"); \
	genSvg(fontname, "0x2BC2", "TURNED BLACK PENTAGON"); \
	genSvg(fontname, "0x2BC3", "HORIZONTAL BLACK OCTAGON"); \
	genSvg(fontname, "0x2BC4", "BLACK OCTAGON"); \
	genSvg(fontname, "0x2BC5", "BLACK MEDIUM UP-POINTING TRIANGLE CENTRED"); \
	genSvg(fontname, "0x2BC6", "BLACK MEDIUM DOWN-POINTING TRIANGLE CENTRED"); \
	genSvg(fontname, "0x2BC7", "BLACK MEDIUM LEFT-POINTING TRIANGLE CENTRED"); \
	genSvg(fontname, "0x2BC8", "BLACK MEDIUM RIGHT-POINTING TRIANGLE CENTRED"); \
	genSvg(fontname, "0x2BCA", "TOP HALF BLACK CIRCLE"); \
	genSvg(fontname, "0x2BCB", "BOTTOM HALF BLACK CIRCLE"); \
	genSvg(fontname, "0x2BCC", "LIGHT FOUR POINTED BLACK CUSP"); \
	genSvg(fontname, "0x2BCD", "ROTATED LIGHT FOUR POINTED BLACK CUSP"); \
	genSvg(fontname, "0x2BCE", "WHITE FOUR POINTED CUSP"); \
	genSvg(fontname, "0x2BCF", "ROTATED WHITE FOUR POINTED CUSP"); \
	genSvg(fontname, "0x2BD0", "SQUARE POSITION INDICATOR"); \
	genSvg(fontname, "0x2BD1", "UNCERTAINTY SIGN"); \
	genSvg(fontname, "0x2BD2", "GROUP MARK"); \
	genSvg(fontname, "0x2BD3", "PLUTO FORM TWO"); \
	genSvg(fontname, "0x2BD4", "PLUTO FORM THREE"); \
	genSvg(fontname, "0x2BD5", "PLUTO FORM FOUR"); \
	genSvg(fontname, "0x2BD6", "PLUTO FORM FIVE"); \
	genSvg(fontname, "0x2BD7", "TRANSPLUTO"); \
	genSvg(fontname, "0x2BD8", "PROSERPINA"); \
	genSvg(fontname, "0x2BD9", "ASTRAEA"); \
	genSvg(fontname, "0x2BDA", "HYGIEA"); \
	genSvg(fontname, "0x2BDB", "PHOLUS"); \
	genSvg(fontname, "0x2BDC", "NESSUS"); \
	genSvg(fontname, "0x2BDD", "WHITE MOON SELENA"); \
	genSvg(fontname, "0x2BDE", "BLACK DIAMOND ON CROSS"); \
	genSvg(fontname, "0x2BDF", "TRUE LIGHT MOON ARTA"); \
	genSvg(fontname, "0x2BE0", "CUPIDO"); \
	genSvg(fontname, "0x2BE1", "HADES"); \
	genSvg(fontname, "0x2BE2", "ZEUS"); \
	genSvg(fontname, "0x2BE3", "KRONOS"); \
	genSvg(fontname, "0x2BE4", "APOLLON"); \
	genSvg(fontname, "0x2BE5", "ADMETOS"); \
	genSvg(fontname, "0x2BE6", "VULCANUS"); \
	genSvg(fontname, "0x2BE7", "POSEIDON"); \
	genSvg(fontname, "0x2BE8", "LEFT HALF BLACK STAR"); \
	genSvg(fontname, "0x2BE9", "RIGHT HALF BLACK STAR"); \
	genSvg(fontname, "0x2BEA", "STAR WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x2BEB", "STAR WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x2BEC", "LEFTWARDS TWO-HEADED ARROW WITH TRIANGLE ARROWHEADS"); \
	genSvg(fontname, "0x2BED", "UPWARDS TWO-HEADED ARROW WITH TRIANGLE ARROWHEADS"); \
	genSvg(fontname, "0x2BEE", "RIGHTWARDS TWO-HEADED ARROW WITH TRIANGLE ARROWHEADS"); \
	genSvg(fontname, "0x2BEF", "DOWNWARDS TWO-HEADED ARROW WITH TRIANGLE ARROWHEADS"); \
	genSvg(fontname, "0x2BF0", "ERIS FORM ONE"); \
	genSvg(fontname, "0x2BF1", "ERIS FORM TWO"); \
	genSvg(fontname, "0x2BF2", "SEDNA"); \
	genSvg(fontname, "0x2BF3", "RUSSIAN ASTROLOGICAL SYMBOL VIGINTILE"); \
	genSvg(fontname, "0x2BF4", "RUSSIAN ASTROLOGICAL SYMBOL NOVILE"); \
	genSvg(fontname, "0x2BF5", "RUSSIAN ASTROLOGICAL SYMBOL QUINTILE"); \
	genSvg(fontname, "0x2BF6", "RUSSIAN ASTROLOGICAL SYMBOL BINOVILE"); \
	genSvg(fontname, "0x2BF7", "RUSSIAN ASTROLOGICAL SYMBOL SENTAGON"); \
	genSvg(fontname, "0x2BF8", "RUSSIAN ASTROLOGICAL SYMBOL TREDECILE"); \
	genSvg(fontname, "0x2BF9", "EQUALS SIGN WITH INFINITY BELOW"); \
	genSvg(fontname, "0x2BFA", "UNITED SYMBOL"); \
	genSvg(fontname, "0x2BFB", "SEPARATED SYMBOL"); \
	genSvg(fontname, "0x2BFC", "DOUBLED SYMBOL"); \
	genSvg(fontname, "0x2BFD", "PASSED SYMBOL"); \
	genSvg(fontname, "0x2BFE", "REVERSED RIGHT ANGLE");

#define SUPPLEMENTAL_ARROWS_A \
	genSvg(fontname, "0x27F0", "UPWARDS QUADRUPLE ARROW"); \
	genSvg(fontname, "0x27F1", "DOWNWARDS QUADRUPLE ARROW"); \
	genSvg(fontname, "0x27F2", "ANTICLOCKWISE GAPPED CIRCLE ARROW"); \
	genSvg(fontname, "0x27F3", "CLOCKWISE GAPPED CIRCLE ARROW"); \
	genSvg(fontname, "0x27F4", "RIGHT ARROW WITH CIRCLED PLUS"); \
	genSvg(fontname, "0x27F5", "LONG LEFTWARDS ARROW"); \
	genSvg(fontname, "0x27F6", "LONG RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27F7", "LONG LEFT RIGHT ARROW"); \
	genSvg(fontname, "0x27F8", "LONG LEFTWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x27F9", "LONG RIGHTWARDS DOUBLE ARROW"); \
	genSvg(fontname, "0x27FA", "LONG LEFT RIGHT DOUBLE ARROW"); \
	genSvg(fontname, "0x27FB", "LONG LEFTWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x27FC", "LONG RIGHTWARDS ARROW FROM BAR"); \
	genSvg(fontname, "0x27FD", "LONG LEFTWARDS DOUBLE ARROW FROM BAR"); \
	genSvg(fontname, "0x27FE", "LONG RIGHTWARDS DOUBLE ARROW FROM BAR"); \
	genSvg(fontname, "0x27FF", "LONG RIGHTWARDS SQUIGGLE ARROW");

#define SUPPLEMENTAL_ARROWS_B \
	genSvg(fontname, "0x2900", "RIGHTWARDS TWO-HEADED ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2901", "RIGHTWARDS TWO-HEADED ARROW WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2902", "LEFTWARDS DOUBLE ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2903", "RIGHTWARDS DOUBLE ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2904", "LEFT RIGHT DOUBLE ARROW WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2905", "RIGHTWARDS TWO-HEADED ARROW FROM BAR"); \
	genSvg(fontname, "0x2906", "LEFTWARDS DOUBLE ARROW FROM BAR"); \
	genSvg(fontname, "0x2907", "RIGHTWARDS DOUBLE ARROW FROM BAR"); \
	genSvg(fontname, "0x2908", "DOWNWARDS ARROW WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2909", "UPWARDS ARROW WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x290A", "UPWARDS TRIPLE ARROW"); \
	genSvg(fontname, "0x290B", "DOWNWARDS TRIPLE ARROW"); \
	genSvg(fontname, "0x290C", "LEFTWARDS DOUBLE DASH ARROW"); \
	genSvg(fontname, "0x290D", "RIGHTWARDS DOUBLE DASH ARROW"); \
	genSvg(fontname, "0x290E", "LEFTWARDS TRIPLE DASH ARROW"); \
	genSvg(fontname, "0x290F", "RIGHTWARDS TRIPLE DASH ARROW"); \
	genSvg(fontname, "0x2910", "RIGHTWARDS TWO-HEADED TRIPLE DASH ARROW"); \
	genSvg(fontname, "0x2911", "RIGHTWARDS ARROW WITH DOTTED STEM"); \
	genSvg(fontname, "0x2912", "UPWARDS ARROW TO BAR"); \
	genSvg(fontname, "0x2913", "DOWNWARDS ARROW TO BAR"); \
	genSvg(fontname, "0x2914", "RIGHTWARDS ARROW WITH TAIL WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2915", "RIGHTWARDS ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2916", "RIGHTWARDS TWO-HEADED ARROW WITH TAIL"); \
	genSvg(fontname, "0x2917", "RIGHTWARDS TWO-HEADED ARROW WITH TAIL WITH VERTICAL STROKE"); \
	genSvg(fontname, "0x2918", "RIGHTWARDS TWO-HEADED ARROW WITH TAIL WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2919", "LEFTWARDS ARROW-TAIL"); \
	genSvg(fontname, "0x291A", "RIGHTWARDS ARROW-TAIL"); \
	genSvg(fontname, "0x291B", "LEFTWARDS DOUBLE ARROW-TAIL"); \
	genSvg(fontname, "0x291C", "RIGHTWARDS DOUBLE ARROW-TAIL"); \
	genSvg(fontname, "0x291D", "LEFTWARDS ARROW TO BLACK DIAMOND"); \
	genSvg(fontname, "0x291E", "RIGHTWARDS ARROW TO BLACK DIAMOND"); \
	genSvg(fontname, "0x291F", "LEFTWARDS ARROW FROM BAR TO BLACK DIAMOND"); \
	genSvg(fontname, "0x2920", "RIGHTWARDS ARROW FROM BAR TO BLACK DIAMOND"); \
	genSvg(fontname, "0x2921", "NORTH WEST AND SOUTH EAST ARROW"); \
	genSvg(fontname, "0x2922", "NORTH EAST AND SOUTH WEST ARROW"); \
	genSvg(fontname, "0x2923", "NORTH WEST ARROW WITH HOOK"); \
	genSvg(fontname, "0x2924", "NORTH EAST ARROW WITH HOOK"); \
	genSvg(fontname, "0x2925", "SOUTH EAST ARROW WITH HOOK"); \
	genSvg(fontname, "0x2926", "SOUTH WEST ARROW WITH HOOK"); \
	genSvg(fontname, "0x2927", "NORTH WEST ARROW AND NORTH EAST ARROW"); \
	genSvg(fontname, "0x2928", "NORTH EAST ARROW AND SOUTH EAST ARROW"); \
	genSvg(fontname, "0x2929", "SOUTH EAST ARROW AND SOUTH WEST ARROW"); \
	genSvg(fontname, "0x292A", "SOUTH WEST ARROW AND NORTH WEST ARROW"); \
	genSvg(fontname, "0x292B", "RISING DIAGONAL CROSSING FALLING DIAGONAL"); \
	genSvg(fontname, "0x292C", "FALLING DIAGONAL CROSSING RISING DIAGONAL"); \
	genSvg(fontname, "0x292D", "SOUTH EAST ARROW CROSSING NORTH EAST ARROW"); \
	genSvg(fontname, "0x292E", "NORTH EAST ARROW CROSSING SOUTH EAST ARROW"); \
	genSvg(fontname, "0x292F", "FALLING DIAGONAL CROSSING NORTH EAST ARROW"); \
	genSvg(fontname, "0x2930", "RISING DIAGONAL CROSSING SOUTH EAST ARROW"); \
	genSvg(fontname, "0x2931", "NORTH EAST ARROW CROSSING NORTH WEST ARROW"); \
	genSvg(fontname, "0x2932", "NORTH WEST ARROW CROSSING NORTH EAST ARROW"); \
	genSvg(fontname, "0x2933", "WAVE ARROW POINTING DIRECTLY RIGHT"); \
	genSvg(fontname, "0x2934", "ARROW POINTING RIGHTWARDS THEN CURVING UPWARDS"); \
	genSvg(fontname, "0x2935", "ARROW POINTING RIGHTWARDS THEN CURVING DOWNWARDS"); \
	genSvg(fontname, "0x2936", "ARROW POINTING DOWNWARDS THEN CURVING LEFTWARDS"); \
	genSvg(fontname, "0x2937", "ARROW POINTING DOWNWARDS THEN CURVING RIGHTWARDS"); \
	genSvg(fontname, "0x2938", "RIGHT-SIDE ARC CLOCKWISE ARROW"); \
	genSvg(fontname, "0x2939", "LEFT-SIDE ARC ANTICLOCKWISE ARROW"); \
	genSvg(fontname, "0x293A", "TOP ARC ANTICLOCKWISE ARROW"); \
	genSvg(fontname, "0x293B", "BOTTOM ARC ANTICLOCKWISE ARROW"); \
	genSvg(fontname, "0x293C", "TOP ARC CLOCKWISE ARROW WITH MINUS"); \
	genSvg(fontname, "0x293D", "TOP ARC ANTICLOCKWISE ARROW WITH PLUS"); \
	genSvg(fontname, "0x293E", "LOWER RIGHT SEMICIRCULAR CLOCKWISE ARROW"); \
	genSvg(fontname, "0x293F", "LOWER LEFT SEMICIRCULAR ANTICLOCKWISE ARROW"); \
	genSvg(fontname, "0x2940", "ANTICLOCKWISE CLOSED CIRCLE ARROW"); \
	genSvg(fontname, "0x2941", "CLOCKWISE CLOSED CIRCLE ARROW"); \
	genSvg(fontname, "0x2942", "RIGHTWARDS ARROW ABOVE SHORT LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2943", "LEFTWARDS ARROW ABOVE SHORT RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2944", "SHORT RIGHTWARDS ARROW ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2945", "RIGHTWARDS ARROW WITH PLUS BELOW"); \
	genSvg(fontname, "0x2946", "LEFTWARDS ARROW WITH PLUS BELOW"); \
	genSvg(fontname, "0x2947", "RIGHTWARDS ARROW THROUGH X"); \
	genSvg(fontname, "0x2948", "LEFT RIGHT ARROW THROUGH SMALL CIRCLE"); \
	genSvg(fontname, "0x2949", "UPWARDS TWO-HEADED ARROW FROM SMALL CIRCLE"); \
	genSvg(fontname, "0x294A", "LEFT BARB UP RIGHT BARB DOWN HARPOON"); \
	genSvg(fontname, "0x294B", "LEFT BARB DOWN RIGHT BARB UP HARPOON"); \
	genSvg(fontname, "0x294C", "UP BARB RIGHT DOWN BARB LEFT HARPOON"); \
	genSvg(fontname, "0x294D", "UP BARB LEFT DOWN BARB RIGHT HARPOON"); \
	genSvg(fontname, "0x294E", "LEFT BARB UP RIGHT BARB UP HARPOON"); \
	genSvg(fontname, "0x294F", "UP BARB RIGHT DOWN BARB RIGHT HARPOON"); \
	genSvg(fontname, "0x2950", "LEFT BARB DOWN RIGHT BARB DOWN HARPOON"); \
	genSvg(fontname, "0x2951", "UP BARB LEFT DOWN BARB LEFT HARPOON"); \
	genSvg(fontname, "0x2952", "LEFTWARDS HARPOON WITH BARB UP TO BAR"); \
	genSvg(fontname, "0x2953", "RIGHTWARDS HARPOON WITH BARB UP TO BAR"); \
	genSvg(fontname, "0x2954", "UPWARDS HARPOON WITH BARB RIGHT TO BAR"); \
	genSvg(fontname, "0x2955", "DOWNWARDS HARPOON WITH BARB RIGHT TO BAR"); \
	genSvg(fontname, "0x2956", "LEFTWARDS HARPOON WITH BARB DOWN TO BAR"); \
	genSvg(fontname, "0x2957", "RIGHTWARDS HARPOON WITH BARB DOWN TO BAR"); \
	genSvg(fontname, "0x2958", "UPWARDS HARPOON WITH BARB LEFT TO BAR"); \
	genSvg(fontname, "0x2959", "DOWNWARDS HARPOON WITH BARB LEFT TO BAR"); \
	genSvg(fontname, "0x295A", "LEFTWARDS HARPOON WITH BARB UP FROM BAR"); \
	genSvg(fontname, "0x295B", "RIGHTWARDS HARPOON WITH BARB UP FROM BAR"); \
	genSvg(fontname, "0x295C", "UPWARDS HARPOON WITH BARB RIGHT FROM BAR"); \
	genSvg(fontname, "0x295D", "DOWNWARDS HARPOON WITH BARB RIGHT FROM BAR"); \
	genSvg(fontname, "0x295E", "LEFTWARDS HARPOON WITH BARB DOWN FROM BAR"); \
	genSvg(fontname, "0x295F", "RIGHTWARDS HARPOON WITH BARB DOWN FROM BAR"); \
	genSvg(fontname, "0x2960", "UPWARDS HARPOON WITH BARB LEFT FROM BAR"); \
	genSvg(fontname, "0x2961", "DOWNWARDS HARPOON WITH BARB LEFT FROM BAR"); \
	genSvg(fontname, "0x2962", "LEFTWARDS HARPOON WITH BARB UP ABOVE LEFTWARDS HARPOON WITH BARB DOWN"); \
	genSvg(fontname, "0x2963", "UPWARDS HARPOON WITH BARB LEFT BESIDE UPWARDS HARPOON WITH BARB RIGHT"); \
	genSvg(fontname, "0x2964", "RIGHTWARDS HARPOON WITH BARB UP ABOVE RIGHTWARDS HARPOON WITH BARB DOWN"); \
	genSvg(fontname, "0x2965", "DOWNWARDS HARPOON WITH BARB LEFT BESIDE DOWNWARDS HARPOON WITH BARB RIGHT"); \
	genSvg(fontname, "0x2966", "LEFTWARDS HARPOON WITH BARB UP ABOVE RIGHTWARDS HARPOON WITH BARB UP"); \
	genSvg(fontname, "0x2967", "LEFTWARDS HARPOON WITH BARB DOWN ABOVE RIGHTWARDS HARPOON WITH BARB DOWN"); \
	genSvg(fontname, "0x2968", "RIGHTWARDS HARPOON WITH BARB UP ABOVE LEFTWARDS HARPOON WITH BARB UP"); \
	genSvg(fontname, "0x2969", "RIGHTWARDS HARPOON WITH BARB DOWN ABOVE LEFTWARDS HARPOON WITH BARB DOWN"); \
	genSvg(fontname, "0x296A", "LEFTWARDS HARPOON WITH BARB UP ABOVE LONG DASH"); \
	genSvg(fontname, "0x296B", "LEFTWARDS HARPOON WITH BARB DOWN BELOW LONG DASH"); \
	genSvg(fontname, "0x296C", "RIGHTWARDS HARPOON WITH BARB UP ABOVE LONG DASH"); \
	genSvg(fontname, "0x296D", "RIGHTWARDS HARPOON WITH BARB DOWN BELOW LONG DASH"); \
	genSvg(fontname, "0x296E", "UPWARDS HARPOON WITH BARB LEFT BESIDE DOWNWARDS HARPOON WITH BARB RIGHT"); \
	genSvg(fontname, "0x296F", "DOWNWARDS HARPOON WITH BARB LEFT BESIDE UPWARDS HARPOON WITH BARB RIGHT"); \
	genSvg(fontname, "0x2970", "RIGHT DOUBLE ARROW WITH ROUNDED HEAD"); \
	genSvg(fontname, "0x2971", "EQUALS SIGN ABOVE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2972", "TILDE OPERATOR ABOVE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2973", "LEFTWARDS ARROW ABOVE TILDE OPERATOR"); \
	genSvg(fontname, "0x2974", "RIGHTWARDS ARROW ABOVE TILDE OPERATOR"); \
	genSvg(fontname, "0x2975", "RIGHTWARDS ARROW ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2976", "LESS-THAN ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2977", "LEFTWARDS ARROW THROUGH LESS-THAN"); \
	genSvg(fontname, "0x2978", "GREATER-THAN ABOVE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2979", "SUBSET ABOVE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x297A", "LEFTWARDS ARROW THROUGH SUBSET"); \
	genSvg(fontname, "0x297B", "SUPERSET ABOVE LEFTWARDS ARROW"); \
	genSvg(fontname, "0x297C", "LEFT FISH TAIL"); \
	genSvg(fontname, "0x297D", "RIGHT FISH TAIL"); \
	genSvg(fontname, "0x297E", "UP FISH TAIL"); \
	genSvg(fontname, "0x297F", "DOWN FISH TAIL");

#define SUPPLEMENTAL_ARROWS_C \
	genSvg(fontname, "0x1F800", "LEFTWARDS ARROW WITH SMALL TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F801", "UPWARDS ARROW WITH SMALL TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F802", "RIGHTWARDS ARROW WITH SMALL TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F803", "DOWNWARDS ARROW WITH SMALL TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F804", "LEFTWARDS ARROW WITH MEDIUM TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F805", "UPWARDS ARROW WITH MEDIUM TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F806", "RIGHTWARDS ARROW WITH MEDIUM TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F807", "DOWNWARDS ARROW WITH MEDIUM TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F808", "LEFTWARDS ARROW WITH LARGE TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F809", "UPWARDS ARROW WITH LARGE TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F80A", "RIGHTWARDS ARROW WITH LARGE TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F80B", "DOWNWARDS ARROW WITH LARGE TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F810", "LEFTWARDS ARROW WITH SMALL EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F811", "UPWARDS ARROW WITH SMALL EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F812", "RIGHTWARDS ARROW WITH SMALL EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F813", "DOWNWARDS ARROW WITH SMALL EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F814", "LEFTWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F815", "UPWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F816", "RIGHTWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F817", "DOWNWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F818", "HEAVY LEFTWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F819", "HEAVY UPWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81A", "HEAVY RIGHTWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81B", "HEAVY DOWNWARDS ARROW WITH EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81C", "HEAVY LEFTWARDS ARROW WITH LARGE EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81D", "HEAVY UPWARDS ARROW WITH LARGE EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81E", "HEAVY RIGHTWARDS ARROW WITH LARGE EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F81F", "HEAVY DOWNWARDS ARROW WITH LARGE EQUILATERAL ARROWHEAD"); \
	genSvg(fontname, "0x1F820", "LEFTWARDS TRIANGLE-HEADED ARROW WITH NARROW SHAFT"); \
	genSvg(fontname, "0x1F821", "UPWARDS TRIANGLE-HEADED ARROW WITH NARROW SHAFT"); \
	genSvg(fontname, "0x1F822", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH NARROW SHAFT"); \
	genSvg(fontname, "0x1F823", "DOWNWARDS TRIANGLE-HEADED ARROW WITH NARROW SHAFT"); \
	genSvg(fontname, "0x1F824", "LEFTWARDS TRIANGLE-HEADED ARROW WITH MEDIUM SHAFT"); \
	genSvg(fontname, "0x1F825", "UPWARDS TRIANGLE-HEADED ARROW WITH MEDIUM SHAFT"); \
	genSvg(fontname, "0x1F826", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH MEDIUM SHAFT"); \
	genSvg(fontname, "0x1F827", "DOWNWARDS TRIANGLE-HEADED ARROW WITH MEDIUM SHAFT"); \
	genSvg(fontname, "0x1F828", "LEFTWARDS TRIANGLE-HEADED ARROW WITH BOLD SHAFT"); \
	genSvg(fontname, "0x1F829", "UPWARDS TRIANGLE-HEADED ARROW WITH BOLD SHAFT"); \
	genSvg(fontname, "0x1F82A", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH BOLD SHAFT"); \
	genSvg(fontname, "0x1F82B", "DOWNWARDS TRIANGLE-HEADED ARROW WITH BOLD SHAFT"); \
	genSvg(fontname, "0x1F82C", "LEFTWARDS TRIANGLE-HEADED ARROW WITH HEAVY SHAFT"); \
	genSvg(fontname, "0x1F82D", "UPWARDS TRIANGLE-HEADED ARROW WITH HEAVY SHAFT"); \
	genSvg(fontname, "0x1F82E", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH HEAVY SHAFT"); \
	genSvg(fontname, "0x1F82F", "DOWNWARDS TRIANGLE-HEADED ARROW WITH HEAVY SHAFT"); \
	genSvg(fontname, "0x1F830", "LEFTWARDS TRIANGLE-HEADED ARROW WITH VERY HEAVY SHAFT"); \
	genSvg(fontname, "0x1F831", "UPWARDS TRIANGLE-HEADED ARROW WITH VERY HEAVY SHAFT"); \
	genSvg(fontname, "0x1F832", "RIGHTWARDS TRIANGLE-HEADED ARROW WITH VERY HEAVY SHAFT"); \
	genSvg(fontname, "0x1F833", "DOWNWARDS TRIANGLE-HEADED ARROW WITH VERY HEAVY SHAFT"); \
	genSvg(fontname, "0x1F834", "LEFTWARDS FINGER-POST ARROW"); \
	genSvg(fontname, "0x1F835", "UPWARDS FINGER-POST ARROW"); \
	genSvg(fontname, "0x1F836", "RIGHTWARDS FINGER-POST ARROW"); \
	genSvg(fontname, "0x1F837", "DOWNWARDS FINGER-POST ARROW"); \
	genSvg(fontname, "0x1F838", "LEFTWARDS SQUARED ARROW"); \
	genSvg(fontname, "0x1F839", "UPWARDS SQUARED ARROW"); \
	genSvg(fontname, "0x1F83A", "RIGHTWARDS SQUARED ARROW"); \
	genSvg(fontname, "0x1F83B", "DOWNWARDS SQUARED ARROW"); \
	genSvg(fontname, "0x1F83C", "LEFTWARDS COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F83D", "UPWARDS COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F83E", "RIGHTWARDS COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F83F", "DOWNWARDS COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F840", "LEFTWARDS HEAVY COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F841", "UPWARDS HEAVY COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F842", "RIGHTWARDS HEAVY COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F843", "DOWNWARDS HEAVY COMPRESSED ARROW"); \
	genSvg(fontname, "0x1F844", "LEFTWARDS HEAVY ARROW"); \
	genSvg(fontname, "0x1F845", "UPWARDS HEAVY ARROW"); \
	genSvg(fontname, "0x1F846", "RIGHTWARDS HEAVY ARROW"); \
	genSvg(fontname, "0x1F847", "DOWNWARDS HEAVY ARROW"); \
	genSvg(fontname, "0x1F850", "LEFTWARDS SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F851", "UPWARDS SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F852", "RIGHTWARDS SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F853", "DOWNWARDS SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F854", "NORTH WEST SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F855", "NORTH EAST SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F856", "SOUTH EAST SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F857", "SOUTH WEST SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F858", "LEFT RIGHT SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F859", "UP DOWN SANS-SERIF ARROW"); \
	genSvg(fontname, "0x1F860", "WIDE-HEADED LEFTWARDS LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F861", "WIDE-HEADED UPWARDS LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F862", "WIDE-HEADED RIGHTWARDS LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F863", "WIDE-HEADED DOWNWARDS LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F864", "WIDE-HEADED NORTH WEST LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F865", "WIDE-HEADED NORTH EAST LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F866", "WIDE-HEADED SOUTH EAST LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F867", "WIDE-HEADED SOUTH WEST LIGHT BARB ARROW"); \
	genSvg(fontname, "0x1F868", "WIDE-HEADED LEFTWARDS BARB ARROW"); \
	genSvg(fontname, "0x1F869", "WIDE-HEADED UPWARDS BARB ARROW"); \
	genSvg(fontname, "0x1F86A", "WIDE-HEADED RIGHTWARDS BARB ARROW"); \
	genSvg(fontname, "0x1F86B", "WIDE-HEADED DOWNWARDS BARB ARROW"); \
	genSvg(fontname, "0x1F86C", "WIDE-HEADED NORTH WEST BARB ARROW"); \
	genSvg(fontname, "0x1F86D", "WIDE-HEADED NORTH EAST BARB ARROW"); \
	genSvg(fontname, "0x1F86E", "WIDE-HEADED SOUTH EAST BARB ARROW"); \
	genSvg(fontname, "0x1F86F", "WIDE-HEADED SOUTH WEST BARB ARROW"); \
	genSvg(fontname, "0x1F870", "WIDE-HEADED LEFTWARDS MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F871", "WIDE-HEADED UPWARDS MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F872", "WIDE-HEADED RIGHTWARDS MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F873", "WIDE-HEADED DOWNWARDS MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F874", "WIDE-HEADED NORTH WEST MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F875", "WIDE-HEADED NORTH EAST MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F876", "WIDE-HEADED SOUTH EAST MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F877", "WIDE-HEADED SOUTH WEST MEDIUM BARB ARROW"); \
	genSvg(fontname, "0x1F878", "WIDE-HEADED LEFTWARDS HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F879", "WIDE-HEADED UPWARDS HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87A", "WIDE-HEADED RIGHTWARDS HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87B", "WIDE-HEADED DOWNWARDS HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87C", "WIDE-HEADED NORTH WEST HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87D", "WIDE-HEADED NORTH EAST HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87E", "WIDE-HEADED SOUTH EAST HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F87F", "WIDE-HEADED SOUTH WEST HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F880", "WIDE-HEADED LEFTWARDS VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F881", "WIDE-HEADED UPWARDS VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F882", "WIDE-HEADED RIGHTWARDS VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F883", "WIDE-HEADED DOWNWARDS VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F884", "WIDE-HEADED NORTH WEST VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F885", "WIDE-HEADED NORTH EAST VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F886", "WIDE-HEADED SOUTH EAST VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F887", "WIDE-HEADED SOUTH WEST VERY HEAVY BARB ARROW"); \
	genSvg(fontname, "0x1F890", "LEFTWARDS TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F891", "UPWARDS TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F892", "RIGHTWARDS TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F893", "DOWNWARDS TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F894", "LEFTWARDS WHITE ARROW WITHIN TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F895", "UPWARDS WHITE ARROW WITHIN TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F896", "RIGHTWARDS WHITE ARROW WITHIN TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F897", "DOWNWARDS WHITE ARROW WITHIN TRIANGLE ARROWHEAD"); \
	genSvg(fontname, "0x1F898", "LEFTWARDS ARROW WITH NOTCHED TAIL"); \
	genSvg(fontname, "0x1F899", "UPWARDS ARROW WITH NOTCHED TAIL"); \
	genSvg(fontname, "0x1F89A", "RIGHTWARDS ARROW WITH NOTCHED TAIL"); \
	genSvg(fontname, "0x1F89B", "DOWNWARDS ARROW WITH NOTCHED TAIL"); \
	genSvg(fontname, "0x1F89C", "HEAVY ARROW SHAFT WIDTH ONE"); \
	genSvg(fontname, "0x1F89D", "HEAVY ARROW SHAFT WIDTH TWO THIRDS"); \
	genSvg(fontname, "0x1F89E", "HEAVY ARROW SHAFT WIDTH ONE HALF"); \
	genSvg(fontname, "0x1F89F", "HEAVY ARROW SHAFT WIDTH ONE THIRD"); \
	genSvg(fontname, "0x1F8A0", "LEFTWARDS BOTTOM-SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A1", "RIGHTWARDS BOTTOM SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A2", "LEFTWARDS TOP SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A3", "RIGHTWARDS TOP SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A4", "LEFTWARDS LEFT-SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A5", "RIGHTWARDS RIGHT-SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A6", "LEFTWARDS RIGHT-SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A7", "RIGHTWARDS LEFT-SHADED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A8", "LEFTWARDS BACK-TILTED SHADOWED WHITE ARROW"); \
	genSvg(fontname, "0x1F8A9", "RIGHTWARDS BACK-TILTED SHADOWED WHITE ARROW"); \
	genSvg(fontname, "0x1F8AA", "LEFTWARDS FRONT-TILTED SHADOWED WHITE ARROW"); \
	genSvg(fontname, "0x1F8AB", "RIGHTWARDS FRONT-TILTED SHADOWED WHITE ARROW"); \
	genSvg(fontname, "0x1F8AC", "WHITE ARROW SHAFT WIDTH ONE"); \
	genSvg(fontname, "0x1F8AD", "WHITE ARROW SHAFT WIDTH TWO THIRDS");

#define MATHEMATICAL_OPERATORS \
	genSvg(fontname, "0x2200", "FOR ALL"); \
	genSvg(fontname, "0x2201", "COMPLEMENT"); \
	genSvg(fontname, "0x2202", "PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x2203", "THERE EXISTS"); \
	genSvg(fontname, "0x2204", "THERE DOES NOT EXIST"); \
	genSvg(fontname, "0x2205", "EMPTY SET"); \
	genSvg(fontname, "0x2206", "INCREMENT"); \
	genSvg(fontname, "0x2207", "NABLA"); \
	genSvg(fontname, "0x2208", "ELEMENT OF"); \
	genSvg(fontname, "0x2209", "NOT AN ELEMENT OF"); \
	genSvg(fontname, "0x220A", "SMALL ELEMENT OF"); \
	genSvg(fontname, "0x220B", "CONTAINS AS MEMBER"); \
	genSvg(fontname, "0x220C", "DOES NOT CONTAIN AS MEMBER"); \
	genSvg(fontname, "0x220D", "SMALL CONTAINS AS MEMBER"); \
	genSvg(fontname, "0x220E", "END OF PROOF"); \
	genSvg(fontname, "0x220F", "N-ARY PRODUCT"); \
	genSvg(fontname, "0x2210", "N-ARY COPRODUCT"); \
	genSvg(fontname, "0x2211", "N-ARY SUMMATION"); \
	genSvg(fontname, "0x2212", "MINUS SIGN"); \
	genSvg(fontname, "0x2213", "MINUS-OR-PLUS SIGN"); \
	genSvg(fontname, "0x2214", "DOT PLUS"); \
	genSvg(fontname, "0x2215", "DIVISION SLASH"); \
	genSvg(fontname, "0x2216", "SET MINUS"); \
	genSvg(fontname, "0x2217", "ASTERISK OPERATOR"); \
	genSvg(fontname, "0x2218", "RING OPERATOR"); \
	genSvg(fontname, "0x2219", "BULLET OPERATOR"); \
	genSvg(fontname, "0x221A", "SQUARE ROOT"); \
	genSvg(fontname, "0x221B", "CUBE ROOT"); \
	genSvg(fontname, "0x221C", "FOURTH ROOT"); \
	genSvg(fontname, "0x221D", "PROPORTIONAL TO"); \
	genSvg(fontname, "0x221E", "INFINITY"); \
	genSvg(fontname, "0x221F", "RIGHT ANGLE"); \
	genSvg(fontname, "0x2220", "ANGLE"); \
	genSvg(fontname, "0x2221", "MEASURED ANGLE"); \
	genSvg(fontname, "0x2222", "SPHERICAL ANGLE"); \
	genSvg(fontname, "0x2223", "DIVIDES"); \
	genSvg(fontname, "0x2224", "DOES NOT DIVIDE"); \
	genSvg(fontname, "0x2225", "PARALLEL TO"); \
	genSvg(fontname, "0x2226", "NOT PARALLEL TO"); \
	genSvg(fontname, "0x2227", "LOGICAL AND"); \
	genSvg(fontname, "0x2228", "LOGICAL OR"); \
	genSvg(fontname, "0x2229", "INTERSECTION"); \
	genSvg(fontname, "0x222A", "UNION"); \
	genSvg(fontname, "0x222B", "INTEGRAL"); \
	genSvg(fontname, "0x222C", "DOUBLE INTEGRAL"); \
	genSvg(fontname, "0x222D", "TRIPLE INTEGRAL"); \
	genSvg(fontname, "0x222E", "CONTOUR INTEGRAL"); \
	genSvg(fontname, "0x222F", "SURFACE INTEGRAL"); \
	genSvg(fontname, "0x2230", "VOLUME INTEGRAL"); \
	genSvg(fontname, "0x2231", "CLOCKWISE INTEGRAL"); \
	genSvg(fontname, "0x2232", "CLOCKWISE CONTOUR INTEGRAL"); \
	genSvg(fontname, "0x2233", "ANTICLOCKWISE CONTOUR INTEGRAL"); \
	genSvg(fontname, "0x2234", "THEREFORE"); \
	genSvg(fontname, "0x2235", "BECAUSE"); \
	genSvg(fontname, "0x2236", "RATIO"); \
	genSvg(fontname, "0x2237", "PROPORTION"); \
	genSvg(fontname, "0x2238", "DOT MINUS"); \
	genSvg(fontname, "0x2239", "EXCESS"); \
	genSvg(fontname, "0x223A", "GEOMETRIC PROPORTION"); \
	genSvg(fontname, "0x223B", "HOMOTHETIC"); \
	genSvg(fontname, "0x223C", "TILDE OPERATOR"); \
	genSvg(fontname, "0x223D", "REVERSED TILDE"); \
	genSvg(fontname, "0x223E", "INVERTED LAZY S"); \
	genSvg(fontname, "0x223F", "SINE WAVE"); \
	genSvg(fontname, "0x2240", "WREATH PRODUCT"); \
	genSvg(fontname, "0x2241", "NOT TILDE"); \
	genSvg(fontname, "0x2242", "MINUS TILDE"); \
	genSvg(fontname, "0x2243", "ASYMPTOTICALLY EQUAL TO"); \
	genSvg(fontname, "0x2244", "NOT ASYMPTOTICALLY EQUAL TO"); \
	genSvg(fontname, "0x2245", "APPROXIMATELY EQUAL TO"); \
	genSvg(fontname, "0x2246", "APPROXIMATELY BUT NOT ACTUALLY EQUAL TO"); \
	genSvg(fontname, "0x2247", "NEITHER APPROXIMATELY NOR ACTUALLY EQUAL TO"); \
	genSvg(fontname, "0x2248", "ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2249", "NOT ALMOST EQUAL TO"); \
	genSvg(fontname, "0x224A", "ALMOST EQUAL OR EQUAL TO"); \
	genSvg(fontname, "0x224B", "TRIPLE TILDE"); \
	genSvg(fontname, "0x224C", "ALL EQUAL TO"); \
	genSvg(fontname, "0x224D", "EQUIVALENT TO"); \
	genSvg(fontname, "0x224E", "GEOMETRICALLY EQUIVALENT TO"); \
	genSvg(fontname, "0x224F", "DIFFERENCE BETWEEN"); \
	genSvg(fontname, "0x2250", "APPROACHES THE LIMIT"); \
	genSvg(fontname, "0x2251", "GEOMETRICALLY EQUAL TO"); \
	genSvg(fontname, "0x2252", "APPROXIMATELY EQUAL TO OR THE IMAGE OF"); \
	genSvg(fontname, "0x2253", "IMAGE OF OR APPROXIMATELY EQUAL TO"); \
	genSvg(fontname, "0x2254", "COLON EQUALS"); \
	genSvg(fontname, "0x2255", "EQUALS COLON"); \
	genSvg(fontname, "0x2256", "RING IN EQUAL TO"); \
	genSvg(fontname, "0x2257", "RING EQUAL TO"); \
	genSvg(fontname, "0x2258", "CORRESPONDS TO"); \
	genSvg(fontname, "0x2259", "ESTIMATES"); \
	genSvg(fontname, "0x225A", "EQUIANGULAR TO"); \
	genSvg(fontname, "0x225B", "STAR EQUALS"); \
	genSvg(fontname, "0x225C", "DELTA EQUAL TO"); \
	genSvg(fontname, "0x225D", "EQUAL TO BY DEFINITION"); \
	genSvg(fontname, "0x225E", "MEASURED BY"); \
	genSvg(fontname, "0x225F", "QUESTIONED EQUAL TO"); \
	genSvg(fontname, "0x2260", "NOT EQUAL TO"); \
	genSvg(fontname, "0x2261", "IDENTICAL TO"); \
	genSvg(fontname, "0x2262", "NOT IDENTICAL TO"); \
	genSvg(fontname, "0x2263", "STRICTLY EQUIVALENT TO"); \
	genSvg(fontname, "0x2264", "LESS-THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2265", "GREATER-THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2266", "LESS-THAN OVER EQUAL TO"); \
	genSvg(fontname, "0x2267", "GREATER-THAN OVER EQUAL TO"); \
	genSvg(fontname, "0x2268", "LESS-THAN BUT NOT EQUAL TO"); \
	genSvg(fontname, "0x2269", "GREATER-THAN BUT NOT EQUAL TO"); \
	genSvg(fontname, "0x226A", "MUCH LESS-THAN"); \
	genSvg(fontname, "0x226B", "MUCH GREATER-THAN"); \
	genSvg(fontname, "0x226C", "BETWEEN"); \
	genSvg(fontname, "0x226D", "NOT EQUIVALENT TO"); \
	genSvg(fontname, "0x226E", "NOT LESS-THAN"); \
	genSvg(fontname, "0x226F", "NOT GREATER-THAN"); \
	genSvg(fontname, "0x2270", "NEITHER LESS-THAN NOR EQUAL TO"); \
	genSvg(fontname, "0x2271", "NEITHER GREATER-THAN NOR EQUAL TO"); \
	genSvg(fontname, "0x2272", "LESS-THAN OR EQUIVALENT TO"); \
	genSvg(fontname, "0x2273", "GREATER-THAN OR EQUIVALENT TO"); \
	genSvg(fontname, "0x2274", "NEITHER LESS-THAN NOR EQUIVALENT TO"); \
	genSvg(fontname, "0x2275", "NEITHER GREATER-THAN NOR EQUIVALENT TO"); \
	genSvg(fontname, "0x2276", "LESS-THAN OR GREATER-THAN"); \
	genSvg(fontname, "0x2277", "GREATER-THAN OR LESS-THAN"); \
	genSvg(fontname, "0x2278", "NEITHER LESS-THAN NOR GREATER-THAN"); \
	genSvg(fontname, "0x2279", "NEITHER GREATER-THAN NOR LESS-THAN"); \
	genSvg(fontname, "0x227A", "PRECEDES"); \
	genSvg(fontname, "0x227B", "SUCCEEDS"); \
	genSvg(fontname, "0x227C", "PRECEDES OR EQUAL TO"); \
	genSvg(fontname, "0x227D", "SUCCEEDS OR EQUAL TO"); \
	genSvg(fontname, "0x227E", "PRECEDES OR EQUIVALENT TO"); \
	genSvg(fontname, "0x227F", "SUCCEEDS OR EQUIVALENT TO"); \
	genSvg(fontname, "0x2280", "DOES NOT PRECEDE"); \
	genSvg(fontname, "0x2281", "DOES NOT SUCCEED"); \
	genSvg(fontname, "0x2282", "SUBSET OF"); \
	genSvg(fontname, "0x2283", "SUPERSET OF"); \
	genSvg(fontname, "0x2284", "NOT A SUBSET OF"); \
	genSvg(fontname, "0x2285", "NOT A SUPERSET OF"); \
	genSvg(fontname, "0x2286", "SUBSET OF OR EQUAL TO"); \
	genSvg(fontname, "0x2287", "SUPERSET OF OR EQUAL TO"); \
	genSvg(fontname, "0x2288", "NEITHER A SUBSET OF NOR EQUAL TO"); \
	genSvg(fontname, "0x2289", "NEITHER A SUPERSET OF NOR EQUAL TO"); \
	genSvg(fontname, "0x228A", "SUBSET OF WITH NOT EQUAL TO"); \
	genSvg(fontname, "0x228B", "SUPERSET OF WITH NOT EQUAL TO"); \
	genSvg(fontname, "0x228C", "MULTISET"); \
	genSvg(fontname, "0x228D", "MULTISET MULTIPLICATION"); \
	genSvg(fontname, "0x228E", "MULTISET UNION"); \
	genSvg(fontname, "0x228F", "SQUARE IMAGE OF"); \
	genSvg(fontname, "0x2290", "SQUARE ORIGINAL OF"); \
	genSvg(fontname, "0x2291", "SQUARE IMAGE OF OR EQUAL TO"); \
	genSvg(fontname, "0x2292", "SQUARE ORIGINAL OF OR EQUAL TO"); \
	genSvg(fontname, "0x2293", "SQUARE CAP"); \
	genSvg(fontname, "0x2294", "SQUARE CUP"); \
	genSvg(fontname, "0x2295", "CIRCLED PLUS"); \
	genSvg(fontname, "0x2296", "CIRCLED MINUS"); \
	genSvg(fontname, "0x2297", "CIRCLED TIMES"); \
	genSvg(fontname, "0x2298", "CIRCLED DIVISION SLASH"); \
	genSvg(fontname, "0x2299", "CIRCLED DOT OPERATOR"); \
	genSvg(fontname, "0x229A", "CIRCLED RING OPERATOR"); \
	genSvg(fontname, "0x229B", "CIRCLED ASTERISK OPERATOR"); \
	genSvg(fontname, "0x229C", "CIRCLED EQUALS"); \
	genSvg(fontname, "0x229D", "CIRCLED DASH"); \
	genSvg(fontname, "0x229E", "SQUARED PLUS"); \
	genSvg(fontname, "0x229F", "SQUARED MINUS"); \
	genSvg(fontname, "0x22A0", "SQUARED TIMES"); \
	genSvg(fontname, "0x22A1", "SQUARED DOT OPERATOR"); \
	genSvg(fontname, "0x22A2", "RIGHT TACK"); \
	genSvg(fontname, "0x22A3", "LEFT TACK"); \
	genSvg(fontname, "0x22A4", "DOWN TACK"); \
	genSvg(fontname, "0x22A5", "UP TACK"); \
	genSvg(fontname, "0x22A6", "ASSERTION"); \
	genSvg(fontname, "0x22A7", "MODELS"); \
	genSvg(fontname, "0x22A8", "TRUE"); \
	genSvg(fontname, "0x22A9", "FORCES"); \
	genSvg(fontname, "0x22AA", "TRIPLE VERTICAL BAR RIGHT TURNSTILE"); \
	genSvg(fontname, "0x22AB", "DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE"); \
	genSvg(fontname, "0x22AC", "DOES NOT PROVE"); \
	genSvg(fontname, "0x22AD", "NOT TRUE"); \
	genSvg(fontname, "0x22AE", "DOES NOT FORCE"); \
	genSvg(fontname, "0x22AF", "NEGATED DOUBLE VERTICAL BAR DOUBLE RIGHT TURNSTILE"); \
	genSvg(fontname, "0x22B0", "PRECEDES UNDER RELATION"); \
	genSvg(fontname, "0x22B1", "SUCCEEDS UNDER RELATION"); \
	genSvg(fontname, "0x22B2", "NORMAL SUBGROUP OF"); \
	genSvg(fontname, "0x22B3", "CONTAINS AS NORMAL SUBGROUP"); \
	genSvg(fontname, "0x22B4", "NORMAL SUBGROUP OF OR EQUAL TO"); \
	genSvg(fontname, "0x22B5", "CONTAINS AS NORMAL SUBGROUP OR EQUAL TO"); \
	genSvg(fontname, "0x22B6", "ORIGINAL OF"); \
	genSvg(fontname, "0x22B7", "IMAGE OF"); \
	genSvg(fontname, "0x22B8", "MULTIMAP"); \
	genSvg(fontname, "0x22B9", "HERMITIAN CONJUGATE MATRIX"); \
	genSvg(fontname, "0x22BA", "INTERCALATE"); \
	genSvg(fontname, "0x22BB", "XOR"); \
	genSvg(fontname, "0x22BC", "NAND"); \
	genSvg(fontname, "0x22BD", "NOR"); \
	genSvg(fontname, "0x22BE", "RIGHT ANGLE WITH ARC"); \
	genSvg(fontname, "0x22BF", "RIGHT TRIANGLE"); \
	genSvg(fontname, "0x22C0", "N-ARY LOGICAL AND"); \
	genSvg(fontname, "0x22C1", "N-ARY LOGICAL OR"); \
	genSvg(fontname, "0x22C2", "N-ARY INTERSECTION"); \
	genSvg(fontname, "0x22C3", "N-ARY UNION"); \
	genSvg(fontname, "0x22C4", "DIAMOND OPERATOR"); \
	genSvg(fontname, "0x22C5", "DOT OPERATOR"); \
	genSvg(fontname, "0x22C6", "STAR OPERATOR"); \
	genSvg(fontname, "0x22C7", "DIVISION TIMES"); \
	genSvg(fontname, "0x22C8", "BOWTIE"); \
	genSvg(fontname, "0x22C9", "LEFT NORMAL FACTOR SEMIDIRECT PRODUCT"); \
	genSvg(fontname, "0x22CA", "RIGHT NORMAL FACTOR SEMIDIRECT PRODUCT"); \
	genSvg(fontname, "0x22CB", "LEFT SEMIDIRECT PRODUCT"); \
	genSvg(fontname, "0x22CC", "RIGHT SEMIDIRECT PRODUCT"); \
	genSvg(fontname, "0x22CD", "REVERSED TILDE EQUALS"); \
	genSvg(fontname, "0x22CE", "CURLY LOGICAL OR"); \
	genSvg(fontname, "0x22CF", "CURLY LOGICAL AND"); \
	genSvg(fontname, "0x22D0", "DOUBLE SUBSET"); \
	genSvg(fontname, "0x22D1", "DOUBLE SUPERSET"); \
	genSvg(fontname, "0x22D2", "DOUBLE INTERSECTION"); \
	genSvg(fontname, "0x22D3", "DOUBLE UNION"); \
	genSvg(fontname, "0x22D4", "PITCHFORK"); \
	genSvg(fontname, "0x22D5", "EQUAL AND PARALLEL TO"); \
	genSvg(fontname, "0x22D6", "LESS-THAN WITH DOT"); \
	genSvg(fontname, "0x22D7", "GREATER-THAN WITH DOT"); \
	genSvg(fontname, "0x22D8", "VERY MUCH LESS-THAN"); \
	genSvg(fontname, "0x22D9", "VERY MUCH GREATER-THAN"); \
	genSvg(fontname, "0x22DA", "LESS-THAN EQUAL TO OR GREATER-THAN"); \
	genSvg(fontname, "0x22DB", "GREATER-THAN EQUAL TO OR LESS-THAN"); \
	genSvg(fontname, "0x22DC", "EQUAL TO OR LESS-THAN"); \
	genSvg(fontname, "0x22DD", "EQUAL TO OR GREATER-THAN"); \
	genSvg(fontname, "0x22DE", "EQUAL TO OR PRECEDES"); \
	genSvg(fontname, "0x22DF", "EQUAL TO OR SUCCEEDS"); \
	genSvg(fontname, "0x22E0", "DOES NOT PRECEDE OR EQUAL"); \
	genSvg(fontname, "0x22E1", "DOES NOT SUCCEED OR EQUAL"); \
	genSvg(fontname, "0x22E2", "NOT SQUARE IMAGE OF OR EQUAL TO"); \
	genSvg(fontname, "0x22E3", "NOT SQUARE ORIGINAL OF OR EQUAL TO"); \
	genSvg(fontname, "0x22E4", "SQUARE IMAGE OF OR NOT EQUAL TO"); \
	genSvg(fontname, "0x22E5", "SQUARE ORIGINAL OF OR NOT EQUAL TO"); \
	genSvg(fontname, "0x22E6", "LESS-THAN BUT NOT EQUIVALENT TO"); \
	genSvg(fontname, "0x22E7", "GREATER-THAN BUT NOT EQUIVALENT TO"); \
	genSvg(fontname, "0x22E8", "PRECEDES BUT NOT EQUIVALENT TO"); \
	genSvg(fontname, "0x22E9", "SUCCEEDS BUT NOT EQUIVALENT TO"); \
	genSvg(fontname, "0x22EA", "NOT NORMAL SUBGROUP OF"); \
	genSvg(fontname, "0x22EB", "DOES NOT CONTAIN AS NORMAL SUBGROUP"); \
	genSvg(fontname, "0x22EC", "NOT NORMAL SUBGROUP OF OR EQUAL TO"); \
	genSvg(fontname, "0x22ED", "DOES NOT CONTAIN AS NORMAL SUBGROUP OR EQUAL"); \
	genSvg(fontname, "0x22EE", "VERTICAL ELLIPSIS"); \
	genSvg(fontname, "0x22EF", "MIDLINE HORIZONTAL ELLIPSIS"); \
	genSvg(fontname, "0x22F0", "UP RIGHT DIAGONAL ELLIPSIS"); \
	genSvg(fontname, "0x22F1", "DOWN RIGHT DIAGONAL ELLIPSIS"); \
	genSvg(fontname, "0x22F2", "ELEMENT OF WITH LONG HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22F3", "ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22F4", "SMALL ELEMENT OF WITH VERTICAL BAR AT END OF HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22F5", "ELEMENT OF WITH DOT ABOVE"); \
	genSvg(fontname, "0x22F6", "ELEMENT OF WITH OVERBAR"); \
	genSvg(fontname, "0x22F7", "SMALL ELEMENT OF WITH OVERBAR"); \
	genSvg(fontname, "0x22F8", "ELEMENT OF WITH UNDERBAR"); \
	genSvg(fontname, "0x22F9", "ELEMENT OF WITH TWO HORIZONTAL STROKES"); \
	genSvg(fontname, "0x22FA", "CONTAINS WITH LONG HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22FB", "CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22FC", "SMALL CONTAINS WITH VERTICAL BAR AT END OF HORIZONTAL STROKE"); \
	genSvg(fontname, "0x22FD", "CONTAINS WITH OVERBAR"); \
	genSvg(fontname, "0x22FE", "SMALL CONTAINS WITH OVERBAR"); \
	genSvg(fontname, "0x22FF", "Z NOTATION BAG MEMBERSHIP");

#define SUPPLEMENTAL_MATHEMATICAL_OPERATORS \
	genSvg(fontname, "0x2A00", "N-ARY CIRCLED DOT OPERATOR"); \
	genSvg(fontname, "0x2A01", "N-ARY CIRCLED PLUS OPERATOR"); \
	genSvg(fontname, "0x2A02", "N-ARY CIRCLED TIMES OPERATOR"); \
	genSvg(fontname, "0x2A03", "N-ARY UNION OPERATOR WITH DOT"); \
	genSvg(fontname, "0x2A04", "N-ARY UNION OPERATOR WITH PLUS"); \
	genSvg(fontname, "0x2A05", "N-ARY SQUARE INTERSECTION OPERATOR"); \
	genSvg(fontname, "0x2A06", "N-ARY SQUARE UNION OPERATOR"); \
	genSvg(fontname, "0x2A07", "TWO LOGICAL AND OPERATOR"); \
	genSvg(fontname, "0x2A08", "TWO LOGICAL OR OPERATOR"); \
	genSvg(fontname, "0x2A09", "N-ARY TIMES OPERATOR"); \
	genSvg(fontname, "0x2A0A", "MODULO TWO SUM"); \
	genSvg(fontname, "0x2A0B", "SUMMATION WITH INTEGRAL"); \
	genSvg(fontname, "0x2A0C", "QUADRUPLE INTEGRAL OPERATOR"); \
	genSvg(fontname, "0x2A0D", "FINITE PART INTEGRAL"); \
	genSvg(fontname, "0x2A0E", "INTEGRAL WITH DOUBLE STROKE"); \
	genSvg(fontname, "0x2A0F", "INTEGRAL AVERAGE WITH SLASH"); \
	genSvg(fontname, "0x2A10", "CIRCULATION FUNCTION"); \
	genSvg(fontname, "0x2A11", "ANTICLOCKWISE INTEGRATION"); \
	genSvg(fontname, "0x2A12", "LINE INTEGRATION WITH RECTANGULAR PATH AROUND POLE"); \
	genSvg(fontname, "0x2A13", "LINE INTEGRATION WITH SEMICIRCULAR PATH AROUND POLE"); \
	genSvg(fontname, "0x2A14", "LINE INTEGRATION NOT INCLUDING THE POLE"); \
	genSvg(fontname, "0x2A15", "INTEGRAL AROUND A POINT OPERATOR"); \
	genSvg(fontname, "0x2A16", "QUATERNION INTEGRAL OPERATOR"); \
	genSvg(fontname, "0x2A17", "INTEGRAL WITH LEFTWARDS ARROW WITH HOOK"); \
	genSvg(fontname, "0x2A18", "INTEGRAL WITH TIMES SIGN"); \
	genSvg(fontname, "0x2A19", "INTEGRAL WITH INTERSECTION"); \
	genSvg(fontname, "0x2A1A", "INTEGRAL WITH UNION"); \
	genSvg(fontname, "0x2A1B", "INTEGRAL WITH OVERBAR"); \
	genSvg(fontname, "0x2A1C", "INTEGRAL WITH UNDERBAR"); \
	genSvg(fontname, "0x2A1D", "JOIN"); \
	genSvg(fontname, "0x2A1E", "LARGE LEFT TRIANGLE OPERATOR"); \
	genSvg(fontname, "0x2A1F", "Z NOTATION SCHEMA COMPOSITION"); \
	genSvg(fontname, "0x2A20", "Z NOTATION SCHEMA PIPING"); \
	genSvg(fontname, "0x2A21", "Z NOTATION SCHEMA PROJECTION"); \
	genSvg(fontname, "0x2A22", "PLUS SIGN WITH SMALL CIRCLE ABOVE"); \
	genSvg(fontname, "0x2A23", "PLUS SIGN WITH CIRCUMFLEX ACCENT ABOVE"); \
	genSvg(fontname, "0x2A24", "PLUS SIGN WITH TILDE ABOVE"); \
	genSvg(fontname, "0x2A25", "PLUS SIGN WITH DOT BELOW"); \
	genSvg(fontname, "0x2A26", "PLUS SIGN WITH TILDE BELOW"); \
	genSvg(fontname, "0x2A27", "PLUS SIGN WITH SUBSCRIPT TWO"); \
	genSvg(fontname, "0x2A28", "PLUS SIGN WITH BLACK TRIANGLE"); \
	genSvg(fontname, "0x2A29", "MINUS SIGN WITH COMMA ABOVE"); \
	genSvg(fontname, "0x2A2A", "MINUS SIGN WITH DOT BELOW"); \
	genSvg(fontname, "0x2A2B", "MINUS SIGN WITH FALLING DOTS"); \
	genSvg(fontname, "0x2A2C", "MINUS SIGN WITH RISING DOTS"); \
	genSvg(fontname, "0x2A2D", "PLUS SIGN IN LEFT HALF CIRCLE"); \
	genSvg(fontname, "0x2A2E", "PLUS SIGN IN RIGHT HALF CIRCLE"); \
	genSvg(fontname, "0x2A2F", "VECTOR OR CROSS PRODUCT"); \
	genSvg(fontname, "0x2A30", "MULTIPLICATION SIGN WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A31", "MULTIPLICATION SIGN WITH UNDERBAR"); \
	genSvg(fontname, "0x2A32", "SEMIDIRECT PRODUCT WITH BOTTOM CLOSED"); \
	genSvg(fontname, "0x2A33", "SMASH PRODUCT"); \
	genSvg(fontname, "0x2A34", "MULTIPLICATION SIGN IN LEFT HALF CIRCLE"); \
	genSvg(fontname, "0x2A35", "MULTIPLICATION SIGN IN RIGHT HALF CIRCLE"); \
	genSvg(fontname, "0x2A36", "CIRCLED MULTIPLICATION SIGN WITH CIRCUMFLEX ACCENT"); \
	genSvg(fontname, "0x2A37", "MULTIPLICATION SIGN IN DOUBLE CIRCLE"); \
	genSvg(fontname, "0x2A38", "CIRCLED DIVISION SIGN"); \
	genSvg(fontname, "0x2A39", "PLUS SIGN IN TRIANGLE"); \
	genSvg(fontname, "0x2A3A", "MINUS SIGN IN TRIANGLE"); \
	genSvg(fontname, "0x2A3B", "MULTIPLICATION SIGN IN TRIANGLE"); \
	genSvg(fontname, "0x2A3C", "INTERIOR PRODUCT"); \
	genSvg(fontname, "0x2A3D", "RIGHTHAND INTERIOR PRODUCT"); \
	genSvg(fontname, "0x2A3E", "Z NOTATION RELATIONAL COMPOSITION"); \
	genSvg(fontname, "0x2A3F", "AMALGAMATION OR COPRODUCT"); \
	genSvg(fontname, "0x2A40", "INTERSECTION WITH DOT"); \
	genSvg(fontname, "0x2A41", "UNION WITH MINUS SIGN"); \
	genSvg(fontname, "0x2A42", "UNION WITH OVERBAR"); \
	genSvg(fontname, "0x2A43", "INTERSECTION WITH OVERBAR"); \
	genSvg(fontname, "0x2A44", "INTERSECTION WITH LOGICAL AND"); \
	genSvg(fontname, "0x2A45", "UNION WITH LOGICAL OR"); \
	genSvg(fontname, "0x2A46", "UNION ABOVE INTERSECTION"); \
	genSvg(fontname, "0x2A47", "INTERSECTION ABOVE UNION"); \
	genSvg(fontname, "0x2A48", "UNION ABOVE BAR ABOVE INTERSECTION"); \
	genSvg(fontname, "0x2A49", "INTERSECTION ABOVE BAR ABOVE UNION"); \
	genSvg(fontname, "0x2A4A", "UNION BESIDE AND JOINED WITH UNION"); \
	genSvg(fontname, "0x2A4B", "INTERSECTION BESIDE AND JOINED WITH INTERSECTION"); \
	genSvg(fontname, "0x2A4C", "CLOSED UNION WITH SERIFS"); \
	genSvg(fontname, "0x2A4D", "CLOSED INTERSECTION WITH SERIFS"); \
	genSvg(fontname, "0x2A4E", "DOUBLE SQUARE INTERSECTION"); \
	genSvg(fontname, "0x2A4F", "DOUBLE SQUARE UNION"); \
	genSvg(fontname, "0x2A50", "CLOSED UNION WITH SERIFS AND SMASH PRODUCT"); \
	genSvg(fontname, "0x2A51", "LOGICAL AND WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A52", "LOGICAL OR WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A53", "DOUBLE LOGICAL AND"); \
	genSvg(fontname, "0x2A54", "DOUBLE LOGICAL OR"); \
	genSvg(fontname, "0x2A55", "TWO INTERSECTING LOGICAL AND"); \
	genSvg(fontname, "0x2A56", "TWO INTERSECTING LOGICAL OR"); \
	genSvg(fontname, "0x2A57", "SLOPING LARGE OR"); \
	genSvg(fontname, "0x2A58", "SLOPING LARGE AND"); \
	genSvg(fontname, "0x2A59", "LOGICAL OR OVERLAPPING LOGICAL AND"); \
	genSvg(fontname, "0x2A5A", "LOGICAL AND WITH MIDDLE STEM"); \
	genSvg(fontname, "0x2A5B", "LOGICAL OR WITH MIDDLE STEM"); \
	genSvg(fontname, "0x2A5C", "LOGICAL AND WITH HORIZONTAL DASH"); \
	genSvg(fontname, "0x2A5D", "LOGICAL OR WITH HORIZONTAL DASH"); \
	genSvg(fontname, "0x2A5E", "LOGICAL AND WITH DOUBLE OVERBAR"); \
	genSvg(fontname, "0x2A5F", "LOGICAL AND WITH UNDERBAR"); \
	genSvg(fontname, "0x2A60", "LOGICAL AND WITH DOUBLE UNDERBAR"); \
	genSvg(fontname, "0x2A61", "SMALL VEE WITH UNDERBAR"); \
	genSvg(fontname, "0x2A62", "LOGICAL OR WITH DOUBLE OVERBAR"); \
	genSvg(fontname, "0x2A63", "LOGICAL OR WITH DOUBLE UNDERBAR"); \
	genSvg(fontname, "0x2A64", "Z NOTATION DOMAIN ANTIRESTRICTION"); \
	genSvg(fontname, "0x2A65", "Z NOTATION RANGE ANTIRESTRICTION"); \
	genSvg(fontname, "0x2A66", "EQUALS SIGN WITH DOT BELOW"); \
	genSvg(fontname, "0x2A67", "IDENTICAL WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A68", "TRIPLE HORIZONTAL BAR WITH DOUBLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2A69", "TRIPLE HORIZONTAL BAR WITH TRIPLE VERTICAL STROKE"); \
	genSvg(fontname, "0x2A6A", "TILDE OPERATOR WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A6B", "TILDE OPERATOR WITH RISING DOTS"); \
	genSvg(fontname, "0x2A6C", "SIMILAR MINUS SIMILAR"); \
	genSvg(fontname, "0x2A6D", "CONGRUENT WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A6E", "EQUALS WITH ASTERISK"); \
	genSvg(fontname, "0x2A6F", "ALMOST EQUAL TO WITH CIRCUMFLEX ACCENT"); \
	genSvg(fontname, "0x2A70", "APPROXIMATELY EQUAL OR EQUAL TO"); \
	genSvg(fontname, "0x2A71", "EQUALS SIGN ABOVE PLUS SIGN"); \
	genSvg(fontname, "0x2A72", "PLUS SIGN ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2A73", "EQUALS SIGN ABOVE TILDE OPERATOR"); \
	genSvg(fontname, "0x2A74", "DOUBLE COLON EQUAL"); \
	genSvg(fontname, "0x2A75", "TWO CONSECUTIVE EQUALS SIGNS"); \
	genSvg(fontname, "0x2A76", "THREE CONSECUTIVE EQUALS SIGNS"); \
	genSvg(fontname, "0x2A77", "EQUALS SIGN WITH TWO DOTS ABOVE AND TWO DOTS BELOW"); \
	genSvg(fontname, "0x2A78", "EQUIVALENT WITH FOUR DOTS ABOVE"); \
	genSvg(fontname, "0x2A79", "LESS-THAN WITH CIRCLE INSIDE"); \
	genSvg(fontname, "0x2A7A", "GREATER-THAN WITH CIRCLE INSIDE"); \
	genSvg(fontname, "0x2A7B", "LESS-THAN WITH QUESTION MARK ABOVE"); \
	genSvg(fontname, "0x2A7C", "GREATER-THAN WITH QUESTION MARK ABOVE"); \
	genSvg(fontname, "0x2A7D", "LESS-THAN OR SLANTED EQUAL TO"); \
	genSvg(fontname, "0x2A7E", "GREATER-THAN OR SLANTED EQUAL TO"); \
	genSvg(fontname, "0x2A7F", "LESS-THAN OR SLANTED EQUAL TO WITH DOT INSIDE"); \
	genSvg(fontname, "0x2A80", "GREATER-THAN OR SLANTED EQUAL TO WITH DOT INSIDE"); \
	genSvg(fontname, "0x2A81", "LESS-THAN OR SLANTED EQUAL TO WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A82", "GREATER-THAN OR SLANTED EQUAL TO WITH DOT ABOVE"); \
	genSvg(fontname, "0x2A83", "LESS-THAN OR SLANTED EQUAL TO WITH DOT ABOVE RIGHT"); \
	genSvg(fontname, "0x2A84", "GREATER-THAN OR SLANTED EQUAL TO WITH DOT ABOVE LEFT"); \
	genSvg(fontname, "0x2A85", "LESS-THAN OR APPROXIMATE"); \
	genSvg(fontname, "0x2A86", "GREATER-THAN OR APPROXIMATE"); \
	genSvg(fontname, "0x2A87", "LESS-THAN AND SINGLE-LINE NOT EQUAL TO"); \
	genSvg(fontname, "0x2A88", "GREATER-THAN AND SINGLE-LINE NOT EQUAL TO"); \
	genSvg(fontname, "0x2A89", "LESS-THAN AND NOT APPROXIMATE"); \
	genSvg(fontname, "0x2A8A", "GREATER-THAN AND NOT APPROXIMATE"); \
	genSvg(fontname, "0x2A8B", "LESS-THAN ABOVE DOUBLE-LINE EQUAL ABOVE GREATER-THAN"); \
	genSvg(fontname, "0x2A8C", "GREATER-THAN ABOVE DOUBLE-LINE EQUAL ABOVE LESS-THAN"); \
	genSvg(fontname, "0x2A8D", "LESS-THAN ABOVE SIMILAR OR EQUAL"); \
	genSvg(fontname, "0x2A8E", "GREATER-THAN ABOVE SIMILAR OR EQUAL"); \
	genSvg(fontname, "0x2A8F", "LESS-THAN ABOVE SIMILAR ABOVE GREATER-THAN"); \
	genSvg(fontname, "0x2A90", "GREATER-THAN ABOVE SIMILAR ABOVE LESS-THAN"); \
	genSvg(fontname, "0x2A91", "LESS-THAN ABOVE GREATER-THAN ABOVE DOUBLE-LINE EQUAL"); \
	genSvg(fontname, "0x2A92", "GREATER-THAN ABOVE LESS-THAN ABOVE DOUBLE-LINE EQUAL"); \
	genSvg(fontname, "0x2A93", "LESS-THAN ABOVE SLANTED EQUAL ABOVE GREATER-THAN ABOVE SLANTED EQUAL"); \
	genSvg(fontname, "0x2A94", "GREATER-THAN ABOVE SLANTED EQUAL ABOVE LESS-THAN ABOVE SLANTED EQUAL"); \
	genSvg(fontname, "0x2A95", "SLANTED EQUAL TO OR LESS-THAN"); \
	genSvg(fontname, "0x2A96", "SLANTED EQUAL TO OR GREATER-THAN"); \
	genSvg(fontname, "0x2A97", "SLANTED EQUAL TO OR LESS-THAN WITH DOT INSIDE"); \
	genSvg(fontname, "0x2A98", "SLANTED EQUAL TO OR GREATER-THAN WITH DOT INSIDE"); \
	genSvg(fontname, "0x2A99", "DOUBLE-LINE EQUAL TO OR LESS-THAN"); \
	genSvg(fontname, "0x2A9A", "DOUBLE-LINE EQUAL TO OR GREATER-THAN"); \
	genSvg(fontname, "0x2A9B", "DOUBLE-LINE SLANTED EQUAL TO OR LESS-THAN"); \
	genSvg(fontname, "0x2A9C", "DOUBLE-LINE SLANTED EQUAL TO OR GREATER-THAN"); \
	genSvg(fontname, "0x2A9D", "SIMILAR OR LESS-THAN"); \
	genSvg(fontname, "0x2A9E", "SIMILAR OR GREATER-THAN"); \
	genSvg(fontname, "0x2A9F", "SIMILAR ABOVE LESS-THAN ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AA0", "SIMILAR ABOVE GREATER-THAN ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AA1", "DOUBLE NESTED LESS-THAN"); \
	genSvg(fontname, "0x2AA2", "DOUBLE NESTED GREATER-THAN"); \
	genSvg(fontname, "0x2AA3", "DOUBLE NESTED LESS-THAN WITH UNDERBAR"); \
	genSvg(fontname, "0x2AA4", "GREATER-THAN OVERLAPPING LESS-THAN"); \
	genSvg(fontname, "0x2AA5", "GREATER-THAN BESIDE LESS-THAN"); \
	genSvg(fontname, "0x2AA6", "LESS-THAN CLOSED BY CURVE"); \
	genSvg(fontname, "0x2AA7", "GREATER-THAN CLOSED BY CURVE"); \
	genSvg(fontname, "0x2AA8", "LESS-THAN CLOSED BY CURVE ABOVE SLANTED EQUAL"); \
	genSvg(fontname, "0x2AA9", "GREATER-THAN CLOSED BY CURVE ABOVE SLANTED EQUAL"); \
	genSvg(fontname, "0x2AAA", "SMALLER THAN"); \
	genSvg(fontname, "0x2AAB", "LARGER THAN"); \
	genSvg(fontname, "0x2AAC", "SMALLER THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2AAD", "LARGER THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2AAE", "EQUALS SIGN WITH BUMPY ABOVE"); \
	genSvg(fontname, "0x2AAF", "PRECEDES ABOVE SINGLE-LINE EQUALS SIGN"); \
	genSvg(fontname, "0x2AB0", "SUCCEEDS ABOVE SINGLE-LINE EQUALS SIGN"); \
	genSvg(fontname, "0x2AB1", "PRECEDES ABOVE SINGLE-LINE NOT EQUAL TO"); \
	genSvg(fontname, "0x2AB2", "SUCCEEDS ABOVE SINGLE-LINE NOT EQUAL TO"); \
	genSvg(fontname, "0x2AB3", "PRECEDES ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AB4", "SUCCEEDS ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AB5", "PRECEDES ABOVE NOT EQUAL TO"); \
	genSvg(fontname, "0x2AB6", "SUCCEEDS ABOVE NOT EQUAL TO"); \
	genSvg(fontname, "0x2AB7", "PRECEDES ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2AB8", "SUCCEEDS ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2AB9", "PRECEDES ABOVE NOT ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2ABA", "SUCCEEDS ABOVE NOT ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2ABB", "DOUBLE PRECEDES"); \
	genSvg(fontname, "0x2ABC", "DOUBLE SUCCEEDS"); \
	genSvg(fontname, "0x2ABD", "SUBSET WITH DOT"); \
	genSvg(fontname, "0x2ABE", "SUPERSET WITH DOT"); \
	genSvg(fontname, "0x2ABF", "SUBSET WITH PLUS SIGN BELOW"); \
	genSvg(fontname, "0x2AC0", "SUPERSET WITH PLUS SIGN BELOW"); \
	genSvg(fontname, "0x2AC1", "SUBSET WITH MULTIPLICATION SIGN BELOW"); \
	genSvg(fontname, "0x2AC2", "SUPERSET WITH MULTIPLICATION SIGN BELOW"); \
	genSvg(fontname, "0x2AC3", "SUBSET OF OR EQUAL TO WITH DOT ABOVE"); \
	genSvg(fontname, "0x2AC4", "SUPERSET OF OR EQUAL TO WITH DOT ABOVE"); \
	genSvg(fontname, "0x2AC5", "SUBSET OF ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AC6", "SUPERSET OF ABOVE EQUALS SIGN"); \
	genSvg(fontname, "0x2AC7", "SUBSET OF ABOVE TILDE OPERATOR"); \
	genSvg(fontname, "0x2AC8", "SUPERSET OF ABOVE TILDE OPERATOR"); \
	genSvg(fontname, "0x2AC9", "SUBSET OF ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2ACA", "SUPERSET OF ABOVE ALMOST EQUAL TO"); \
	genSvg(fontname, "0x2ACB", "SUBSET OF ABOVE NOT EQUAL TO"); \
	genSvg(fontname, "0x2ACC", "SUPERSET OF ABOVE NOT EQUAL TO"); \
	genSvg(fontname, "0x2ACD", "SQUARE LEFT OPEN BOX OPERATOR"); \
	genSvg(fontname, "0x2ACE", "SQUARE RIGHT OPEN BOX OPERATOR"); \
	genSvg(fontname, "0x2ACF", "CLOSED SUBSET"); \
	genSvg(fontname, "0x2AD0", "CLOSED SUPERSET"); \
	genSvg(fontname, "0x2AD1", "CLOSED SUBSET OR EQUAL TO"); \
	genSvg(fontname, "0x2AD2", "CLOSED SUPERSET OR EQUAL TO"); \
	genSvg(fontname, "0x2AD3", "SUBSET ABOVE SUPERSET"); \
	genSvg(fontname, "0x2AD4", "SUPERSET ABOVE SUBSET"); \
	genSvg(fontname, "0x2AD5", "SUBSET ABOVE SUBSET"); \
	genSvg(fontname, "0x2AD6", "SUPERSET ABOVE SUPERSET"); \
	genSvg(fontname, "0x2AD7", "SUPERSET BESIDE SUBSET"); \
	genSvg(fontname, "0x2AD8", "SUPERSET BESIDE AND JOINED BY DASH WITH SUBSET"); \
	genSvg(fontname, "0x2AD9", "ELEMENT OF OPENING DOWNWARDS"); \
	genSvg(fontname, "0x2ADA", "PITCHFORK WITH TEE TOP"); \
	genSvg(fontname, "0x2ADB", "TRANSVERSAL INTERSECTION"); \
	genSvg(fontname, "0x2ADC", "FORKING"); \
	genSvg(fontname, "0x2ADD", "NONFORKING"); \
	genSvg(fontname, "0x2ADE", "SHORT LEFT TACK"); \
	genSvg(fontname, "0x2ADF", "SHORT DOWN TACK"); \
	genSvg(fontname, "0x2AE0", "SHORT UP TACK"); \
	genSvg(fontname, "0x2AE1", "PERPENDICULAR WITH S"); \
	genSvg(fontname, "0x2AE2", "VERTICAL BAR TRIPLE RIGHT TURNSTILE"); \
	genSvg(fontname, "0x2AE3", "DOUBLE VERTICAL BAR LEFT TURNSTILE"); \
	genSvg(fontname, "0x2AE4", "VERTICAL BAR DOUBLE LEFT TURNSTILE"); \
	genSvg(fontname, "0x2AE5", "DOUBLE VERTICAL BAR DOUBLE LEFT TURNSTILE"); \
	genSvg(fontname, "0x2AE6", "LONG DASH FROM LEFT MEMBER OF DOUBLE VERTICAL"); \
	genSvg(fontname, "0x2AE7", "SHORT DOWN TACK WITH OVERBAR"); \
	genSvg(fontname, "0x2AE8", "SHORT UP TACK WITH UNDERBAR"); \
	genSvg(fontname, "0x2AE9", "SHORT UP TACK ABOVE SHORT DOWN TACK"); \
	genSvg(fontname, "0x2AEA", "DOUBLE DOWN TACK"); \
	genSvg(fontname, "0x2AEB", "DOUBLE UP TACK"); \
	genSvg(fontname, "0x2AEC", "DOUBLE STROKE NOT SIGN"); \
	genSvg(fontname, "0x2AED", "REVERSED DOUBLE STROKE NOT SIGN"); \
	genSvg(fontname, "0x2AEE", "DOES NOT DIVIDE WITH REVERSED NEGATION SLASH"); \
	genSvg(fontname, "0x2AEF", "VERTICAL LINE WITH CIRCLE ABOVE"); \
	genSvg(fontname, "0x2AF0", "VERTICAL LINE WITH CIRCLE BELOW"); \
	genSvg(fontname, "0x2AF1", "DOWN TACK WITH CIRCLE BELOW"); \
	genSvg(fontname, "0x2AF2", "PARALLEL WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2AF3", "PARALLEL WITH TILDE OPERATOR"); \
	genSvg(fontname, "0x2AF4", "TRIPLE VERTICAL BAR BINARY RELATION"); \
	genSvg(fontname, "0x2AF5", "TRIPLE VERTICAL BAR WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x2AF6", "TRIPLE COLON OPERATOR"); \
	genSvg(fontname, "0x2AF7", "TRIPLE NESTED LESS-THAN"); \
	genSvg(fontname, "0x2AF8", "TRIPLE NESTED GREATER-THAN"); \
	genSvg(fontname, "0x2AF9", "DOUBLE-LINE SLANTED LESS-THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2AFA", "DOUBLE-LINE SLANTED GREATER-THAN OR EQUAL TO"); \
	genSvg(fontname, "0x2AFB", "TRIPLE SOLIDUS BINARY RELATION"); \
	genSvg(fontname, "0x2AFC", "LARGE TRIPLE VERTICAL BAR OPERATOR"); \
	genSvg(fontname, "0x2AFD", "DOUBLE SOLIDUS OPERATOR"); \
	genSvg(fontname, "0x2AFE", "WHITE VERTICAL BAR"); \
	genSvg(fontname, "0x2AFF", "N-ARY WHITE VERTICAL BAR");

#define MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A \
	genSvg(fontname, "0x27C0", "THREE DIMENSIONAL ANGLE"); \
	genSvg(fontname, "0x27C1", "WHITE TRIANGLE CONTAINING SMALL WHITE TRIANGLE"); \
	genSvg(fontname, "0x27C2", "PERPENDICULAR"); \
	genSvg(fontname, "0x27C3", "OPEN SUBSET"); \
	genSvg(fontname, "0x27C4", "OPEN SUPERSET"); \
	genSvg(fontname, "0x27C5", "LEFT S-SHAPED BAG DELIMITER"); \
	genSvg(fontname, "0x27C6", "RIGHT S-SHAPED BAG DELIMITER"); \
	genSvg(fontname, "0x27C7", "OR WITH DOT INSIDE"); \
	genSvg(fontname, "0x27C8", "REVERSE SOLIDUS PRECEDING SUBSET"); \
	genSvg(fontname, "0x27C9", "SUPERSET PRECEDING SOLIDUS"); \
	genSvg(fontname, "0x27CA", "VERTICAL BAR WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x27CB", "MATHEMATICAL RISING DIAGONAL"); \
	genSvg(fontname, "0x27CC", "LONG DIVISION"); \
	genSvg(fontname, "0x27CD", "MATHEMATICAL FALLING DIAGONAL"); \
	genSvg(fontname, "0x27CE", "SQUARED LOGICAL AND"); \
	genSvg(fontname, "0x27CF", "SQUARED LOGICAL OR"); \
	genSvg(fontname, "0x27D0", "WHITE DIAMOND WITH CENTRED DOT"); \
	genSvg(fontname, "0x27D1", "AND WITH DOT"); \
	genSvg(fontname, "0x27D2", "ELEMENT OF OPENING UPWARDS"); \
	genSvg(fontname, "0x27D3", "LOWER RIGHT CORNER WITH DOT"); \
	genSvg(fontname, "0x27D4", "UPPER LEFT CORNER WITH DOT"); \
	genSvg(fontname, "0x27D5", "LEFT OUTER JOIN"); \
	genSvg(fontname, "0x27D6", "RIGHT OUTER JOIN"); \
	genSvg(fontname, "0x27D7", "FULL OUTER JOIN"); \
	genSvg(fontname, "0x27D8", "LARGE UP TACK"); \
	genSvg(fontname, "0x27D9", "LARGE DOWN TACK"); \
	genSvg(fontname, "0x27DA", "LEFT AND RIGHT DOUBLE TURNSTILE"); \
	genSvg(fontname, "0x27DB", "LEFT AND RIGHT TACK"); \
	genSvg(fontname, "0x27DC", "LEFT MULTIMAP"); \
	genSvg(fontname, "0x27DD", "LONG RIGHT TACK"); \
	genSvg(fontname, "0x27DE", "LONG LEFT TACK"); \
	genSvg(fontname, "0x27DF", "UP TACK WITH CIRCLE ABOVE"); \
	genSvg(fontname, "0x27E0", "LOZENGE DIVIDED BY HORIZONTAL RULE"); \
	genSvg(fontname, "0x27E1", "WHITE CONCAVE-SIDED DIAMOND"); \
	genSvg(fontname, "0x27E2", "WHITE CONCAVE-SIDED DIAMOND WITH LEFTWARDS TICK"); \
	genSvg(fontname, "0x27E3", "WHITE CONCAVE-SIDED DIAMOND WITH RIGHTWARDS TICK"); \
	genSvg(fontname, "0x27E4", "WHITE SQUARE WITH LEFTWARDS TICK"); \
	genSvg(fontname, "0x27E5", "WHITE SQUARE WITH RIGHTWARDS TICK"); \
	genSvg(fontname, "0x27E6", "MATHEMATICAL LEFT WHITE SQUARE BRACKET"); \
	genSvg(fontname, "0x27E7", "MATHEMATICAL RIGHT WHITE SQUARE BRACKET"); \
	genSvg(fontname, "0x27E8", "MATHEMATICAL LEFT ANGLE BRACKET"); \
	genSvg(fontname, "0x27E9", "MATHEMATICAL RIGHT ANGLE BRACKET"); \
	genSvg(fontname, "0x27EA", "MATHEMATICAL LEFT DOUBLE ANGLE BRACKET"); \
	genSvg(fontname, "0x27EB", "MATHEMATICAL RIGHT DOUBLE ANGLE BRACKET"); \
	genSvg(fontname, "0x27EC", "MATHEMATICAL LEFT WHITE TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x27ED", "MATHEMATICAL RIGHT WHITE TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x27EE", "MATHEMATICAL LEFT FLATTENED PARENTHESIS"); \
	genSvg(fontname, "0x27EF", "MATHEMATICAL RIGHT FLATTENED PARENTHESIS");

#define MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B \
	genSvg(fontname, "0x2980", "TRIPLE VERTICAL BAR DELIMITER"); \
	genSvg(fontname, "0x2981", "Z NOTATION SPOT"); \
	genSvg(fontname, "0x2982", "Z NOTATION TYPE COLON"); \
	genSvg(fontname, "0x2983", "LEFT WHITE CURLY BRACKET"); \
	genSvg(fontname, "0x2984", "RIGHT WHITE CURLY BRACKET"); \
	genSvg(fontname, "0x2985", "LEFT WHITE PARENTHESIS"); \
	genSvg(fontname, "0x2986", "RIGHT WHITE PARENTHESIS"); \
	genSvg(fontname, "0x2987", "Z NOTATION LEFT IMAGE BRACKET"); \
	genSvg(fontname, "0x2988", "Z NOTATION RIGHT IMAGE BRACKET"); \
	genSvg(fontname, "0x2989", "Z NOTATION LEFT BINDING BRACKET"); \
	genSvg(fontname, "0x298A", "Z NOTATION RIGHT BINDING BRACKET"); \
	genSvg(fontname, "0x298B", "LEFT SQUARE BRACKET WITH UNDERBAR"); \
	genSvg(fontname, "0x298C", "RIGHT SQUARE BRACKET WITH UNDERBAR"); \
	genSvg(fontname, "0x298D", "LEFT SQUARE BRACKET WITH TICK IN TOP CORNER"); \
	genSvg(fontname, "0x298E", "RIGHT SQUARE BRACKET WITH TICK IN BOTTOM CORNER"); \
	genSvg(fontname, "0x298F", "LEFT SQUARE BRACKET WITH TICK IN BOTTOM CORNER"); \
	genSvg(fontname, "0x2990", "RIGHT SQUARE BRACKET WITH TICK IN TOP CORNER"); \
	genSvg(fontname, "0x2991", "LEFT ANGLE BRACKET WITH DOT"); \
	genSvg(fontname, "0x2992", "RIGHT ANGLE BRACKET WITH DOT"); \
	genSvg(fontname, "0x2993", "LEFT ARC LESS-THAN BRACKET"); \
	genSvg(fontname, "0x2994", "RIGHT ARC GREATER-THAN BRACKET"); \
	genSvg(fontname, "0x2995", "DOUBLE LEFT ARC GREATER-THAN BRACKET"); \
	genSvg(fontname, "0x2996", "DOUBLE RIGHT ARC LESS-THAN BRACKET"); \
	genSvg(fontname, "0x2997", "LEFT BLACK TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x2998", "RIGHT BLACK TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x2999", "DOTTED FENCE"); \
	genSvg(fontname, "0x299A", "VERTICAL ZIGZAG LINE"); \
	genSvg(fontname, "0x299B", "MEASURED ANGLE OPENING LEFT"); \
	genSvg(fontname, "0x299C", "RIGHT ANGLE VARIANT WITH SQUARE"); \
	genSvg(fontname, "0x299D", "MEASURED RIGHT ANGLE WITH DOT"); \
	genSvg(fontname, "0x299E", "ANGLE WITH S INSIDE"); \
	genSvg(fontname, "0x299F", "ACUTE ANGLE"); \
	genSvg(fontname, "0x29A0", "SPHERICAL ANGLE OPENING LEFT"); \
	genSvg(fontname, "0x29A1", "SPHERICAL ANGLE OPENING UP"); \
	genSvg(fontname, "0x29A2", "TURNED ANGLE"); \
	genSvg(fontname, "0x29A3", "REVERSED ANGLE"); \
	genSvg(fontname, "0x29A4", "ANGLE WITH UNDERBAR"); \
	genSvg(fontname, "0x29A5", "REVERSED ANGLE WITH UNDERBAR"); \
	genSvg(fontname, "0x29A6", "OBLIQUE ANGLE OPENING UP"); \
	genSvg(fontname, "0x29A7", "OBLIQUE ANGLE OPENING DOWN"); \
	genSvg(fontname, "0x29A8", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING UP AND RIGHT"); \
	genSvg(fontname, "0x29A9", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING UP AND LEFT"); \
	genSvg(fontname, "0x29AA", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING DOWN AND RIGHT"); \
	genSvg(fontname, "0x29AB", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING DOWN AND LEFT"); \
	genSvg(fontname, "0x29AC", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING RIGHT AND UP"); \
	genSvg(fontname, "0x29AD", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING LEFT AND UP"); \
	genSvg(fontname, "0x29AE", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING RIGHT AND DOWN"); \
	genSvg(fontname, "0x29AF", "MEASURED ANGLE WITH OPEN ARM ENDING IN ARROW POINTING LEFT AND DOWN"); \
	genSvg(fontname, "0x29B0", "REVERSED EMPTY SET"); \
	genSvg(fontname, "0x29B1", "EMPTY SET WITH OVERBAR"); \
	genSvg(fontname, "0x29B2", "EMPTY SET WITH SMALL CIRCLE ABOVE"); \
	genSvg(fontname, "0x29B3", "EMPTY SET WITH RIGHT ARROW ABOVE"); \
	genSvg(fontname, "0x29B4", "EMPTY SET WITH LEFT ARROW ABOVE"); \
	genSvg(fontname, "0x29B5", "CIRCLE WITH HORIZONTAL BAR"); \
	genSvg(fontname, "0x29B6", "CIRCLED VERTICAL BAR"); \
	genSvg(fontname, "0x29B7", "CIRCLED PARALLEL"); \
	genSvg(fontname, "0x29B8", "CIRCLED REVERSE SOLIDUS"); \
	genSvg(fontname, "0x29B9", "CIRCLED PERPENDICULAR"); \
	genSvg(fontname, "0x29BA", "CIRCLE DIVIDED BY HORIZONTAL BAR AND TOP HALF DIVIDED BY VERTICAL BAR"); \
	genSvg(fontname, "0x29BB", "CIRCLE WITH SUPERIMPOSED X"); \
	genSvg(fontname, "0x29BC", "CIRCLED ANTICLOCKWISE-ROTATED DIVISION SIGN"); \
	genSvg(fontname, "0x29BD", "UP ARROW THROUGH CIRCLE"); \
	genSvg(fontname, "0x29BE", "CIRCLED WHITE BULLET"); \
	genSvg(fontname, "0x29BF", "CIRCLED BULLET"); \
	genSvg(fontname, "0x29C0", "CIRCLED LESS-THAN"); \
	genSvg(fontname, "0x29C1", "CIRCLED GREATER-THAN"); \
	genSvg(fontname, "0x29C2", "CIRCLE WITH SMALL CIRCLE TO THE RIGHT"); \
	genSvg(fontname, "0x29C3", "CIRCLE WITH TWO HORIZONTAL STROKES TO THE RIGHT"); \
	genSvg(fontname, "0x29C4", "SQUARED RISING DIAGONAL SLASH"); \
	genSvg(fontname, "0x29C5", "SQUARED FALLING DIAGONAL SLASH"); \
	genSvg(fontname, "0x29C6", "SQUARED ASTERISK"); \
	genSvg(fontname, "0x29C7", "SQUARED SMALL CIRCLE"); \
	genSvg(fontname, "0x29C8", "SQUARED SQUARE"); \
	genSvg(fontname, "0x29C9", "TWO JOINED SQUARES"); \
	genSvg(fontname, "0x29CA", "TRIANGLE WITH DOT ABOVE"); \
	genSvg(fontname, "0x29CB", "TRIANGLE WITH UNDERBAR"); \
	genSvg(fontname, "0x29CC", "S IN TRIANGLE"); \
	genSvg(fontname, "0x29CD", "TRIANGLE WITH SERIFS AT BOTTOM"); \
	genSvg(fontname, "0x29CE", "RIGHT TRIANGLE ABOVE LEFT TRIANGLE"); \
	genSvg(fontname, "0x29CF", "LEFT TRIANGLE BESIDE VERTICAL BAR"); \
	genSvg(fontname, "0x29D0", "VERTICAL BAR BESIDE RIGHT TRIANGLE"); \
	genSvg(fontname, "0x29D1", "BOWTIE WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x29D2", "BOWTIE WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x29D3", "BLACK BOWTIE"); \
	genSvg(fontname, "0x29D4", "TIMES WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x29D5", "TIMES WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x29D6", "WHITE HOURGLASS"); \
	genSvg(fontname, "0x29D7", "BLACK HOURGLASS"); \
	genSvg(fontname, "0x29D8", "LEFT WIGGLY FENCE"); \
	genSvg(fontname, "0x29D9", "RIGHT WIGGLY FENCE"); \
	genSvg(fontname, "0x29DA", "LEFT DOUBLE WIGGLY FENCE"); \
	genSvg(fontname, "0x29DB", "RIGHT DOUBLE WIGGLY FENCE"); \
	genSvg(fontname, "0x29DC", "INCOMPLETE INFINITY"); \
	genSvg(fontname, "0x29DD", "TIE OVER INFINITY"); \
	genSvg(fontname, "0x29DE", "INFINITY NEGATED WITH VERTICAL BAR"); \
	genSvg(fontname, "0x29DF", "DOUBLE-ENDED MULTIMAP"); \
	genSvg(fontname, "0x29E0", "SQUARE WITH CONTOURED OUTLINE"); \
	genSvg(fontname, "0x29E1", "INCREASES AS"); \
	genSvg(fontname, "0x29E2", "SHUFFLE PRODUCT"); \
	genSvg(fontname, "0x29E3", "EQUALS SIGN AND SLANTED PARALLEL"); \
	genSvg(fontname, "0x29E4", "EQUALS SIGN AND SLANTED PARALLEL WITH TILDE ABOVE"); \
	genSvg(fontname, "0x29E5", "IDENTICAL TO AND SLANTED PARALLEL"); \
	genSvg(fontname, "0x29E6", "GLEICH STARK"); \
	genSvg(fontname, "0x29E7", "THERMODYNAMIC"); \
	genSvg(fontname, "0x29E8", "DOWN-POINTING TRIANGLE WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x29E9", "DOWN-POINTING TRIANGLE WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x29EA", "BLACK DIAMOND WITH DOWN ARROW"); \
	genSvg(fontname, "0x29EB", "BLACK LOZENGE"); \
	genSvg(fontname, "0x29EC", "WHITE CIRCLE WITH DOWN ARROW"); \
	genSvg(fontname, "0x29ED", "BLACK CIRCLE WITH DOWN ARROW"); \
	genSvg(fontname, "0x29EE", "ERROR-BARRED WHITE SQUARE"); \
	genSvg(fontname, "0x29EF", "ERROR-BARRED BLACK SQUARE"); \
	genSvg(fontname, "0x29F0", "ERROR-BARRED WHITE DIAMOND"); \
	genSvg(fontname, "0x29F1", "ERROR-BARRED BLACK DIAMOND"); \
	genSvg(fontname, "0x29F2", "ERROR-BARRED WHITE CIRCLE"); \
	genSvg(fontname, "0x29F3", "ERROR-BARRED BLACK CIRCLE"); \
	genSvg(fontname, "0x29F4", "RULE-DELAYED"); \
	genSvg(fontname, "0x29F5", "REVERSE SOLIDUS OPERATOR"); \
	genSvg(fontname, "0x29F6", "SOLIDUS WITH OVERBAR"); \
	genSvg(fontname, "0x29F7", "REVERSE SOLIDUS WITH HORIZONTAL STROKE"); \
	genSvg(fontname, "0x29F8", "BIG SOLIDUS"); \
	genSvg(fontname, "0x29F9", "BIG REVERSE SOLIDUS"); \
	genSvg(fontname, "0x29FA", "DOUBLE PLUS"); \
	genSvg(fontname, "0x29FB", "TRIPLE PLUS"); \
	genSvg(fontname, "0x29FC", "LEFT-POINTING CURVED ANGLE BRACKET"); \
	genSvg(fontname, "0x29FD", "RIGHT-POINTING CURVED ANGLE BRACKET"); \
	genSvg(fontname, "0x29FE", "TINY"); \
	genSvg(fontname, "0x29FF", "MINY");

#define MATHEMATICAL_ALPHANUMERIC_SYMBOLS \
	genSvg(fontname, "0x1D400", "MATHEMATICAL BOLD CAPITAL A"); \
	genSvg(fontname, "0x1D401", "MATHEMATICAL BOLD CAPITAL B"); \
	genSvg(fontname, "0x1D402", "MATHEMATICAL BOLD CAPITAL C"); \
	genSvg(fontname, "0x1D403", "MATHEMATICAL BOLD CAPITAL D"); \
	genSvg(fontname, "0x1D404", "MATHEMATICAL BOLD CAPITAL E"); \
	genSvg(fontname, "0x1D405", "MATHEMATICAL BOLD CAPITAL F"); \
	genSvg(fontname, "0x1D406", "MATHEMATICAL BOLD CAPITAL G"); \
	genSvg(fontname, "0x1D407", "MATHEMATICAL BOLD CAPITAL H"); \
	genSvg(fontname, "0x1D408", "MATHEMATICAL BOLD CAPITAL I"); \
	genSvg(fontname, "0x1D409", "MATHEMATICAL BOLD CAPITAL J"); \
	genSvg(fontname, "0x1D40A", "MATHEMATICAL BOLD CAPITAL K"); \
	genSvg(fontname, "0x1D40B", "MATHEMATICAL BOLD CAPITAL L"); \
	genSvg(fontname, "0x1D40C", "MATHEMATICAL BOLD CAPITAL M"); \
	genSvg(fontname, "0x1D40D", "MATHEMATICAL BOLD CAPITAL N"); \
	genSvg(fontname, "0x1D40E", "MATHEMATICAL BOLD CAPITAL O"); \
	genSvg(fontname, "0x1D40F", "MATHEMATICAL BOLD CAPITAL P"); \
	genSvg(fontname, "0x1D410", "MATHEMATICAL BOLD CAPITAL Q"); \
	genSvg(fontname, "0x1D411", "MATHEMATICAL BOLD CAPITAL R"); \
	genSvg(fontname, "0x1D412", "MATHEMATICAL BOLD CAPITAL S"); \
	genSvg(fontname, "0x1D413", "MATHEMATICAL BOLD CAPITAL T"); \
	genSvg(fontname, "0x1D414", "MATHEMATICAL BOLD CAPITAL U"); \
	genSvg(fontname, "0x1D415", "MATHEMATICAL BOLD CAPITAL V"); \
	genSvg(fontname, "0x1D416", "MATHEMATICAL BOLD CAPITAL W"); \
	genSvg(fontname, "0x1D417", "MATHEMATICAL BOLD CAPITAL X"); \
	genSvg(fontname, "0x1D418", "MATHEMATICAL BOLD CAPITAL Y"); \
	genSvg(fontname, "0x1D419", "MATHEMATICAL BOLD CAPITAL Z"); \
	genSvg(fontname, "0x1D41A", "MATHEMATICAL BOLD SMALL A"); \
	genSvg(fontname, "0x1D41B", "MATHEMATICAL BOLD SMALL B"); \
	genSvg(fontname, "0x1D41C", "MATHEMATICAL BOLD SMALL C"); \
	genSvg(fontname, "0x1D41D", "MATHEMATICAL BOLD SMALL D"); \
	genSvg(fontname, "0x1D41E", "MATHEMATICAL BOLD SMALL E"); \
	genSvg(fontname, "0x1D41F", "MATHEMATICAL BOLD SMALL F"); \
	genSvg(fontname, "0x1D420", "MATHEMATICAL BOLD SMALL G"); \
	genSvg(fontname, "0x1D421", "MATHEMATICAL BOLD SMALL H"); \
	genSvg(fontname, "0x1D422", "MATHEMATICAL BOLD SMALL I"); \
	genSvg(fontname, "0x1D423", "MATHEMATICAL BOLD SMALL J"); \
	genSvg(fontname, "0x1D424", "MATHEMATICAL BOLD SMALL K"); \
	genSvg(fontname, "0x1D425", "MATHEMATICAL BOLD SMALL L"); \
	genSvg(fontname, "0x1D426", "MATHEMATICAL BOLD SMALL M"); \
	genSvg(fontname, "0x1D427", "MATHEMATICAL BOLD SMALL N"); \
	genSvg(fontname, "0x1D428", "MATHEMATICAL BOLD SMALL O"); \
	genSvg(fontname, "0x1D429", "MATHEMATICAL BOLD SMALL P"); \
	genSvg(fontname, "0x1D42A", "MATHEMATICAL BOLD SMALL Q"); \
	genSvg(fontname, "0x1D42B", "MATHEMATICAL BOLD SMALL R"); \
	genSvg(fontname, "0x1D42C", "MATHEMATICAL BOLD SMALL S"); \
	genSvg(fontname, "0x1D42D", "MATHEMATICAL BOLD SMALL T"); \
	genSvg(fontname, "0x1D42E", "MATHEMATICAL BOLD SMALL U"); \
	genSvg(fontname, "0x1D42F", "MATHEMATICAL BOLD SMALL V"); \
	genSvg(fontname, "0x1D430", "MATHEMATICAL BOLD SMALL W"); \
	genSvg(fontname, "0x1D431", "MATHEMATICAL BOLD SMALL X"); \
	genSvg(fontname, "0x1D432", "MATHEMATICAL BOLD SMALL Y"); \
	genSvg(fontname, "0x1D433", "MATHEMATICAL BOLD SMALL Z"); \
	genSvg(fontname, "0x1D434", "MATHEMATICAL ITALIC CAPITAL A"); \
	genSvg(fontname, "0x1D435", "MATHEMATICAL ITALIC CAPITAL B"); \
	genSvg(fontname, "0x1D436", "MATHEMATICAL ITALIC CAPITAL C"); \
	genSvg(fontname, "0x1D437", "MATHEMATICAL ITALIC CAPITAL D"); \
	genSvg(fontname, "0x1D438", "MATHEMATICAL ITALIC CAPITAL E"); \
	genSvg(fontname, "0x1D439", "MATHEMATICAL ITALIC CAPITAL F"); \
	genSvg(fontname, "0x1D43A", "MATHEMATICAL ITALIC CAPITAL G"); \
	genSvg(fontname, "0x1D43B", "MATHEMATICAL ITALIC CAPITAL H"); \
	genSvg(fontname, "0x1D43C", "MATHEMATICAL ITALIC CAPITAL I"); \
	genSvg(fontname, "0x1D43D", "MATHEMATICAL ITALIC CAPITAL J"); \
	genSvg(fontname, "0x1D43E", "MATHEMATICAL ITALIC CAPITAL K"); \
	genSvg(fontname, "0x1D43F", "MATHEMATICAL ITALIC CAPITAL L"); \
	genSvg(fontname, "0x1D440", "MATHEMATICAL ITALIC CAPITAL M"); \
	genSvg(fontname, "0x1D441", "MATHEMATICAL ITALIC CAPITAL N"); \
	genSvg(fontname, "0x1D442", "MATHEMATICAL ITALIC CAPITAL O"); \
	genSvg(fontname, "0x1D443", "MATHEMATICAL ITALIC CAPITAL P"); \
	genSvg(fontname, "0x1D444", "MATHEMATICAL ITALIC CAPITAL Q"); \
	genSvg(fontname, "0x1D445", "MATHEMATICAL ITALIC CAPITAL R"); \
	genSvg(fontname, "0x1D446", "MATHEMATICAL ITALIC CAPITAL S"); \
	genSvg(fontname, "0x1D447", "MATHEMATICAL ITALIC CAPITAL T"); \
	genSvg(fontname, "0x1D448", "MATHEMATICAL ITALIC CAPITAL U"); \
	genSvg(fontname, "0x1D449", "MATHEMATICAL ITALIC CAPITAL V"); \
	genSvg(fontname, "0x1D44A", "MATHEMATICAL ITALIC CAPITAL W"); \
	genSvg(fontname, "0x1D44B", "MATHEMATICAL ITALIC CAPITAL X"); \
	genSvg(fontname, "0x1D44C", "MATHEMATICAL ITALIC CAPITAL Y"); \
	genSvg(fontname, "0x1D44D", "MATHEMATICAL ITALIC CAPITAL Z"); \
	genSvg(fontname, "0x1D44E", "MATHEMATICAL ITALIC SMALL A"); \
	genSvg(fontname, "0x1D44F", "MATHEMATICAL ITALIC SMALL B"); \
	genSvg(fontname, "0x1D450", "MATHEMATICAL ITALIC SMALL C"); \
	genSvg(fontname, "0x1D451", "MATHEMATICAL ITALIC SMALL D"); \
	genSvg(fontname, "0x1D452", "MATHEMATICAL ITALIC SMALL E"); \
	genSvg(fontname, "0x1D453", "MATHEMATICAL ITALIC SMALL F"); \
	genSvg(fontname, "0x1D454", "MATHEMATICAL ITALIC SMALL G"); \
	genSvg(fontname, "0x1D456", "MATHEMATICAL ITALIC SMALL I"); \
	genSvg(fontname, "0x1D457", "MATHEMATICAL ITALIC SMALL J"); \
	genSvg(fontname, "0x1D458", "MATHEMATICAL ITALIC SMALL K"); \
	genSvg(fontname, "0x1D459", "MATHEMATICAL ITALIC SMALL L"); \
	genSvg(fontname, "0x1D45A", "MATHEMATICAL ITALIC SMALL M"); \
	genSvg(fontname, "0x1D45B", "MATHEMATICAL ITALIC SMALL N"); \
	genSvg(fontname, "0x1D45C", "MATHEMATICAL ITALIC SMALL O"); \
	genSvg(fontname, "0x1D45D", "MATHEMATICAL ITALIC SMALL P"); \
	genSvg(fontname, "0x1D45E", "MATHEMATICAL ITALIC SMALL Q"); \
	genSvg(fontname, "0x1D45F", "MATHEMATICAL ITALIC SMALL R"); \
	genSvg(fontname, "0x1D460", "MATHEMATICAL ITALIC SMALL S"); \
	genSvg(fontname, "0x1D461", "MATHEMATICAL ITALIC SMALL T"); \
	genSvg(fontname, "0x1D462", "MATHEMATICAL ITALIC SMALL U"); \
	genSvg(fontname, "0x1D463", "MATHEMATICAL ITALIC SMALL V"); \
	genSvg(fontname, "0x1D464", "MATHEMATICAL ITALIC SMALL W"); \
	genSvg(fontname, "0x1D465", "MATHEMATICAL ITALIC SMALL X"); \
	genSvg(fontname, "0x1D466", "MATHEMATICAL ITALIC SMALL Y"); \
	genSvg(fontname, "0x1D467", "MATHEMATICAL ITALIC SMALL Z"); \
	genSvg(fontname, "0x1D468", "MATHEMATICAL BOLD ITALIC CAPITAL A"); \
	genSvg(fontname, "0x1D469", "MATHEMATICAL BOLD ITALIC CAPITAL B"); \
	genSvg(fontname, "0x1D46A", "MATHEMATICAL BOLD ITALIC CAPITAL C"); \
	genSvg(fontname, "0x1D46B", "MATHEMATICAL BOLD ITALIC CAPITAL D"); \
	genSvg(fontname, "0x1D46C", "MATHEMATICAL BOLD ITALIC CAPITAL E"); \
	genSvg(fontname, "0x1D46D", "MATHEMATICAL BOLD ITALIC CAPITAL F"); \
	genSvg(fontname, "0x1D46E", "MATHEMATICAL BOLD ITALIC CAPITAL G"); \
	genSvg(fontname, "0x1D46F", "MATHEMATICAL BOLD ITALIC CAPITAL H"); \
	genSvg(fontname, "0x1D470", "MATHEMATICAL BOLD ITALIC CAPITAL I"); \
	genSvg(fontname, "0x1D471", "MATHEMATICAL BOLD ITALIC CAPITAL J"); \
	genSvg(fontname, "0x1D472", "MATHEMATICAL BOLD ITALIC CAPITAL K"); \
	genSvg(fontname, "0x1D473", "MATHEMATICAL BOLD ITALIC CAPITAL L"); \
	genSvg(fontname, "0x1D474", "MATHEMATICAL BOLD ITALIC CAPITAL M"); \
	genSvg(fontname, "0x1D475", "MATHEMATICAL BOLD ITALIC CAPITAL N"); \
	genSvg(fontname, "0x1D476", "MATHEMATICAL BOLD ITALIC CAPITAL O"); \
	genSvg(fontname, "0x1D477", "MATHEMATICAL BOLD ITALIC CAPITAL P"); \
	genSvg(fontname, "0x1D478", "MATHEMATICAL BOLD ITALIC CAPITAL Q"); \
	genSvg(fontname, "0x1D479", "MATHEMATICAL BOLD ITALIC CAPITAL R"); \
	genSvg(fontname, "0x1D47A", "MATHEMATICAL BOLD ITALIC CAPITAL S"); \
	genSvg(fontname, "0x1D47B", "MATHEMATICAL BOLD ITALIC CAPITAL T"); \
	genSvg(fontname, "0x1D47C", "MATHEMATICAL BOLD ITALIC CAPITAL U"); \
	genSvg(fontname, "0x1D47D", "MATHEMATICAL BOLD ITALIC CAPITAL V"); \
	genSvg(fontname, "0x1D47E", "MATHEMATICAL BOLD ITALIC CAPITAL W"); \
	genSvg(fontname, "0x1D47F", "MATHEMATICAL BOLD ITALIC CAPITAL X"); \
	genSvg(fontname, "0x1D480", "MATHEMATICAL BOLD ITALIC CAPITAL Y"); \
	genSvg(fontname, "0x1D481", "MATHEMATICAL BOLD ITALIC CAPITAL Z"); \
	genSvg(fontname, "0x1D482", "MATHEMATICAL BOLD ITALIC SMALL A"); \
	genSvg(fontname, "0x1D483", "MATHEMATICAL BOLD ITALIC SMALL B"); \
	genSvg(fontname, "0x1D484", "MATHEMATICAL BOLD ITALIC SMALL C"); \
	genSvg(fontname, "0x1D485", "MATHEMATICAL BOLD ITALIC SMALL D"); \
	genSvg(fontname, "0x1D486", "MATHEMATICAL BOLD ITALIC SMALL E"); \
	genSvg(fontname, "0x1D487", "MATHEMATICAL BOLD ITALIC SMALL F"); \
	genSvg(fontname, "0x1D488", "MATHEMATICAL BOLD ITALIC SMALL G"); \
	genSvg(fontname, "0x1D489", "MATHEMATICAL BOLD ITALIC SMALL H"); \
	genSvg(fontname, "0x1D48A", "MATHEMATICAL BOLD ITALIC SMALL I"); \
	genSvg(fontname, "0x1D48B", "MATHEMATICAL BOLD ITALIC SMALL J"); \
	genSvg(fontname, "0x1D48C", "MATHEMATICAL BOLD ITALIC SMALL K"); \
	genSvg(fontname, "0x1D48D", "MATHEMATICAL BOLD ITALIC SMALL L"); \
	genSvg(fontname, "0x1D48E", "MATHEMATICAL BOLD ITALIC SMALL M"); \
	genSvg(fontname, "0x1D48F", "MATHEMATICAL BOLD ITALIC SMALL N"); \
	genSvg(fontname, "0x1D490", "MATHEMATICAL BOLD ITALIC SMALL O"); \
	genSvg(fontname, "0x1D491", "MATHEMATICAL BOLD ITALIC SMALL P"); \
	genSvg(fontname, "0x1D492", "MATHEMATICAL BOLD ITALIC SMALL Q"); \
	genSvg(fontname, "0x1D493", "MATHEMATICAL BOLD ITALIC SMALL R"); \
	genSvg(fontname, "0x1D494", "MATHEMATICAL BOLD ITALIC SMALL S"); \
	genSvg(fontname, "0x1D495", "MATHEMATICAL BOLD ITALIC SMALL T"); \
	genSvg(fontname, "0x1D496", "MATHEMATICAL BOLD ITALIC SMALL U"); \
	genSvg(fontname, "0x1D497", "MATHEMATICAL BOLD ITALIC SMALL V"); \
	genSvg(fontname, "0x1D498", "MATHEMATICAL BOLD ITALIC SMALL W"); \
	genSvg(fontname, "0x1D499", "MATHEMATICAL BOLD ITALIC SMALL X"); \
	genSvg(fontname, "0x1D49A", "MATHEMATICAL BOLD ITALIC SMALL Y"); \
	genSvg(fontname, "0x1D49B", "MATHEMATICAL BOLD ITALIC SMALL Z"); \
	genSvg(fontname, "0x1D49C", "MATHEMATICAL SCRIPT CAPITAL A"); \
	genSvg(fontname, "0x1D49E", "MATHEMATICAL SCRIPT CAPITAL C"); \
	genSvg(fontname, "0x1D49F", "MATHEMATICAL SCRIPT CAPITAL D"); \
	genSvg(fontname, "0x1D4A2", "MATHEMATICAL SCRIPT CAPITAL G"); \
	genSvg(fontname, "0x1D4A5", "MATHEMATICAL SCRIPT CAPITAL J"); \
	genSvg(fontname, "0x1D4A6", "MATHEMATICAL SCRIPT CAPITAL K"); \
	genSvg(fontname, "0x1D4A9", "MATHEMATICAL SCRIPT CAPITAL N"); \
	genSvg(fontname, "0x1D4AA", "MATHEMATICAL SCRIPT CAPITAL O"); \
	genSvg(fontname, "0x1D4AB", "MATHEMATICAL SCRIPT CAPITAL P"); \
	genSvg(fontname, "0x1D4AC", "MATHEMATICAL SCRIPT CAPITAL Q"); \
	genSvg(fontname, "0x1D4AE", "MATHEMATICAL SCRIPT CAPITAL S"); \
	genSvg(fontname, "0x1D4AF", "MATHEMATICAL SCRIPT CAPITAL T"); \
	genSvg(fontname, "0x1D4B0", "MATHEMATICAL SCRIPT CAPITAL U"); \
	genSvg(fontname, "0x1D4B1", "MATHEMATICAL SCRIPT CAPITAL V"); \
	genSvg(fontname, "0x1D4B2", "MATHEMATICAL SCRIPT CAPITAL W"); \
	genSvg(fontname, "0x1D4B3", "MATHEMATICAL SCRIPT CAPITAL X"); \
	genSvg(fontname, "0x1D4B4", "MATHEMATICAL SCRIPT CAPITAL Y"); \
	genSvg(fontname, "0x1D4B5", "MATHEMATICAL SCRIPT CAPITAL Z"); \
	genSvg(fontname, "0x1D4B6", "MATHEMATICAL SCRIPT SMALL A"); \
	genSvg(fontname, "0x1D4B7", "MATHEMATICAL SCRIPT SMALL B"); \
	genSvg(fontname, "0x1D4B8", "MATHEMATICAL SCRIPT SMALL C"); \
	genSvg(fontname, "0x1D4B9", "MATHEMATICAL SCRIPT SMALL D"); \
	genSvg(fontname, "0x1D4BB", "MATHEMATICAL SCRIPT SMALL F"); \
	genSvg(fontname, "0x1D4BD", "MATHEMATICAL SCRIPT SMALL H"); \
	genSvg(fontname, "0x1D4BE", "MATHEMATICAL SCRIPT SMALL I"); \
	genSvg(fontname, "0x1D4BF", "MATHEMATICAL SCRIPT SMALL J"); \
	genSvg(fontname, "0x1D4C0", "MATHEMATICAL SCRIPT SMALL K"); \
	genSvg(fontname, "0x1D4C1", "MATHEMATICAL SCRIPT SMALL L"); \
	genSvg(fontname, "0x1D4C2", "MATHEMATICAL SCRIPT SMALL M"); \
	genSvg(fontname, "0x1D4C3", "MATHEMATICAL SCRIPT SMALL N"); \
	genSvg(fontname, "0x1D4C5", "MATHEMATICAL SCRIPT SMALL P"); \
	genSvg(fontname, "0x1D4C6", "MATHEMATICAL SCRIPT SMALL Q"); \
	genSvg(fontname, "0x1D4C7", "MATHEMATICAL SCRIPT SMALL R"); \
	genSvg(fontname, "0x1D4C8", "MATHEMATICAL SCRIPT SMALL S"); \
	genSvg(fontname, "0x1D4C9", "MATHEMATICAL SCRIPT SMALL T"); \
	genSvg(fontname, "0x1D4CA", "MATHEMATICAL SCRIPT SMALL U"); \
	genSvg(fontname, "0x1D4CB", "MATHEMATICAL SCRIPT SMALL V"); \
	genSvg(fontname, "0x1D4CC", "MATHEMATICAL SCRIPT SMALL W"); \
	genSvg(fontname, "0x1D4CD", "MATHEMATICAL SCRIPT SMALL X"); \
	genSvg(fontname, "0x1D4CE", "MATHEMATICAL SCRIPT SMALL Y"); \
	genSvg(fontname, "0x1D4CF", "MATHEMATICAL SCRIPT SMALL Z"); \
	genSvg(fontname, "0x1D4D0", "MATHEMATICAL BOLD SCRIPT CAPITAL A"); \
	genSvg(fontname, "0x1D4D1", "MATHEMATICAL BOLD SCRIPT CAPITAL B"); \
	genSvg(fontname, "0x1D4D2", "MATHEMATICAL BOLD SCRIPT CAPITAL C"); \
	genSvg(fontname, "0x1D4D3", "MATHEMATICAL BOLD SCRIPT CAPITAL D"); \
	genSvg(fontname, "0x1D4D4", "MATHEMATICAL BOLD SCRIPT CAPITAL E"); \
	genSvg(fontname, "0x1D4D5", "MATHEMATICAL BOLD SCRIPT CAPITAL F"); \
	genSvg(fontname, "0x1D4D6", "MATHEMATICAL BOLD SCRIPT CAPITAL G"); \
	genSvg(fontname, "0x1D4D7", "MATHEMATICAL BOLD SCRIPT CAPITAL H"); \
	genSvg(fontname, "0x1D4D8", "MATHEMATICAL BOLD SCRIPT CAPITAL I"); \
	genSvg(fontname, "0x1D4D9", "MATHEMATICAL BOLD SCRIPT CAPITAL J"); \
	genSvg(fontname, "0x1D4DA", "MATHEMATICAL BOLD SCRIPT CAPITAL K"); \
	genSvg(fontname, "0x1D4DB", "MATHEMATICAL BOLD SCRIPT CAPITAL L"); \
	genSvg(fontname, "0x1D4DC", "MATHEMATICAL BOLD SCRIPT CAPITAL M"); \
	genSvg(fontname, "0x1D4DD", "MATHEMATICAL BOLD SCRIPT CAPITAL N"); \
	genSvg(fontname, "0x1D4DE", "MATHEMATICAL BOLD SCRIPT CAPITAL O"); \
	genSvg(fontname, "0x1D4DF", "MATHEMATICAL BOLD SCRIPT CAPITAL P"); \
	genSvg(fontname, "0x1D4E0", "MATHEMATICAL BOLD SCRIPT CAPITAL Q"); \
	genSvg(fontname, "0x1D4E1", "MATHEMATICAL BOLD SCRIPT CAPITAL R"); \
	genSvg(fontname, "0x1D4E2", "MATHEMATICAL BOLD SCRIPT CAPITAL S"); \
	genSvg(fontname, "0x1D4E3", "MATHEMATICAL BOLD SCRIPT CAPITAL T"); \
	genSvg(fontname, "0x1D4E4", "MATHEMATICAL BOLD SCRIPT CAPITAL U"); \
	genSvg(fontname, "0x1D4E5", "MATHEMATICAL BOLD SCRIPT CAPITAL V"); \
	genSvg(fontname, "0x1D4E6", "MATHEMATICAL BOLD SCRIPT CAPITAL W"); \
	genSvg(fontname, "0x1D4E7", "MATHEMATICAL BOLD SCRIPT CAPITAL X"); \
	genSvg(fontname, "0x1D4E8", "MATHEMATICAL BOLD SCRIPT CAPITAL Y"); \
	genSvg(fontname, "0x1D4E9", "MATHEMATICAL BOLD SCRIPT CAPITAL Z"); \
	genSvg(fontname, "0x1D4EA", "MATHEMATICAL BOLD SCRIPT SMALL A"); \
	genSvg(fontname, "0x1D4EB", "MATHEMATICAL BOLD SCRIPT SMALL B"); \
	genSvg(fontname, "0x1D4EC", "MATHEMATICAL BOLD SCRIPT SMALL C"); \
	genSvg(fontname, "0x1D4ED", "MATHEMATICAL BOLD SCRIPT SMALL D"); \
	genSvg(fontname, "0x1D4EE", "MATHEMATICAL BOLD SCRIPT SMALL E"); \
	genSvg(fontname, "0x1D4EF", "MATHEMATICAL BOLD SCRIPT SMALL F"); \
	genSvg(fontname, "0x1D4F0", "MATHEMATICAL BOLD SCRIPT SMALL G"); \
	genSvg(fontname, "0x1D4F1", "MATHEMATICAL BOLD SCRIPT SMALL H"); \
	genSvg(fontname, "0x1D4F2", "MATHEMATICAL BOLD SCRIPT SMALL I"); \
	genSvg(fontname, "0x1D4F3", "MATHEMATICAL BOLD SCRIPT SMALL J"); \
	genSvg(fontname, "0x1D4F4", "MATHEMATICAL BOLD SCRIPT SMALL K"); \
	genSvg(fontname, "0x1D4F5", "MATHEMATICAL BOLD SCRIPT SMALL L"); \
	genSvg(fontname, "0x1D4F6", "MATHEMATICAL BOLD SCRIPT SMALL M"); \
	genSvg(fontname, "0x1D4F7", "MATHEMATICAL BOLD SCRIPT SMALL N"); \
	genSvg(fontname, "0x1D4F8", "MATHEMATICAL BOLD SCRIPT SMALL O"); \
	genSvg(fontname, "0x1D4F9", "MATHEMATICAL BOLD SCRIPT SMALL P"); \
	genSvg(fontname, "0x1D4FA", "MATHEMATICAL BOLD SCRIPT SMALL Q"); \
	genSvg(fontname, "0x1D4FB", "MATHEMATICAL BOLD SCRIPT SMALL R"); \
	genSvg(fontname, "0x1D4FC", "MATHEMATICAL BOLD SCRIPT SMALL S"); \
	genSvg(fontname, "0x1D4FD", "MATHEMATICAL BOLD SCRIPT SMALL T"); \
	genSvg(fontname, "0x1D4FE", "MATHEMATICAL BOLD SCRIPT SMALL U"); \
	genSvg(fontname, "0x1D4FF", "MATHEMATICAL BOLD SCRIPT SMALL V"); \
	genSvg(fontname, "0x1D500", "MATHEMATICAL BOLD SCRIPT SMALL W"); \
	genSvg(fontname, "0x1D501", "MATHEMATICAL BOLD SCRIPT SMALL X"); \
	genSvg(fontname, "0x1D502", "MATHEMATICAL BOLD SCRIPT SMALL Y"); \
	genSvg(fontname, "0x1D503", "MATHEMATICAL BOLD SCRIPT SMALL Z"); \
	genSvg(fontname, "0x1D504", "MATHEMATICAL FRAKTUR CAPITAL A"); \
	genSvg(fontname, "0x1D505", "MATHEMATICAL FRAKTUR CAPITAL B"); \
	genSvg(fontname, "0x1D507", "MATHEMATICAL FRAKTUR CAPITAL D"); \
	genSvg(fontname, "0x1D508", "MATHEMATICAL FRAKTUR CAPITAL E"); \
	genSvg(fontname, "0x1D509", "MATHEMATICAL FRAKTUR CAPITAL F"); \
	genSvg(fontname, "0x1D50A", "MATHEMATICAL FRAKTUR CAPITAL G"); \
	genSvg(fontname, "0x1D50D", "MATHEMATICAL FRAKTUR CAPITAL J"); \
	genSvg(fontname, "0x1D50E", "MATHEMATICAL FRAKTUR CAPITAL K"); \
	genSvg(fontname, "0x1D50F", "MATHEMATICAL FRAKTUR CAPITAL L"); \
	genSvg(fontname, "0x1D510", "MATHEMATICAL FRAKTUR CAPITAL M"); \
	genSvg(fontname, "0x1D511", "MATHEMATICAL FRAKTUR CAPITAL N"); \
	genSvg(fontname, "0x1D512", "MATHEMATICAL FRAKTUR CAPITAL O"); \
	genSvg(fontname, "0x1D513", "MATHEMATICAL FRAKTUR CAPITAL P"); \
	genSvg(fontname, "0x1D514", "MATHEMATICAL FRAKTUR CAPITAL Q"); \
	genSvg(fontname, "0x1D516", "MATHEMATICAL FRAKTUR CAPITAL S"); \
	genSvg(fontname, "0x1D517", "MATHEMATICAL FRAKTUR CAPITAL T"); \
	genSvg(fontname, "0x1D518", "MATHEMATICAL FRAKTUR CAPITAL U"); \
	genSvg(fontname, "0x1D519", "MATHEMATICAL FRAKTUR CAPITAL V"); \
	genSvg(fontname, "0x1D51A", "MATHEMATICAL FRAKTUR CAPITAL W"); \
	genSvg(fontname, "0x1D51B", "MATHEMATICAL FRAKTUR CAPITAL X"); \
	genSvg(fontname, "0x1D51C", "MATHEMATICAL FRAKTUR CAPITAL Y"); \
	genSvg(fontname, "0x1D51E", "MATHEMATICAL FRAKTUR SMALL A"); \
	genSvg(fontname, "0x1D51F", "MATHEMATICAL FRAKTUR SMALL B"); \
	genSvg(fontname, "0x1D520", "MATHEMATICAL FRAKTUR SMALL C"); \
	genSvg(fontname, "0x1D521", "MATHEMATICAL FRAKTUR SMALL D"); \
	genSvg(fontname, "0x1D522", "MATHEMATICAL FRAKTUR SMALL E"); \
	genSvg(fontname, "0x1D523", "MATHEMATICAL FRAKTUR SMALL F"); \
	genSvg(fontname, "0x1D524", "MATHEMATICAL FRAKTUR SMALL G"); \
	genSvg(fontname, "0x1D525", "MATHEMATICAL FRAKTUR SMALL H"); \
	genSvg(fontname, "0x1D526", "MATHEMATICAL FRAKTUR SMALL I"); \
	genSvg(fontname, "0x1D527", "MATHEMATICAL FRAKTUR SMALL J"); \
	genSvg(fontname, "0x1D528", "MATHEMATICAL FRAKTUR SMALL K"); \
	genSvg(fontname, "0x1D529", "MATHEMATICAL FRAKTUR SMALL L"); \
	genSvg(fontname, "0x1D52A", "MATHEMATICAL FRAKTUR SMALL M"); \
	genSvg(fontname, "0x1D52B", "MATHEMATICAL FRAKTUR SMALL N"); \
	genSvg(fontname, "0x1D52C", "MATHEMATICAL FRAKTUR SMALL O"); \
	genSvg(fontname, "0x1D52D", "MATHEMATICAL FRAKTUR SMALL P"); \
	genSvg(fontname, "0x1D52E", "MATHEMATICAL FRAKTUR SMALL Q"); \
	genSvg(fontname, "0x1D52F", "MATHEMATICAL FRAKTUR SMALL R"); \
	genSvg(fontname, "0x1D530", "MATHEMATICAL FRAKTUR SMALL S"); \
	genSvg(fontname, "0x1D531", "MATHEMATICAL FRAKTUR SMALL T"); \
	genSvg(fontname, "0x1D532", "MATHEMATICAL FRAKTUR SMALL U"); \
	genSvg(fontname, "0x1D533", "MATHEMATICAL FRAKTUR SMALL V"); \
	genSvg(fontname, "0x1D534", "MATHEMATICAL FRAKTUR SMALL W"); \
	genSvg(fontname, "0x1D535", "MATHEMATICAL FRAKTUR SMALL X"); \
	genSvg(fontname, "0x1D536", "MATHEMATICAL FRAKTUR SMALL Y"); \
	genSvg(fontname, "0x1D537", "MATHEMATICAL FRAKTUR SMALL Z"); \
	genSvg(fontname, "0x1D538", "MATHEMATICAL DOUBLE-STRUCK CAPITAL A"); \
	genSvg(fontname, "0x1D539", "MATHEMATICAL DOUBLE-STRUCK CAPITAL B"); \
	genSvg(fontname, "0x1D53B", "MATHEMATICAL DOUBLE-STRUCK CAPITAL D"); \
	genSvg(fontname, "0x1D53C", "MATHEMATICAL DOUBLE-STRUCK CAPITAL E"); \
	genSvg(fontname, "0x1D53D", "MATHEMATICAL DOUBLE-STRUCK CAPITAL F"); \
	genSvg(fontname, "0x1D53E", "MATHEMATICAL DOUBLE-STRUCK CAPITAL G"); \
	genSvg(fontname, "0x1D540", "MATHEMATICAL DOUBLE-STRUCK CAPITAL I"); \
	genSvg(fontname, "0x1D541", "MATHEMATICAL DOUBLE-STRUCK CAPITAL J"); \
	genSvg(fontname, "0x1D542", "MATHEMATICAL DOUBLE-STRUCK CAPITAL K"); \
	genSvg(fontname, "0x1D543", "MATHEMATICAL DOUBLE-STRUCK CAPITAL L"); \
	genSvg(fontname, "0x1D544", "MATHEMATICAL DOUBLE-STRUCK CAPITAL M"); \
	genSvg(fontname, "0x1D546", "MATHEMATICAL DOUBLE-STRUCK CAPITAL O"); \
	genSvg(fontname, "0x1D54A", "MATHEMATICAL DOUBLE-STRUCK CAPITAL S"); \
	genSvg(fontname, "0x1D54B", "MATHEMATICAL DOUBLE-STRUCK CAPITAL T"); \
	genSvg(fontname, "0x1D54C", "MATHEMATICAL DOUBLE-STRUCK CAPITAL U"); \
	genSvg(fontname, "0x1D54D", "MATHEMATICAL DOUBLE-STRUCK CAPITAL V"); \
	genSvg(fontname, "0x1D54E", "MATHEMATICAL DOUBLE-STRUCK CAPITAL W"); \
	genSvg(fontname, "0x1D54F", "MATHEMATICAL DOUBLE-STRUCK CAPITAL X"); \
	genSvg(fontname, "0x1D550", "MATHEMATICAL DOUBLE-STRUCK CAPITAL Y"); \
	genSvg(fontname, "0x1D552", "MATHEMATICAL DOUBLE-STRUCK SMALL A"); \
	genSvg(fontname, "0x1D553", "MATHEMATICAL DOUBLE-STRUCK SMALL B"); \
	genSvg(fontname, "0x1D554", "MATHEMATICAL DOUBLE-STRUCK SMALL C"); \
	genSvg(fontname, "0x1D555", "MATHEMATICAL DOUBLE-STRUCK SMALL D"); \
	genSvg(fontname, "0x1D556", "MATHEMATICAL DOUBLE-STRUCK SMALL E"); \
	genSvg(fontname, "0x1D557", "MATHEMATICAL DOUBLE-STRUCK SMALL F"); \
	genSvg(fontname, "0x1D558", "MATHEMATICAL DOUBLE-STRUCK SMALL G"); \
	genSvg(fontname, "0x1D559", "MATHEMATICAL DOUBLE-STRUCK SMALL H"); \
	genSvg(fontname, "0x1D55A", "MATHEMATICAL DOUBLE-STRUCK SMALL I"); \
	genSvg(fontname, "0x1D55B", "MATHEMATICAL DOUBLE-STRUCK SMALL J"); \
	genSvg(fontname, "0x1D55C", "MATHEMATICAL DOUBLE-STRUCK SMALL K"); \
	genSvg(fontname, "0x1D55D", "MATHEMATICAL DOUBLE-STRUCK SMALL L"); \
	genSvg(fontname, "0x1D55E", "MATHEMATICAL DOUBLE-STRUCK SMALL M"); \
	genSvg(fontname, "0x1D55F", "MATHEMATICAL DOUBLE-STRUCK SMALL N"); \
	genSvg(fontname, "0x1D560", "MATHEMATICAL DOUBLE-STRUCK SMALL O"); \
	genSvg(fontname, "0x1D561", "MATHEMATICAL DOUBLE-STRUCK SMALL P"); \
	genSvg(fontname, "0x1D562", "MATHEMATICAL DOUBLE-STRUCK SMALL Q"); \
	genSvg(fontname, "0x1D563", "MATHEMATICAL DOUBLE-STRUCK SMALL R"); \
	genSvg(fontname, "0x1D564", "MATHEMATICAL DOUBLE-STRUCK SMALL S"); \
	genSvg(fontname, "0x1D565", "MATHEMATICAL DOUBLE-STRUCK SMALL T"); \
	genSvg(fontname, "0x1D566", "MATHEMATICAL DOUBLE-STRUCK SMALL U"); \
	genSvg(fontname, "0x1D567", "MATHEMATICAL DOUBLE-STRUCK SMALL V"); \
	genSvg(fontname, "0x1D568", "MATHEMATICAL DOUBLE-STRUCK SMALL W"); \
	genSvg(fontname, "0x1D569", "MATHEMATICAL DOUBLE-STRUCK SMALL X"); \
	genSvg(fontname, "0x1D56A", "MATHEMATICAL DOUBLE-STRUCK SMALL Y"); \
	genSvg(fontname, "0x1D56B", "MATHEMATICAL DOUBLE-STRUCK SMALL Z"); \
	genSvg(fontname, "0x1D56C", "MATHEMATICAL BOLD FRAKTUR CAPITAL A"); \
	genSvg(fontname, "0x1D56D", "MATHEMATICAL BOLD FRAKTUR CAPITAL B"); \
	genSvg(fontname, "0x1D56E", "MATHEMATICAL BOLD FRAKTUR CAPITAL C"); \
	genSvg(fontname, "0x1D56F", "MATHEMATICAL BOLD FRAKTUR CAPITAL D"); \
	genSvg(fontname, "0x1D570", "MATHEMATICAL BOLD FRAKTUR CAPITAL E"); \
	genSvg(fontname, "0x1D571", "MATHEMATICAL BOLD FRAKTUR CAPITAL F"); \
	genSvg(fontname, "0x1D572", "MATHEMATICAL BOLD FRAKTUR CAPITAL G"); \
	genSvg(fontname, "0x1D573", "MATHEMATICAL BOLD FRAKTUR CAPITAL H"); \
	genSvg(fontname, "0x1D574", "MATHEMATICAL BOLD FRAKTUR CAPITAL I"); \
	genSvg(fontname, "0x1D575", "MATHEMATICAL BOLD FRAKTUR CAPITAL J"); \
	genSvg(fontname, "0x1D576", "MATHEMATICAL BOLD FRAKTUR CAPITAL K"); \
	genSvg(fontname, "0x1D577", "MATHEMATICAL BOLD FRAKTUR CAPITAL L"); \
	genSvg(fontname, "0x1D578", "MATHEMATICAL BOLD FRAKTUR CAPITAL M"); \
	genSvg(fontname, "0x1D579", "MATHEMATICAL BOLD FRAKTUR CAPITAL N"); \
	genSvg(fontname, "0x1D57A", "MATHEMATICAL BOLD FRAKTUR CAPITAL O"); \
	genSvg(fontname, "0x1D57B", "MATHEMATICAL BOLD FRAKTUR CAPITAL P"); \
	genSvg(fontname, "0x1D57C", "MATHEMATICAL BOLD FRAKTUR CAPITAL Q"); \
	genSvg(fontname, "0x1D57D", "MATHEMATICAL BOLD FRAKTUR CAPITAL R"); \
	genSvg(fontname, "0x1D57E", "MATHEMATICAL BOLD FRAKTUR CAPITAL S"); \
	genSvg(fontname, "0x1D57F", "MATHEMATICAL BOLD FRAKTUR CAPITAL T"); \
	genSvg(fontname, "0x1D580", "MATHEMATICAL BOLD FRAKTUR CAPITAL U"); \
	genSvg(fontname, "0x1D581", "MATHEMATICAL BOLD FRAKTUR CAPITAL V"); \
	genSvg(fontname, "0x1D582", "MATHEMATICAL BOLD FRAKTUR CAPITAL W"); \
	genSvg(fontname, "0x1D583", "MATHEMATICAL BOLD FRAKTUR CAPITAL X"); \
	genSvg(fontname, "0x1D584", "MATHEMATICAL BOLD FRAKTUR CAPITAL Y"); \
	genSvg(fontname, "0x1D585", "MATHEMATICAL BOLD FRAKTUR CAPITAL Z"); \
	genSvg(fontname, "0x1D586", "MATHEMATICAL BOLD FRAKTUR SMALL A"); \
	genSvg(fontname, "0x1D587", "MATHEMATICAL BOLD FRAKTUR SMALL B"); \
	genSvg(fontname, "0x1D588", "MATHEMATICAL BOLD FRAKTUR SMALL C"); \
	genSvg(fontname, "0x1D589", "MATHEMATICAL BOLD FRAKTUR SMALL D"); \
	genSvg(fontname, "0x1D58A", "MATHEMATICAL BOLD FRAKTUR SMALL E"); \
	genSvg(fontname, "0x1D58B", "MATHEMATICAL BOLD FRAKTUR SMALL F"); \
	genSvg(fontname, "0x1D58C", "MATHEMATICAL BOLD FRAKTUR SMALL G"); \
	genSvg(fontname, "0x1D58D", "MATHEMATICAL BOLD FRAKTUR SMALL H"); \
	genSvg(fontname, "0x1D58E", "MATHEMATICAL BOLD FRAKTUR SMALL I"); \
	genSvg(fontname, "0x1D58F", "MATHEMATICAL BOLD FRAKTUR SMALL J"); \
	genSvg(fontname, "0x1D590", "MATHEMATICAL BOLD FRAKTUR SMALL K"); \
	genSvg(fontname, "0x1D591", "MATHEMATICAL BOLD FRAKTUR SMALL L"); \
	genSvg(fontname, "0x1D592", "MATHEMATICAL BOLD FRAKTUR SMALL M"); \
	genSvg(fontname, "0x1D593", "MATHEMATICAL BOLD FRAKTUR SMALL N"); \
	genSvg(fontname, "0x1D594", "MATHEMATICAL BOLD FRAKTUR SMALL O"); \
	genSvg(fontname, "0x1D595", "MATHEMATICAL BOLD FRAKTUR SMALL P"); \
	genSvg(fontname, "0x1D596", "MATHEMATICAL BOLD FRAKTUR SMALL Q"); \
	genSvg(fontname, "0x1D597", "MATHEMATICAL BOLD FRAKTUR SMALL R"); \
	genSvg(fontname, "0x1D598", "MATHEMATICAL BOLD FRAKTUR SMALL S"); \
	genSvg(fontname, "0x1D599", "MATHEMATICAL BOLD FRAKTUR SMALL T"); \
	genSvg(fontname, "0x1D59A", "MATHEMATICAL BOLD FRAKTUR SMALL U"); \
	genSvg(fontname, "0x1D59B", "MATHEMATICAL BOLD FRAKTUR SMALL V"); \
	genSvg(fontname, "0x1D59C", "MATHEMATICAL BOLD FRAKTUR SMALL W"); \
	genSvg(fontname, "0x1D59D", "MATHEMATICAL BOLD FRAKTUR SMALL X"); \
	genSvg(fontname, "0x1D59E", "MATHEMATICAL BOLD FRAKTUR SMALL Y"); \
	genSvg(fontname, "0x1D59F", "MATHEMATICAL BOLD FRAKTUR SMALL Z"); \
	genSvg(fontname, "0x1D5A0", "MATHEMATICAL SANS-SERIF CAPITAL A"); \
	genSvg(fontname, "0x1D5A1", "MATHEMATICAL SANS-SERIF CAPITAL B"); \
	genSvg(fontname, "0x1D5A2", "MATHEMATICAL SANS-SERIF CAPITAL C"); \
	genSvg(fontname, "0x1D5A3", "MATHEMATICAL SANS-SERIF CAPITAL D"); \
	genSvg(fontname, "0x1D5A4", "MATHEMATICAL SANS-SERIF CAPITAL E"); \
	genSvg(fontname, "0x1D5A5", "MATHEMATICAL SANS-SERIF CAPITAL F"); \
	genSvg(fontname, "0x1D5A6", "MATHEMATICAL SANS-SERIF CAPITAL G"); \
	genSvg(fontname, "0x1D5A7", "MATHEMATICAL SANS-SERIF CAPITAL H"); \
	genSvg(fontname, "0x1D5A8", "MATHEMATICAL SANS-SERIF CAPITAL I"); \
	genSvg(fontname, "0x1D5A9", "MATHEMATICAL SANS-SERIF CAPITAL J"); \
	genSvg(fontname, "0x1D5AA", "MATHEMATICAL SANS-SERIF CAPITAL K"); \
	genSvg(fontname, "0x1D5AB", "MATHEMATICAL SANS-SERIF CAPITAL L"); \
	genSvg(fontname, "0x1D5AC", "MATHEMATICAL SANS-SERIF CAPITAL M"); \
	genSvg(fontname, "0x1D5AD", "MATHEMATICAL SANS-SERIF CAPITAL N"); \
	genSvg(fontname, "0x1D5AE", "MATHEMATICAL SANS-SERIF CAPITAL O"); \
	genSvg(fontname, "0x1D5AF", "MATHEMATICAL SANS-SERIF CAPITAL P"); \
	genSvg(fontname, "0x1D5B0", "MATHEMATICAL SANS-SERIF CAPITAL Q"); \
	genSvg(fontname, "0x1D5B1", "MATHEMATICAL SANS-SERIF CAPITAL R"); \
	genSvg(fontname, "0x1D5B2", "MATHEMATICAL SANS-SERIF CAPITAL S"); \
	genSvg(fontname, "0x1D5B3", "MATHEMATICAL SANS-SERIF CAPITAL T"); \
	genSvg(fontname, "0x1D5B4", "MATHEMATICAL SANS-SERIF CAPITAL U"); \
	genSvg(fontname, "0x1D5B5", "MATHEMATICAL SANS-SERIF CAPITAL V"); \
	genSvg(fontname, "0x1D5B6", "MATHEMATICAL SANS-SERIF CAPITAL W"); \
	genSvg(fontname, "0x1D5B7", "MATHEMATICAL SANS-SERIF CAPITAL X"); \
	genSvg(fontname, "0x1D5B8", "MATHEMATICAL SANS-SERIF CAPITAL Y"); \
	genSvg(fontname, "0x1D5B9", "MATHEMATICAL SANS-SERIF CAPITAL Z"); \
	genSvg(fontname, "0x1D5BA", "MATHEMATICAL SANS-SERIF SMALL A"); \
	genSvg(fontname, "0x1D5BB", "MATHEMATICAL SANS-SERIF SMALL B"); \
	genSvg(fontname, "0x1D5BC", "MATHEMATICAL SANS-SERIF SMALL C"); \
	genSvg(fontname, "0x1D5BD", "MATHEMATICAL SANS-SERIF SMALL D"); \
	genSvg(fontname, "0x1D5BE", "MATHEMATICAL SANS-SERIF SMALL E"); \
	genSvg(fontname, "0x1D5BF", "MATHEMATICAL SANS-SERIF SMALL F"); \
	genSvg(fontname, "0x1D5C0", "MATHEMATICAL SANS-SERIF SMALL G"); \
	genSvg(fontname, "0x1D5C1", "MATHEMATICAL SANS-SERIF SMALL H"); \
	genSvg(fontname, "0x1D5C2", "MATHEMATICAL SANS-SERIF SMALL I"); \
	genSvg(fontname, "0x1D5C3", "MATHEMATICAL SANS-SERIF SMALL J"); \
	genSvg(fontname, "0x1D5C4", "MATHEMATICAL SANS-SERIF SMALL K"); \
	genSvg(fontname, "0x1D5C5", "MATHEMATICAL SANS-SERIF SMALL L"); \
	genSvg(fontname, "0x1D5C6", "MATHEMATICAL SANS-SERIF SMALL M"); \
	genSvg(fontname, "0x1D5C7", "MATHEMATICAL SANS-SERIF SMALL N"); \
	genSvg(fontname, "0x1D5C8", "MATHEMATICAL SANS-SERIF SMALL O"); \
	genSvg(fontname, "0x1D5C9", "MATHEMATICAL SANS-SERIF SMALL P"); \
	genSvg(fontname, "0x1D5CA", "MATHEMATICAL SANS-SERIF SMALL Q"); \
	genSvg(fontname, "0x1D5CB", "MATHEMATICAL SANS-SERIF SMALL R"); \
	genSvg(fontname, "0x1D5CC", "MATHEMATICAL SANS-SERIF SMALL S"); \
	genSvg(fontname, "0x1D5CD", "MATHEMATICAL SANS-SERIF SMALL T"); \
	genSvg(fontname, "0x1D5CE", "MATHEMATICAL SANS-SERIF SMALL U"); \
	genSvg(fontname, "0x1D5CF", "MATHEMATICAL SANS-SERIF SMALL V"); \
	genSvg(fontname, "0x1D5D0", "MATHEMATICAL SANS-SERIF SMALL W"); \
	genSvg(fontname, "0x1D5D1", "MATHEMATICAL SANS-SERIF SMALL X"); \
	genSvg(fontname, "0x1D5D2", "MATHEMATICAL SANS-SERIF SMALL Y"); \
	genSvg(fontname, "0x1D5D3", "MATHEMATICAL SANS-SERIF SMALL Z"); \
	genSvg(fontname, "0x1D5D4", "MATHEMATICAL SANS-SERIF BOLD CAPITAL A"); \
	genSvg(fontname, "0x1D5D5", "MATHEMATICAL SANS-SERIF BOLD CAPITAL B"); \
	genSvg(fontname, "0x1D5D6", "MATHEMATICAL SANS-SERIF BOLD CAPITAL C"); \
	genSvg(fontname, "0x1D5D7", "MATHEMATICAL SANS-SERIF BOLD CAPITAL D"); \
	genSvg(fontname, "0x1D5D8", "MATHEMATICAL SANS-SERIF BOLD CAPITAL E"); \
	genSvg(fontname, "0x1D5D9", "MATHEMATICAL SANS-SERIF BOLD CAPITAL F"); \
	genSvg(fontname, "0x1D5DA", "MATHEMATICAL SANS-SERIF BOLD CAPITAL G"); \
	genSvg(fontname, "0x1D5DB", "MATHEMATICAL SANS-SERIF BOLD CAPITAL H"); \
	genSvg(fontname, "0x1D5DC", "MATHEMATICAL SANS-SERIF BOLD CAPITAL I"); \
	genSvg(fontname, "0x1D5DD", "MATHEMATICAL SANS-SERIF BOLD CAPITAL J"); \
	genSvg(fontname, "0x1D5DE", "MATHEMATICAL SANS-SERIF BOLD CAPITAL K"); \
	genSvg(fontname, "0x1D5DF", "MATHEMATICAL SANS-SERIF BOLD CAPITAL L"); \
	genSvg(fontname, "0x1D5E0", "MATHEMATICAL SANS-SERIF BOLD CAPITAL M"); \
	genSvg(fontname, "0x1D5E1", "MATHEMATICAL SANS-SERIF BOLD CAPITAL N"); \
	genSvg(fontname, "0x1D5E2", "MATHEMATICAL SANS-SERIF BOLD CAPITAL O"); \
	genSvg(fontname, "0x1D5E3", "MATHEMATICAL SANS-SERIF BOLD CAPITAL P"); \
	genSvg(fontname, "0x1D5E4", "MATHEMATICAL SANS-SERIF BOLD CAPITAL Q"); \
	genSvg(fontname, "0x1D5E5", "MATHEMATICAL SANS-SERIF BOLD CAPITAL R"); \
	genSvg(fontname, "0x1D5E6", "MATHEMATICAL SANS-SERIF BOLD CAPITAL S"); \
	genSvg(fontname, "0x1D5E7", "MATHEMATICAL SANS-SERIF BOLD CAPITAL T"); \
	genSvg(fontname, "0x1D5E8", "MATHEMATICAL SANS-SERIF BOLD CAPITAL U"); \
	genSvg(fontname, "0x1D5E9", "MATHEMATICAL SANS-SERIF BOLD CAPITAL V"); \
	genSvg(fontname, "0x1D5EA", "MATHEMATICAL SANS-SERIF BOLD CAPITAL W"); \
	genSvg(fontname, "0x1D5EB", "MATHEMATICAL SANS-SERIF BOLD CAPITAL X"); \
	genSvg(fontname, "0x1D5EC", "MATHEMATICAL SANS-SERIF BOLD CAPITAL Y"); \
	genSvg(fontname, "0x1D5ED", "MATHEMATICAL SANS-SERIF BOLD CAPITAL Z"); \
	genSvg(fontname, "0x1D5EE", "MATHEMATICAL SANS-SERIF BOLD SMALL A"); \
	genSvg(fontname, "0x1D5EF", "MATHEMATICAL SANS-SERIF BOLD SMALL B"); \
	genSvg(fontname, "0x1D5F0", "MATHEMATICAL SANS-SERIF BOLD SMALL C"); \
	genSvg(fontname, "0x1D5F1", "MATHEMATICAL SANS-SERIF BOLD SMALL D"); \
	genSvg(fontname, "0x1D5F2", "MATHEMATICAL SANS-SERIF BOLD SMALL E"); \
	genSvg(fontname, "0x1D5F3", "MATHEMATICAL SANS-SERIF BOLD SMALL F"); \
	genSvg(fontname, "0x1D5F4", "MATHEMATICAL SANS-SERIF BOLD SMALL G"); \
	genSvg(fontname, "0x1D5F5", "MATHEMATICAL SANS-SERIF BOLD SMALL H"); \
	genSvg(fontname, "0x1D5F6", "MATHEMATICAL SANS-SERIF BOLD SMALL I"); \
	genSvg(fontname, "0x1D5F7", "MATHEMATICAL SANS-SERIF BOLD SMALL J"); \
	genSvg(fontname, "0x1D5F8", "MATHEMATICAL SANS-SERIF BOLD SMALL K"); \
	genSvg(fontname, "0x1D5F9", "MATHEMATICAL SANS-SERIF BOLD SMALL L"); \
	genSvg(fontname, "0x1D5FA", "MATHEMATICAL SANS-SERIF BOLD SMALL M"); \
	genSvg(fontname, "0x1D5FB", "MATHEMATICAL SANS-SERIF BOLD SMALL N"); \
	genSvg(fontname, "0x1D5FC", "MATHEMATICAL SANS-SERIF BOLD SMALL O"); \
	genSvg(fontname, "0x1D5FD", "MATHEMATICAL SANS-SERIF BOLD SMALL P"); \
	genSvg(fontname, "0x1D5FE", "MATHEMATICAL SANS-SERIF BOLD SMALL Q"); \
	genSvg(fontname, "0x1D5FF", "MATHEMATICAL SANS-SERIF BOLD SMALL R"); \
	genSvg(fontname, "0x1D600", "MATHEMATICAL SANS-SERIF BOLD SMALL S"); \
	genSvg(fontname, "0x1D601", "MATHEMATICAL SANS-SERIF BOLD SMALL T"); \
	genSvg(fontname, "0x1D602", "MATHEMATICAL SANS-SERIF BOLD SMALL U"); \
	genSvg(fontname, "0x1D603", "MATHEMATICAL SANS-SERIF BOLD SMALL V"); \
	genSvg(fontname, "0x1D604", "MATHEMATICAL SANS-SERIF BOLD SMALL W"); \
	genSvg(fontname, "0x1D605", "MATHEMATICAL SANS-SERIF BOLD SMALL X"); \
	genSvg(fontname, "0x1D606", "MATHEMATICAL SANS-SERIF BOLD SMALL Y"); \
	genSvg(fontname, "0x1D607", "MATHEMATICAL SANS-SERIF BOLD SMALL Z"); \
	genSvg(fontname, "0x1D608", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL A"); \
	genSvg(fontname, "0x1D609", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL B"); \
	genSvg(fontname, "0x1D60A", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL C"); \
	genSvg(fontname, "0x1D60B", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL D"); \
	genSvg(fontname, "0x1D60C", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL E"); \
	genSvg(fontname, "0x1D60D", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL F"); \
	genSvg(fontname, "0x1D60E", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL G"); \
	genSvg(fontname, "0x1D60F", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL H"); \
	genSvg(fontname, "0x1D610", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL I"); \
	genSvg(fontname, "0x1D611", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL J"); \
	genSvg(fontname, "0x1D612", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL K"); \
	genSvg(fontname, "0x1D613", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL L"); \
	genSvg(fontname, "0x1D614", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL M"); \
	genSvg(fontname, "0x1D615", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL N"); \
	genSvg(fontname, "0x1D616", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL O"); \
	genSvg(fontname, "0x1D617", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL P"); \
	genSvg(fontname, "0x1D618", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL Q"); \
	genSvg(fontname, "0x1D619", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL R"); \
	genSvg(fontname, "0x1D61A", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL S"); \
	genSvg(fontname, "0x1D61B", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL T"); \
	genSvg(fontname, "0x1D61C", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL U"); \
	genSvg(fontname, "0x1D61D", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL V"); \
	genSvg(fontname, "0x1D61E", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL W"); \
	genSvg(fontname, "0x1D61F", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL X"); \
	genSvg(fontname, "0x1D620", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL Y"); \
	genSvg(fontname, "0x1D621", "MATHEMATICAL SANS-SERIF ITALIC CAPITAL Z"); \
	genSvg(fontname, "0x1D622", "MATHEMATICAL SANS-SERIF ITALIC SMALL A"); \
	genSvg(fontname, "0x1D623", "MATHEMATICAL SANS-SERIF ITALIC SMALL B"); \
	genSvg(fontname, "0x1D624", "MATHEMATICAL SANS-SERIF ITALIC SMALL C"); \
	genSvg(fontname, "0x1D625", "MATHEMATICAL SANS-SERIF ITALIC SMALL D"); \
	genSvg(fontname, "0x1D626", "MATHEMATICAL SANS-SERIF ITALIC SMALL E"); \
	genSvg(fontname, "0x1D627", "MATHEMATICAL SANS-SERIF ITALIC SMALL F"); \
	genSvg(fontname, "0x1D628", "MATHEMATICAL SANS-SERIF ITALIC SMALL G"); \
	genSvg(fontname, "0x1D629", "MATHEMATICAL SANS-SERIF ITALIC SMALL H"); \
	genSvg(fontname, "0x1D62A", "MATHEMATICAL SANS-SERIF ITALIC SMALL I"); \
	genSvg(fontname, "0x1D62B", "MATHEMATICAL SANS-SERIF ITALIC SMALL J"); \
	genSvg(fontname, "0x1D62C", "MATHEMATICAL SANS-SERIF ITALIC SMALL K"); \
	genSvg(fontname, "0x1D62D", "MATHEMATICAL SANS-SERIF ITALIC SMALL L"); \
	genSvg(fontname, "0x1D62E", "MATHEMATICAL SANS-SERIF ITALIC SMALL M"); \
	genSvg(fontname, "0x1D62F", "MATHEMATICAL SANS-SERIF ITALIC SMALL N"); \
	genSvg(fontname, "0x1D630", "MATHEMATICAL SANS-SERIF ITALIC SMALL O"); \
	genSvg(fontname, "0x1D631", "MATHEMATICAL SANS-SERIF ITALIC SMALL P"); \
	genSvg(fontname, "0x1D632", "MATHEMATICAL SANS-SERIF ITALIC SMALL Q"); \
	genSvg(fontname, "0x1D633", "MATHEMATICAL SANS-SERIF ITALIC SMALL R"); \
	genSvg(fontname, "0x1D634", "MATHEMATICAL SANS-SERIF ITALIC SMALL S"); \
	genSvg(fontname, "0x1D635", "MATHEMATICAL SANS-SERIF ITALIC SMALL T"); \
	genSvg(fontname, "0x1D636", "MATHEMATICAL SANS-SERIF ITALIC SMALL U"); \
	genSvg(fontname, "0x1D637", "MATHEMATICAL SANS-SERIF ITALIC SMALL V"); \
	genSvg(fontname, "0x1D638", "MATHEMATICAL SANS-SERIF ITALIC SMALL W"); \
	genSvg(fontname, "0x1D639", "MATHEMATICAL SANS-SERIF ITALIC SMALL X"); \
	genSvg(fontname, "0x1D63A", "MATHEMATICAL SANS-SERIF ITALIC SMALL Y"); \
	genSvg(fontname, "0x1D63B", "MATHEMATICAL SANS-SERIF ITALIC SMALL Z"); \
	genSvg(fontname, "0x1D63C", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL A"); \
	genSvg(fontname, "0x1D63D", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL B"); \
	genSvg(fontname, "0x1D63E", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL C"); \
	genSvg(fontname, "0x1D63F", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL D"); \
	genSvg(fontname, "0x1D640", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL E"); \
	genSvg(fontname, "0x1D641", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL F"); \
	genSvg(fontname, "0x1D642", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL G"); \
	genSvg(fontname, "0x1D643", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL H"); \
	genSvg(fontname, "0x1D644", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL I"); \
	genSvg(fontname, "0x1D645", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL J"); \
	genSvg(fontname, "0x1D646", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL K"); \
	genSvg(fontname, "0x1D647", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL L"); \
	genSvg(fontname, "0x1D648", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL M"); \
	genSvg(fontname, "0x1D649", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL N"); \
	genSvg(fontname, "0x1D64A", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL O"); \
	genSvg(fontname, "0x1D64B", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL P"); \
	genSvg(fontname, "0x1D64C", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL Q"); \
	genSvg(fontname, "0x1D64D", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL R"); \
	genSvg(fontname, "0x1D64E", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL S"); \
	genSvg(fontname, "0x1D64F", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL T"); \
	genSvg(fontname, "0x1D650", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL U"); \
	genSvg(fontname, "0x1D651", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL V"); \
	genSvg(fontname, "0x1D652", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL W"); \
	genSvg(fontname, "0x1D653", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL X"); \
	genSvg(fontname, "0x1D654", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL Y"); \
	genSvg(fontname, "0x1D655", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL Z"); \
	genSvg(fontname, "0x1D656", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL A"); \
	genSvg(fontname, "0x1D657", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL B"); \
	genSvg(fontname, "0x1D658", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL C"); \
	genSvg(fontname, "0x1D659", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL D"); \
	genSvg(fontname, "0x1D65A", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL E"); \
	genSvg(fontname, "0x1D65B", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL F"); \
	genSvg(fontname, "0x1D65C", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL G"); \
	genSvg(fontname, "0x1D65D", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL H"); \
	genSvg(fontname, "0x1D65E", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL I"); \
	genSvg(fontname, "0x1D65F", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL J"); \
	genSvg(fontname, "0x1D660", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL K"); \
	genSvg(fontname, "0x1D661", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL L"); \
	genSvg(fontname, "0x1D662", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL M"); \
	genSvg(fontname, "0x1D663", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL N"); \
	genSvg(fontname, "0x1D664", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL O"); \
	genSvg(fontname, "0x1D665", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL P"); \
	genSvg(fontname, "0x1D666", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL Q"); \
	genSvg(fontname, "0x1D667", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL R"); \
	genSvg(fontname, "0x1D668", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL S"); \
	genSvg(fontname, "0x1D669", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL T"); \
	genSvg(fontname, "0x1D66A", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL U"); \
	genSvg(fontname, "0x1D66B", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL V"); \
	genSvg(fontname, "0x1D66C", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL W"); \
	genSvg(fontname, "0x1D66D", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL X"); \
	genSvg(fontname, "0x1D66E", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL Y"); \
	genSvg(fontname, "0x1D66F", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL Z"); \
	genSvg(fontname, "0x1D670", "MATHEMATICAL MONOSPACE CAPITAL A"); \
	genSvg(fontname, "0x1D671", "MATHEMATICAL MONOSPACE CAPITAL B"); \
	genSvg(fontname, "0x1D672", "MATHEMATICAL MONOSPACE CAPITAL C"); \
	genSvg(fontname, "0x1D673", "MATHEMATICAL MONOSPACE CAPITAL D"); \
	genSvg(fontname, "0x1D674", "MATHEMATICAL MONOSPACE CAPITAL E"); \
	genSvg(fontname, "0x1D675", "MATHEMATICAL MONOSPACE CAPITAL F"); \
	genSvg(fontname, "0x1D676", "MATHEMATICAL MONOSPACE CAPITAL G"); \
	genSvg(fontname, "0x1D677", "MATHEMATICAL MONOSPACE CAPITAL H"); \
	genSvg(fontname, "0x1D678", "MATHEMATICAL MONOSPACE CAPITAL I"); \
	genSvg(fontname, "0x1D679", "MATHEMATICAL MONOSPACE CAPITAL J"); \
	genSvg(fontname, "0x1D67A", "MATHEMATICAL MONOSPACE CAPITAL K"); \
	genSvg(fontname, "0x1D67B", "MATHEMATICAL MONOSPACE CAPITAL L"); \
	genSvg(fontname, "0x1D67C", "MATHEMATICAL MONOSPACE CAPITAL M"); \
	genSvg(fontname, "0x1D67D", "MATHEMATICAL MONOSPACE CAPITAL N"); \
	genSvg(fontname, "0x1D67E", "MATHEMATICAL MONOSPACE CAPITAL O"); \
	genSvg(fontname, "0x1D67F", "MATHEMATICAL MONOSPACE CAPITAL P"); \
	genSvg(fontname, "0x1D680", "MATHEMATICAL MONOSPACE CAPITAL Q"); \
	genSvg(fontname, "0x1D681", "MATHEMATICAL MONOSPACE CAPITAL R"); \
	genSvg(fontname, "0x1D682", "MATHEMATICAL MONOSPACE CAPITAL S"); \
	genSvg(fontname, "0x1D683", "MATHEMATICAL MONOSPACE CAPITAL T"); \
	genSvg(fontname, "0x1D684", "MATHEMATICAL MONOSPACE CAPITAL U"); \
	genSvg(fontname, "0x1D685", "MATHEMATICAL MONOSPACE CAPITAL V"); \
	genSvg(fontname, "0x1D686", "MATHEMATICAL MONOSPACE CAPITAL W"); \
	genSvg(fontname, "0x1D687", "MATHEMATICAL MONOSPACE CAPITAL X"); \
	genSvg(fontname, "0x1D688", "MATHEMATICAL MONOSPACE CAPITAL Y"); \
	genSvg(fontname, "0x1D689", "MATHEMATICAL MONOSPACE CAPITAL Z"); \
	genSvg(fontname, "0x1D68A", "MATHEMATICAL MONOSPACE SMALL A"); \
	genSvg(fontname, "0x1D68B", "MATHEMATICAL MONOSPACE SMALL B"); \
	genSvg(fontname, "0x1D68C", "MATHEMATICAL MONOSPACE SMALL C"); \
	genSvg(fontname, "0x1D68D", "MATHEMATICAL MONOSPACE SMALL D"); \
	genSvg(fontname, "0x1D68E", "MATHEMATICAL MONOSPACE SMALL E"); \
	genSvg(fontname, "0x1D68F", "MATHEMATICAL MONOSPACE SMALL F"); \
	genSvg(fontname, "0x1D690", "MATHEMATICAL MONOSPACE SMALL G"); \
	genSvg(fontname, "0x1D691", "MATHEMATICAL MONOSPACE SMALL H"); \
	genSvg(fontname, "0x1D692", "MATHEMATICAL MONOSPACE SMALL I"); \
	genSvg(fontname, "0x1D693", "MATHEMATICAL MONOSPACE SMALL J"); \
	genSvg(fontname, "0x1D694", "MATHEMATICAL MONOSPACE SMALL K"); \
	genSvg(fontname, "0x1D695", "MATHEMATICAL MONOSPACE SMALL L"); \
	genSvg(fontname, "0x1D696", "MATHEMATICAL MONOSPACE SMALL M"); \
	genSvg(fontname, "0x1D697", "MATHEMATICAL MONOSPACE SMALL N"); \
	genSvg(fontname, "0x1D698", "MATHEMATICAL MONOSPACE SMALL O"); \
	genSvg(fontname, "0x1D699", "MATHEMATICAL MONOSPACE SMALL P"); \
	genSvg(fontname, "0x1D69A", "MATHEMATICAL MONOSPACE SMALL Q"); \
	genSvg(fontname, "0x1D69B", "MATHEMATICAL MONOSPACE SMALL R"); \
	genSvg(fontname, "0x1D69C", "MATHEMATICAL MONOSPACE SMALL S"); \
	genSvg(fontname, "0x1D69D", "MATHEMATICAL MONOSPACE SMALL T"); \
	genSvg(fontname, "0x1D69E", "MATHEMATICAL MONOSPACE SMALL U"); \
	genSvg(fontname, "0x1D69F", "MATHEMATICAL MONOSPACE SMALL V"); \
	genSvg(fontname, "0x1D6A0", "MATHEMATICAL MONOSPACE SMALL W"); \
	genSvg(fontname, "0x1D6A1", "MATHEMATICAL MONOSPACE SMALL X"); \
	genSvg(fontname, "0x1D6A2", "MATHEMATICAL MONOSPACE SMALL Y"); \
	genSvg(fontname, "0x1D6A3", "MATHEMATICAL MONOSPACE SMALL Z"); \
	genSvg(fontname, "0x1D6A4", "MATHEMATICAL ITALIC SMALL DOTLESS I"); \
	genSvg(fontname, "0x1D6A5", "MATHEMATICAL ITALIC SMALL DOTLESS J"); \
	genSvg(fontname, "0x1D6A8", "MATHEMATICAL BOLD CAPITAL ALPHA"); \
	genSvg(fontname, "0x1D6A9", "MATHEMATICAL BOLD CAPITAL BETA"); \
	genSvg(fontname, "0x1D6AA", "MATHEMATICAL BOLD CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D6AB", "MATHEMATICAL BOLD CAPITAL DELTA"); \
	genSvg(fontname, "0x1D6AC", "MATHEMATICAL BOLD CAPITAL EPSILON"); \
	genSvg(fontname, "0x1D6AD", "MATHEMATICAL BOLD CAPITAL ZETA"); \
	genSvg(fontname, "0x1D6AE", "MATHEMATICAL BOLD CAPITAL ETA"); \
	genSvg(fontname, "0x1D6AF", "MATHEMATICAL BOLD CAPITAL THETA"); \
	genSvg(fontname, "0x1D6B0", "MATHEMATICAL BOLD CAPITAL IOTA"); \
	genSvg(fontname, "0x1D6B1", "MATHEMATICAL BOLD CAPITAL KAPPA"); \
	genSvg(fontname, "0x1D6B2", "MATHEMATICAL BOLD CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D6B3", "MATHEMATICAL BOLD CAPITAL MU"); \
	genSvg(fontname, "0x1D6B4", "MATHEMATICAL BOLD CAPITAL NU"); \
	genSvg(fontname, "0x1D6B5", "MATHEMATICAL BOLD CAPITAL XI"); \
	genSvg(fontname, "0x1D6B6", "MATHEMATICAL BOLD CAPITAL OMICRON"); \
	genSvg(fontname, "0x1D6B7", "MATHEMATICAL BOLD CAPITAL PI"); \
	genSvg(fontname, "0x1D6B8", "MATHEMATICAL BOLD CAPITAL RHO"); \
	genSvg(fontname, "0x1D6B9", "MATHEMATICAL BOLD CAPITAL THETA SYMBOL"); \
	genSvg(fontname, "0x1D6BA", "MATHEMATICAL BOLD CAPITAL SIGMA"); \
	genSvg(fontname, "0x1D6BB", "MATHEMATICAL BOLD CAPITAL TAU"); \
	genSvg(fontname, "0x1D6BC", "MATHEMATICAL BOLD CAPITAL UPSILON"); \
	genSvg(fontname, "0x1D6BD", "MATHEMATICAL BOLD CAPITAL PHI"); \
	genSvg(fontname, "0x1D6BE", "MATHEMATICAL BOLD CAPITAL CHI"); \
	genSvg(fontname, "0x1D6BF", "MATHEMATICAL BOLD CAPITAL PSI"); \
	genSvg(fontname, "0x1D6C0", "MATHEMATICAL BOLD CAPITAL OMEGA"); \
	genSvg(fontname, "0x1D6C1", "MATHEMATICAL BOLD NABLA"); \
	genSvg(fontname, "0x1D6C2", "MATHEMATICAL BOLD SMALL ALPHA"); \
	genSvg(fontname, "0x1D6C3", "MATHEMATICAL BOLD SMALL BETA"); \
	genSvg(fontname, "0x1D6C4", "MATHEMATICAL BOLD SMALL GAMMA"); \
	genSvg(fontname, "0x1D6C5", "MATHEMATICAL BOLD SMALL DELTA"); \
	genSvg(fontname, "0x1D6C6", "MATHEMATICAL BOLD SMALL EPSILON"); \
	genSvg(fontname, "0x1D6C7", "MATHEMATICAL BOLD SMALL ZETA"); \
	genSvg(fontname, "0x1D6C8", "MATHEMATICAL BOLD SMALL ETA"); \
	genSvg(fontname, "0x1D6C9", "MATHEMATICAL BOLD SMALL THETA"); \
	genSvg(fontname, "0x1D6CA", "MATHEMATICAL BOLD SMALL IOTA"); \
	genSvg(fontname, "0x1D6CB", "MATHEMATICAL BOLD SMALL KAPPA"); \
	genSvg(fontname, "0x1D6CC", "MATHEMATICAL BOLD SMALL LAMDA"); \
	genSvg(fontname, "0x1D6CD", "MATHEMATICAL BOLD SMALL MU"); \
	genSvg(fontname, "0x1D6CE", "MATHEMATICAL BOLD SMALL NU"); \
	genSvg(fontname, "0x1D6CF", "MATHEMATICAL BOLD SMALL XI"); \
	genSvg(fontname, "0x1D6D0", "MATHEMATICAL BOLD SMALL OMICRON"); \
	genSvg(fontname, "0x1D6D1", "MATHEMATICAL BOLD SMALL PI"); \
	genSvg(fontname, "0x1D6D2", "MATHEMATICAL BOLD SMALL RHO"); \
	genSvg(fontname, "0x1D6D3", "MATHEMATICAL BOLD SMALL FINAL SIGMA"); \
	genSvg(fontname, "0x1D6D4", "MATHEMATICAL BOLD SMALL SIGMA"); \
	genSvg(fontname, "0x1D6D5", "MATHEMATICAL BOLD SMALL TAU"); \
	genSvg(fontname, "0x1D6D6", "MATHEMATICAL BOLD SMALL UPSILON"); \
	genSvg(fontname, "0x1D6D7", "MATHEMATICAL BOLD SMALL PHI"); \
	genSvg(fontname, "0x1D6D8", "MATHEMATICAL BOLD SMALL CHI"); \
	genSvg(fontname, "0x1D6D9", "MATHEMATICAL BOLD SMALL PSI"); \
	genSvg(fontname, "0x1D6DA", "MATHEMATICAL BOLD SMALL OMEGA"); \
	genSvg(fontname, "0x1D6DB", "MATHEMATICAL BOLD PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x1D6DC", "MATHEMATICAL BOLD EPSILON SYMBOL"); \
	genSvg(fontname, "0x1D6DD", "MATHEMATICAL BOLD THETA SYMBOL"); \
	genSvg(fontname, "0x1D6DE", "MATHEMATICAL BOLD KAPPA SYMBOL"); \
	genSvg(fontname, "0x1D6DF", "MATHEMATICAL BOLD PHI SYMBOL"); \
	genSvg(fontname, "0x1D6E0", "MATHEMATICAL BOLD RHO SYMBOL"); \
	genSvg(fontname, "0x1D6E1", "MATHEMATICAL BOLD PI SYMBOL"); \
	genSvg(fontname, "0x1D6E2", "MATHEMATICAL ITALIC CAPITAL ALPHA"); \
	genSvg(fontname, "0x1D6E3", "MATHEMATICAL ITALIC CAPITAL BETA"); \
	genSvg(fontname, "0x1D6E4", "MATHEMATICAL ITALIC CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D6E5", "MATHEMATICAL ITALIC CAPITAL DELTA"); \
	genSvg(fontname, "0x1D6E6", "MATHEMATICAL ITALIC CAPITAL EPSILON"); \
	genSvg(fontname, "0x1D6E7", "MATHEMATICAL ITALIC CAPITAL ZETA"); \
	genSvg(fontname, "0x1D6E8", "MATHEMATICAL ITALIC CAPITAL ETA"); \
	genSvg(fontname, "0x1D6E9", "MATHEMATICAL ITALIC CAPITAL THETA"); \
	genSvg(fontname, "0x1D6EA", "MATHEMATICAL ITALIC CAPITAL IOTA"); \
	genSvg(fontname, "0x1D6EB", "MATHEMATICAL ITALIC CAPITAL KAPPA"); \
	genSvg(fontname, "0x1D6EC", "MATHEMATICAL ITALIC CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D6ED", "MATHEMATICAL ITALIC CAPITAL MU"); \
	genSvg(fontname, "0x1D6EE", "MATHEMATICAL ITALIC CAPITAL NU"); \
	genSvg(fontname, "0x1D6EF", "MATHEMATICAL ITALIC CAPITAL XI"); \
	genSvg(fontname, "0x1D6F0", "MATHEMATICAL ITALIC CAPITAL OMICRON"); \
	genSvg(fontname, "0x1D6F1", "MATHEMATICAL ITALIC CAPITAL PI"); \
	genSvg(fontname, "0x1D6F2", "MATHEMATICAL ITALIC CAPITAL RHO"); \
	genSvg(fontname, "0x1D6F3", "MATHEMATICAL ITALIC CAPITAL THETA SYMBOL"); \
	genSvg(fontname, "0x1D6F4", "MATHEMATICAL ITALIC CAPITAL SIGMA"); \
	genSvg(fontname, "0x1D6F5", "MATHEMATICAL ITALIC CAPITAL TAU"); \
	genSvg(fontname, "0x1D6F6", "MATHEMATICAL ITALIC CAPITAL UPSILON"); \
	genSvg(fontname, "0x1D6F7", "MATHEMATICAL ITALIC CAPITAL PHI"); \
	genSvg(fontname, "0x1D6F8", "MATHEMATICAL ITALIC CAPITAL CHI"); \
	genSvg(fontname, "0x1D6F9", "MATHEMATICAL ITALIC CAPITAL PSI"); \
	genSvg(fontname, "0x1D6FA", "MATHEMATICAL ITALIC CAPITAL OMEGA"); \
	genSvg(fontname, "0x1D6FB", "MATHEMATICAL ITALIC NABLA"); \
	genSvg(fontname, "0x1D6FC", "MATHEMATICAL ITALIC SMALL ALPHA"); \
	genSvg(fontname, "0x1D6FD", "MATHEMATICAL ITALIC SMALL BETA"); \
	genSvg(fontname, "0x1D6FE", "MATHEMATICAL ITALIC SMALL GAMMA"); \
	genSvg(fontname, "0x1D6FF", "MATHEMATICAL ITALIC SMALL DELTA"); \
	genSvg(fontname, "0x1D700", "MATHEMATICAL ITALIC SMALL EPSILON"); \
	genSvg(fontname, "0x1D701", "MATHEMATICAL ITALIC SMALL ZETA"); \
	genSvg(fontname, "0x1D702", "MATHEMATICAL ITALIC SMALL ETA"); \
	genSvg(fontname, "0x1D703", "MATHEMATICAL ITALIC SMALL THETA"); \
	genSvg(fontname, "0x1D704", "MATHEMATICAL ITALIC SMALL IOTA"); \
	genSvg(fontname, "0x1D705", "MATHEMATICAL ITALIC SMALL KAPPA"); \
	genSvg(fontname, "0x1D706", "MATHEMATICAL ITALIC SMALL LAMDA"); \
	genSvg(fontname, "0x1D707", "MATHEMATICAL ITALIC SMALL MU"); \
	genSvg(fontname, "0x1D708", "MATHEMATICAL ITALIC SMALL NU"); \
	genSvg(fontname, "0x1D709", "MATHEMATICAL ITALIC SMALL XI"); \
	genSvg(fontname, "0x1D70A", "MATHEMATICAL ITALIC SMALL OMICRON"); \
	genSvg(fontname, "0x1D70B", "MATHEMATICAL ITALIC SMALL PI"); \
	genSvg(fontname, "0x1D70C", "MATHEMATICAL ITALIC SMALL RHO"); \
	genSvg(fontname, "0x1D70D", "MATHEMATICAL ITALIC SMALL FINAL SIGMA"); \
	genSvg(fontname, "0x1D70E", "MATHEMATICAL ITALIC SMALL SIGMA"); \
	genSvg(fontname, "0x1D70F", "MATHEMATICAL ITALIC SMALL TAU"); \
	genSvg(fontname, "0x1D710", "MATHEMATICAL ITALIC SMALL UPSILON"); \
	genSvg(fontname, "0x1D711", "MATHEMATICAL ITALIC SMALL PHI"); \
	genSvg(fontname, "0x1D712", "MATHEMATICAL ITALIC SMALL CHI"); \
	genSvg(fontname, "0x1D713", "MATHEMATICAL ITALIC SMALL PSI"); \
	genSvg(fontname, "0x1D714", "MATHEMATICAL ITALIC SMALL OMEGA"); \
	genSvg(fontname, "0x1D715", "MATHEMATICAL ITALIC PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x1D716", "MATHEMATICAL ITALIC EPSILON SYMBOL"); \
	genSvg(fontname, "0x1D717", "MATHEMATICAL ITALIC THETA SYMBOL"); \
	genSvg(fontname, "0x1D718", "MATHEMATICAL ITALIC KAPPA SYMBOL"); \
	genSvg(fontname, "0x1D719", "MATHEMATICAL ITALIC PHI SYMBOL"); \
	genSvg(fontname, "0x1D71A", "MATHEMATICAL ITALIC RHO SYMBOL"); \
	genSvg(fontname, "0x1D71B", "MATHEMATICAL ITALIC PI SYMBOL"); \
	genSvg(fontname, "0x1D71C", "MATHEMATICAL BOLD ITALIC CAPITAL ALPHA"); \
	genSvg(fontname, "0x1D71D", "MATHEMATICAL BOLD ITALIC CAPITAL BETA"); \
	genSvg(fontname, "0x1D71E", "MATHEMATICAL BOLD ITALIC CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D71F", "MATHEMATICAL BOLD ITALIC CAPITAL DELTA"); \
	genSvg(fontname, "0x1D720", "MATHEMATICAL BOLD ITALIC CAPITAL EPSILON"); \
	genSvg(fontname, "0x1D721", "MATHEMATICAL BOLD ITALIC CAPITAL ZETA"); \
	genSvg(fontname, "0x1D722", "MATHEMATICAL BOLD ITALIC CAPITAL ETA"); \
	genSvg(fontname, "0x1D723", "MATHEMATICAL BOLD ITALIC CAPITAL THETA"); \
	genSvg(fontname, "0x1D724", "MATHEMATICAL BOLD ITALIC CAPITAL IOTA"); \
	genSvg(fontname, "0x1D725", "MATHEMATICAL BOLD ITALIC CAPITAL KAPPA"); \
	genSvg(fontname, "0x1D726", "MATHEMATICAL BOLD ITALIC CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D727", "MATHEMATICAL BOLD ITALIC CAPITAL MU"); \
	genSvg(fontname, "0x1D728", "MATHEMATICAL BOLD ITALIC CAPITAL NU"); \
	genSvg(fontname, "0x1D729", "MATHEMATICAL BOLD ITALIC CAPITAL XI"); \
	genSvg(fontname, "0x1D72A", "MATHEMATICAL BOLD ITALIC CAPITAL OMICRON"); \
	genSvg(fontname, "0x1D72B", "MATHEMATICAL BOLD ITALIC CAPITAL PI"); \
	genSvg(fontname, "0x1D72C", "MATHEMATICAL BOLD ITALIC CAPITAL RHO"); \
	genSvg(fontname, "0x1D72D", "MATHEMATICAL BOLD ITALIC CAPITAL THETA SYMBOL"); \
	genSvg(fontname, "0x1D72E", "MATHEMATICAL BOLD ITALIC CAPITAL SIGMA"); \
	genSvg(fontname, "0x1D72F", "MATHEMATICAL BOLD ITALIC CAPITAL TAU"); \
	genSvg(fontname, "0x1D730", "MATHEMATICAL BOLD ITALIC CAPITAL UPSILON"); \
	genSvg(fontname, "0x1D731", "MATHEMATICAL BOLD ITALIC CAPITAL PHI"); \
	genSvg(fontname, "0x1D732", "MATHEMATICAL BOLD ITALIC CAPITAL CHI"); \
	genSvg(fontname, "0x1D733", "MATHEMATICAL BOLD ITALIC CAPITAL PSI"); \
	genSvg(fontname, "0x1D734", "MATHEMATICAL BOLD ITALIC CAPITAL OMEGA"); \
	genSvg(fontname, "0x1D735", "MATHEMATICAL BOLD ITALIC NABLA"); \
	genSvg(fontname, "0x1D736", "MATHEMATICAL BOLD ITALIC SMALL ALPHA"); \
	genSvg(fontname, "0x1D737", "MATHEMATICAL BOLD ITALIC SMALL BETA"); \
	genSvg(fontname, "0x1D738", "MATHEMATICAL BOLD ITALIC SMALL GAMMA"); \
	genSvg(fontname, "0x1D739", "MATHEMATICAL BOLD ITALIC SMALL DELTA"); \
	genSvg(fontname, "0x1D73A", "MATHEMATICAL BOLD ITALIC SMALL EPSILON"); \
	genSvg(fontname, "0x1D73B", "MATHEMATICAL BOLD ITALIC SMALL ZETA"); \
	genSvg(fontname, "0x1D73C", "MATHEMATICAL BOLD ITALIC SMALL ETA"); \
	genSvg(fontname, "0x1D73D", "MATHEMATICAL BOLD ITALIC SMALL THETA"); \
	genSvg(fontname, "0x1D73E", "MATHEMATICAL BOLD ITALIC SMALL IOTA"); \
	genSvg(fontname, "0x1D73F", "MATHEMATICAL BOLD ITALIC SMALL KAPPA"); \
	genSvg(fontname, "0x1D740", "MATHEMATICAL BOLD ITALIC SMALL LAMDA"); \
	genSvg(fontname, "0x1D741", "MATHEMATICAL BOLD ITALIC SMALL MU"); \
	genSvg(fontname, "0x1D742", "MATHEMATICAL BOLD ITALIC SMALL NU"); \
	genSvg(fontname, "0x1D743", "MATHEMATICAL BOLD ITALIC SMALL XI"); \
	genSvg(fontname, "0x1D744", "MATHEMATICAL BOLD ITALIC SMALL OMICRON"); \
	genSvg(fontname, "0x1D745", "MATHEMATICAL BOLD ITALIC SMALL PI"); \
	genSvg(fontname, "0x1D746", "MATHEMATICAL BOLD ITALIC SMALL RHO"); \
	genSvg(fontname, "0x1D747", "MATHEMATICAL BOLD ITALIC SMALL FINAL SIGMA"); \
	genSvg(fontname, "0x1D748", "MATHEMATICAL BOLD ITALIC SMALL SIGMA"); \
	genSvg(fontname, "0x1D749", "MATHEMATICAL BOLD ITALIC SMALL TAU"); \
	genSvg(fontname, "0x1D74A", "MATHEMATICAL BOLD ITALIC SMALL UPSILON"); \
	genSvg(fontname, "0x1D74B", "MATHEMATICAL BOLD ITALIC SMALL PHI"); \
	genSvg(fontname, "0x1D74C", "MATHEMATICAL BOLD ITALIC SMALL CHI"); \
	genSvg(fontname, "0x1D74D", "MATHEMATICAL BOLD ITALIC SMALL PSI"); \
	genSvg(fontname, "0x1D74E", "MATHEMATICAL BOLD ITALIC SMALL OMEGA"); \
	genSvg(fontname, "0x1D74F", "MATHEMATICAL BOLD ITALIC PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x1D750", "MATHEMATICAL BOLD ITALIC EPSILON SYMBOL"); \
	genSvg(fontname, "0x1D751", "MATHEMATICAL BOLD ITALIC THETA SYMBOL"); \
	genSvg(fontname, "0x1D752", "MATHEMATICAL BOLD ITALIC KAPPA SYMBOL"); \
	genSvg(fontname, "0x1D753", "MATHEMATICAL BOLD ITALIC PHI SYMBOL"); \
	genSvg(fontname, "0x1D754", "MATHEMATICAL BOLD ITALIC RHO SYMBOL"); \
	genSvg(fontname, "0x1D755", "MATHEMATICAL BOLD ITALIC PI SYMBOL"); \
	genSvg(fontname, "0x1D756", "MATHEMATICAL SANS-SERIF BOLD CAPITAL ALPHA"); \
	genSvg(fontname, "0x1D757", "MATHEMATICAL SANS-SERIF BOLD CAPITAL BETA"); \
	genSvg(fontname, "0x1D758", "MATHEMATICAL SANS-SERIF BOLD CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D759", "MATHEMATICAL SANS-SERIF BOLD CAPITAL DELTA"); \
	genSvg(fontname, "0x1D75A", "MATHEMATICAL SANS-SERIF BOLD CAPITAL EPSILON"); \
	genSvg(fontname, "0x1D75B", "MATHEMATICAL SANS-SERIF BOLD CAPITAL ZETA"); \
	genSvg(fontname, "0x1D75C", "MATHEMATICAL SANS-SERIF BOLD CAPITAL ETA"); \
	genSvg(fontname, "0x1D75D", "MATHEMATICAL SANS-SERIF BOLD CAPITAL THETA"); \
	genSvg(fontname, "0x1D75E", "MATHEMATICAL SANS-SERIF BOLD CAPITAL IOTA"); \
	genSvg(fontname, "0x1D75F", "MATHEMATICAL SANS-SERIF BOLD CAPITAL KAPPA"); \
	genSvg(fontname, "0x1D760", "MATHEMATICAL SANS-SERIF BOLD CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D761", "MATHEMATICAL SANS-SERIF BOLD CAPITAL MU"); \
	genSvg(fontname, "0x1D762", "MATHEMATICAL SANS-SERIF BOLD CAPITAL NU"); \
	genSvg(fontname, "0x1D763", "MATHEMATICAL SANS-SERIF BOLD CAPITAL XI"); \
	genSvg(fontname, "0x1D764", "MATHEMATICAL SANS-SERIF BOLD CAPITAL OMICRON"); \
	genSvg(fontname, "0x1D765", "MATHEMATICAL SANS-SERIF BOLD CAPITAL PI"); \
	genSvg(fontname, "0x1D766", "MATHEMATICAL SANS-SERIF BOLD CAPITAL RHO"); \
	genSvg(fontname, "0x1D767", "MATHEMATICAL SANS-SERIF BOLD CAPITAL THETA SYMBOL"); \
	genSvg(fontname, "0x1D768", "MATHEMATICAL SANS-SERIF BOLD CAPITAL SIGMA"); \
	genSvg(fontname, "0x1D769", "MATHEMATICAL SANS-SERIF BOLD CAPITAL TAU"); \
	genSvg(fontname, "0x1D76A", "MATHEMATICAL SANS-SERIF BOLD CAPITAL UPSILON"); \
	genSvg(fontname, "0x1D76B", "MATHEMATICAL SANS-SERIF BOLD CAPITAL PHI"); \
	genSvg(fontname, "0x1D76C", "MATHEMATICAL SANS-SERIF BOLD CAPITAL CHI"); \
	genSvg(fontname, "0x1D76D", "MATHEMATICAL SANS-SERIF BOLD CAPITAL PSI"); \
	genSvg(fontname, "0x1D76E", "MATHEMATICAL SANS-SERIF BOLD CAPITAL OMEGA"); \
	genSvg(fontname, "0x1D76F", "MATHEMATICAL SANS-SERIF BOLD NABLA"); \
	genSvg(fontname, "0x1D770", "MATHEMATICAL SANS-SERIF BOLD SMALL ALPHA"); \
	genSvg(fontname, "0x1D771", "MATHEMATICAL SANS-SERIF BOLD SMALL BETA"); \
	genSvg(fontname, "0x1D772", "MATHEMATICAL SANS-SERIF BOLD SMALL GAMMA"); \
	genSvg(fontname, "0x1D773", "MATHEMATICAL SANS-SERIF BOLD SMALL DELTA"); \
	genSvg(fontname, "0x1D774", "MATHEMATICAL SANS-SERIF BOLD SMALL EPSILON"); \
	genSvg(fontname, "0x1D775", "MATHEMATICAL SANS-SERIF BOLD SMALL ZETA"); \
	genSvg(fontname, "0x1D776", "MATHEMATICAL SANS-SERIF BOLD SMALL ETA"); \
	genSvg(fontname, "0x1D777", "MATHEMATICAL SANS-SERIF BOLD SMALL THETA"); \
	genSvg(fontname, "0x1D778", "MATHEMATICAL SANS-SERIF BOLD SMALL IOTA"); \
	genSvg(fontname, "0x1D779", "MATHEMATICAL SANS-SERIF BOLD SMALL KAPPA"); \
	genSvg(fontname, "0x1D77A", "MATHEMATICAL SANS-SERIF BOLD SMALL LAMDA"); \
	genSvg(fontname, "0x1D77B", "MATHEMATICAL SANS-SERIF BOLD SMALL MU"); \
	genSvg(fontname, "0x1D77C", "MATHEMATICAL SANS-SERIF BOLD SMALL NU"); \
	genSvg(fontname, "0x1D77D", "MATHEMATICAL SANS-SERIF BOLD SMALL XI"); \
	genSvg(fontname, "0x1D77E", "MATHEMATICAL SANS-SERIF BOLD SMALL OMICRON"); \
	genSvg(fontname, "0x1D77F", "MATHEMATICAL SANS-SERIF BOLD SMALL PI"); \
	genSvg(fontname, "0x1D780", "MATHEMATICAL SANS-SERIF BOLD SMALL RHO"); \
	genSvg(fontname, "0x1D781", "MATHEMATICAL SANS-SERIF BOLD SMALL FINAL SIGMA"); \
	genSvg(fontname, "0x1D782", "MATHEMATICAL SANS-SERIF BOLD SMALL SIGMA"); \
	genSvg(fontname, "0x1D783", "MATHEMATICAL SANS-SERIF BOLD SMALL TAU"); \
	genSvg(fontname, "0x1D784", "MATHEMATICAL SANS-SERIF BOLD SMALL UPSILON"); \
	genSvg(fontname, "0x1D785", "MATHEMATICAL SANS-SERIF BOLD SMALL PHI"); \
	genSvg(fontname, "0x1D786", "MATHEMATICAL SANS-SERIF BOLD SMALL CHI"); \
	genSvg(fontname, "0x1D787", "MATHEMATICAL SANS-SERIF BOLD SMALL PSI"); \
	genSvg(fontname, "0x1D788", "MATHEMATICAL SANS-SERIF BOLD SMALL OMEGA"); \
	genSvg(fontname, "0x1D789", "MATHEMATICAL SANS-SERIF BOLD PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x1D78A", "MATHEMATICAL SANS-SERIF BOLD EPSILON SYMBOL"); \
	genSvg(fontname, "0x1D78B", "MATHEMATICAL SANS-SERIF BOLD THETA SYMBOL"); \
	genSvg(fontname, "0x1D78C", "MATHEMATICAL SANS-SERIF BOLD KAPPA SYMBOL"); \
	genSvg(fontname, "0x1D78D", "MATHEMATICAL SANS-SERIF BOLD PHI SYMBOL"); \
	genSvg(fontname, "0x1D78E", "MATHEMATICAL SANS-SERIF BOLD RHO SYMBOL"); \
	genSvg(fontname, "0x1D78F", "MATHEMATICAL SANS-SERIF BOLD PI SYMBOL"); \
	genSvg(fontname, "0x1D790", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL ALPHA"); \
	genSvg(fontname, "0x1D791", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL BETA"); \
	genSvg(fontname, "0x1D792", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D793", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL DELTA"); \
	genSvg(fontname, "0x1D794", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL EPSILON"); \
	genSvg(fontname, "0x1D795", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL ZETA"); \
	genSvg(fontname, "0x1D796", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL ETA"); \
	genSvg(fontname, "0x1D797", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL THETA"); \
	genSvg(fontname, "0x1D798", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL IOTA"); \
	genSvg(fontname, "0x1D799", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL KAPPA"); \
	genSvg(fontname, "0x1D79A", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D79B", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL MU"); \
	genSvg(fontname, "0x1D79C", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL NU"); \
	genSvg(fontname, "0x1D79D", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL XI"); \
	genSvg(fontname, "0x1D79E", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL OMICRON"); \
	genSvg(fontname, "0x1D79F", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL PI"); \
	genSvg(fontname, "0x1D7A0", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL RHO"); \
	genSvg(fontname, "0x1D7A1", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL THETA SYMBOL"); \
	genSvg(fontname, "0x1D7A2", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL SIGMA"); \
	genSvg(fontname, "0x1D7A3", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL TAU"); \
	genSvg(fontname, "0x1D7A4", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL UPSILON"); \
	genSvg(fontname, "0x1D7A5", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL PHI"); \
	genSvg(fontname, "0x1D7A6", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL CHI"); \
	genSvg(fontname, "0x1D7A7", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL PSI"); \
	genSvg(fontname, "0x1D7A8", "MATHEMATICAL SANS-SERIF BOLD ITALIC CAPITAL OMEGA"); \
	genSvg(fontname, "0x1D7A9", "MATHEMATICAL SANS-SERIF BOLD ITALIC NABLA"); \
	genSvg(fontname, "0x1D7AA", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL ALPHA"); \
	genSvg(fontname, "0x1D7AB", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL BETA"); \
	genSvg(fontname, "0x1D7AC", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL GAMMA"); \
	genSvg(fontname, "0x1D7AD", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL DELTA"); \
	genSvg(fontname, "0x1D7AE", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL EPSILON"); \
	genSvg(fontname, "0x1D7AF", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL ZETA"); \
	genSvg(fontname, "0x1D7B0", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL ETA"); \
	genSvg(fontname, "0x1D7B1", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL THETA"); \
	genSvg(fontname, "0x1D7B2", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL IOTA"); \
	genSvg(fontname, "0x1D7B3", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL KAPPA"); \
	genSvg(fontname, "0x1D7B4", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL LAMDA"); \
	genSvg(fontname, "0x1D7B5", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL MU"); \
	genSvg(fontname, "0x1D7B6", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL NU"); \
	genSvg(fontname, "0x1D7B7", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL XI"); \
	genSvg(fontname, "0x1D7B8", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL OMICRON"); \
	genSvg(fontname, "0x1D7B9", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL PI"); \
	genSvg(fontname, "0x1D7BA", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL RHO"); \
	genSvg(fontname, "0x1D7BB", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL FINAL SIGMA"); \
	genSvg(fontname, "0x1D7BC", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL SIGMA"); \
	genSvg(fontname, "0x1D7BD", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL TAU"); \
	genSvg(fontname, "0x1D7BE", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL UPSILON"); \
	genSvg(fontname, "0x1D7BF", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL PHI"); \
	genSvg(fontname, "0x1D7C0", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL CHI"); \
	genSvg(fontname, "0x1D7C1", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL PSI"); \
	genSvg(fontname, "0x1D7C2", "MATHEMATICAL SANS-SERIF BOLD ITALIC SMALL OMEGA"); \
	genSvg(fontname, "0x1D7C3", "MATHEMATICAL SANS-SERIF BOLD ITALIC PARTIAL DIFFERENTIAL"); \
	genSvg(fontname, "0x1D7C4", "MATHEMATICAL SANS-SERIF BOLD ITALIC EPSILON SYMBOL"); \
	genSvg(fontname, "0x1D7C5", "MATHEMATICAL SANS-SERIF BOLD ITALIC THETA SYMBOL"); \
	genSvg(fontname, "0x1D7C6", "MATHEMATICAL SANS-SERIF BOLD ITALIC KAPPA SYMBOL"); \
	genSvg(fontname, "0x1D7C7", "MATHEMATICAL SANS-SERIF BOLD ITALIC PHI SYMBOL"); \
	genSvg(fontname, "0x1D7C8", "MATHEMATICAL SANS-SERIF BOLD ITALIC RHO SYMBOL"); \
	genSvg(fontname, "0x1D7C9", "MATHEMATICAL SANS-SERIF BOLD ITALIC PI SYMBOL"); \
	genSvg(fontname, "0x1D7CA", "MATHEMATICAL BOLD CAPITAL DIGAMMA"); \
	genSvg(fontname, "0x1D7CB", "MATHEMATICAL BOLD SMALL DIGAMMA"); \
	genSvg(fontname, "0x1D7CE", "MATHEMATICAL BOLD DIGIT ZERO"); \
	genSvg(fontname, "0x1D7CF", "MATHEMATICAL BOLD DIGIT ONE"); \
	genSvg(fontname, "0x1D7D0", "MATHEMATICAL BOLD DIGIT TWO"); \
	genSvg(fontname, "0x1D7D1", "MATHEMATICAL BOLD DIGIT THREE"); \
	genSvg(fontname, "0x1D7D2", "MATHEMATICAL BOLD DIGIT FOUR"); \
	genSvg(fontname, "0x1D7D3", "MATHEMATICAL BOLD DIGIT FIVE"); \
	genSvg(fontname, "0x1D7D4", "MATHEMATICAL BOLD DIGIT SIX"); \
	genSvg(fontname, "0x1D7D5", "MATHEMATICAL BOLD DIGIT SEVEN"); \
	genSvg(fontname, "0x1D7D6", "MATHEMATICAL BOLD DIGIT EIGHT"); \
	genSvg(fontname, "0x1D7D7", "MATHEMATICAL BOLD DIGIT NINE"); \
	genSvg(fontname, "0x1D7D8", "MATHEMATICAL DOUBLE-STRUCK DIGIT ZERO"); \
	genSvg(fontname, "0x1D7D9", "MATHEMATICAL DOUBLE-STRUCK DIGIT ONE"); \
	genSvg(fontname, "0x1D7DA", "MATHEMATICAL DOUBLE-STRUCK DIGIT TWO"); \
	genSvg(fontname, "0x1D7DB", "MATHEMATICAL DOUBLE-STRUCK DIGIT THREE"); \
	genSvg(fontname, "0x1D7DC", "MATHEMATICAL DOUBLE-STRUCK DIGIT FOUR"); \
	genSvg(fontname, "0x1D7DD", "MATHEMATICAL DOUBLE-STRUCK DIGIT FIVE"); \
	genSvg(fontname, "0x1D7DE", "MATHEMATICAL DOUBLE-STRUCK DIGIT SIX"); \
	genSvg(fontname, "0x1D7DF", "MATHEMATICAL DOUBLE-STRUCK DIGIT SEVEN"); \
	genSvg(fontname, "0x1D7E0", "MATHEMATICAL DOUBLE-STRUCK DIGIT EIGHT"); \
	genSvg(fontname, "0x1D7E1", "MATHEMATICAL DOUBLE-STRUCK DIGIT NINE"); \
	genSvg(fontname, "0x1D7E2", "MATHEMATICAL SANS-SERIF DIGIT ZERO"); \
	genSvg(fontname, "0x1D7E3", "MATHEMATICAL SANS-SERIF DIGIT ONE"); \
	genSvg(fontname, "0x1D7E4", "MATHEMATICAL SANS-SERIF DIGIT TWO"); \
	genSvg(fontname, "0x1D7E5", "MATHEMATICAL SANS-SERIF DIGIT THREE"); \
	genSvg(fontname, "0x1D7E6", "MATHEMATICAL SANS-SERIF DIGIT FOUR"); \
	genSvg(fontname, "0x1D7E7", "MATHEMATICAL SANS-SERIF DIGIT FIVE"); \
	genSvg(fontname, "0x1D7E8", "MATHEMATICAL SANS-SERIF DIGIT SIX"); \
	genSvg(fontname, "0x1D7E9", "MATHEMATICAL SANS-SERIF DIGIT SEVEN"); \
	genSvg(fontname, "0x1D7EA", "MATHEMATICAL SANS-SERIF DIGIT EIGHT"); \
	genSvg(fontname, "0x1D7EB", "MATHEMATICAL SANS-SERIF DIGIT NINE"); \
	genSvg(fontname, "0x1D7EC", "MATHEMATICAL SANS-SERIF BOLD DIGIT ZERO"); \
	genSvg(fontname, "0x1D7ED", "MATHEMATICAL SANS-SERIF BOLD DIGIT ONE"); \
	genSvg(fontname, "0x1D7EE", "MATHEMATICAL SANS-SERIF BOLD DIGIT TWO"); \
	genSvg(fontname, "0x1D7EF", "MATHEMATICAL SANS-SERIF BOLD DIGIT THREE"); \
	genSvg(fontname, "0x1D7F0", "MATHEMATICAL SANS-SERIF BOLD DIGIT FOUR"); \
	genSvg(fontname, "0x1D7F1", "MATHEMATICAL SANS-SERIF BOLD DIGIT FIVE"); \
	genSvg(fontname, "0x1D7F2", "MATHEMATICAL SANS-SERIF BOLD DIGIT SIX"); \
	genSvg(fontname, "0x1D7F3", "MATHEMATICAL SANS-SERIF BOLD DIGIT SEVEN"); \
	genSvg(fontname, "0x1D7F4", "MATHEMATICAL SANS-SERIF BOLD DIGIT EIGHT"); \
	genSvg(fontname, "0x1D7F5", "MATHEMATICAL SANS-SERIF BOLD DIGIT NINE"); \
	genSvg(fontname, "0x1D7F6", "MATHEMATICAL MONOSPACE DIGIT ZERO"); \
	genSvg(fontname, "0x1D7F7", "MATHEMATICAL MONOSPACE DIGIT ONE"); \
	genSvg(fontname, "0x1D7F8", "MATHEMATICAL MONOSPACE DIGIT TWO"); \
	genSvg(fontname, "0x1D7F9", "MATHEMATICAL MONOSPACE DIGIT THREE"); \
	genSvg(fontname, "0x1D7FA", "MATHEMATICAL MONOSPACE DIGIT FOUR"); \
	genSvg(fontname, "0x1D7FB", "MATHEMATICAL MONOSPACE DIGIT FIVE"); \
	genSvg(fontname, "0x1D7FC", "MATHEMATICAL MONOSPACE DIGIT SIX"); \
	genSvg(fontname, "0x1D7FD", "MATHEMATICAL MONOSPACE DIGIT SEVEN"); \
	genSvg(fontname, "0x1D7FE", "MATHEMATICAL MONOSPACE DIGIT EIGHT"); \
	genSvg(fontname, "0x1D7FF", "MATHEMATICAL MONOSPACE DIGIT NINE");

#define MISCELLANEOUS_TECHNICAL \
	genSvg(fontname, "0x2300", "DIAMETER SIGN"); \
	genSvg(fontname, "0x2301", "ELECTRIC ARROW"); \
	genSvg(fontname, "0x2302", "HOUSE"); \
	genSvg(fontname, "0x2303", "UP ARROWHEAD"); \
	genSvg(fontname, "0x2304", "DOWN ARROWHEAD"); \
	genSvg(fontname, "0x2305", "PROJECTIVE"); \
	genSvg(fontname, "0x2306", "PERSPECTIVE"); \
	genSvg(fontname, "0x2307", "WAVY LINE"); \
	genSvg(fontname, "0x2308", "LEFT CEILING"); \
	genSvg(fontname, "0x2309", "RIGHT CEILING"); \
	genSvg(fontname, "0x230A", "LEFT FLOOR"); \
	genSvg(fontname, "0x230B", "RIGHT FLOOR"); \
	genSvg(fontname, "0x230C", "BOTTOM RIGHT CROP"); \
	genSvg(fontname, "0x230D", "BOTTOM LEFT CROP"); \
	genSvg(fontname, "0x230E", "TOP RIGHT CROP"); \
	genSvg(fontname, "0x230F", "TOP LEFT CROP"); \
	genSvg(fontname, "0x2310", "REVERSED NOT SIGN"); \
	genSvg(fontname, "0x2311", "SQUARE LOZENGE"); \
	genSvg(fontname, "0x2312", "ARC"); \
	genSvg(fontname, "0x2313", "SEGMENT"); \
	genSvg(fontname, "0x2314", "SECTOR"); \
	genSvg(fontname, "0x2315", "TELEPHONE RECORDER"); \
	genSvg(fontname, "0x2316", "POSITION INDICATOR"); \
	genSvg(fontname, "0x2317", "VIEWDATA SQUARE"); \
	genSvg(fontname, "0x2318", "PLACE OF INTEREST SIGN"); \
	genSvg(fontname, "0x2319", "TURNED NOT SIGN"); \
	genSvg(fontname, "0x231A", "WATCH"); \
	genSvg(fontname, "0x231B", "HOURGLASS"); \
	genSvg(fontname, "0x231C", "TOP LEFT CORNER"); \
	genSvg(fontname, "0x231D", "TOP RIGHT CORNER"); \
	genSvg(fontname, "0x231E", "BOTTOM LEFT CORNER"); \
	genSvg(fontname, "0x231F", "BOTTOM RIGHT CORNER"); \
	genSvg(fontname, "0x2320", "TOP HALF INTEGRAL"); \
	genSvg(fontname, "0x2321", "BOTTOM HALF INTEGRAL"); \
	genSvg(fontname, "0x2322", "FROWN"); \
	genSvg(fontname, "0x2323", "SMILE"); \
	genSvg(fontname, "0x2324", "UP ARROWHEAD BETWEEN TWO HORIZONTAL BARS"); \
	genSvg(fontname, "0x2325", "OPTION KEY"); \
	genSvg(fontname, "0x2326", "ERASE TO THE RIGHT"); \
	genSvg(fontname, "0x2327", "X IN A RECTANGLE BOX"); \
	genSvg(fontname, "0x2328", "KEYBOARD"); \
	genSvg(fontname, "0x2329", "LEFT-POINTING ANGLE BRACKET"); \
	genSvg(fontname, "0x232A", "RIGHT-POINTING ANGLE BRACKET"); \
	genSvg(fontname, "0x232B", "ERASE TO THE LEFT"); \
	genSvg(fontname, "0x232C", "BENZENE RING"); \
	genSvg(fontname, "0x232D", "CYLINDRICITY"); \
	genSvg(fontname, "0x232E", "ALL AROUND-PROFILE"); \
	genSvg(fontname, "0x232F", "SYMMETRY"); \
	genSvg(fontname, "0x2330", "TOTAL RUNOUT"); \
	genSvg(fontname, "0x2331", "DIMENSION ORIGIN"); \
	genSvg(fontname, "0x2332", "CONICAL TAPER"); \
	genSvg(fontname, "0x2333", "SLOPE"); \
	genSvg(fontname, "0x2334", "COUNTERBORE"); \
	genSvg(fontname, "0x2335", "COUNTERSINK"); \
	genSvg(fontname, "0x2336", "APL FUNCTIONAL SYMBOL I-BEAM"); \
	genSvg(fontname, "0x2337", "APL FUNCTIONAL SYMBOL SQUISH QUAD"); \
	genSvg(fontname, "0x2338", "APL FUNCTIONAL SYMBOL QUAD EQUAL"); \
	genSvg(fontname, "0x2339", "APL FUNCTIONAL SYMBOL QUAD DIVIDE"); \
	genSvg(fontname, "0x233A", "APL FUNCTIONAL SYMBOL QUAD DIAMOND"); \
	genSvg(fontname, "0x233B", "APL FUNCTIONAL SYMBOL QUAD JOT"); \
	genSvg(fontname, "0x233C", "APL FUNCTIONAL SYMBOL QUAD CIRCLE"); \
	genSvg(fontname, "0x233D", "APL FUNCTIONAL SYMBOL CIRCLE STILE"); \
	genSvg(fontname, "0x233E", "APL FUNCTIONAL SYMBOL CIRCLE JOT"); \
	genSvg(fontname, "0x233F", "APL FUNCTIONAL SYMBOL SLASH BAR"); \
	genSvg(fontname, "0x2340", "APL FUNCTIONAL SYMBOL BACKSLASH BAR"); \
	genSvg(fontname, "0x2341", "APL FUNCTIONAL SYMBOL QUAD SLASH"); \
	genSvg(fontname, "0x2342", "APL FUNCTIONAL SYMBOL QUAD BACKSLASH"); \
	genSvg(fontname, "0x2343", "APL FUNCTIONAL SYMBOL QUAD LESS-THAN"); \
	genSvg(fontname, "0x2344", "APL FUNCTIONAL SYMBOL QUAD GREATER-THAN"); \
	genSvg(fontname, "0x2345", "APL FUNCTIONAL SYMBOL LEFTWARDS VANE"); \
	genSvg(fontname, "0x2346", "APL FUNCTIONAL SYMBOL RIGHTWARDS VANE"); \
	genSvg(fontname, "0x2347", "APL FUNCTIONAL SYMBOL QUAD LEFTWARDS ARROW"); \
	genSvg(fontname, "0x2348", "APL FUNCTIONAL SYMBOL QUAD RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2349", "APL FUNCTIONAL SYMBOL CIRCLE BACKSLASH"); \
	genSvg(fontname, "0x234A", "APL FUNCTIONAL SYMBOL DOWN TACK UNDERBAR"); \
	genSvg(fontname, "0x234B", "APL FUNCTIONAL SYMBOL DELTA STILE"); \
	genSvg(fontname, "0x234C", "APL FUNCTIONAL SYMBOL QUAD DOWN CARET"); \
	genSvg(fontname, "0x234D", "APL FUNCTIONAL SYMBOL QUAD DELTA"); \
	genSvg(fontname, "0x234E", "APL FUNCTIONAL SYMBOL DOWN TACK JOT"); \
	genSvg(fontname, "0x234F", "APL FUNCTIONAL SYMBOL UPWARDS VANE"); \
	genSvg(fontname, "0x2350", "APL FUNCTIONAL SYMBOL QUAD UPWARDS ARROW"); \
	genSvg(fontname, "0x2351", "APL FUNCTIONAL SYMBOL UP TACK OVERBAR"); \
	genSvg(fontname, "0x2352", "APL FUNCTIONAL SYMBOL DEL STILE"); \
	genSvg(fontname, "0x2353", "APL FUNCTIONAL SYMBOL QUAD UP CARET"); \
	genSvg(fontname, "0x2354", "APL FUNCTIONAL SYMBOL QUAD DEL"); \
	genSvg(fontname, "0x2355", "APL FUNCTIONAL SYMBOL UP TACK JOT"); \
	genSvg(fontname, "0x2356", "APL FUNCTIONAL SYMBOL DOWNWARDS VANE"); \
	genSvg(fontname, "0x2357", "APL FUNCTIONAL SYMBOL QUAD DOWNWARDS ARROW"); \
	genSvg(fontname, "0x2358", "APL FUNCTIONAL SYMBOL QUOTE UNDERBAR"); \
	genSvg(fontname, "0x2359", "APL FUNCTIONAL SYMBOL DELTA UNDERBAR"); \
	genSvg(fontname, "0x235A", "APL FUNCTIONAL SYMBOL DIAMOND UNDERBAR"); \
	genSvg(fontname, "0x235B", "APL FUNCTIONAL SYMBOL JOT UNDERBAR"); \
	genSvg(fontname, "0x235C", "APL FUNCTIONAL SYMBOL CIRCLE UNDERBAR"); \
	genSvg(fontname, "0x235D", "APL FUNCTIONAL SYMBOL UP SHOE JOT"); \
	genSvg(fontname, "0x235E", "APL FUNCTIONAL SYMBOL QUOTE QUAD"); \
	genSvg(fontname, "0x235F", "APL FUNCTIONAL SYMBOL CIRCLE STAR"); \
	genSvg(fontname, "0x2360", "APL FUNCTIONAL SYMBOL QUAD COLON"); \
	genSvg(fontname, "0x2361", "APL FUNCTIONAL SYMBOL UP TACK DIAERESIS"); \
	genSvg(fontname, "0x2362", "APL FUNCTIONAL SYMBOL DEL DIAERESIS"); \
	genSvg(fontname, "0x2363", "APL FUNCTIONAL SYMBOL STAR DIAERESIS"); \
	genSvg(fontname, "0x2364", "APL FUNCTIONAL SYMBOL JOT DIAERESIS"); \
	genSvg(fontname, "0x2365", "APL FUNCTIONAL SYMBOL CIRCLE DIAERESIS"); \
	genSvg(fontname, "0x2366", "APL FUNCTIONAL SYMBOL DOWN SHOE STILE"); \
	genSvg(fontname, "0x2367", "APL FUNCTIONAL SYMBOL LEFT SHOE STILE"); \
	genSvg(fontname, "0x2368", "APL FUNCTIONAL SYMBOL TILDE DIAERESIS"); \
	genSvg(fontname, "0x2369", "APL FUNCTIONAL SYMBOL GREATER-THAN DIAERESIS"); \
	genSvg(fontname, "0x236A", "APL FUNCTIONAL SYMBOL COMMA BAR"); \
	genSvg(fontname, "0x236B", "APL FUNCTIONAL SYMBOL DEL TILDE"); \
	genSvg(fontname, "0x236C", "APL FUNCTIONAL SYMBOL ZILDE"); \
	genSvg(fontname, "0x236D", "APL FUNCTIONAL SYMBOL STILE TILDE"); \
	genSvg(fontname, "0x236E", "APL FUNCTIONAL SYMBOL SEMICOLON UNDERBAR"); \
	genSvg(fontname, "0x236F", "APL FUNCTIONAL SYMBOL QUAD NOT EQUAL"); \
	genSvg(fontname, "0x2370", "APL FUNCTIONAL SYMBOL QUAD QUESTION"); \
	genSvg(fontname, "0x2371", "APL FUNCTIONAL SYMBOL DOWN CARET TILDE"); \
	genSvg(fontname, "0x2372", "APL FUNCTIONAL SYMBOL UP CARET TILDE"); \
	genSvg(fontname, "0x2373", "APL FUNCTIONAL SYMBOL IOTA"); \
	genSvg(fontname, "0x2374", "APL FUNCTIONAL SYMBOL RHO"); \
	genSvg(fontname, "0x2375", "APL FUNCTIONAL SYMBOL OMEGA"); \
	genSvg(fontname, "0x2376", "APL FUNCTIONAL SYMBOL ALPHA UNDERBAR"); \
	genSvg(fontname, "0x2377", "APL FUNCTIONAL SYMBOL EPSILON UNDERBAR"); \
	genSvg(fontname, "0x2378", "APL FUNCTIONAL SYMBOL IOTA UNDERBAR"); \
	genSvg(fontname, "0x2379", "APL FUNCTIONAL SYMBOL OMEGA UNDERBAR"); \
	genSvg(fontname, "0x237A", "APL FUNCTIONAL SYMBOL ALPHA"); \
	genSvg(fontname, "0x237B", "NOT CHECK MARK"); \
	genSvg(fontname, "0x237C", "RIGHT ANGLE WITH DOWNWARDS ZIGZAG ARROW"); \
	genSvg(fontname, "0x237D", "SHOULDERED OPEN BOX"); \
	genSvg(fontname, "0x237E", "BELL SYMBOL"); \
	genSvg(fontname, "0x237F", "VERTICAL LINE WITH MIDDLE DOT"); \
	genSvg(fontname, "0x2380", "INSERTION SYMBOL"); \
	genSvg(fontname, "0x2381", "CONTINUOUS UNDERLINE SYMBOL"); \
	genSvg(fontname, "0x2382", "DISCONTINUOUS UNDERLINE SYMBOL"); \
	genSvg(fontname, "0x2383", "EMPHASIS SYMBOL"); \
	genSvg(fontname, "0x2384", "COMPOSITION SYMBOL"); \
	genSvg(fontname, "0x2385", "WHITE SQUARE WITH CENTRE VERTICAL LINE"); \
	genSvg(fontname, "0x2386", "ENTER SYMBOL"); \
	genSvg(fontname, "0x2387", "ALTERNATIVE KEY SYMBOL"); \
	genSvg(fontname, "0x2388", "HELM SYMBOL"); \
	genSvg(fontname, "0x2389", "CIRCLED HORIZONTAL BAR WITH NOTCH"); \
	genSvg(fontname, "0x238A", "CIRCLED TRIANGLE DOWN"); \
	genSvg(fontname, "0x238B", "BROKEN CIRCLE WITH NORTHWEST ARROW"); \
	genSvg(fontname, "0x238C", "UNDO SYMBOL"); \
	genSvg(fontname, "0x238D", "MONOSTABLE SYMBOL"); \
	genSvg(fontname, "0x238E", "HYSTERESIS SYMBOL"); \
	genSvg(fontname, "0x238F", "OPEN-CIRCUIT-OUTPUT H-TYPE SYMBOL"); \
	genSvg(fontname, "0x2390", "OPEN-CIRCUIT-OUTPUT L-TYPE SYMBOL"); \
	genSvg(fontname, "0x2391", "PASSIVE-PULL-DOWN-OUTPUT SYMBOL"); \
	genSvg(fontname, "0x2392", "PASSIVE-PULL-UP-OUTPUT SYMBOL"); \
	genSvg(fontname, "0x2393", "DIRECT CURRENT SYMBOL FORM TWO"); \
	genSvg(fontname, "0x2394", "SOFTWARE-FUNCTION SYMBOL"); \
	genSvg(fontname, "0x2395", "APL FUNCTIONAL SYMBOL QUAD"); \
	genSvg(fontname, "0x2396", "DECIMAL SEPARATOR KEY SYMBOL"); \
	genSvg(fontname, "0x2397", "PREVIOUS PAGE"); \
	genSvg(fontname, "0x2398", "NEXT PAGE"); \
	genSvg(fontname, "0x2399", "PRINT SCREEN SYMBOL"); \
	genSvg(fontname, "0x239A", "CLEAR SCREEN SYMBOL"); \
	genSvg(fontname, "0x239B", "LEFT PARENTHESIS UPPER HOOK"); \
	genSvg(fontname, "0x239C", "LEFT PARENTHESIS EXTENSION"); \
	genSvg(fontname, "0x239D", "LEFT PARENTHESIS LOWER HOOK"); \
	genSvg(fontname, "0x239E", "RIGHT PARENTHESIS UPPER HOOK"); \
	genSvg(fontname, "0x239F", "RIGHT PARENTHESIS EXTENSION"); \
	genSvg(fontname, "0x23A0", "RIGHT PARENTHESIS LOWER HOOK"); \
	genSvg(fontname, "0x23A1", "LEFT SQUARE BRACKET UPPER CORNER"); \
	genSvg(fontname, "0x23A2", "LEFT SQUARE BRACKET EXTENSION"); \
	genSvg(fontname, "0x23A3", "LEFT SQUARE BRACKET LOWER CORNER"); \
	genSvg(fontname, "0x23A4", "RIGHT SQUARE BRACKET UPPER CORNER"); \
	genSvg(fontname, "0x23A5", "RIGHT SQUARE BRACKET EXTENSION"); \
	genSvg(fontname, "0x23A6", "RIGHT SQUARE BRACKET LOWER CORNER"); \
	genSvg(fontname, "0x23A7", "LEFT CURLY BRACKET UPPER HOOK"); \
	genSvg(fontname, "0x23A8", "LEFT CURLY BRACKET MIDDLE PIECE"); \
	genSvg(fontname, "0x23A9", "LEFT CURLY BRACKET LOWER HOOK"); \
	genSvg(fontname, "0x23AA", "CURLY BRACKET EXTENSION"); \
	genSvg(fontname, "0x23AB", "RIGHT CURLY BRACKET UPPER HOOK"); \
	genSvg(fontname, "0x23AC", "RIGHT CURLY BRACKET MIDDLE PIECE"); \
	genSvg(fontname, "0x23AD", "RIGHT CURLY BRACKET LOWER HOOK"); \
	genSvg(fontname, "0x23AE", "INTEGRAL EXTENSION"); \
	genSvg(fontname, "0x23AF", "HORIZONTAL LINE EXTENSION"); \
	genSvg(fontname, "0x23B0", "UPPER LEFT OR LOWER RIGHT CURLY BRACKET SECTION"); \
	genSvg(fontname, "0x23B1", "UPPER RIGHT OR LOWER LEFT CURLY BRACKET SECTION"); \
	genSvg(fontname, "0x23B2", "SUMMATION TOP"); \
	genSvg(fontname, "0x23B3", "SUMMATION BOTTOM"); \
	genSvg(fontname, "0x23B4", "TOP SQUARE BRACKET"); \
	genSvg(fontname, "0x23B5", "BOTTOM SQUARE BRACKET"); \
	genSvg(fontname, "0x23B6", "BOTTOM SQUARE BRACKET OVER TOP SQUARE BRACKET"); \
	genSvg(fontname, "0x23B7", "RADICAL SYMBOL BOTTOM"); \
	genSvg(fontname, "0x23B8", "LEFT VERTICAL BOX LINE"); \
	genSvg(fontname, "0x23B9", "RIGHT VERTICAL BOX LINE"); \
	genSvg(fontname, "0x23BA", "HORIZONTAL SCAN LINE-1"); \
	genSvg(fontname, "0x23BB", "HORIZONTAL SCAN LINE-3"); \
	genSvg(fontname, "0x23BC", "HORIZONTAL SCAN LINE-7"); \
	genSvg(fontname, "0x23BD", "HORIZONTAL SCAN LINE-9"); \
	genSvg(fontname, "0x23BE", "DENTISTRY SYMBOL LIGHT VERTICAL AND TOP RIGHT"); \
	genSvg(fontname, "0x23BF", "DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM RIGHT"); \
	genSvg(fontname, "0x23C0", "DENTISTRY SYMBOL LIGHT VERTICAL WITH CIRCLE"); \
	genSvg(fontname, "0x23C1", "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH CIRCLE"); \
	genSvg(fontname, "0x23C2", "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH CIRCLE"); \
	genSvg(fontname, "0x23C3", "DENTISTRY SYMBOL LIGHT VERTICAL WITH TRIANGLE"); \
	genSvg(fontname, "0x23C4", "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH TRIANGLE"); \
	genSvg(fontname, "0x23C5", "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH TRIANGLE"); \
	genSvg(fontname, "0x23C6", "DENTISTRY SYMBOL LIGHT VERTICAL AND WAVE"); \
	genSvg(fontname, "0x23C7", "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL WITH WAVE"); \
	genSvg(fontname, "0x23C8", "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL WITH WAVE"); \
	genSvg(fontname, "0x23C9", "DENTISTRY SYMBOL LIGHT DOWN AND HORIZONTAL"); \
	genSvg(fontname, "0x23CA", "DENTISTRY SYMBOL LIGHT UP AND HORIZONTAL"); \
	genSvg(fontname, "0x23CB", "DENTISTRY SYMBOL LIGHT VERTICAL AND TOP LEFT"); \
	genSvg(fontname, "0x23CC", "DENTISTRY SYMBOL LIGHT VERTICAL AND BOTTOM LEFT"); \
	genSvg(fontname, "0x23CD", "SQUARE FOOT"); \
	genSvg(fontname, "0x23CE", "RETURN SYMBOL"); \
	genSvg(fontname, "0x23CF", "EJECT SYMBOL"); \
	genSvg(fontname, "0x23D0", "VERTICAL LINE EXTENSION"); \
	genSvg(fontname, "0x23D1", "METRICAL BREVE"); \
	genSvg(fontname, "0x23D2", "METRICAL LONG OVER SHORT"); \
	genSvg(fontname, "0x23D3", "METRICAL SHORT OVER LONG"); \
	genSvg(fontname, "0x23D4", "METRICAL LONG OVER TWO SHORTS"); \
	genSvg(fontname, "0x23D5", "METRICAL TWO SHORTS OVER LONG"); \
	genSvg(fontname, "0x23D6", "METRICAL TWO SHORTS JOINED"); \
	genSvg(fontname, "0x23D7", "METRICAL TRISEME"); \
	genSvg(fontname, "0x23D8", "METRICAL TETRASEME"); \
	genSvg(fontname, "0x23D9", "METRICAL PENTASEME"); \
	genSvg(fontname, "0x23DA", "EARTH GROUND"); \
	genSvg(fontname, "0x23DB", "FUSE"); \
	genSvg(fontname, "0x23DC", "TOP PARENTHESIS"); \
	genSvg(fontname, "0x23DD", "BOTTOM PARENTHESIS"); \
	genSvg(fontname, "0x23DE", "TOP CURLY BRACKET"); \
	genSvg(fontname, "0x23DF", "BOTTOM CURLY BRACKET"); \
	genSvg(fontname, "0x23E0", "TOP TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x23E1", "BOTTOM TORTOISE SHELL BRACKET"); \
	genSvg(fontname, "0x23E2", "WHITE TRAPEZIUM"); \
	genSvg(fontname, "0x23E3", "BENZENE RING WITH CIRCLE"); \
	genSvg(fontname, "0x23E4", "STRAIGHTNESS"); \
	genSvg(fontname, "0x23E5", "FLATNESS"); \
	genSvg(fontname, "0x23E6", "AC CURRENT"); \
	genSvg(fontname, "0x23E7", "ELECTRICAL INTERSECTION"); \
	genSvg(fontname, "0x23E8", "DECIMAL EXPONENT SYMBOL"); \
	genSvg(fontname, "0x23E9", "BLACK RIGHT-POINTING DOUBLE TRIANGLE"); \
	genSvg(fontname, "0x23EA", "BLACK LEFT-POINTING DOUBLE TRIANGLE"); \
	genSvg(fontname, "0x23EB", "BLACK UP-POINTING DOUBLE TRIANGLE"); \
	genSvg(fontname, "0x23EC", "BLACK DOWN-POINTING DOUBLE TRIANGLE"); \
	genSvg(fontname, "0x23ED", "BLACK RIGHT-POINTING DOUBLE TRIANGLE WITH VERTICAL BAR"); \
	genSvg(fontname, "0x23EE", "BLACK LEFT-POINTING DOUBLE TRIANGLE WITH VERTICAL BAR"); \
	genSvg(fontname, "0x23EF", "BLACK RIGHT-POINTING TRIANGLE WITH DOUBLE VERTICAL BAR"); \
	genSvg(fontname, "0x23F0", "ALARM CLOCK"); \
	genSvg(fontname, "0x23F1", "STOPWATCH"); \
	genSvg(fontname, "0x23F2", "TIMER CLOCK"); \
	genSvg(fontname, "0x23F3", "HOURGLASS WITH FLOWING SAND"); \
	genSvg(fontname, "0x23F4", "BLACK MEDIUM LEFT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x23F5", "BLACK MEDIUM RIGHT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x23F6", "BLACK MEDIUM UP-POINTING TRIANGLE"); \
	genSvg(fontname, "0x23F7", "BLACK MEDIUM DOWN-POINTING TRIANGLE"); \
	genSvg(fontname, "0x23F8", "DOUBLE VERTICAL BAR"); \
	genSvg(fontname, "0x23F9", "BLACK SQUARE FOR STOP"); \
	genSvg(fontname, "0x23FA", "BLACK CIRCLE FOR RECORD"); \
	genSvg(fontname, "0x23FB", "POWER SYMBOL"); \
	genSvg(fontname, "0x23FC", "POWER ON-OFF SYMBOL"); \
	genSvg(fontname, "0x23FD", "POWER ON SYMBOL"); \
	genSvg(fontname, "0x23FE", "POWER SLEEP SYMBOL"); \
	genSvg(fontname, "0x23FF", "OBSERVER EYE SYMBOL");

#define OPTICAL_CHARACTER_RECOGNITION \
	genSvg(fontname, "0x2440", "OCR HOOK"); \
	genSvg(fontname, "0x2441", "OCR CHAIR"); \
	genSvg(fontname, "0x2442", "OCR FORK"); \
	genSvg(fontname, "0x2443", "OCR INVERTED FORK"); \
	genSvg(fontname, "0x2444", "OCR BELT BUCKLE"); \
	genSvg(fontname, "0x2445", "OCR BOW TIE"); \
	genSvg(fontname, "0x2446", "OCR BRANCH BANK IDENTIFICATION"); \
	genSvg(fontname, "0x2447", "OCR AMOUNT OF CHECK"); \
	genSvg(fontname, "0x2448", "OCR DASH"); \
	genSvg(fontname, "0x2449", "OCR CUSTOMER ACCOUNT NUMBER"); \
	genSvg(fontname, "0x244A", "OCR DOUBLE BACKSLASH");

#define ENCLOSED_ALPHANUMERICS \
	genSvg(fontname, "0x2460", "CIRCLED DIGIT ONE"); \
	genSvg(fontname, "0x2461", "CIRCLED DIGIT TWO"); \
	genSvg(fontname, "0x2462", "CIRCLED DIGIT THREE"); \
	genSvg(fontname, "0x2463", "CIRCLED DIGIT FOUR"); \
	genSvg(fontname, "0x2464", "CIRCLED DIGIT FIVE"); \
	genSvg(fontname, "0x2465", "CIRCLED DIGIT SIX"); \
	genSvg(fontname, "0x2466", "CIRCLED DIGIT SEVEN"); \
	genSvg(fontname, "0x2467", "CIRCLED DIGIT EIGHT"); \
	genSvg(fontname, "0x2468", "CIRCLED DIGIT NINE"); \
	genSvg(fontname, "0x2469", "CIRCLED NUMBER TEN"); \
	genSvg(fontname, "0x246A", "CIRCLED NUMBER ELEVEN"); \
	genSvg(fontname, "0x246B", "CIRCLED NUMBER TWELVE"); \
	genSvg(fontname, "0x246C", "CIRCLED NUMBER THIRTEEN"); \
	genSvg(fontname, "0x246D", "CIRCLED NUMBER FOURTEEN"); \
	genSvg(fontname, "0x246E", "CIRCLED NUMBER FIFTEEN"); \
	genSvg(fontname, "0x246F", "CIRCLED NUMBER SIXTEEN"); \
	genSvg(fontname, "0x2470", "CIRCLED NUMBER SEVENTEEN"); \
	genSvg(fontname, "0x2471", "CIRCLED NUMBER EIGHTEEN"); \
	genSvg(fontname, "0x2472", "CIRCLED NUMBER NINETEEN"); \
	genSvg(fontname, "0x2473", "CIRCLED NUMBER TWENTY"); \
	genSvg(fontname, "0x2474", "PARENTHESIZED DIGIT ONE"); \
	genSvg(fontname, "0x2475", "PARENTHESIZED DIGIT TWO"); \
	genSvg(fontname, "0x2476", "PARENTHESIZED DIGIT THREE"); \
	genSvg(fontname, "0x2477", "PARENTHESIZED DIGIT FOUR"); \
	genSvg(fontname, "0x2478", "PARENTHESIZED DIGIT FIVE"); \
	genSvg(fontname, "0x2479", "PARENTHESIZED DIGIT SIX"); \
	genSvg(fontname, "0x247A", "PARENTHESIZED DIGIT SEVEN"); \
	genSvg(fontname, "0x247B", "PARENTHESIZED DIGIT EIGHT"); \
	genSvg(fontname, "0x247C", "PARENTHESIZED DIGIT NINE"); \
	genSvg(fontname, "0x247D", "PARENTHESIZED NUMBER TEN"); \
	genSvg(fontname, "0x247E", "PARENTHESIZED NUMBER ELEVEN"); \
	genSvg(fontname, "0x247F", "PARENTHESIZED NUMBER TWELVE"); \
	genSvg(fontname, "0x2480", "PARENTHESIZED NUMBER THIRTEEN"); \
	genSvg(fontname, "0x2481", "PARENTHESIZED NUMBER FOURTEEN"); \
	genSvg(fontname, "0x2482", "PARENTHESIZED NUMBER FIFTEEN"); \
	genSvg(fontname, "0x2483", "PARENTHESIZED NUMBER SIXTEEN"); \
	genSvg(fontname, "0x2484", "PARENTHESIZED NUMBER SEVENTEEN"); \
	genSvg(fontname, "0x2485", "PARENTHESIZED NUMBER EIGHTEEN"); \
	genSvg(fontname, "0x2486", "PARENTHESIZED NUMBER NINETEEN"); \
	genSvg(fontname, "0x2487", "PARENTHESIZED NUMBER TWENTY"); \
	genSvg(fontname, "0x2488", "DIGIT ONE FULL STOP"); \
	genSvg(fontname, "0x2489", "DIGIT TWO FULL STOP"); \
	genSvg(fontname, "0x248A", "DIGIT THREE FULL STOP"); \
	genSvg(fontname, "0x248B", "DIGIT FOUR FULL STOP"); \
	genSvg(fontname, "0x248C", "DIGIT FIVE FULL STOP"); \
	genSvg(fontname, "0x248D", "DIGIT SIX FULL STOP"); \
	genSvg(fontname, "0x248E", "DIGIT SEVEN FULL STOP"); \
	genSvg(fontname, "0x248F", "DIGIT EIGHT FULL STOP"); \
	genSvg(fontname, "0x2490", "DIGIT NINE FULL STOP"); \
	genSvg(fontname, "0x2491", "NUMBER TEN FULL STOP"); \
	genSvg(fontname, "0x2492", "NUMBER ELEVEN FULL STOP"); \
	genSvg(fontname, "0x2493", "NUMBER TWELVE FULL STOP"); \
	genSvg(fontname, "0x2494", "NUMBER THIRTEEN FULL STOP"); \
	genSvg(fontname, "0x2495", "NUMBER FOURTEEN FULL STOP"); \
	genSvg(fontname, "0x2496", "NUMBER FIFTEEN FULL STOP"); \
	genSvg(fontname, "0x2497", "NUMBER SIXTEEN FULL STOP"); \
	genSvg(fontname, "0x2498", "NUMBER SEVENTEEN FULL STOP"); \
	genSvg(fontname, "0x2499", "NUMBER EIGHTEEN FULL STOP"); \
	genSvg(fontname, "0x249A", "NUMBER NINETEEN FULL STOP"); \
	genSvg(fontname, "0x249B", "NUMBER TWENTY FULL STOP"); \
	genSvg(fontname, "0x249C", "PARENTHESIZED LATIN SMALL LETTER A"); \
	genSvg(fontname, "0x249D", "PARENTHESIZED LATIN SMALL LETTER B"); \
	genSvg(fontname, "0x249E", "PARENTHESIZED LATIN SMALL LETTER C"); \
	genSvg(fontname, "0x249F", "PARENTHESIZED LATIN SMALL LETTER D"); \
	genSvg(fontname, "0x24A0", "PARENTHESIZED LATIN SMALL LETTER E"); \
	genSvg(fontname, "0x24A1", "PARENTHESIZED LATIN SMALL LETTER F"); \
	genSvg(fontname, "0x24A2", "PARENTHESIZED LATIN SMALL LETTER G"); \
	genSvg(fontname, "0x24A3", "PARENTHESIZED LATIN SMALL LETTER H"); \
	genSvg(fontname, "0x24A4", "PARENTHESIZED LATIN SMALL LETTER I"); \
	genSvg(fontname, "0x24A5", "PARENTHESIZED LATIN SMALL LETTER J"); \
	genSvg(fontname, "0x24A6", "PARENTHESIZED LATIN SMALL LETTER K"); \
	genSvg(fontname, "0x24A7", "PARENTHESIZED LATIN SMALL LETTER L"); \
	genSvg(fontname, "0x24A8", "PARENTHESIZED LATIN SMALL LETTER M"); \
	genSvg(fontname, "0x24A9", "PARENTHESIZED LATIN SMALL LETTER N"); \
	genSvg(fontname, "0x24AA", "PARENTHESIZED LATIN SMALL LETTER O"); \
	genSvg(fontname, "0x24AB", "PARENTHESIZED LATIN SMALL LETTER P"); \
	genSvg(fontname, "0x24AC", "PARENTHESIZED LATIN SMALL LETTER Q"); \
	genSvg(fontname, "0x24AD", "PARENTHESIZED LATIN SMALL LETTER R"); \
	genSvg(fontname, "0x24AE", "PARENTHESIZED LATIN SMALL LETTER S"); \
	genSvg(fontname, "0x24AF", "PARENTHESIZED LATIN SMALL LETTER T"); \
	genSvg(fontname, "0x24B0", "PARENTHESIZED LATIN SMALL LETTER U"); \
	genSvg(fontname, "0x24B1", "PARENTHESIZED LATIN SMALL LETTER V"); \
	genSvg(fontname, "0x24B2", "PARENTHESIZED LATIN SMALL LETTER W"); \
	genSvg(fontname, "0x24B3", "PARENTHESIZED LATIN SMALL LETTER X"); \
	genSvg(fontname, "0x24B4", "PARENTHESIZED LATIN SMALL LETTER Y"); \
	genSvg(fontname, "0x24B5", "PARENTHESIZED LATIN SMALL LETTER Z"); \
	genSvg(fontname, "0x24B6", "CIRCLED LATIN CAPITAL LETTER A"); \
	genSvg(fontname, "0x24B7", "CIRCLED LATIN CAPITAL LETTER B"); \
	genSvg(fontname, "0x24B8", "CIRCLED LATIN CAPITAL LETTER C"); \
	genSvg(fontname, "0x24B9", "CIRCLED LATIN CAPITAL LETTER D"); \
	genSvg(fontname, "0x24BA", "CIRCLED LATIN CAPITAL LETTER E"); \
	genSvg(fontname, "0x24BB", "CIRCLED LATIN CAPITAL LETTER F"); \
	genSvg(fontname, "0x24BC", "CIRCLED LATIN CAPITAL LETTER G"); \
	genSvg(fontname, "0x24BD", "CIRCLED LATIN CAPITAL LETTER H"); \
	genSvg(fontname, "0x24BE", "CIRCLED LATIN CAPITAL LETTER I"); \
	genSvg(fontname, "0x24BF", "CIRCLED LATIN CAPITAL LETTER J"); \
	genSvg(fontname, "0x24C0", "CIRCLED LATIN CAPITAL LETTER K"); \
	genSvg(fontname, "0x24C1", "CIRCLED LATIN CAPITAL LETTER L"); \
	genSvg(fontname, "0x24C2", "CIRCLED LATIN CAPITAL LETTER M"); \
	genSvg(fontname, "0x24C3", "CIRCLED LATIN CAPITAL LETTER N"); \
	genSvg(fontname, "0x24C4", "CIRCLED LATIN CAPITAL LETTER O"); \
	genSvg(fontname, "0x24C5", "CIRCLED LATIN CAPITAL LETTER P"); \
	genSvg(fontname, "0x24C6", "CIRCLED LATIN CAPITAL LETTER Q"); \
	genSvg(fontname, "0x24C7", "CIRCLED LATIN CAPITAL LETTER R"); \
	genSvg(fontname, "0x24C8", "CIRCLED LATIN CAPITAL LETTER S"); \
	genSvg(fontname, "0x24C9", "CIRCLED LATIN CAPITAL LETTER T"); \
	genSvg(fontname, "0x24CA", "CIRCLED LATIN CAPITAL LETTER U"); \
	genSvg(fontname, "0x24CB", "CIRCLED LATIN CAPITAL LETTER V"); \
	genSvg(fontname, "0x24CC", "CIRCLED LATIN CAPITAL LETTER W"); \
	genSvg(fontname, "0x24CD", "CIRCLED LATIN CAPITAL LETTER X"); \
	genSvg(fontname, "0x24CE", "CIRCLED LATIN CAPITAL LETTER Y"); \
	genSvg(fontname, "0x24CF", "CIRCLED LATIN CAPITAL LETTER Z"); \
	genSvg(fontname, "0x24D0", "CIRCLED LATIN SMALL LETTER A"); \
	genSvg(fontname, "0x24D1", "CIRCLED LATIN SMALL LETTER B"); \
	genSvg(fontname, "0x24D2", "CIRCLED LATIN SMALL LETTER C"); \
	genSvg(fontname, "0x24D3", "CIRCLED LATIN SMALL LETTER D"); \
	genSvg(fontname, "0x24D4", "CIRCLED LATIN SMALL LETTER E"); \
	genSvg(fontname, "0x24D5", "CIRCLED LATIN SMALL LETTER F"); \
	genSvg(fontname, "0x24D6", "CIRCLED LATIN SMALL LETTER G"); \
	genSvg(fontname, "0x24D7", "CIRCLED LATIN SMALL LETTER H"); \
	genSvg(fontname, "0x24D8", "CIRCLED LATIN SMALL LETTER I"); \
	genSvg(fontname, "0x24D9", "CIRCLED LATIN SMALL LETTER J"); \
	genSvg(fontname, "0x24DA", "CIRCLED LATIN SMALL LETTER K"); \
	genSvg(fontname, "0x24DB", "CIRCLED LATIN SMALL LETTER L"); \
	genSvg(fontname, "0x24DC", "CIRCLED LATIN SMALL LETTER M"); \
	genSvg(fontname, "0x24DD", "CIRCLED LATIN SMALL LETTER N"); \
	genSvg(fontname, "0x24DE", "CIRCLED LATIN SMALL LETTER O"); \
	genSvg(fontname, "0x24DF", "CIRCLED LATIN SMALL LETTER P"); \
	genSvg(fontname, "0x24E0", "CIRCLED LATIN SMALL LETTER Q"); \
	genSvg(fontname, "0x24E1", "CIRCLED LATIN SMALL LETTER R"); \
	genSvg(fontname, "0x24E2", "CIRCLED LATIN SMALL LETTER S"); \
	genSvg(fontname, "0x24E3", "CIRCLED LATIN SMALL LETTER T"); \
	genSvg(fontname, "0x24E4", "CIRCLED LATIN SMALL LETTER U"); \
	genSvg(fontname, "0x24E5", "CIRCLED LATIN SMALL LETTER V"); \
	genSvg(fontname, "0x24E6", "CIRCLED LATIN SMALL LETTER W"); \
	genSvg(fontname, "0x24E7", "CIRCLED LATIN SMALL LETTER X"); \
	genSvg(fontname, "0x24E8", "CIRCLED LATIN SMALL LETTER Y"); \
	genSvg(fontname, "0x24E9", "CIRCLED LATIN SMALL LETTER Z"); \
	genSvg(fontname, "0x24EA", "CIRCLED DIGIT ZERO"); \
	genSvg(fontname, "0x24EB", "NEGATIVE CIRCLED NUMBER ELEVEN"); \
	genSvg(fontname, "0x24EC", "NEGATIVE CIRCLED NUMBER TWELVE"); \
	genSvg(fontname, "0x24ED", "NEGATIVE CIRCLED NUMBER THIRTEEN"); \
	genSvg(fontname, "0x24EE", "NEGATIVE CIRCLED NUMBER FOURTEEN"); \
	genSvg(fontname, "0x24EF", "NEGATIVE CIRCLED NUMBER FIFTEEN"); \
	genSvg(fontname, "0x24F0", "NEGATIVE CIRCLED NUMBER SIXTEEN"); \
	genSvg(fontname, "0x24F1", "NEGATIVE CIRCLED NUMBER SEVENTEEN"); \
	genSvg(fontname, "0x24F2", "NEGATIVE CIRCLED NUMBER EIGHTEEN"); \
	genSvg(fontname, "0x24F3", "NEGATIVE CIRCLED NUMBER NINETEEN"); \
	genSvg(fontname, "0x24F4", "NEGATIVE CIRCLED NUMBER TWENTY"); \
	genSvg(fontname, "0x24F5", "DOUBLE CIRCLED DIGIT ONE"); \
	genSvg(fontname, "0x24F6", "DOUBLE CIRCLED DIGIT TWO"); \
	genSvg(fontname, "0x24F7", "DOUBLE CIRCLED DIGIT THREE"); \
	genSvg(fontname, "0x24F8", "DOUBLE CIRCLED DIGIT FOUR"); \
	genSvg(fontname, "0x24F9", "DOUBLE CIRCLED DIGIT FIVE"); \
	genSvg(fontname, "0x24FA", "DOUBLE CIRCLED DIGIT SIX"); \
	genSvg(fontname, "0x24FB", "DOUBLE CIRCLED DIGIT SEVEN"); \
	genSvg(fontname, "0x24FC", "DOUBLE CIRCLED DIGIT EIGHT"); \
	genSvg(fontname, "0x24FD", "DOUBLE CIRCLED DIGIT NINE"); \
	genSvg(fontname, "0x24FE", "DOUBLE CIRCLED NUMBER TEN"); \
	genSvg(fontname, "0x24FF", "NEGATIVE CIRCLED DIGIT ZERO");

#define BOX_DRAWING \
	genSvg(fontname, "0x2500", "BOX DRAWINGS LIGHT HORIZONTAL"); \
	genSvg(fontname, "0x2501", "BOX DRAWINGS HEAVY HORIZONTAL"); \
	genSvg(fontname, "0x2502", "BOX DRAWINGS LIGHT VERTICAL"); \
	genSvg(fontname, "0x2503", "BOX DRAWINGS HEAVY VERTICAL"); \
	genSvg(fontname, "0x2504", "BOX DRAWINGS LIGHT TRIPLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x2505", "BOX DRAWINGS HEAVY TRIPLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x2506", "BOX DRAWINGS LIGHT TRIPLE DASH VERTICAL"); \
	genSvg(fontname, "0x2507", "BOX DRAWINGS HEAVY TRIPLE DASH VERTICAL"); \
	genSvg(fontname, "0x2508", "BOX DRAWINGS LIGHT QUADRUPLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x2509", "BOX DRAWINGS HEAVY QUADRUPLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x250A", "BOX DRAWINGS LIGHT QUADRUPLE DASH VERTICAL"); \
	genSvg(fontname, "0x250B", "BOX DRAWINGS HEAVY QUADRUPLE DASH VERTICAL"); \
	genSvg(fontname, "0x250C", "BOX DRAWINGS LIGHT DOWN AND RIGHT"); \
	genSvg(fontname, "0x250D", "BOX DRAWINGS DOWN LIGHT AND RIGHT HEAVY"); \
	genSvg(fontname, "0x250E", "BOX DRAWINGS DOWN HEAVY AND RIGHT LIGHT"); \
	genSvg(fontname, "0x250F", "BOX DRAWINGS HEAVY DOWN AND RIGHT"); \
	genSvg(fontname, "0x2510", "BOX DRAWINGS LIGHT DOWN AND LEFT"); \
	genSvg(fontname, "0x2511", "BOX DRAWINGS DOWN LIGHT AND LEFT HEAVY"); \
	genSvg(fontname, "0x2512", "BOX DRAWINGS DOWN HEAVY AND LEFT LIGHT"); \
	genSvg(fontname, "0x2513", "BOX DRAWINGS HEAVY DOWN AND LEFT"); \
	genSvg(fontname, "0x2514", "BOX DRAWINGS LIGHT UP AND RIGHT"); \
	genSvg(fontname, "0x2515", "BOX DRAWINGS UP LIGHT AND RIGHT HEAVY"); \
	genSvg(fontname, "0x2516", "BOX DRAWINGS UP HEAVY AND RIGHT LIGHT"); \
	genSvg(fontname, "0x2517", "BOX DRAWINGS HEAVY UP AND RIGHT"); \
	genSvg(fontname, "0x2518", "BOX DRAWINGS LIGHT UP AND LEFT"); \
	genSvg(fontname, "0x2519", "BOX DRAWINGS UP LIGHT AND LEFT HEAVY"); \
	genSvg(fontname, "0x251A", "BOX DRAWINGS UP HEAVY AND LEFT LIGHT"); \
	genSvg(fontname, "0x251B", "BOX DRAWINGS HEAVY UP AND LEFT"); \
	genSvg(fontname, "0x251C", "BOX DRAWINGS LIGHT VERTICAL AND RIGHT"); \
	genSvg(fontname, "0x251D", "BOX DRAWINGS VERTICAL LIGHT AND RIGHT HEAVY"); \
	genSvg(fontname, "0x251E", "BOX DRAWINGS UP HEAVY AND RIGHT DOWN LIGHT"); \
	genSvg(fontname, "0x251F", "BOX DRAWINGS DOWN HEAVY AND RIGHT UP LIGHT"); \
	genSvg(fontname, "0x2520", "BOX DRAWINGS VERTICAL HEAVY AND RIGHT LIGHT"); \
	genSvg(fontname, "0x2521", "BOX DRAWINGS DOWN LIGHT AND RIGHT UP HEAVY"); \
	genSvg(fontname, "0x2522", "BOX DRAWINGS UP LIGHT AND RIGHT DOWN HEAVY"); \
	genSvg(fontname, "0x2523", "BOX DRAWINGS HEAVY VERTICAL AND RIGHT"); \
	genSvg(fontname, "0x2524", "BOX DRAWINGS LIGHT VERTICAL AND LEFT"); \
	genSvg(fontname, "0x2525", "BOX DRAWINGS VERTICAL LIGHT AND LEFT HEAVY"); \
	genSvg(fontname, "0x2526", "BOX DRAWINGS UP HEAVY AND LEFT DOWN LIGHT"); \
	genSvg(fontname, "0x2527", "BOX DRAWINGS DOWN HEAVY AND LEFT UP LIGHT"); \
	genSvg(fontname, "0x2528", "BOX DRAWINGS VERTICAL HEAVY AND LEFT LIGHT"); \
	genSvg(fontname, "0x2529", "BOX DRAWINGS DOWN LIGHT AND LEFT UP HEAVY"); \
	genSvg(fontname, "0x252A", "BOX DRAWINGS UP LIGHT AND LEFT DOWN HEAVY"); \
	genSvg(fontname, "0x252B", "BOX DRAWINGS HEAVY VERTICAL AND LEFT"); \
	genSvg(fontname, "0x252C", "BOX DRAWINGS LIGHT DOWN AND HORIZONTAL"); \
	genSvg(fontname, "0x252D", "BOX DRAWINGS LEFT HEAVY AND RIGHT DOWN LIGHT"); \
	genSvg(fontname, "0x252E", "BOX DRAWINGS RIGHT HEAVY AND LEFT DOWN LIGHT"); \
	genSvg(fontname, "0x252F", "BOX DRAWINGS DOWN LIGHT AND HORIZONTAL HEAVY"); \
	genSvg(fontname, "0x2530", "BOX DRAWINGS DOWN HEAVY AND HORIZONTAL LIGHT"); \
	genSvg(fontname, "0x2531", "BOX DRAWINGS RIGHT LIGHT AND LEFT DOWN HEAVY"); \
	genSvg(fontname, "0x2532", "BOX DRAWINGS LEFT LIGHT AND RIGHT DOWN HEAVY"); \
	genSvg(fontname, "0x2533", "BOX DRAWINGS HEAVY DOWN AND HORIZONTAL"); \
	genSvg(fontname, "0x2534", "BOX DRAWINGS LIGHT UP AND HORIZONTAL"); \
	genSvg(fontname, "0x2535", "BOX DRAWINGS LEFT HEAVY AND RIGHT UP LIGHT"); \
	genSvg(fontname, "0x2536", "BOX DRAWINGS RIGHT HEAVY AND LEFT UP LIGHT"); \
	genSvg(fontname, "0x2537", "BOX DRAWINGS UP LIGHT AND HORIZONTAL HEAVY"); \
	genSvg(fontname, "0x2538", "BOX DRAWINGS UP HEAVY AND HORIZONTAL LIGHT"); \
	genSvg(fontname, "0x2539", "BOX DRAWINGS RIGHT LIGHT AND LEFT UP HEAVY"); \
	genSvg(fontname, "0x253A", "BOX DRAWINGS LEFT LIGHT AND RIGHT UP HEAVY"); \
	genSvg(fontname, "0x253B", "BOX DRAWINGS HEAVY UP AND HORIZONTAL"); \
	genSvg(fontname, "0x253C", "BOX DRAWINGS LIGHT VERTICAL AND HORIZONTAL"); \
	genSvg(fontname, "0x253D", "BOX DRAWINGS LEFT HEAVY AND RIGHT VERTICAL LIGHT"); \
	genSvg(fontname, "0x253E", "BOX DRAWINGS RIGHT HEAVY AND LEFT VERTICAL LIGHT"); \
	genSvg(fontname, "0x253F", "BOX DRAWINGS VERTICAL LIGHT AND HORIZONTAL HEAVY"); \
	genSvg(fontname, "0x2540", "BOX DRAWINGS UP HEAVY AND DOWN HORIZONTAL LIGHT"); \
	genSvg(fontname, "0x2541", "BOX DRAWINGS DOWN HEAVY AND UP HORIZONTAL LIGHT"); \
	genSvg(fontname, "0x2542", "BOX DRAWINGS VERTICAL HEAVY AND HORIZONTAL LIGHT"); \
	genSvg(fontname, "0x2543", "BOX DRAWINGS LEFT UP HEAVY AND RIGHT DOWN LIGHT"); \
	genSvg(fontname, "0x2544", "BOX DRAWINGS RIGHT UP HEAVY AND LEFT DOWN LIGHT"); \
	genSvg(fontname, "0x2545", "BOX DRAWINGS LEFT DOWN HEAVY AND RIGHT UP LIGHT"); \
	genSvg(fontname, "0x2546", "BOX DRAWINGS RIGHT DOWN HEAVY AND LEFT UP LIGHT"); \
	genSvg(fontname, "0x2547", "BOX DRAWINGS DOWN LIGHT AND UP HORIZONTAL HEAVY"); \
	genSvg(fontname, "0x2548", "BOX DRAWINGS UP LIGHT AND DOWN HORIZONTAL HEAVY"); \
	genSvg(fontname, "0x2549", "BOX DRAWINGS RIGHT LIGHT AND LEFT VERTICAL HEAVY"); \
	genSvg(fontname, "0x254A", "BOX DRAWINGS LEFT LIGHT AND RIGHT VERTICAL HEAVY"); \
	genSvg(fontname, "0x254B", "BOX DRAWINGS HEAVY VERTICAL AND HORIZONTAL"); \
	genSvg(fontname, "0x254C", "BOX DRAWINGS LIGHT DOUBLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x254D", "BOX DRAWINGS HEAVY DOUBLE DASH HORIZONTAL"); \
	genSvg(fontname, "0x254E", "BOX DRAWINGS LIGHT DOUBLE DASH VERTICAL"); \
	genSvg(fontname, "0x254F", "BOX DRAWINGS HEAVY DOUBLE DASH VERTICAL"); \
	genSvg(fontname, "0x2550", "BOX DRAWINGS DOUBLE HORIZONTAL"); \
	genSvg(fontname, "0x2551", "BOX DRAWINGS DOUBLE VERTICAL"); \
	genSvg(fontname, "0x2552", "BOX DRAWINGS DOWN SINGLE AND RIGHT DOUBLE"); \
	genSvg(fontname, "0x2553", "BOX DRAWINGS DOWN DOUBLE AND RIGHT SINGLE"); \
	genSvg(fontname, "0x2554", "BOX DRAWINGS DOUBLE DOWN AND RIGHT"); \
	genSvg(fontname, "0x2555", "BOX DRAWINGS DOWN SINGLE AND LEFT DOUBLE"); \
	genSvg(fontname, "0x2556", "BOX DRAWINGS DOWN DOUBLE AND LEFT SINGLE"); \
	genSvg(fontname, "0x2557", "BOX DRAWINGS DOUBLE DOWN AND LEFT"); \
	genSvg(fontname, "0x2558", "BOX DRAWINGS UP SINGLE AND RIGHT DOUBLE"); \
	genSvg(fontname, "0x2559", "BOX DRAWINGS UP DOUBLE AND RIGHT SINGLE"); \
	genSvg(fontname, "0x255A", "BOX DRAWINGS DOUBLE UP AND RIGHT"); \
	genSvg(fontname, "0x255B", "BOX DRAWINGS UP SINGLE AND LEFT DOUBLE"); \
	genSvg(fontname, "0x255C", "BOX DRAWINGS UP DOUBLE AND LEFT SINGLE"); \
	genSvg(fontname, "0x255D", "BOX DRAWINGS DOUBLE UP AND LEFT"); \
	genSvg(fontname, "0x255E", "BOX DRAWINGS VERTICAL SINGLE AND RIGHT DOUBLE"); \
	genSvg(fontname, "0x255F", "BOX DRAWINGS VERTICAL DOUBLE AND RIGHT SINGLE"); \
	genSvg(fontname, "0x2560", "BOX DRAWINGS DOUBLE VERTICAL AND RIGHT"); \
	genSvg(fontname, "0x2561", "BOX DRAWINGS VERTICAL SINGLE AND LEFT DOUBLE"); \
	genSvg(fontname, "0x2562", "BOX DRAWINGS VERTICAL DOUBLE AND LEFT SINGLE"); \
	genSvg(fontname, "0x2563", "BOX DRAWINGS DOUBLE VERTICAL AND LEFT"); \
	genSvg(fontname, "0x2564", "BOX DRAWINGS DOWN SINGLE AND HORIZONTAL DOUBLE"); \
	genSvg(fontname, "0x2565", "BOX DRAWINGS DOWN DOUBLE AND HORIZONTAL SINGLE"); \
	genSvg(fontname, "0x2566", "BOX DRAWINGS DOUBLE DOWN AND HORIZONTAL"); \
	genSvg(fontname, "0x2567", "BOX DRAWINGS UP SINGLE AND HORIZONTAL DOUBLE"); \
	genSvg(fontname, "0x2568", "BOX DRAWINGS UP DOUBLE AND HORIZONTAL SINGLE"); \
	genSvg(fontname, "0x2569", "BOX DRAWINGS DOUBLE UP AND HORIZONTAL"); \
	genSvg(fontname, "0x256A", "BOX DRAWINGS VERTICAL SINGLE AND HORIZONTAL DOUBLE"); \
	genSvg(fontname, "0x256B", "BOX DRAWINGS VERTICAL DOUBLE AND HORIZONTAL SINGLE"); \
	genSvg(fontname, "0x256C", "BOX DRAWINGS DOUBLE VERTICAL AND HORIZONTAL"); \
	genSvg(fontname, "0x256D", "BOX DRAWINGS LIGHT ARC DOWN AND RIGHT"); \
	genSvg(fontname, "0x256E", "BOX DRAWINGS LIGHT ARC DOWN AND LEFT"); \
	genSvg(fontname, "0x256F", "BOX DRAWINGS LIGHT ARC UP AND LEFT"); \
	genSvg(fontname, "0x2570", "BOX DRAWINGS LIGHT ARC UP AND RIGHT"); \
	genSvg(fontname, "0x2571", "BOX DRAWINGS LIGHT DIAGONAL UPPER RIGHT TO LOWER LEFT"); \
	genSvg(fontname, "0x2572", "BOX DRAWINGS LIGHT DIAGONAL UPPER LEFT TO LOWER RIGHT"); \
	genSvg(fontname, "0x2573", "BOX DRAWINGS LIGHT DIAGONAL CROSS"); \
	genSvg(fontname, "0x2574", "BOX DRAWINGS LIGHT LEFT"); \
	genSvg(fontname, "0x2575", "BOX DRAWINGS LIGHT UP"); \
	genSvg(fontname, "0x2576", "BOX DRAWINGS LIGHT RIGHT"); \
	genSvg(fontname, "0x2577", "BOX DRAWINGS LIGHT DOWN"); \
	genSvg(fontname, "0x2578", "BOX DRAWINGS HEAVY LEFT"); \
	genSvg(fontname, "0x2579", "BOX DRAWINGS HEAVY UP"); \
	genSvg(fontname, "0x257A", "BOX DRAWINGS HEAVY RIGHT"); \
	genSvg(fontname, "0x257B", "BOX DRAWINGS HEAVY DOWN"); \
	genSvg(fontname, "0x257C", "BOX DRAWINGS LIGHT LEFT AND HEAVY RIGHT"); \
	genSvg(fontname, "0x257D", "BOX DRAWINGS LIGHT UP AND HEAVY DOWN"); \
	genSvg(fontname, "0x257E", "BOX DRAWINGS HEAVY LEFT AND LIGHT RIGHT"); \
	genSvg(fontname, "0x257F", "BOX DRAWINGS HEAVY UP AND LIGHT DOWN");

#define BLOCK_ELEMENTS \
	genSvg(fontname, "0x2580", "UPPER HALF BLOCK"); \
	genSvg(fontname, "0x2581", "LOWER ONE EIGHTH BLOCK"); \
	genSvg(fontname, "0x2582", "LOWER ONE QUARTER BLOCK"); \
	genSvg(fontname, "0x2583", "LOWER THREE EIGHTHS BLOCK"); \
	genSvg(fontname, "0x2584", "LOWER HALF BLOCK"); \
	genSvg(fontname, "0x2585", "LOWER FIVE EIGHTHS BLOCK"); \
	genSvg(fontname, "0x2586", "LOWER THREE QUARTERS BLOCK"); \
	genSvg(fontname, "0x2587", "LOWER SEVEN EIGHTHS BLOCK"); \
	genSvg(fontname, "0x2588", "FULL BLOCK"); \
	genSvg(fontname, "0x2589", "LEFT SEVEN EIGHTHS BLOCK"); \
	genSvg(fontname, "0x258A", "LEFT THREE QUARTERS BLOCK"); \
	genSvg(fontname, "0x258B", "LEFT FIVE EIGHTHS BLOCK"); \
	genSvg(fontname, "0x258C", "LEFT HALF BLOCK"); \
	genSvg(fontname, "0x258D", "LEFT THREE EIGHTHS BLOCK"); \
	genSvg(fontname, "0x258E", "LEFT ONE QUARTER BLOCK"); \
	genSvg(fontname, "0x258F", "LEFT ONE EIGHTH BLOCK"); \
	genSvg(fontname, "0x2590", "RIGHT HALF BLOCK"); \
	genSvg(fontname, "0x2591", "LIGHT SHADE"); \
	genSvg(fontname, "0x2592", "MEDIUM SHADE"); \
	genSvg(fontname, "0x2593", "DARK SHADE"); \
	genSvg(fontname, "0x2594", "UPPER ONE EIGHTH BLOCK"); \
	genSvg(fontname, "0x2595", "RIGHT ONE EIGHTH BLOCK"); \
	genSvg(fontname, "0x2596", "QUADRANT LOWER LEFT"); \
	genSvg(fontname, "0x2597", "QUADRANT LOWER RIGHT"); \
	genSvg(fontname, "0x2598", "QUADRANT UPPER LEFT"); \
	genSvg(fontname, "0x2599", "QUADRANT UPPER LEFT AND LOWER LEFT AND LOWER RIGHT"); \
	genSvg(fontname, "0x259A", "QUADRANT UPPER LEFT AND LOWER RIGHT"); \
	genSvg(fontname, "0x259B", "QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER LEFT"); \
	genSvg(fontname, "0x259C", "QUADRANT UPPER LEFT AND UPPER RIGHT AND LOWER RIGHT"); \
	genSvg(fontname, "0x259D", "QUADRANT UPPER RIGHT"); \
	genSvg(fontname, "0x259E", "QUADRANT UPPER RIGHT AND LOWER LEFT"); \
	genSvg(fontname, "0x259F", "QUADRANT UPPER RIGHT AND LOWER LEFT AND LOWER RIGHT");

#define GEOMETRIC_SHAPES \
	genSvg(fontname, "0x25A0", "BLACK SQUARE"); \
	genSvg(fontname, "0x25A1", "WHITE SQUARE"); \
	genSvg(fontname, "0x25A2", "WHITE SQUARE WITH ROUNDED CORNERS"); \
	genSvg(fontname, "0x25A3", "WHITE SQUARE CONTAINING SMALL BLACK SQUARE"); \
	genSvg(fontname, "0x25A4", "SQUARE WITH HORIZONTAL FILL"); \
	genSvg(fontname, "0x25A5", "SQUARE WITH VERTICAL FILL"); \
	genSvg(fontname, "0x25A6", "SQUARE WITH ORTHOGONAL CROSSHATCH FILL"); \
	genSvg(fontname, "0x25A7", "SQUARE WITH UPPER LEFT TO LOWER RIGHT FILL"); \
	genSvg(fontname, "0x25A8", "SQUARE WITH UPPER RIGHT TO LOWER LEFT FILL"); \
	genSvg(fontname, "0x25A9", "SQUARE WITH DIAGONAL CROSSHATCH FILL"); \
	genSvg(fontname, "0x25AA", "BLACK SMALL SQUARE"); \
	genSvg(fontname, "0x25AB", "WHITE SMALL SQUARE"); \
	genSvg(fontname, "0x25AC", "BLACK RECTANGLE"); \
	genSvg(fontname, "0x25AD", "WHITE RECTANGLE"); \
	genSvg(fontname, "0x25AE", "BLACK VERTICAL RECTANGLE"); \
	genSvg(fontname, "0x25AF", "WHITE VERTICAL RECTANGLE"); \
	genSvg(fontname, "0x25B0", "BLACK PARALLELOGRAM"); \
	genSvg(fontname, "0x25B1", "WHITE PARALLELOGRAM"); \
	genSvg(fontname, "0x25B2", "BLACK UP-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25B3", "WHITE UP-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25B4", "BLACK UP-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25B5", "WHITE UP-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25B6", "BLACK RIGHT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25B7", "WHITE RIGHT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25B8", "BLACK RIGHT-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25B9", "WHITE RIGHT-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25BA", "BLACK RIGHT-POINTING POINTER"); \
	genSvg(fontname, "0x25BB", "WHITE RIGHT-POINTING POINTER"); \
	genSvg(fontname, "0x25BC", "BLACK DOWN-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25BD", "WHITE DOWN-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25BE", "BLACK DOWN-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25BF", "WHITE DOWN-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25C0", "BLACK LEFT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25C1", "WHITE LEFT-POINTING TRIANGLE"); \
	genSvg(fontname, "0x25C2", "BLACK LEFT-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25C3", "WHITE LEFT-POINTING SMALL TRIANGLE"); \
	genSvg(fontname, "0x25C4", "BLACK LEFT-POINTING POINTER"); \
	genSvg(fontname, "0x25C5", "WHITE LEFT-POINTING POINTER"); \
	genSvg(fontname, "0x25C6", "BLACK DIAMOND"); \
	genSvg(fontname, "0x25C7", "WHITE DIAMOND"); \
	genSvg(fontname, "0x25C8", "WHITE DIAMOND CONTAINING SMALL BLACK DIAMOND"); \
	genSvg(fontname, "0x25C9", "FISHEYE"); \
	genSvg(fontname, "0x25CA", "LOZENGE"); \
	genSvg(fontname, "0x25CB", "WHITE CIRCLE"); \
	genSvg(fontname, "0x25CC", "DOTTED CIRCLE"); \
	genSvg(fontname, "0x25CD", "CIRCLE WITH VERTICAL FILL"); \
	genSvg(fontname, "0x25CE", "BULLSEYE"); \
	genSvg(fontname, "0x25CF", "BLACK CIRCLE"); \
	genSvg(fontname, "0x25D0", "CIRCLE WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x25D1", "CIRCLE WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x25D2", "CIRCLE WITH LOWER HALF BLACK"); \
	genSvg(fontname, "0x25D3", "CIRCLE WITH UPPER HALF BLACK"); \
	genSvg(fontname, "0x25D4", "CIRCLE WITH UPPER RIGHT QUADRANT BLACK"); \
	genSvg(fontname, "0x25D5", "CIRCLE WITH ALL BUT UPPER LEFT QUADRANT BLACK"); \
	genSvg(fontname, "0x25D6", "LEFT HALF CIRCLE BLACK"); \
	genSvg(fontname, "0x25D7", "RIGHT HALF BLACK CIRCLE"); \
	genSvg(fontname, "0x25D8", "INVERSE BULLET"); \
	genSvg(fontname, "0x25D9", "INVERSE WHITE CIRCLE"); \
	genSvg(fontname, "0x25DA", "UPPER HALF INVERSE WHITE CIRCLE"); \
	genSvg(fontname, "0x25DB", "LOWER HALF INVERSE WHITE CIRCLE"); \
	genSvg(fontname, "0x25DC", "UPPER LEFT QUADRANT CIRCULAR ARC"); \
	genSvg(fontname, "0x25DD", "UPPER RIGHT QUADRANT CIRCULAR ARC"); \
	genSvg(fontname, "0x25DE", "LOWER RIGHT QUADRANT CIRCULAR ARC"); \
	genSvg(fontname, "0x25DF", "LOWER LEFT QUADRANT CIRCULAR ARC"); \
	genSvg(fontname, "0x25E0", "UPPER HALF CIRCLE"); \
	genSvg(fontname, "0x25E1", "LOWER HALF CIRCLE"); \
	genSvg(fontname, "0x25E2", "BLACK LOWER RIGHT TRIANGLE"); \
	genSvg(fontname, "0x25E3", "BLACK LOWER LEFT TRIANGLE"); \
	genSvg(fontname, "0x25E4", "BLACK UPPER LEFT TRIANGLE"); \
	genSvg(fontname, "0x25E5", "BLACK UPPER RIGHT TRIANGLE"); \
	genSvg(fontname, "0x25E6", "WHITE BULLET"); \
	genSvg(fontname, "0x25E7", "SQUARE WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x25E8", "SQUARE WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x25E9", "SQUARE WITH UPPER LEFT DIAGONAL HALF BLACK"); \
	genSvg(fontname, "0x25EA", "SQUARE WITH LOWER RIGHT DIAGONAL HALF BLACK"); \
	genSvg(fontname, "0x25EB", "WHITE SQUARE WITH VERTICAL BISECTING LINE"); \
	genSvg(fontname, "0x25EC", "WHITE UP-POINTING TRIANGLE WITH DOT"); \
	genSvg(fontname, "0x25ED", "UP-POINTING TRIANGLE WITH LEFT HALF BLACK"); \
	genSvg(fontname, "0x25EE", "UP-POINTING TRIANGLE WITH RIGHT HALF BLACK"); \
	genSvg(fontname, "0x25EF", "LARGE CIRCLE"); \
	genSvg(fontname, "0x25F0", "WHITE SQUARE WITH UPPER LEFT QUADRANT"); \
	genSvg(fontname, "0x25F1", "WHITE SQUARE WITH LOWER LEFT QUADRANT"); \
	genSvg(fontname, "0x25F2", "WHITE SQUARE WITH LOWER RIGHT QUADRANT"); \
	genSvg(fontname, "0x25F3", "WHITE SQUARE WITH UPPER RIGHT QUADRANT"); \
	genSvg(fontname, "0x25F4", "WHITE CIRCLE WITH UPPER LEFT QUADRANT"); \
	genSvg(fontname, "0x25F5", "WHITE CIRCLE WITH LOWER LEFT QUADRANT"); \
	genSvg(fontname, "0x25F6", "WHITE CIRCLE WITH LOWER RIGHT QUADRANT"); \
	genSvg(fontname, "0x25F7", "WHITE CIRCLE WITH UPPER RIGHT QUADRANT"); \
	genSvg(fontname, "0x25F8", "UPPER LEFT TRIANGLE"); \
	genSvg(fontname, "0x25F9", "UPPER RIGHT TRIANGLE"); \
	genSvg(fontname, "0x25FA", "LOWER-LEFT TRIANGLE"); \
	genSvg(fontname, "0x25FB", "WHITE MEDIUM SQUARE"); \
	genSvg(fontname, "0x25FC", "BLACK MEDIUM SQUARE"); \
	genSvg(fontname, "0x25FD", "WHITE MEDIUM SMALL SQUARE"); \
	genSvg(fontname, "0x25FE", "BLACK MEDIUM SMALL SQUARE"); \
	genSvg(fontname, "0x25FF", "LOWER RIGHT TRIANGLE");

#define MISCELLANEOUS_SYMBOLS \
	genSvg(fontname, "0x2600", "BLACK SUN WITH RAYS"); \
	genSvg(fontname, "0x2601", "CLOUD"); \
	genSvg(fontname, "0x2602", "UMBRELLA"); \
	genSvg(fontname, "0x2603", "SNOWMAN"); \
	genSvg(fontname, "0x2604", "COMET"); \
	genSvg(fontname, "0x2605", "BLACK STAR"); \
	genSvg(fontname, "0x2606", "WHITE STAR"); \
	genSvg(fontname, "0x2607", "LIGHTNING"); \
	genSvg(fontname, "0x2608", "THUNDERSTORM"); \
	genSvg(fontname, "0x2609", "SUN"); \
	genSvg(fontname, "0x260A", "ASCENDING NODE"); \
	genSvg(fontname, "0x260B", "DESCENDING NODE"); \
	genSvg(fontname, "0x260C", "CONJUNCTION"); \
	genSvg(fontname, "0x260D", "OPPOSITION"); \
	genSvg(fontname, "0x260E", "BLACK TELEPHONE"); \
	genSvg(fontname, "0x260F", "WHITE TELEPHONE"); \
	genSvg(fontname, "0x2610", "BALLOT BOX"); \
	genSvg(fontname, "0x2611", "BALLOT BOX WITH CHECK"); \
	genSvg(fontname, "0x2612", "BALLOT BOX WITH X"); \
	genSvg(fontname, "0x2613", "SALTIRE"); \
	genSvg(fontname, "0x2614", "UMBRELLA WITH RAIN DROPS"); \
	genSvg(fontname, "0x2615", "HOT BEVERAGE"); \
	genSvg(fontname, "0x2616", "WHITE SHOGI PIECE"); \
	genSvg(fontname, "0x2617", "BLACK SHOGI PIECE"); \
	genSvg(fontname, "0x2618", "SHAMROCK"); \
	genSvg(fontname, "0x2619", "REVERSED ROTATED FLORAL HEART BULLET"); \
	genSvg(fontname, "0x261A", "BLACK LEFT POINTING INDEX"); \
	genSvg(fontname, "0x261B", "BLACK RIGHT POINTING INDEX"); \
	genSvg(fontname, "0x261C", "WHITE LEFT POINTING INDEX"); \
	genSvg(fontname, "0x261D", "WHITE UP POINTING INDEX"); \
	genSvg(fontname, "0x261E", "WHITE RIGHT POINTING INDEX"); \
	genSvg(fontname, "0x261F", "WHITE DOWN POINTING INDEX"); \
	genSvg(fontname, "0x2620", "SKULL AND CROSSBONES"); \
	genSvg(fontname, "0x2621", "CAUTION SIGN"); \
	genSvg(fontname, "0x2622", "RADIOACTIVE SIGN"); \
	genSvg(fontname, "0x2623", "BIOHAZARD SIGN"); \
	genSvg(fontname, "0x2624", "CADUCEUS"); \
	genSvg(fontname, "0x2625", "ANKH"); \
	genSvg(fontname, "0x2626", "ORTHODOX CROSS"); \
	genSvg(fontname, "0x2627", "CHI RHO"); \
	genSvg(fontname, "0x2628", "CROSS OF LORRAINE"); \
	genSvg(fontname, "0x2629", "CROSS OF JERUSALEM"); \
	genSvg(fontname, "0x262A", "STAR AND CRESCENT"); \
	genSvg(fontname, "0x262B", "FARSI SYMBOL"); \
	genSvg(fontname, "0x262C", "ADI SHAKTI"); \
	genSvg(fontname, "0x262D", "HAMMER AND SICKLE"); \
	genSvg(fontname, "0x262E", "PEACE SYMBOL"); \
	genSvg(fontname, "0x262F", "YIN YANG"); \
	genSvg(fontname, "0x2630", "TRIGRAM FOR HEAVEN"); \
	genSvg(fontname, "0x2631", "TRIGRAM FOR LAKE"); \
	genSvg(fontname, "0x2632", "TRIGRAM FOR FIRE"); \
	genSvg(fontname, "0x2633", "TRIGRAM FOR THUNDER"); \
	genSvg(fontname, "0x2634", "TRIGRAM FOR WIND"); \
	genSvg(fontname, "0x2635", "TRIGRAM FOR WATER"); \
	genSvg(fontname, "0x2636", "TRIGRAM FOR MOUNTAIN"); \
	genSvg(fontname, "0x2637", "TRIGRAM FOR EARTH"); \
	genSvg(fontname, "0x2638", "WHEEL OF DHARMA"); \
	genSvg(fontname, "0x2639", "WHITE FROWNING FACE"); \
	genSvg(fontname, "0x263A", "WHITE SMILING FACE"); \
	genSvg(fontname, "0x263B", "BLACK SMILING FACE"); \
	genSvg(fontname, "0x263C", "WHITE SUN WITH RAYS"); \
	genSvg(fontname, "0x263D", "FIRST QUARTER MOON"); \
	genSvg(fontname, "0x263E", "LAST QUARTER MOON"); \
	genSvg(fontname, "0x263F", "MERCURY"); \
	genSvg(fontname, "0x2640", "FEMALE SIGN"); \
	genSvg(fontname, "0x2641", "EARTH"); \
	genSvg(fontname, "0x2642", "MALE SIGN"); \
	genSvg(fontname, "0x2643", "JUPITER"); \
	genSvg(fontname, "0x2644", "SATURN"); \
	genSvg(fontname, "0x2645", "URANUS"); \
	genSvg(fontname, "0x2646", "NEPTUNE"); \
	genSvg(fontname, "0x2647", "PLUTO"); \
	genSvg(fontname, "0x2648", "ARIES"); \
	genSvg(fontname, "0x2649", "TAURUS"); \
	genSvg(fontname, "0x264A", "GEMINI"); \
	genSvg(fontname, "0x264B", "CANCER"); \
	genSvg(fontname, "0x264C", "LEO"); \
	genSvg(fontname, "0x264D", "VIRGO"); \
	genSvg(fontname, "0x264E", "LIBRA"); \
	genSvg(fontname, "0x264F", "SCORPIUS"); \
	genSvg(fontname, "0x2650", "SAGITTARIUS"); \
	genSvg(fontname, "0x2651", "CAPRICORN"); \
	genSvg(fontname, "0x2652", "AQUARIUS"); \
	genSvg(fontname, "0x2653", "PISCES"); \
	genSvg(fontname, "0x2654", "WHITE CHESS KING"); \
	genSvg(fontname, "0x2655", "WHITE CHESS QUEEN"); \
	genSvg(fontname, "0x2656", "WHITE CHESS ROOK"); \
	genSvg(fontname, "0x2657", "WHITE CHESS BISHOP"); \
	genSvg(fontname, "0x2658", "WHITE CHESS KNIGHT"); \
	genSvg(fontname, "0x2659", "WHITE CHESS PAWN"); \
	genSvg(fontname, "0x265A", "BLACK CHESS KING"); \
	genSvg(fontname, "0x265B", "BLACK CHESS QUEEN"); \
	genSvg(fontname, "0x265C", "BLACK CHESS ROOK"); \
	genSvg(fontname, "0x265D", "BLACK CHESS BISHOP"); \
	genSvg(fontname, "0x265E", "BLACK CHESS KNIGHT"); \
	genSvg(fontname, "0x265F", "BLACK CHESS PAWN"); \
	genSvg(fontname, "0x2660", "BLACK SPADE SUIT"); \
	genSvg(fontname, "0x2661", "WHITE HEART SUIT"); \
	genSvg(fontname, "0x2662", "WHITE DIAMOND SUIT"); \
	genSvg(fontname, "0x2663", "BLACK CLUB SUIT"); \
	genSvg(fontname, "0x2664", "WHITE SPADE SUIT"); \
	genSvg(fontname, "0x2665", "BLACK HEART SUIT"); \
	genSvg(fontname, "0x2666", "BLACK DIAMOND SUIT"); \
	genSvg(fontname, "0x2667", "WHITE CLUB SUIT"); \
	genSvg(fontname, "0x2668", "HOT SPRINGS"); \
	genSvg(fontname, "0x2669", "QUARTER NOTE"); \
	genSvg(fontname, "0x266A", "EIGHTH NOTE"); \
	genSvg(fontname, "0x266B", "BEAMED EIGHTH NOTES"); \
	genSvg(fontname, "0x266C", "BEAMED SIXTEENTH NOTES"); \
	genSvg(fontname, "0x266D", "MUSIC FLAT SIGN"); \
	genSvg(fontname, "0x266E", "MUSIC NATURAL SIGN"); \
	genSvg(fontname, "0x266F", "MUSIC SHARP SIGN"); \
	genSvg(fontname, "0x2670", "WEST SYRIAC CROSS"); \
	genSvg(fontname, "0x2671", "EAST SYRIAC CROSS"); \
	genSvg(fontname, "0x2672", "UNIVERSAL RECYCLING SYMBOL"); \
	genSvg(fontname, "0x2673", "RECYCLING SYMBOL FOR TYPE-1 PLASTICS"); \
	genSvg(fontname, "0x2674", "RECYCLING SYMBOL FOR TYPE-2 PLASTICS"); \
	genSvg(fontname, "0x2675", "RECYCLING SYMBOL FOR TYPE-3 PLASTICS"); \
	genSvg(fontname, "0x2676", "RECYCLING SYMBOL FOR TYPE-4 PLASTICS"); \
	genSvg(fontname, "0x2677", "RECYCLING SYMBOL FOR TYPE-5 PLASTICS"); \
	genSvg(fontname, "0x2678", "RECYCLING SYMBOL FOR TYPE-6 PLASTICS"); \
	genSvg(fontname, "0x2679", "RECYCLING SYMBOL FOR TYPE-7 PLASTICS"); \
	genSvg(fontname, "0x267A", "RECYCLING SYMBOL FOR GENERIC MATERIALS"); \
	genSvg(fontname, "0x267B", "BLACK UNIVERSAL RECYCLING SYMBOL"); \
	genSvg(fontname, "0x267C", "RECYCLED PAPER SYMBOL"); \
	genSvg(fontname, "0x267D", "PARTIALLY-RECYCLED PAPER SYMBOL"); \
	genSvg(fontname, "0x267E", "PERMANENT PAPER SIGN"); \
	genSvg(fontname, "0x267F", "WHEELCHAIR SYMBOL"); \
	genSvg(fontname, "0x2680", "DIE FACE-1"); \
	genSvg(fontname, "0x2681", "DIE FACE-2"); \
	genSvg(fontname, "0x2682", "DIE FACE-3"); \
	genSvg(fontname, "0x2683", "DIE FACE-4"); \
	genSvg(fontname, "0x2684", "DIE FACE-5"); \
	genSvg(fontname, "0x2685", "DIE FACE-6"); \
	genSvg(fontname, "0x2686", "WHITE CIRCLE WITH DOT RIGHT"); \
	genSvg(fontname, "0x2687", "WHITE CIRCLE WITH TWO DOTS"); \
	genSvg(fontname, "0x2688", "BLACK CIRCLE WITH WHITE DOT RIGHT"); \
	genSvg(fontname, "0x2689", "BLACK CIRCLE WITH TWO WHITE DOTS"); \
	genSvg(fontname, "0x268A", "MONOGRAM FOR YANG"); \
	genSvg(fontname, "0x268B", "MONOGRAM FOR YIN"); \
	genSvg(fontname, "0x268C", "DIGRAM FOR GREATER YANG"); \
	genSvg(fontname, "0x268D", "DIGRAM FOR LESSER YIN"); \
	genSvg(fontname, "0x268E", "DIGRAM FOR LESSER YANG"); \
	genSvg(fontname, "0x268F", "DIGRAM FOR GREATER YIN"); \
	genSvg(fontname, "0x2690", "WHITE FLAG"); \
	genSvg(fontname, "0x2691", "BLACK FLAG"); \
	genSvg(fontname, "0x2692", "HAMMER AND PICK"); \
	genSvg(fontname, "0x2693", "ANCHOR"); \
	genSvg(fontname, "0x2694", "CROSSED SWORDS"); \
	genSvg(fontname, "0x2695", "STAFF OF AESCULAPIUS"); \
	genSvg(fontname, "0x2696", "SCALES"); \
	genSvg(fontname, "0x2697", "ALEMBIC"); \
	genSvg(fontname, "0x2698", "FLOWER"); \
	genSvg(fontname, "0x2699", "GEAR"); \
	genSvg(fontname, "0x269A", "STAFF OF HERMES"); \
	genSvg(fontname, "0x269B", "ATOM SYMBOL"); \
	genSvg(fontname, "0x269C", "FLEUR-DE-LIS"); \
	genSvg(fontname, "0x269D", "OUTLINED WHITE STAR"); \
	genSvg(fontname, "0x269E", "THREE LINES CONVERGING RIGHT"); \
	genSvg(fontname, "0x269F", "THREE LINES CONVERGING LEFT"); \
	genSvg(fontname, "0x26A0", "WARNING SIGN"); \
	genSvg(fontname, "0x26A1", "HIGH VOLTAGE SIGN"); \
	genSvg(fontname, "0x26A2", "DOUBLED FEMALE SIGN"); \
	genSvg(fontname, "0x26A3", "DOUBLED MALE SIGN"); \
	genSvg(fontname, "0x26A4", "INTERLOCKED FEMALE AND MALE SIGN"); \
	genSvg(fontname, "0x26A5", "MALE AND FEMALE SIGN"); \
	genSvg(fontname, "0x26A6", "MALE WITH STROKE SIGN"); \
	genSvg(fontname, "0x26A7", "MALE WITH STROKE AND MALE AND FEMALE SIGN"); \
	genSvg(fontname, "0x26A8", "VERTICAL MALE WITH STROKE SIGN"); \
	genSvg(fontname, "0x26A9", "HORIZONTAL MALE WITH STROKE SIGN"); \
	genSvg(fontname, "0x26AA", "MEDIUM WHITE CIRCLE"); \
	genSvg(fontname, "0x26AB", "MEDIUM BLACK CIRCLE"); \
	genSvg(fontname, "0x26AC", "MEDIUM SMALL WHITE CIRCLE"); \
	genSvg(fontname, "0x26AD", "MARRIAGE SYMBOL"); \
	genSvg(fontname, "0x26AE", "DIVORCE SYMBOL"); \
	genSvg(fontname, "0x26AF", "UNMARRIED PARTNERSHIP SYMBOL"); \
	genSvg(fontname, "0x26B0", "COFFIN"); \
	genSvg(fontname, "0x26B1", "FUNERAL URN"); \
	genSvg(fontname, "0x26B2", "NEUTER"); \
	genSvg(fontname, "0x26B3", "CERES"); \
	genSvg(fontname, "0x26B4", "PALLAS"); \
	genSvg(fontname, "0x26B5", "JUNO"); \
	genSvg(fontname, "0x26B6", "VESTA"); \
	genSvg(fontname, "0x26B7", "CHIRON"); \
	genSvg(fontname, "0x26B8", "BLACK MOON LILITH"); \
	genSvg(fontname, "0x26B9", "SEXTILE"); \
	genSvg(fontname, "0x26BA", "SEMISEXTILE"); \
	genSvg(fontname, "0x26BB", "QUINCUNX"); \
	genSvg(fontname, "0x26BC", "SESQUIQUADRATE"); \
	genSvg(fontname, "0x26BD", "SOCCER BALL"); \
	genSvg(fontname, "0x26BE", "BASEBALL"); \
	genSvg(fontname, "0x26BF", "SQUARED KEY"); \
	genSvg(fontname, "0x26C0", "WHITE DRAUGHTS MAN"); \
	genSvg(fontname, "0x26C1", "WHITE DRAUGHTS KING"); \
	genSvg(fontname, "0x26C2", "BLACK DRAUGHTS MAN"); \
	genSvg(fontname, "0x26C3", "BLACK DRAUGHTS KING"); \
	genSvg(fontname, "0x26C4", "SNOWMAN WITHOUT SNOW"); \
	genSvg(fontname, "0x26C5", "SUN BEHIND CLOUD"); \
	genSvg(fontname, "0x26C6", "RAIN"); \
	genSvg(fontname, "0x26C7", "BLACK SNOWMAN"); \
	genSvg(fontname, "0x26C8", "THUNDER CLOUD AND RAIN"); \
	genSvg(fontname, "0x26C9", "TURNED WHITE SHOGI PIECE"); \
	genSvg(fontname, "0x26CA", "TURNED BLACK SHOGI PIECE"); \
	genSvg(fontname, "0x26CB", "WHITE DIAMOND IN SQUARE"); \
	genSvg(fontname, "0x26CC", "CROSSING LANES"); \
	genSvg(fontname, "0x26CD", "DISABLED CAR"); \
	genSvg(fontname, "0x26CE", "OPHIUCHUS"); \
	genSvg(fontname, "0x26CF", "PICK"); \
	genSvg(fontname, "0x26D0", "CAR SLIDING"); \
	genSvg(fontname, "0x26D1", "HELMET WITH WHITE CROSS"); \
	genSvg(fontname, "0x26D2", "CIRCLED CROSSING LANES"); \
	genSvg(fontname, "0x26D3", "CHAINS"); \
	genSvg(fontname, "0x26D4", "NO ENTRY"); \
	genSvg(fontname, "0x26D5", "ALTERNATE ONE-WAY LEFT WAY TRAFFIC"); \
	genSvg(fontname, "0x26D6", "BLACK TWO-WAY LEFT WAY TRAFFIC"); \
	genSvg(fontname, "0x26D7", "WHITE TWO-WAY LEFT WAY TRAFFIC"); \
	genSvg(fontname, "0x26D8", "BLACK LEFT LANE MERGE"); \
	genSvg(fontname, "0x26D9", "WHITE LEFT LANE MERGE"); \
	genSvg(fontname, "0x26DA", "DRIVE SLOW SIGN"); \
	genSvg(fontname, "0x26DB", "HEAVY WHITE DOWN-POINTING TRIANGLE"); \
	genSvg(fontname, "0x26DC", "LEFT CLOSED ENTRY"); \
	genSvg(fontname, "0x26DD", "SQUARED SALTIRE"); \
	genSvg(fontname, "0x26DE", "FALLING DIAGONAL IN WHITE CIRCLE IN BLACK SQUARE"); \
	genSvg(fontname, "0x26DF", "BLACK TRUCK"); \
	genSvg(fontname, "0x26E0", "RESTRICTED LEFT ENTRY-1"); \
	genSvg(fontname, "0x26E1", "RESTRICTED LEFT ENTRY-2"); \
	genSvg(fontname, "0x26E2", "ASTRONOMICAL SYMBOL FOR URANUS"); \
	genSvg(fontname, "0x26E3", "HEAVY CIRCLE WITH STROKE AND TWO DOTS ABOVE"); \
	genSvg(fontname, "0x26E4", "PENTAGRAM"); \
	genSvg(fontname, "0x26E5", "RIGHT-HANDED INTERLACED PENTAGRAM"); \
	genSvg(fontname, "0x26E6", "LEFT-HANDED INTERLACED PENTAGRAM"); \
	genSvg(fontname, "0x26E7", "INVERTED PENTAGRAM"); \
	genSvg(fontname, "0x26E8", "BLACK CROSS ON SHIELD"); \
	genSvg(fontname, "0x26E9", "SHINTO SHRINE"); \
	genSvg(fontname, "0x26EA", "CHURCH"); \
	genSvg(fontname, "0x26EB", "CASTLE"); \
	genSvg(fontname, "0x26EC", "HISTORIC SITE"); \
	genSvg(fontname, "0x26ED", "GEAR WITHOUT HUB"); \
	genSvg(fontname, "0x26EE", "GEAR WITH HANDLES"); \
	genSvg(fontname, "0x26EF", "MAP SYMBOL FOR LIGHTHOUSE"); \
	genSvg(fontname, "0x26F0", "MOUNTAIN"); \
	genSvg(fontname, "0x26F1", "UMBRELLA ON GROUND"); \
	genSvg(fontname, "0x26F2", "FOUNTAIN"); \
	genSvg(fontname, "0x26F3", "FLAG IN HOLE"); \
	genSvg(fontname, "0x26F4", "FERRY"); \
	genSvg(fontname, "0x26F5", "SAILBOAT"); \
	genSvg(fontname, "0x26F6", "SQUARE FOUR CORNERS"); \
	genSvg(fontname, "0x26F7", "SKIER"); \
	genSvg(fontname, "0x26F8", "ICE SKATE"); \
	genSvg(fontname, "0x26F9", "PERSON WITH BALL"); \
	genSvg(fontname, "0x26FA", "TENT"); \
	genSvg(fontname, "0x26FB", "JAPANESE BANK SYMBOL"); \
	genSvg(fontname, "0x26FC", "HEADSTONE GRAVEYARD SYMBOL"); \
	genSvg(fontname, "0x26FD", "FUEL PUMP"); \
	genSvg(fontname, "0x26FE", "CUP ON BLACK SQUARE"); \
	genSvg(fontname, "0x26FF", "WHITE FLAG WITH HORIZONTAL MIDDLE BLACK STRIPE");

#define DINGBAT \
	genSvg(fontname, "0x2700", "BLACK SAFETY SCISSORS"); \
	genSvg(fontname, "0x2701", "UPPER BLADE SCISSORS"); \
	genSvg(fontname, "0x2702", "BLACK SCISSORS"); \
	genSvg(fontname, "0x2703", "LOWER BLADE SCISSORS"); \
	genSvg(fontname, "0x2704", "WHITE SCISSORS"); \
	genSvg(fontname, "0x2705", "WHITE HEAVY CHECK MARK"); \
	genSvg(fontname, "0x2706", "TELEPHONE LOCATION SIGN"); \
	genSvg(fontname, "0x2707", "TAPE DRIVE"); \
	genSvg(fontname, "0x2708", "AIRPLANE"); \
	genSvg(fontname, "0x2709", "ENVELOPE"); \
	genSvg(fontname, "0x270A", "RAISED FIST"); \
	genSvg(fontname, "0x270B", "RAISED HAND"); \
	genSvg(fontname, "0x270C", "VICTORY HAND"); \
	genSvg(fontname, "0x270D", "WRITING HAND"); \
	genSvg(fontname, "0x270E", "LOWER RIGHT PENCIL"); \
	genSvg(fontname, "0x270F", "PENCIL"); \
	genSvg(fontname, "0x2710", "UPPER RIGHT PENCIL"); \
	genSvg(fontname, "0x2711", "WHITE NIB"); \
	genSvg(fontname, "0x2712", "BLACK NIB"); \
	genSvg(fontname, "0x2713", "CHECK MARK"); \
	genSvg(fontname, "0x2714", "HEAVY CHECK MARK"); \
	genSvg(fontname, "0x2715", "MULTIPLICATION X"); \
	genSvg(fontname, "0x2716", "HEAVY MULTIPLICATION X"); \
	genSvg(fontname, "0x2717", "BALLOT X"); \
	genSvg(fontname, "0x2718", "HEAVY BALLOT X"); \
	genSvg(fontname, "0x2719", "OUTLINED GREEK CROSS"); \
	genSvg(fontname, "0x271A", "HEAVY GREEK CROSS"); \
	genSvg(fontname, "0x271B", "OPEN CENTRE CROSS"); \
	genSvg(fontname, "0x271C", "HEAVY OPEN CENTRE CROSS"); \
	genSvg(fontname, "0x271D", "LATIN CROSS"); \
	genSvg(fontname, "0x271E", "SHADOWED WHITE LATIN CROSS"); \
	genSvg(fontname, "0x271F", "OUTLINED LATIN CROSS"); \
	genSvg(fontname, "0x2720", "MALTESE CROSS"); \
	genSvg(fontname, "0x2721", "STAR OF DAVID"); \
	genSvg(fontname, "0x2722", "FOUR TEARDROP-SPOKED ASTERISK"); \
	genSvg(fontname, "0x2723", "FOUR BALLOON-SPOKED ASTERISK"); \
	genSvg(fontname, "0x2724", "HEAVY FOUR BALLOON-SPOKED ASTERISK"); \
	genSvg(fontname, "0x2725", "FOUR CLUB-SPOKED ASTERISK"); \
	genSvg(fontname, "0x2726", "BLACK FOUR POINTED STAR"); \
	genSvg(fontname, "0x2727", "WHITE FOUR POINTED STAR"); \
	genSvg(fontname, "0x2728", "SPARKLES"); \
	genSvg(fontname, "0x2729", "STRESS OUTLINED WHITE STAR"); \
	genSvg(fontname, "0x272A", "CIRCLED WHITE STAR"); \
	genSvg(fontname, "0x272B", "OPEN CENTRE BLACK STAR"); \
	genSvg(fontname, "0x272C", "BLACK CENTRE WHITE STAR"); \
	genSvg(fontname, "0x272D", "OUTLINED BLACK STAR"); \
	genSvg(fontname, "0x272E", "HEAVY OUTLINED BLACK STAR"); \
	genSvg(fontname, "0x272F", "PINWHEEL STAR"); \
	genSvg(fontname, "0x2730", "SHADOWED WHITE STAR"); \
	genSvg(fontname, "0x2731", "HEAVY ASTERISK"); \
	genSvg(fontname, "0x2732", "OPEN CENTRE ASTERISK"); \
	genSvg(fontname, "0x2733", "EIGHT SPOKED ASTERISK"); \
	genSvg(fontname, "0x2734", "EIGHT POINTED BLACK STAR"); \
	genSvg(fontname, "0x2735", "EIGHT POINTED PINWHEEL STAR"); \
	genSvg(fontname, "0x2736", "SIX POINTED BLACK STAR"); \
	genSvg(fontname, "0x2737", "EIGHT POINTED RECTILINEAR BLACK STAR"); \
	genSvg(fontname, "0x2738", "HEAVY EIGHT POINTED RECTILINEAR BLACK STAR"); \
	genSvg(fontname, "0x2739", "TWELVE POINTED BLACK STAR"); \
	genSvg(fontname, "0x273A", "SIXTEEN POINTED ASTERISK"); \
	genSvg(fontname, "0x273B", "TEARDROP-SPOKED ASTERISK"); \
	genSvg(fontname, "0x273C", "OPEN CENTRE TEARDROP-SPOKED ASTERISK"); \
	genSvg(fontname, "0x273D", "HEAVY TEARDROP-SPOKED ASTERISK"); \
	genSvg(fontname, "0x273E", "SIX PETALLED BLACK AND WHITE FLORETTE"); \
	genSvg(fontname, "0x273F", "BLACK FLORETTE"); \
	genSvg(fontname, "0x2740", "WHITE FLORETTE"); \
	genSvg(fontname, "0x2741", "EIGHT PETALLED OUTLINED BLACK FLORETTE"); \
	genSvg(fontname, "0x2742", "CIRCLED OPEN CENTRE EIGHT POINTED STAR"); \
	genSvg(fontname, "0x2743", "HEAVY TEARDROP-SPOKED PINWHEEL ASTERISK"); \
	genSvg(fontname, "0x2744", "SNOWFLAKE"); \
	genSvg(fontname, "0x2745", "TIGHT TRIFOLIATE SNOWFLAKE"); \
	genSvg(fontname, "0x2746", "HEAVY CHEVRON SNOWFLAKE"); \
	genSvg(fontname, "0x2747", "SPARKLE"); \
	genSvg(fontname, "0x2748", "HEAVY SPARKLE"); \
	genSvg(fontname, "0x2749", "BALLOON-SPOKED ASTERISK"); \
	genSvg(fontname, "0x274A", "EIGHT TEARDROP-SPOKED PROPELLER ASTERISK"); \
	genSvg(fontname, "0x274B", "HEAVY EIGHT TEARDROP-SPOKED PROPELLER ASTERISK"); \
	genSvg(fontname, "0x274C", "CROSS MARK"); \
	genSvg(fontname, "0x274D", "SHADOWED WHITE CIRCLE"); \
	genSvg(fontname, "0x274E", "NEGATIVE SQUARED CROSS MARK"); \
	genSvg(fontname, "0x274F", "LOWER RIGHT DROP-SHADOWED WHITE SQUARE"); \
	genSvg(fontname, "0x2750", "UPPER RIGHT DROP-SHADOWED WHITE SQUARE"); \
	genSvg(fontname, "0x2751", "LOWER RIGHT SHADOWED WHITE SQUARE"); \
	genSvg(fontname, "0x2752", "UPPER RIGHT SHADOWED WHITE SQUARE"); \
	genSvg(fontname, "0x2753", "BLACK QUESTION MARK ORNAMENT"); \
	genSvg(fontname, "0x2754", "WHITE QUESTION MARK ORNAMENT"); \
	genSvg(fontname, "0x2755", "WHITE EXCLAMATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2756", "BLACK DIAMOND MINUS WHITE X"); \
	genSvg(fontname, "0x2757", "HEAVY EXCLAMATION MARK SYMBOL"); \
	genSvg(fontname, "0x2758", "LIGHT VERTICAL BAR"); \
	genSvg(fontname, "0x2759", "MEDIUM VERTICAL BAR"); \
	genSvg(fontname, "0x275A", "HEAVY VERTICAL BAR"); \
	genSvg(fontname, "0x275B", "HEAVY SINGLE TURNED COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x275C", "HEAVY SINGLE COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x275D", "HEAVY DOUBLE TURNED COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x275E", "HEAVY DOUBLE COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x275F", "HEAVY LOW SINGLE COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2760", "HEAVY LOW DOUBLE COMMA QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2761", "CURVED STEM PARAGRAPH SIGN ORNAMENT"); \
	genSvg(fontname, "0x2762", "HEAVY EXCLAMATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2763", "HEAVY HEART EXCLAMATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2764", "HEAVY BLACK HEART"); \
	genSvg(fontname, "0x2765", "ROTATED HEAVY BLACK HEART BULLET"); \
	genSvg(fontname, "0x2766", "FLORAL HEART"); \
	genSvg(fontname, "0x2767", "ROTATED FLORAL HEART BULLET"); \
	genSvg(fontname, "0x2768", "MEDIUM LEFT PARENTHESIS ORNAMENT"); \
	genSvg(fontname, "0x2769", "MEDIUM RIGHT PARENTHESIS ORNAMENT"); \
	genSvg(fontname, "0x276A", "MEDIUM FLATTENED LEFT PARENTHESIS ORNAMENT"); \
	genSvg(fontname, "0x276B", "MEDIUM FLATTENED RIGHT PARENTHESIS ORNAMENT"); \
	genSvg(fontname, "0x276C", "MEDIUM LEFT-POINTING ANGLE BRACKET ORNAMENT"); \
	genSvg(fontname, "0x276D", "MEDIUM RIGHT-POINTING ANGLE BRACKET ORNAMENT"); \
	genSvg(fontname, "0x276E", "HEAVY LEFT-POINTING ANGLE QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x276F", "HEAVY RIGHT-POINTING ANGLE QUOTATION MARK ORNAMENT"); \
	genSvg(fontname, "0x2770", "HEAVY LEFT-POINTING ANGLE BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2771", "HEAVY RIGHT-POINTING ANGLE BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2772", "LIGHT LEFT TORTOISE SHELL BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2773", "LIGHT RIGHT TORTOISE SHELL BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2774", "MEDIUM LEFT CURLY BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2775", "MEDIUM RIGHT CURLY BRACKET ORNAMENT"); \
	genSvg(fontname, "0x2776", "DINGBAT NEGATIVE CIRCLED DIGIT ONE"); \
	genSvg(fontname, "0x2777", "DINGBAT NEGATIVE CIRCLED DIGIT TWO"); \
	genSvg(fontname, "0x2778", "DINGBAT NEGATIVE CIRCLED DIGIT THREE"); \
	genSvg(fontname, "0x2779", "DINGBAT NEGATIVE CIRCLED DIGIT FOUR"); \
	genSvg(fontname, "0x277A", "DINGBAT NEGATIVE CIRCLED DIGIT FIVE"); \
	genSvg(fontname, "0x277B", "DINGBAT NEGATIVE CIRCLED DIGIT SIX"); \
	genSvg(fontname, "0x277C", "DINGBAT NEGATIVE CIRCLED DIGIT SEVEN"); \
	genSvg(fontname, "0x277D", "DINGBAT NEGATIVE CIRCLED DIGIT EIGHT"); \
	genSvg(fontname, "0x277E", "DINGBAT NEGATIVE CIRCLED DIGIT NINE"); \
	genSvg(fontname, "0x277F", "DINGBAT NEGATIVE CIRCLED NUMBER TEN"); \
	genSvg(fontname, "0x2780", "DINGBAT CIRCLED SANS-SERIF DIGIT ONE"); \
	genSvg(fontname, "0x2781", "DINGBAT CIRCLED SANS-SERIF DIGIT TWO"); \
	genSvg(fontname, "0x2782", "DINGBAT CIRCLED SANS-SERIF DIGIT THREE"); \
	genSvg(fontname, "0x2783", "DINGBAT CIRCLED SANS-SERIF DIGIT FOUR"); \
	genSvg(fontname, "0x2784", "DINGBAT CIRCLED SANS-SERIF DIGIT FIVE"); \
	genSvg(fontname, "0x2785", "DINGBAT CIRCLED SANS-SERIF DIGIT SIX"); \
	genSvg(fontname, "0x2786", "DINGBAT CIRCLED SANS-SERIF DIGIT SEVEN"); \
	genSvg(fontname, "0x2787", "DINGBAT CIRCLED SANS-SERIF DIGIT EIGHT"); \
	genSvg(fontname, "0x2788", "DINGBAT CIRCLED SANS-SERIF DIGIT NINE"); \
	genSvg(fontname, "0x2789", "DINGBAT CIRCLED SANS-SERIF NUMBER TEN"); \
	genSvg(fontname, "0x278A", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT ONE"); \
	genSvg(fontname, "0x278B", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT TWO"); \
	genSvg(fontname, "0x278C", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT THREE"); \
	genSvg(fontname, "0x278D", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT FOUR"); \
	genSvg(fontname, "0x278E", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT FIVE"); \
	genSvg(fontname, "0x278F", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT SIX"); \
	genSvg(fontname, "0x2790", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT SEVEN"); \
	genSvg(fontname, "0x2791", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT EIGHT"); \
	genSvg(fontname, "0x2792", "DINGBAT NEGATIVE CIRCLED SANS-SERIF DIGIT NINE"); \
	genSvg(fontname, "0x2793", "DINGBAT NEGATIVE CIRCLED SANS-SERIF NUMBER TEN"); \
	genSvg(fontname, "0x2794", "HEAVY WIDE-HEADED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x2795", "HEAVY PLUS SIGN"); \
	genSvg(fontname, "0x2796", "HEAVY MINUS SIGN"); \
	genSvg(fontname, "0x2797", "HEAVY DIVISION SIGN"); \
	genSvg(fontname, "0x2798", "HEAVY SOUTH EAST ARROW"); \
	genSvg(fontname, "0x2799", "HEAVY RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x279A", "HEAVY NORTH EAST ARROW"); \
	genSvg(fontname, "0x279B", "DRAFTING POINT RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x279C", "HEAVY ROUND-TIPPED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x279D", "TRIANGLE-HEADED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x279E", "HEAVY TRIANGLE-HEADED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x279F", "DASHED TRIANGLE-HEADED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A0", "HEAVY DASHED TRIANGLE-HEADED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A1", "BLACK RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A2", "THREE-D TOP-LIGHTED RIGHTWARDS ARROWHEAD"); \
	genSvg(fontname, "0x27A3", "THREE-D BOTTOM-LIGHTED RIGHTWARDS ARROWHEAD"); \
	genSvg(fontname, "0x27A4", "BLACK RIGHTWARDS ARROWHEAD"); \
	genSvg(fontname, "0x27A5", "HEAVY BLACK CURVED DOWNWARDS AND RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A6", "HEAVY BLACK CURVED UPWARDS AND RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A7", "SQUAT BLACK RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A8", "HEAVY CONCAVE-POINTED BLACK RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27A9", "RIGHT-SHADED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AA", "LEFT-SHADED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AB", "BACK-TILTED SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AC", "FRONT-TILTED SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AD", "HEAVY LOWER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AE", "HEAVY UPPER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27AF", "NOTCHED LOWER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B0", "CURLY LOOP"); \
	genSvg(fontname, "0x27B1", "NOTCHED UPPER RIGHT-SHADOWED WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B2", "CIRCLED HEAVY WHITE RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B3", "WHITE-FEATHERED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B4", "BLACK-FEATHERED SOUTH EAST ARROW"); \
	genSvg(fontname, "0x27B5", "BLACK-FEATHERED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B6", "BLACK-FEATHERED NORTH EAST ARROW"); \
	genSvg(fontname, "0x27B7", "HEAVY BLACK-FEATHERED SOUTH EAST ARROW"); \
	genSvg(fontname, "0x27B8", "HEAVY BLACK-FEATHERED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27B9", "HEAVY BLACK-FEATHERED NORTH EAST ARROW"); \
	genSvg(fontname, "0x27BA", "TEARDROP-BARBED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27BB", "HEAVY TEARDROP-SHANKED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27BC", "WEDGE-TAILED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27BD", "HEAVY WEDGE-TAILED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27BE", "OPEN-OUTLINED RIGHTWARDS ARROW"); \
	genSvg(fontname, "0x27BF", "DOUBLE CURLY LOOP");

#define BRAILLE_PATTERNS \
	genSvg(fontname, "0x2800", "BRAILLE PATTERN BLANK"); \
	genSvg(fontname, "0x2801", "BRAILLE PATTERN DOTS-1"); \
	genSvg(fontname, "0x2802", "BRAILLE PATTERN DOTS-2"); \
	genSvg(fontname, "0x2803", "BRAILLE PATTERN DOTS-12"); \
	genSvg(fontname, "0x2804", "BRAILLE PATTERN DOTS-3"); \
	genSvg(fontname, "0x2805", "BRAILLE PATTERN DOTS-13"); \
	genSvg(fontname, "0x2806", "BRAILLE PATTERN DOTS-23"); \
	genSvg(fontname, "0x2807", "BRAILLE PATTERN DOTS-123"); \
	genSvg(fontname, "0x2808", "BRAILLE PATTERN DOTS-4"); \
	genSvg(fontname, "0x2809", "BRAILLE PATTERN DOTS-14"); \
	genSvg(fontname, "0x280A", "BRAILLE PATTERN DOTS-24"); \
	genSvg(fontname, "0x280B", "BRAILLE PATTERN DOTS-124"); \
	genSvg(fontname, "0x280C", "BRAILLE PATTERN DOTS-34"); \
	genSvg(fontname, "0x280D", "BRAILLE PATTERN DOTS-134"); \
	genSvg(fontname, "0x280E", "BRAILLE PATTERN DOTS-234"); \
	genSvg(fontname, "0x280F", "BRAILLE PATTERN DOTS-1234"); \
	genSvg(fontname, "0x2810", "BRAILLE PATTERN DOTS-5"); \
	genSvg(fontname, "0x2811", "BRAILLE PATTERN DOTS-15"); \
	genSvg(fontname, "0x2812", "BRAILLE PATTERN DOTS-25"); \
	genSvg(fontname, "0x2813", "BRAILLE PATTERN DOTS-125"); \
	genSvg(fontname, "0x2814", "BRAILLE PATTERN DOTS-35"); \
	genSvg(fontname, "0x2815", "BRAILLE PATTERN DOTS-135"); \
	genSvg(fontname, "0x2816", "BRAILLE PATTERN DOTS-235"); \
	genSvg(fontname, "0x2817", "BRAILLE PATTERN DOTS-1235"); \
	genSvg(fontname, "0x2818", "BRAILLE PATTERN DOTS-45"); \
	genSvg(fontname, "0x2819", "BRAILLE PATTERN DOTS-145"); \
	genSvg(fontname, "0x281A", "BRAILLE PATTERN DOTS-245"); \
	genSvg(fontname, "0x281B", "BRAILLE PATTERN DOTS-1245"); \
	genSvg(fontname, "0x281C", "BRAILLE PATTERN DOTS-345"); \
	genSvg(fontname, "0x281D", "BRAILLE PATTERN DOTS-1345"); \
	genSvg(fontname, "0x281E", "BRAILLE PATTERN DOTS-2345"); \
	genSvg(fontname, "0x281F", "BRAILLE PATTERN DOTS-12345"); \
	genSvg(fontname, "0x2820", "BRAILLE PATTERN DOTS-6"); \
	genSvg(fontname, "0x2821", "BRAILLE PATTERN DOTS-16"); \
	genSvg(fontname, "0x2822", "BRAILLE PATTERN DOTS-26"); \
	genSvg(fontname, "0x2823", "BRAILLE PATTERN DOTS-126"); \
	genSvg(fontname, "0x2824", "BRAILLE PATTERN DOTS-36"); \
	genSvg(fontname, "0x2825", "BRAILLE PATTERN DOTS-136"); \
	genSvg(fontname, "0x2826", "BRAILLE PATTERN DOTS-236"); \
	genSvg(fontname, "0x2827", "BRAILLE PATTERN DOTS-1236"); \
	genSvg(fontname, "0x2828", "BRAILLE PATTERN DOTS-46"); \
	genSvg(fontname, "0x2829", "BRAILLE PATTERN DOTS-146"); \
	genSvg(fontname, "0x282A", "BRAILLE PATTERN DOTS-246"); \
	genSvg(fontname, "0x282B", "BRAILLE PATTERN DOTS-1246"); \
	genSvg(fontname, "0x282C", "BRAILLE PATTERN DOTS-346"); \
	genSvg(fontname, "0x282D", "BRAILLE PATTERN DOTS-1346"); \
	genSvg(fontname, "0x282E", "BRAILLE PATTERN DOTS-2346"); \
	genSvg(fontname, "0x282F", "BRAILLE PATTERN DOTS-12346"); \
	genSvg(fontname, "0x2830", "BRAILLE PATTERN DOTS-56"); \
	genSvg(fontname, "0x2831", "BRAILLE PATTERN DOTS-156"); \
	genSvg(fontname, "0x2832", "BRAILLE PATTERN DOTS-256"); \
	genSvg(fontname, "0x2833", "BRAILLE PATTERN DOTS-1256"); \
	genSvg(fontname, "0x2834", "BRAILLE PATTERN DOTS-356"); \
	genSvg(fontname, "0x2835", "BRAILLE PATTERN DOTS-1356"); \
	genSvg(fontname, "0x2836", "BRAILLE PATTERN DOTS-2356"); \
	genSvg(fontname, "0x2837", "BRAILLE PATTERN DOTS-12356"); \
	genSvg(fontname, "0x2838", "BRAILLE PATTERN DOTS-456"); \
	genSvg(fontname, "0x2839", "BRAILLE PATTERN DOTS-1456"); \
	genSvg(fontname, "0x283A", "BRAILLE PATTERN DOTS-2456"); \
	genSvg(fontname, "0x283B", "BRAILLE PATTERN DOTS-12456"); \
	genSvg(fontname, "0x283C", "BRAILLE PATTERN DOTS-3456"); \
	genSvg(fontname, "0x283D", "BRAILLE PATTERN DOTS-13456"); \
	genSvg(fontname, "0x283E", "BRAILLE PATTERN DOTS-23456"); \
	genSvg(fontname, "0x283F", "BRAILLE PATTERN DOTS-123456"); \
	genSvg(fontname, "0x2840", "BRAILLE PATTERN DOTS-7"); \
	genSvg(fontname, "0x2841", "BRAILLE PATTERN DOTS-17"); \
	genSvg(fontname, "0x2842", "BRAILLE PATTERN DOTS-27"); \
	genSvg(fontname, "0x2843", "BRAILLE PATTERN DOTS-127"); \
	genSvg(fontname, "0x2844", "BRAILLE PATTERN DOTS-37"); \
	genSvg(fontname, "0x2845", "BRAILLE PATTERN DOTS-137"); \
	genSvg(fontname, "0x2846", "BRAILLE PATTERN DOTS-237"); \
	genSvg(fontname, "0x2847", "BRAILLE PATTERN DOTS-1237"); \
	genSvg(fontname, "0x2848", "BRAILLE PATTERN DOTS-47"); \
	genSvg(fontname, "0x2849", "BRAILLE PATTERN DOTS-147"); \
	genSvg(fontname, "0x284A", "BRAILLE PATTERN DOTS-247"); \
	genSvg(fontname, "0x284B", "BRAILLE PATTERN DOTS-1247"); \
	genSvg(fontname, "0x284C", "BRAILLE PATTERN DOTS-347"); \
	genSvg(fontname, "0x284D", "BRAILLE PATTERN DOTS-1347"); \
	genSvg(fontname, "0x284E", "BRAILLE PATTERN DOTS-2347"); \
	genSvg(fontname, "0x284F", "BRAILLE PATTERN DOTS-12347"); \
	genSvg(fontname, "0x2850", "BRAILLE PATTERN DOTS-57"); \
	genSvg(fontname, "0x2851", "BRAILLE PATTERN DOTS-157"); \
	genSvg(fontname, "0x2852", "BRAILLE PATTERN DOTS-257"); \
	genSvg(fontname, "0x2853", "BRAILLE PATTERN DOTS-1257"); \
	genSvg(fontname, "0x2854", "BRAILLE PATTERN DOTS-357"); \
	genSvg(fontname, "0x2855", "BRAILLE PATTERN DOTS-1357"); \
	genSvg(fontname, "0x2856", "BRAILLE PATTERN DOTS-2357"); \
	genSvg(fontname, "0x2857", "BRAILLE PATTERN DOTS-12357"); \
	genSvg(fontname, "0x2858", "BRAILLE PATTERN DOTS-457"); \
	genSvg(fontname, "0x2859", "BRAILLE PATTERN DOTS-1457"); \
	genSvg(fontname, "0x285A", "BRAILLE PATTERN DOTS-2457"); \
	genSvg(fontname, "0x285B", "BRAILLE PATTERN DOTS-12457"); \
	genSvg(fontname, "0x285C", "BRAILLE PATTERN DOTS-3457"); \
	genSvg(fontname, "0x285D", "BRAILLE PATTERN DOTS-13457"); \
	genSvg(fontname, "0x285E", "BRAILLE PATTERN DOTS-23457"); \
	genSvg(fontname, "0x285F", "BRAILLE PATTERN DOTS-123457"); \
	genSvg(fontname, "0x2860", "BRAILLE PATTERN DOTS-67"); \
	genSvg(fontname, "0x2861", "BRAILLE PATTERN DOTS-167"); \
	genSvg(fontname, "0x2862", "BRAILLE PATTERN DOTS-267"); \
	genSvg(fontname, "0x2863", "BRAILLE PATTERN DOTS-1267"); \
	genSvg(fontname, "0x2864", "BRAILLE PATTERN DOTS-367"); \
	genSvg(fontname, "0x2865", "BRAILLE PATTERN DOTS-1367"); \
	genSvg(fontname, "0x2866", "BRAILLE PATTERN DOTS-2367"); \
	genSvg(fontname, "0x2867", "BRAILLE PATTERN DOTS-12367"); \
	genSvg(fontname, "0x2868", "BRAILLE PATTERN DOTS-467"); \
	genSvg(fontname, "0x2869", "BRAILLE PATTERN DOTS-1467"); \
	genSvg(fontname, "0x286A", "BRAILLE PATTERN DOTS-2467"); \
	genSvg(fontname, "0x286B", "BRAILLE PATTERN DOTS-12467"); \
	genSvg(fontname, "0x286C", "BRAILLE PATTERN DOTS-3467"); \
	genSvg(fontname, "0x286D", "BRAILLE PATTERN DOTS-13467"); \
	genSvg(fontname, "0x286E", "BRAILLE PATTERN DOTS-23467"); \
	genSvg(fontname, "0x286F", "BRAILLE PATTERN DOTS-123467"); \
	genSvg(fontname, "0x2870", "BRAILLE PATTERN DOTS-567"); \
	genSvg(fontname, "0x2871", "BRAILLE PATTERN DOTS-1567"); \
	genSvg(fontname, "0x2872", "BRAILLE PATTERN DOTS-2567"); \
	genSvg(fontname, "0x2873", "BRAILLE PATTERN DOTS-12567"); \
	genSvg(fontname, "0x2874", "BRAILLE PATTERN DOTS-3567"); \
	genSvg(fontname, "0x2875", "BRAILLE PATTERN DOTS-13567"); \
	genSvg(fontname, "0x2876", "BRAILLE PATTERN DOTS-23567"); \
	genSvg(fontname, "0x2877", "BRAILLE PATTERN DOTS-123567"); \
	genSvg(fontname, "0x2878", "BRAILLE PATTERN DOTS-4567"); \
	genSvg(fontname, "0x2879", "BRAILLE PATTERN DOTS-14567"); \
	genSvg(fontname, "0x287A", "BRAILLE PATTERN DOTS-24567"); \
	genSvg(fontname, "0x287B", "BRAILLE PATTERN DOTS-124567"); \
	genSvg(fontname, "0x287C", "BRAILLE PATTERN DOTS-34567"); \
	genSvg(fontname, "0x287D", "BRAILLE PATTERN DOTS-134567"); \
	genSvg(fontname, "0x287E", "BRAILLE PATTERN DOTS-234567"); \
	genSvg(fontname, "0x287F", "BRAILLE PATTERN DOTS-1234567"); \
	genSvg(fontname, "0x2880", "BRAILLE PATTERN DOTS-8"); \
	genSvg(fontname, "0x2881", "BRAILLE PATTERN DOTS-18"); \
	genSvg(fontname, "0x2882", "BRAILLE PATTERN DOTS-28"); \
	genSvg(fontname, "0x2883", "BRAILLE PATTERN DOTS-128"); \
	genSvg(fontname, "0x2884", "BRAILLE PATTERN DOTS-38"); \
	genSvg(fontname, "0x2885", "BRAILLE PATTERN DOTS-138"); \
	genSvg(fontname, "0x2886", "BRAILLE PATTERN DOTS-238"); \
	genSvg(fontname, "0x2887", "BRAILLE PATTERN DOTS-1238"); \
	genSvg(fontname, "0x2888", "BRAILLE PATTERN DOTS-48"); \
	genSvg(fontname, "0x2889", "BRAILLE PATTERN DOTS-148"); \
	genSvg(fontname, "0x288A", "BRAILLE PATTERN DOTS-248"); \
	genSvg(fontname, "0x288B", "BRAILLE PATTERN DOTS-1248"); \
	genSvg(fontname, "0x288C", "BRAILLE PATTERN DOTS-348"); \
	genSvg(fontname, "0x288D", "BRAILLE PATTERN DOTS-1348"); \
	genSvg(fontname, "0x288E", "BRAILLE PATTERN DOTS-2348"); \
	genSvg(fontname, "0x288F", "BRAILLE PATTERN DOTS-12348"); \
	genSvg(fontname, "0x2890", "BRAILLE PATTERN DOTS-58"); \
	genSvg(fontname, "0x2891", "BRAILLE PATTERN DOTS-158"); \
	genSvg(fontname, "0x2892", "BRAILLE PATTERN DOTS-258"); \
	genSvg(fontname, "0x2893", "BRAILLE PATTERN DOTS-1258"); \
	genSvg(fontname, "0x2894", "BRAILLE PATTERN DOTS-358"); \
	genSvg(fontname, "0x2895", "BRAILLE PATTERN DOTS-1358"); \
	genSvg(fontname, "0x2896", "BRAILLE PATTERN DOTS-2358"); \
	genSvg(fontname, "0x2897", "BRAILLE PATTERN DOTS-12358"); \
	genSvg(fontname, "0x2898", "BRAILLE PATTERN DOTS-458"); \
	genSvg(fontname, "0x2899", "BRAILLE PATTERN DOTS-1458"); \
	genSvg(fontname, "0x289A", "BRAILLE PATTERN DOTS-2458"); \
	genSvg(fontname, "0x289B", "BRAILLE PATTERN DOTS-12458"); \
	genSvg(fontname, "0x289C", "BRAILLE PATTERN DOTS-3458"); \
	genSvg(fontname, "0x289D", "BRAILLE PATTERN DOTS-13458"); \
	genSvg(fontname, "0x289E", "BRAILLE PATTERN DOTS-23458"); \
	genSvg(fontname, "0x289F", "BRAILLE PATTERN DOTS-123458"); \
	genSvg(fontname, "0x28A0", "BRAILLE PATTERN DOTS-68"); \
	genSvg(fontname, "0x28A1", "BRAILLE PATTERN DOTS-168"); \
	genSvg(fontname, "0x28A2", "BRAILLE PATTERN DOTS-268"); \
	genSvg(fontname, "0x28A3", "BRAILLE PATTERN DOTS-1268"); \
	genSvg(fontname, "0x28A4", "BRAILLE PATTERN DOTS-368"); \
	genSvg(fontname, "0x28A5", "BRAILLE PATTERN DOTS-1368"); \
	genSvg(fontname, "0x28A6", "BRAILLE PATTERN DOTS-2368"); \
	genSvg(fontname, "0x28A7", "BRAILLE PATTERN DOTS-12368"); \
	genSvg(fontname, "0x28A8", "BRAILLE PATTERN DOTS-468"); \
	genSvg(fontname, "0x28A9", "BRAILLE PATTERN DOTS-1468"); \
	genSvg(fontname, "0x28AA", "BRAILLE PATTERN DOTS-2468"); \
	genSvg(fontname, "0x28AB", "BRAILLE PATTERN DOTS-12468"); \
	genSvg(fontname, "0x28AC", "BRAILLE PATTERN DOTS-3468"); \
	genSvg(fontname, "0x28AD", "BRAILLE PATTERN DOTS-13468"); \
	genSvg(fontname, "0x28AE", "BRAILLE PATTERN DOTS-23468"); \
	genSvg(fontname, "0x28AF", "BRAILLE PATTERN DOTS-123468"); \
	genSvg(fontname, "0x28B0", "BRAILLE PATTERN DOTS-568"); \
	genSvg(fontname, "0x28B1", "BRAILLE PATTERN DOTS-1568"); \
	genSvg(fontname, "0x28B2", "BRAILLE PATTERN DOTS-2568"); \
	genSvg(fontname, "0x28B3", "BRAILLE PATTERN DOTS-12568"); \
	genSvg(fontname, "0x28B4", "BRAILLE PATTERN DOTS-3568"); \
	genSvg(fontname, "0x28B5", "BRAILLE PATTERN DOTS-13568"); \
	genSvg(fontname, "0x28B6", "BRAILLE PATTERN DOTS-23568"); \
	genSvg(fontname, "0x28B7", "BRAILLE PATTERN DOTS-123568"); \
	genSvg(fontname, "0x28B8", "BRAILLE PATTERN DOTS-4568"); \
	genSvg(fontname, "0x28B9", "BRAILLE PATTERN DOTS-14568"); \
	genSvg(fontname, "0x28BA", "BRAILLE PATTERN DOTS-24568"); \
	genSvg(fontname, "0x28BB", "BRAILLE PATTERN DOTS-124568"); \
	genSvg(fontname, "0x28BC", "BRAILLE PATTERN DOTS-34568"); \
	genSvg(fontname, "0x28BD", "BRAILLE PATTERN DOTS-134568"); \
	genSvg(fontname, "0x28BE", "BRAILLE PATTERN DOTS-234568"); \
	genSvg(fontname, "0x28BF", "BRAILLE PATTERN DOTS-1234568"); \
	genSvg(fontname, "0x28C0", "BRAILLE PATTERN DOTS-78"); \
	genSvg(fontname, "0x28C1", "BRAILLE PATTERN DOTS-178"); \
	genSvg(fontname, "0x28C2", "BRAILLE PATTERN DOTS-278"); \
	genSvg(fontname, "0x28C3", "BRAILLE PATTERN DOTS-1278"); \
	genSvg(fontname, "0x28C4", "BRAILLE PATTERN DOTS-378"); \
	genSvg(fontname, "0x28C5", "BRAILLE PATTERN DOTS-1378"); \
	genSvg(fontname, "0x28C6", "BRAILLE PATTERN DOTS-2378"); \
	genSvg(fontname, "0x28C7", "BRAILLE PATTERN DOTS-12378"); \
	genSvg(fontname, "0x28C8", "BRAILLE PATTERN DOTS-478"); \
	genSvg(fontname, "0x28C9", "BRAILLE PATTERN DOTS-1478"); \
	genSvg(fontname, "0x28CA", "BRAILLE PATTERN DOTS-2478"); \
	genSvg(fontname, "0x28CB", "BRAILLE PATTERN DOTS-12478"); \
	genSvg(fontname, "0x28CC", "BRAILLE PATTERN DOTS-3478"); \
	genSvg(fontname, "0x28CD", "BRAILLE PATTERN DOTS-13478"); \
	genSvg(fontname, "0x28CE", "BRAILLE PATTERN DOTS-23478"); \
	genSvg(fontname, "0x28CF", "BRAILLE PATTERN DOTS-123478"); \
	genSvg(fontname, "0x28D0", "BRAILLE PATTERN DOTS-578"); \
	genSvg(fontname, "0x28D1", "BRAILLE PATTERN DOTS-1578"); \
	genSvg(fontname, "0x28D2", "BRAILLE PATTERN DOTS-2578"); \
	genSvg(fontname, "0x28D3", "BRAILLE PATTERN DOTS-12578"); \
	genSvg(fontname, "0x28D4", "BRAILLE PATTERN DOTS-3578"); \
	genSvg(fontname, "0x28D5", "BRAILLE PATTERN DOTS-13578"); \
	genSvg(fontname, "0x28D6", "BRAILLE PATTERN DOTS-23578"); \
	genSvg(fontname, "0x28D7", "BRAILLE PATTERN DOTS-123578"); \
	genSvg(fontname, "0x28D8", "BRAILLE PATTERN DOTS-4578"); \
	genSvg(fontname, "0x28D9", "BRAILLE PATTERN DOTS-14578"); \
	genSvg(fontname, "0x28DA", "BRAILLE PATTERN DOTS-24578"); \
	genSvg(fontname, "0x28DB", "BRAILLE PATTERN DOTS-124578"); \
	genSvg(fontname, "0x28DC", "BRAILLE PATTERN DOTS-34578"); \
	genSvg(fontname, "0x28DD", "BRAILLE PATTERN DOTS-134578"); \
	genSvg(fontname, "0x28DE", "BRAILLE PATTERN DOTS-234578"); \
	genSvg(fontname, "0x28DF", "BRAILLE PATTERN DOTS-1234578"); \
	genSvg(fontname, "0x28E0", "BRAILLE PATTERN DOTS-678"); \
	genSvg(fontname, "0x28E1", "BRAILLE PATTERN DOTS-1678"); \
	genSvg(fontname, "0x28E2", "BRAILLE PATTERN DOTS-2678"); \
	genSvg(fontname, "0x28E3", "BRAILLE PATTERN DOTS-12678"); \
	genSvg(fontname, "0x28E4", "BRAILLE PATTERN DOTS-3678"); \
	genSvg(fontname, "0x28E5", "BRAILLE PATTERN DOTS-13678"); \
	genSvg(fontname, "0x28E6", "BRAILLE PATTERN DOTS-23678"); \
	genSvg(fontname, "0x28E7", "BRAILLE PATTERN DOTS-123678"); \
	genSvg(fontname, "0x28E8", "BRAILLE PATTERN DOTS-4678"); \
	genSvg(fontname, "0x28E9", "BRAILLE PATTERN DOTS-14678"); \
	genSvg(fontname, "0x28EA", "BRAILLE PATTERN DOTS-24678"); \
	genSvg(fontname, "0x28EB", "BRAILLE PATTERN DOTS-124678"); \
	genSvg(fontname, "0x28EC", "BRAILLE PATTERN DOTS-34678"); \
	genSvg(fontname, "0x28ED", "BRAILLE PATTERN DOTS-134678"); \
	genSvg(fontname, "0x28EE", "BRAILLE PATTERN DOTS-234678"); \
	genSvg(fontname, "0x28EF", "BRAILLE PATTERN DOTS-1234678"); \
	genSvg(fontname, "0x28F0", "BRAILLE PATTERN DOTS-5678"); \
	genSvg(fontname, "0x28F1", "BRAILLE PATTERN DOTS-15678"); \
	genSvg(fontname, "0x28F2", "BRAILLE PATTERN DOTS-25678"); \
	genSvg(fontname, "0x28F3", "BRAILLE PATTERN DOTS-125678"); \
	genSvg(fontname, "0x28F4", "BRAILLE PATTERN DOTS-35678"); \
	genSvg(fontname, "0x28F5", "BRAILLE PATTERN DOTS-135678"); \
	genSvg(fontname, "0x28F6", "BRAILLE PATTERN DOTS-235678"); \
	genSvg(fontname, "0x28F7", "BRAILLE PATTERN DOTS-1235678"); \
	genSvg(fontname, "0x28F8", "BRAILLE PATTERN DOTS-45678"); \
	genSvg(fontname, "0x28F9", "BRAILLE PATTERN DOTS-145678"); \
	genSvg(fontname, "0x28FA", "BRAILLE PATTERN DOTS-245678"); \
	genSvg(fontname, "0x28FB", "BRAILLE PATTERN DOTS-1245678"); \
	genSvg(fontname, "0x28FC", "BRAILLE PATTERN DOTS-345678"); \
	genSvg(fontname, "0x28FD", "BRAILLE PATTERN DOTS-1345678"); \
	genSvg(fontname, "0x28FE", "BRAILLE PATTERN DOTS-2345678"); \
	genSvg(fontname, "0x28FF", "BRAILLE PATTERN DOTS-12345678");

#define MUSICAL_SYMBOLS \
	genSvg(fontname, "0x1D100", "MUSICAL SYMBOL SINGLE BARLINE"); \
	genSvg(fontname, "0x1D101", "MUSICAL SYMBOL DOUBLE BARLINE"); \
	genSvg(fontname, "0x1D102", "MUSICAL SYMBOL FINAL BARLINE"); \
	genSvg(fontname, "0x1D103", "MUSICAL SYMBOL REVERSE FINAL BARLINE"); \
	genSvg(fontname, "0x1D104", "MUSICAL SYMBOL DASHED BARLINE"); \
	genSvg(fontname, "0x1D105", "MUSICAL SYMBOL SHORT BARLINE"); \
	genSvg(fontname, "0x1D106", "MUSICAL SYMBOL LEFT REPEAT SIGN"); \
	genSvg(fontname, "0x1D107", "MUSICAL SYMBOL RIGHT REPEAT SIGN"); \
	genSvg(fontname, "0x1D108", "MUSICAL SYMBOL REPEAT DOTS"); \
	genSvg(fontname, "0x1D109", "MUSICAL SYMBOL DAL SEGNO"); \
	genSvg(fontname, "0x1D10A", "MUSICAL SYMBOL DA CAPO"); \
	genSvg(fontname, "0x1D10B", "MUSICAL SYMBOL SEGNO"); \
	genSvg(fontname, "0x1D10C", "MUSICAL SYMBOL CODA"); \
	genSvg(fontname, "0x1D10D", "MUSICAL SYMBOL REPEATED FIGURE-1"); \
	genSvg(fontname, "0x1D10E", "MUSICAL SYMBOL REPEATED FIGURE-2"); \
	genSvg(fontname, "0x1D10F", "MUSICAL SYMBOL REPEATED FIGURE-3"); \
	genSvg(fontname, "0x1D110", "MUSICAL SYMBOL FERMATA"); \
	genSvg(fontname, "0x1D111", "MUSICAL SYMBOL FERMATA BELOW"); \
	genSvg(fontname, "0x1D112", "MUSICAL SYMBOL BREATH MARK"); \
	genSvg(fontname, "0x1D113", "MUSICAL SYMBOL CAESURA"); \
	genSvg(fontname, "0x1D114", "MUSICAL SYMBOL BRACE"); \
	genSvg(fontname, "0x1D115", "MUSICAL SYMBOL BRACKET"); \
	genSvg(fontname, "0x1D116", "MUSICAL SYMBOL ONE-LINE STAFF"); \
	genSvg(fontname, "0x1D117", "MUSICAL SYMBOL TWO-LINE STAFF"); \
	genSvg(fontname, "0x1D118", "MUSICAL SYMBOL THREE-LINE STAFF"); \
	genSvg(fontname, "0x1D119", "MUSICAL SYMBOL FOUR-LINE STAFF"); \
	genSvg(fontname, "0x1D11A", "MUSICAL SYMBOL FIVE-LINE STAFF"); \
	genSvg(fontname, "0x1D11B", "MUSICAL SYMBOL SIX-LINE STAFF"); \
	genSvg(fontname, "0x1D11C", "MUSICAL SYMBOL SIX-STRING FRETBOARD"); \
	genSvg(fontname, "0x1D11D", "MUSICAL SYMBOL FOUR-STRING FRETBOARD"); \
	genSvg(fontname, "0x1D11E", "MUSICAL SYMBOL G CLEF"); \
	genSvg(fontname, "0x1D11F", "MUSICAL SYMBOL G CLEF OTTAVA ALTA"); \
	genSvg(fontname, "0x1D120", "MUSICAL SYMBOL G CLEF OTTAVA BASSA"); \
	genSvg(fontname, "0x1D121", "MUSICAL SYMBOL C CLEF"); \
	genSvg(fontname, "0x1D122", "MUSICAL SYMBOL F CLEF"); \
	genSvg(fontname, "0x1D123", "MUSICAL SYMBOL F CLEF OTTAVA ALTA"); \
	genSvg(fontname, "0x1D124", "MUSICAL SYMBOL F CLEF OTTAVA BASSA"); \
	genSvg(fontname, "0x1D125", "MUSICAL SYMBOL DRUM CLEF-1"); \
	genSvg(fontname, "0x1D126", "MUSICAL SYMBOL DRUM CLEF-2"); \
	genSvg(fontname, "0x1D129", "MUSICAL SYMBOL MULTIPLE MEASURE REST"); \
	genSvg(fontname, "0x1D12A", "MUSICAL SYMBOL DOUBLE SHARP"); \
	genSvg(fontname, "0x1D12B", "MUSICAL SYMBOL DOUBLE FLAT"); \
	genSvg(fontname, "0x1D12C", "MUSICAL SYMBOL FLAT UP"); \
	genSvg(fontname, "0x1D12D", "MUSICAL SYMBOL FLAT DOWN"); \
	genSvg(fontname, "0x1D12E", "MUSICAL SYMBOL NATURAL UP"); \
	genSvg(fontname, "0x1D12F", "MUSICAL SYMBOL NATURAL DOWN"); \
	genSvg(fontname, "0x1D130", "MUSICAL SYMBOL SHARP UP"); \
	genSvg(fontname, "0x1D131", "MUSICAL SYMBOL SHARP DOWN"); \
	genSvg(fontname, "0x1D132", "MUSICAL SYMBOL QUARTER TONE SHARP"); \
	genSvg(fontname, "0x1D133", "MUSICAL SYMBOL QUARTER TONE FLAT"); \
	genSvg(fontname, "0x1D134", "MUSICAL SYMBOL COMMON TIME"); \
	genSvg(fontname, "0x1D135", "MUSICAL SYMBOL CUT TIME"); \
	genSvg(fontname, "0x1D136", "MUSICAL SYMBOL OTTAVA ALTA"); \
	genSvg(fontname, "0x1D137", "MUSICAL SYMBOL OTTAVA BASSA"); \
	genSvg(fontname, "0x1D138", "MUSICAL SYMBOL QUINDICESIMA ALTA"); \
	genSvg(fontname, "0x1D139", "MUSICAL SYMBOL QUINDICESIMA BASSA"); \
	genSvg(fontname, "0x1D13A", "MUSICAL SYMBOL MULTI REST"); \
	genSvg(fontname, "0x1D13B", "MUSICAL SYMBOL WHOLE REST"); \
	genSvg(fontname, "0x1D13C", "MUSICAL SYMBOL HALF REST"); \
	genSvg(fontname, "0x1D13D", "MUSICAL SYMBOL QUARTER REST"); \
	genSvg(fontname, "0x1D13E", "MUSICAL SYMBOL EIGHTH REST"); \
	genSvg(fontname, "0x1D13F", "MUSICAL SYMBOL SIXTEENTH REST"); \
	genSvg(fontname, "0x1D140", "MUSICAL SYMBOL THIRTY-SECOND REST"); \
	genSvg(fontname, "0x1D141", "MUSICAL SYMBOL SIXTY-FOURTH REST"); \
	genSvg(fontname, "0x1D142", "MUSICAL SYMBOL ONE HUNDRED TWENTY-EIGHTH REST"); \
	genSvg(fontname, "0x1D143", "MUSICAL SYMBOL X NOTEHEAD"); \
	genSvg(fontname, "0x1D144", "MUSICAL SYMBOL PLUS NOTEHEAD"); \
	genSvg(fontname, "0x1D145", "MUSICAL SYMBOL CIRCLE X NOTEHEAD"); \
	genSvg(fontname, "0x1D146", "MUSICAL SYMBOL SQUARE NOTEHEAD WHITE"); \
	genSvg(fontname, "0x1D147", "MUSICAL SYMBOL SQUARE NOTEHEAD BLACK"); \
	genSvg(fontname, "0x1D148", "MUSICAL SYMBOL TRIANGLE NOTEHEAD UP WHITE"); \
	genSvg(fontname, "0x1D149", "MUSICAL SYMBOL TRIANGLE NOTEHEAD UP BLACK"); \
	genSvg(fontname, "0x1D14A", "MUSICAL SYMBOL TRIANGLE NOTEHEAD LEFT WHITE"); \
	genSvg(fontname, "0x1D14B", "MUSICAL SYMBOL TRIANGLE NOTEHEAD LEFT BLACK"); \
	genSvg(fontname, "0x1D14C", "MUSICAL SYMBOL TRIANGLE NOTEHEAD RIGHT WHITE"); \
	genSvg(fontname, "0x1D14D", "MUSICAL SYMBOL TRIANGLE NOTEHEAD RIGHT BLACK"); \
	genSvg(fontname, "0x1D14E", "MUSICAL SYMBOL TRIANGLE NOTEHEAD DOWN WHITE"); \
	genSvg(fontname, "0x1D14F", "MUSICAL SYMBOL TRIANGLE NOTEHEAD DOWN BLACK"); \
	genSvg(fontname, "0x1D150", "MUSICAL SYMBOL TRIANGLE NOTEHEAD UP RIGHT WHITE"); \
	genSvg(fontname, "0x1D151", "MUSICAL SYMBOL TRIANGLE NOTEHEAD UP RIGHT BLACK"); \
	genSvg(fontname, "0x1D152", "MUSICAL SYMBOL MOON NOTEHEAD WHITE"); \
	genSvg(fontname, "0x1D153", "MUSICAL SYMBOL MOON NOTEHEAD BLACK"); \
	genSvg(fontname, "0x1D154", "MUSICAL SYMBOL TRIANGLE-ROUND NOTEHEAD DOWN WHITE"); \
	genSvg(fontname, "0x1D155", "MUSICAL SYMBOL TRIANGLE-ROUND NOTEHEAD DOWN BLACK"); \
	genSvg(fontname, "0x1D156", "MUSICAL SYMBOL PARENTHESIS NOTEHEAD"); \
	genSvg(fontname, "0x1D157", "MUSICAL SYMBOL VOID NOTEHEAD"); \
	genSvg(fontname, "0x1D158", "MUSICAL SYMBOL NOTEHEAD BLACK"); \
	genSvg(fontname, "0x1D159", "MUSICAL SYMBOL NULL NOTEHEAD"); \
	genSvg(fontname, "0x1D15A", "MUSICAL SYMBOL CLUSTER NOTEHEAD WHITE"); \
	genSvg(fontname, "0x1D15B", "MUSICAL SYMBOL CLUSTER NOTEHEAD BLACK"); \
	genSvg(fontname, "0x1D15C", "MUSICAL SYMBOL BREVE"); \
	genSvg(fontname, "0x1D15D", "MUSICAL SYMBOL WHOLE NOTE"); \
	genSvg(fontname, "0x1D15E", "MUSICAL SYMBOL HALF NOTE"); \
	genSvg(fontname, "0x1D15F", "MUSICAL SYMBOL QUARTER NOTE"); \
	genSvg(fontname, "0x1D160", "MUSICAL SYMBOL EIGHTH NOTE"); \
	genSvg(fontname, "0x1D161", "MUSICAL SYMBOL SIXTEENTH NOTE"); \
	genSvg(fontname, "0x1D162", "MUSICAL SYMBOL THIRTY-SECOND NOTE"); \
	genSvg(fontname, "0x1D163", "MUSICAL SYMBOL SIXTY-FOURTH NOTE"); \
	genSvg(fontname, "0x1D164", "MUSICAL SYMBOL ONE HUNDRED TWENTY-EIGHTH NOTE"); \
	genSvg(fontname, "0x1D165", "MUSICAL SYMBOL COMBINING STEM"); \
	genSvg(fontname, "0x1D166", "MUSICAL SYMBOL COMBINING SPRECHGESANG STEM"); \
	genSvg(fontname, "0x1D167", "MUSICAL SYMBOL COMBINING TREMOLO-1"); \
	genSvg(fontname, "0x1D168", "MUSICAL SYMBOL COMBINING TREMOLO-2"); \
	genSvg(fontname, "0x1D169", "MUSICAL SYMBOL COMBINING TREMOLO-3"); \
	genSvg(fontname, "0x1D16A", "MUSICAL SYMBOL FINGERED TREMOLO-1"); \
	genSvg(fontname, "0x1D16B", "MUSICAL SYMBOL FINGERED TREMOLO-2"); \
	genSvg(fontname, "0x1D16C", "MUSICAL SYMBOL FINGERED TREMOLO-3"); \
	genSvg(fontname, "0x1D16D", "MUSICAL SYMBOL COMBINING AUGMENTATION DOT"); \
	genSvg(fontname, "0x1D16E", "MUSICAL SYMBOL COMBINING FLAG-1"); \
	genSvg(fontname, "0x1D16F", "MUSICAL SYMBOL COMBINING FLAG-2"); \
	genSvg(fontname, "0x1D170", "MUSICAL SYMBOL COMBINING FLAG-3"); \
	genSvg(fontname, "0x1D171", "MUSICAL SYMBOL COMBINING FLAG-4"); \
	genSvg(fontname, "0x1D172", "MUSICAL SYMBOL COMBINING FLAG-5"); \
	genSvg(fontname, "0x1D173", "MUSICAL SYMBOL BEGIN BEAM"); \
	genSvg(fontname, "0x1D174", "MUSICAL SYMBOL END BEAM"); \
	genSvg(fontname, "0x1D175", "MUSICAL SYMBOL BEGIN TIE"); \
	genSvg(fontname, "0x1D176", "MUSICAL SYMBOL END TIE"); \
	genSvg(fontname, "0x1D177", "MUSICAL SYMBOL BEGIN SLUR"); \
	genSvg(fontname, "0x1D178", "MUSICAL SYMBOL END SLUR"); \
	genSvg(fontname, "0x1D179", "MUSICAL SYMBOL BEGIN PHRASE"); \
	genSvg(fontname, "0x1D17A", "MUSICAL SYMBOL END PHRASE"); \
	genSvg(fontname, "0x1D17B", "MUSICAL SYMBOL COMBINING ACCENT"); \
	genSvg(fontname, "0x1D17C", "MUSICAL SYMBOL COMBINING STACCATO"); \
	genSvg(fontname, "0x1D17D", "MUSICAL SYMBOL COMBINING TENUTO"); \
	genSvg(fontname, "0x1D17E", "MUSICAL SYMBOL COMBINING STACCATISSIMO"); \
	genSvg(fontname, "0x1D17F", "MUSICAL SYMBOL COMBINING MARCATO"); \
	genSvg(fontname, "0x1D180", "MUSICAL SYMBOL COMBINING MARCATO-STACCATO"); \
	genSvg(fontname, "0x1D181", "MUSICAL SYMBOL COMBINING ACCENT-STACCATO"); \
	genSvg(fontname, "0x1D182", "MUSICAL SYMBOL COMBINING LOURE"); \
	genSvg(fontname, "0x1D183", "MUSICAL SYMBOL ARPEGGIATO UP"); \
	genSvg(fontname, "0x1D184", "MUSICAL SYMBOL ARPEGGIATO DOWN"); \
	genSvg(fontname, "0x1D185", "MUSICAL SYMBOL COMBINING DOIT"); \
	genSvg(fontname, "0x1D186", "MUSICAL SYMBOL COMBINING RIP"); \
	genSvg(fontname, "0x1D187", "MUSICAL SYMBOL COMBINING FLIP"); \
	genSvg(fontname, "0x1D188", "MUSICAL SYMBOL COMBINING SMEAR"); \
	genSvg(fontname, "0x1D189", "MUSICAL SYMBOL COMBINING BEND"); \
	genSvg(fontname, "0x1D18A", "MUSICAL SYMBOL COMBINING DOUBLE TONGUE"); \
	genSvg(fontname, "0x1D18B", "MUSICAL SYMBOL COMBINING TRIPLE TONGUE"); \
	genSvg(fontname, "0x1D18C", "MUSICAL SYMBOL RINFORZANDO"); \
	genSvg(fontname, "0x1D18D", "MUSICAL SYMBOL SUBITO"); \
	genSvg(fontname, "0x1D18E", "MUSICAL SYMBOL Z"); \
	genSvg(fontname, "0x1D18F", "MUSICAL SYMBOL PIANO"); \
	genSvg(fontname, "0x1D190", "MUSICAL SYMBOL MEZZO"); \
	genSvg(fontname, "0x1D191", "MUSICAL SYMBOL FORTE"); \
	genSvg(fontname, "0x1D192", "MUSICAL SYMBOL CRESCENDO"); \
	genSvg(fontname, "0x1D193", "MUSICAL SYMBOL DECRESCENDO"); \
	genSvg(fontname, "0x1D194", "MUSICAL SYMBOL GRACE NOTE SLASH"); \
	genSvg(fontname, "0x1D195", "MUSICAL SYMBOL GRACE NOTE NO SLASH"); \
	genSvg(fontname, "0x1D196", "MUSICAL SYMBOL TR"); \
	genSvg(fontname, "0x1D197", "MUSICAL SYMBOL TURN"); \
	genSvg(fontname, "0x1D198", "MUSICAL SYMBOL INVERTED TURN"); \
	genSvg(fontname, "0x1D199", "MUSICAL SYMBOL TURN SLASH"); \
	genSvg(fontname, "0x1D19A", "MUSICAL SYMBOL TURN UP"); \
	genSvg(fontname, "0x1D19B", "MUSICAL SYMBOL ORNAMENT STROKE-1"); \
	genSvg(fontname, "0x1D19C", "MUSICAL SYMBOL ORNAMENT STROKE-2"); \
	genSvg(fontname, "0x1D19D", "MUSICAL SYMBOL ORNAMENT STROKE-3"); \
	genSvg(fontname, "0x1D19E", "MUSICAL SYMBOL ORNAMENT STROKE-4"); \
	genSvg(fontname, "0x1D19F", "MUSICAL SYMBOL ORNAMENT STROKE-5"); \
	genSvg(fontname, "0x1D1A0", "MUSICAL SYMBOL ORNAMENT STROKE-6"); \
	genSvg(fontname, "0x1D1A1", "MUSICAL SYMBOL ORNAMENT STROKE-7"); \
	genSvg(fontname, "0x1D1A2", "MUSICAL SYMBOL ORNAMENT STROKE-8"); \
	genSvg(fontname, "0x1D1A3", "MUSICAL SYMBOL ORNAMENT STROKE-9"); \
	genSvg(fontname, "0x1D1A4", "MUSICAL SYMBOL ORNAMENT STROKE-10"); \
	genSvg(fontname, "0x1D1A5", "MUSICAL SYMBOL ORNAMENT STROKE-11"); \
	genSvg(fontname, "0x1D1A6", "MUSICAL SYMBOL HAUPTSTIMME"); \
	genSvg(fontname, "0x1D1A7", "MUSICAL SYMBOL NEBENSTIMME"); \
	genSvg(fontname, "0x1D1A8", "MUSICAL SYMBOL END OF STIMME"); \
	genSvg(fontname, "0x1D1A9", "MUSICAL SYMBOL DEGREE SLASH"); \
	genSvg(fontname, "0x1D1AA", "MUSICAL SYMBOL COMBINING DOWN BOW"); \
	genSvg(fontname, "0x1D1AB", "MUSICAL SYMBOL COMBINING UP BOW"); \
	genSvg(fontname, "0x1D1AC", "MUSICAL SYMBOL COMBINING HARMONIC"); \
	genSvg(fontname, "0x1D1AD", "MUSICAL SYMBOL COMBINING SNAP PIZZICATO"); \
	genSvg(fontname, "0x1D1AE", "MUSICAL SYMBOL PEDAL MARK"); \
	genSvg(fontname, "0x1D1AF", "MUSICAL SYMBOL PEDAL UP MARK"); \
	genSvg(fontname, "0x1D1B0", "MUSICAL SYMBOL HALF PEDAL MARK"); \
	genSvg(fontname, "0x1D1B1", "MUSICAL SYMBOL GLISSANDO UP"); \
	genSvg(fontname, "0x1D1B2", "MUSICAL SYMBOL GLISSANDO DOWN"); \
	genSvg(fontname, "0x1D1B3", "MUSICAL SYMBOL WITH FINGERNAILS"); \
	genSvg(fontname, "0x1D1B4", "MUSICAL SYMBOL DAMP"); \
	genSvg(fontname, "0x1D1B5", "MUSICAL SYMBOL DAMP ALL"); \
	genSvg(fontname, "0x1D1B6", "MUSICAL SYMBOL MAXIMA"); \
	genSvg(fontname, "0x1D1B7", "MUSICAL SYMBOL LONGA"); \
	genSvg(fontname, "0x1D1B8", "MUSICAL SYMBOL BREVIS"); \
	genSvg(fontname, "0x1D1B9", "MUSICAL SYMBOL SEMIBREVIS WHITE"); \
	genSvg(fontname, "0x1D1BA", "MUSICAL SYMBOL SEMIBREVIS BLACK"); \
	genSvg(fontname, "0x1D1BB", "MUSICAL SYMBOL MINIMA"); \
	genSvg(fontname, "0x1D1BC", "MUSICAL SYMBOL MINIMA BLACK"); \
	genSvg(fontname, "0x1D1BD", "MUSICAL SYMBOL SEMIMINIMA WHITE"); \
	genSvg(fontname, "0x1D1BE", "MUSICAL SYMBOL SEMIMINIMA BLACK"); \
	genSvg(fontname, "0x1D1BF", "MUSICAL SYMBOL FUSA WHITE"); \
	genSvg(fontname, "0x1D1C0", "MUSICAL SYMBOL FUSA BLACK"); \
	genSvg(fontname, "0x1D1C1", "MUSICAL SYMBOL LONGA PERFECTA REST"); \
	genSvg(fontname, "0x1D1C2", "MUSICAL SYMBOL LONGA IMPERFECTA REST"); \
	genSvg(fontname, "0x1D1C3", "MUSICAL SYMBOL BREVIS REST"); \
	genSvg(fontname, "0x1D1C4", "MUSICAL SYMBOL SEMIBREVIS REST"); \
	genSvg(fontname, "0x1D1C5", "MUSICAL SYMBOL MINIMA REST"); \
	genSvg(fontname, "0x1D1C6", "MUSICAL SYMBOL SEMIMINIMA REST"); \
	genSvg(fontname, "0x1D1C7", "MUSICAL SYMBOL TEMPUS PERFECTUM CUM PROLATIONE PERFECTA"); \
	genSvg(fontname, "0x1D1C8", "MUSICAL SYMBOL TEMPUS PERFECTUM CUM PROLATIONE IMPERFECTA"); \
	genSvg(fontname, "0x1D1C9", "MUSICAL SYMBOL TEMPUS PERFECTUM CUM PROLATIONE PERFECTA DIMINUTION-1"); \
	genSvg(fontname, "0x1D1CA", "MUSICAL SYMBOL TEMPUS IMPERFECTUM CUM PROLATIONE PERFECTA"); \
	genSvg(fontname, "0x1D1CB", "MUSICAL SYMBOL TEMPUS IMPERFECTUM CUM PROLATIONE IMPERFECTA"); \
	genSvg(fontname, "0x1D1CC", "MUSICAL SYMBOL TEMPUS IMPERFECTUM CUM PROLATIONE IMPERFECTA DIMINUTION-1"); \
	genSvg(fontname, "0x1D1CD", "MUSICAL SYMBOL TEMPUS IMPERFECTUM CUM PROLATIONE IMPERFECTA DIMINUTION-2"); \
	genSvg(fontname, "0x1D1CE", "MUSICAL SYMBOL TEMPUS IMPERFECTUM CUM PROLATIONE IMPERFECTA DIMINUTION-3"); \
	genSvg(fontname, "0x1D1CF", "MUSICAL SYMBOL CROIX"); \
	genSvg(fontname, "0x1D1D0", "MUSICAL SYMBOL GREGORIAN C CLEF"); \
	genSvg(fontname, "0x1D1D1", "MUSICAL SYMBOL GREGORIAN F CLEF"); \
	genSvg(fontname, "0x1D1D2", "MUSICAL SYMBOL SQUARE B"); \
	genSvg(fontname, "0x1D1D3", "MUSICAL SYMBOL VIRGA"); \
	genSvg(fontname, "0x1D1D4", "MUSICAL SYMBOL PODATUS"); \
	genSvg(fontname, "0x1D1D5", "MUSICAL SYMBOL CLIVIS"); \
	genSvg(fontname, "0x1D1D6", "MUSICAL SYMBOL SCANDICUS"); \
	genSvg(fontname, "0x1D1D7", "MUSICAL SYMBOL CLIMACUS"); \
	genSvg(fontname, "0x1D1D8", "MUSICAL SYMBOL TORCULUS"); \
	genSvg(fontname, "0x1D1D9", "MUSICAL SYMBOL PORRECTUS"); \
	genSvg(fontname, "0x1D1DA", "MUSICAL SYMBOL PORRECTUS FLEXUS"); \
	genSvg(fontname, "0x1D1DB", "MUSICAL SYMBOL SCANDICUS FLEXUS"); \
	genSvg(fontname, "0x1D1DC", "MUSICAL SYMBOL TORCULUS RESUPINUS"); \
	genSvg(fontname, "0x1D1DD", "MUSICAL SYMBOL PES SUBPUNCTIS"); \
	genSvg(fontname, "0x1D1DE", "MUSICAL SYMBOL KIEVAN C CLEF"); \
	genSvg(fontname, "0x1D1DF", "MUSICAL SYMBOL KIEVAN END OF PIECE"); \
	genSvg(fontname, "0x1D1E0", "MUSICAL SYMBOL KIEVAN FINAL NOTE"); \
	genSvg(fontname, "0x1D1E1", "MUSICAL SYMBOL KIEVAN RECITATIVE MARK"); \
	genSvg(fontname, "0x1D1E2", "MUSICAL SYMBOL KIEVAN WHOLE NOTE"); \
	genSvg(fontname, "0x1D1E3", "MUSICAL SYMBOL KIEVAN HALF NOTE"); \
	genSvg(fontname, "0x1D1E4", "MUSICAL SYMBOL KIEVAN QUARTER NOTE STEM DOWN"); \
	genSvg(fontname, "0x1D1E5", "MUSICAL SYMBOL KIEVAN QUARTER NOTE STEM UP"); \
	genSvg(fontname, "0x1D1E6", "MUSICAL SYMBOL KIEVAN EIGHTH NOTE STEM DOWN"); \
	genSvg(fontname, "0x1D1E7", "MUSICAL SYMBOL KIEVAN EIGHTH NOTE STEM UP"); \
	genSvg(fontname, "0x1D1E8", "MUSICAL SYMBOL KIEVAN FLAT SIGN");

#define BYZANTINE_MUSICAL_SYMBOLS \
	genSvg(fontname, "0x1D000", "BYZANTINE MUSICAL SYMBOL PSILI"); \
	genSvg(fontname, "0x1D001", "BYZANTINE MUSICAL SYMBOL DASEIA"); \
	genSvg(fontname, "0x1D002", "BYZANTINE MUSICAL SYMBOL PERISPOMENI"); \
	genSvg(fontname, "0x1D003", "BYZANTINE MUSICAL SYMBOL OXEIA EKFONITIKON"); \
	genSvg(fontname, "0x1D004", "BYZANTINE MUSICAL SYMBOL OXEIA DIPLI"); \
	genSvg(fontname, "0x1D005", "BYZANTINE MUSICAL SYMBOL VAREIA EKFONITIKON"); \
	genSvg(fontname, "0x1D006", "BYZANTINE MUSICAL SYMBOL VAREIA DIPLI"); \
	genSvg(fontname, "0x1D007", "BYZANTINE MUSICAL SYMBOL KATHISTI"); \
	genSvg(fontname, "0x1D008", "BYZANTINE MUSICAL SYMBOL SYRMATIKI"); \
	genSvg(fontname, "0x1D009", "BYZANTINE MUSICAL SYMBOL PARAKLITIKI"); \
	genSvg(fontname, "0x1D00A", "BYZANTINE MUSICAL SYMBOL YPOKRISIS"); \
	genSvg(fontname, "0x1D00B", "BYZANTINE MUSICAL SYMBOL YPOKRISIS DIPLI"); \
	genSvg(fontname, "0x1D00C", "BYZANTINE MUSICAL SYMBOL KREMASTI"); \
	genSvg(fontname, "0x1D00D", "BYZANTINE MUSICAL SYMBOL APESO EKFONITIKON"); \
	genSvg(fontname, "0x1D00E", "BYZANTINE MUSICAL SYMBOL EXO EKFONITIKON"); \
	genSvg(fontname, "0x1D00F", "BYZANTINE MUSICAL SYMBOL TELEIA"); \
	genSvg(fontname, "0x1D010", "BYZANTINE MUSICAL SYMBOL KENTIMATA"); \
	genSvg(fontname, "0x1D011", "BYZANTINE MUSICAL SYMBOL APOSTROFOS"); \
	genSvg(fontname, "0x1D012", "BYZANTINE MUSICAL SYMBOL APOSTROFOS DIPLI"); \
	genSvg(fontname, "0x1D013", "BYZANTINE MUSICAL SYMBOL SYNEVMA"); \
	genSvg(fontname, "0x1D014", "BYZANTINE MUSICAL SYMBOL THITA"); \
	genSvg(fontname, "0x1D015", "BYZANTINE MUSICAL SYMBOL OLIGON ARCHAION"); \
	genSvg(fontname, "0x1D016", "BYZANTINE MUSICAL SYMBOL GORGON ARCHAION"); \
	genSvg(fontname, "0x1D017", "BYZANTINE MUSICAL SYMBOL PSILON"); \
	genSvg(fontname, "0x1D018", "BYZANTINE MUSICAL SYMBOL CHAMILON"); \
	genSvg(fontname, "0x1D019", "BYZANTINE MUSICAL SYMBOL VATHY"); \
	genSvg(fontname, "0x1D01A", "BYZANTINE MUSICAL SYMBOL ISON ARCHAION"); \
	genSvg(fontname, "0x1D01B", "BYZANTINE MUSICAL SYMBOL KENTIMA ARCHAION"); \
	genSvg(fontname, "0x1D01C", "BYZANTINE MUSICAL SYMBOL KENTIMATA ARCHAION"); \
	genSvg(fontname, "0x1D01D", "BYZANTINE MUSICAL SYMBOL SAXIMATA"); \
	genSvg(fontname, "0x1D01E", "BYZANTINE MUSICAL SYMBOL PARICHON"); \
	genSvg(fontname, "0x1D01F", "BYZANTINE MUSICAL SYMBOL STAVROS APODEXIA"); \
	genSvg(fontname, "0x1D020", "BYZANTINE MUSICAL SYMBOL OXEIAI ARCHAION"); \
	genSvg(fontname, "0x1D021", "BYZANTINE MUSICAL SYMBOL VAREIAI ARCHAION"); \
	genSvg(fontname, "0x1D022", "BYZANTINE MUSICAL SYMBOL APODERMA ARCHAION"); \
	genSvg(fontname, "0x1D023", "BYZANTINE MUSICAL SYMBOL APOTHEMA"); \
	genSvg(fontname, "0x1D024", "BYZANTINE MUSICAL SYMBOL KLASMA"); \
	genSvg(fontname, "0x1D025", "BYZANTINE MUSICAL SYMBOL REVMA"); \
	genSvg(fontname, "0x1D026", "BYZANTINE MUSICAL SYMBOL PIASMA ARCHAION"); \
	genSvg(fontname, "0x1D027", "BYZANTINE MUSICAL SYMBOL TINAGMA"); \
	genSvg(fontname, "0x1D028", "BYZANTINE MUSICAL SYMBOL ANATRICHISMA"); \
	genSvg(fontname, "0x1D029", "BYZANTINE MUSICAL SYMBOL SEISMA"); \
	genSvg(fontname, "0x1D02A", "BYZANTINE MUSICAL SYMBOL SYNAGMA ARCHAION"); \
	genSvg(fontname, "0x1D02B", "BYZANTINE MUSICAL SYMBOL SYNAGMA META STAVROU"); \
	genSvg(fontname, "0x1D02C", "BYZANTINE MUSICAL SYMBOL OYRANISMA ARCHAION"); \
	genSvg(fontname, "0x1D02D", "BYZANTINE MUSICAL SYMBOL THEMA"); \
	genSvg(fontname, "0x1D02E", "BYZANTINE MUSICAL SYMBOL LEMOI"); \
	genSvg(fontname, "0x1D02F", "BYZANTINE MUSICAL SYMBOL DYO"); \
	genSvg(fontname, "0x1D030", "BYZANTINE MUSICAL SYMBOL TRIA"); \
	genSvg(fontname, "0x1D031", "BYZANTINE MUSICAL SYMBOL TESSERA"); \
	genSvg(fontname, "0x1D032", "BYZANTINE MUSICAL SYMBOL KRATIMATA"); \
	genSvg(fontname, "0x1D033", "BYZANTINE MUSICAL SYMBOL APESO EXO NEO"); \
	genSvg(fontname, "0x1D034", "BYZANTINE MUSICAL SYMBOL FTHORA ARCHAION"); \
	genSvg(fontname, "0x1D035", "BYZANTINE MUSICAL SYMBOL IMIFTHORA"); \
	genSvg(fontname, "0x1D036", "BYZANTINE MUSICAL SYMBOL TROMIKON ARCHAION"); \
	genSvg(fontname, "0x1D037", "BYZANTINE MUSICAL SYMBOL KATAVA TROMIKON"); \
	genSvg(fontname, "0x1D038", "BYZANTINE MUSICAL SYMBOL PELASTON"); \
	genSvg(fontname, "0x1D039", "BYZANTINE MUSICAL SYMBOL PSIFISTON"); \
	genSvg(fontname, "0x1D03A", "BYZANTINE MUSICAL SYMBOL KONTEVMA"); \
	genSvg(fontname, "0x1D03B", "BYZANTINE MUSICAL SYMBOL CHOREVMA ARCHAION"); \
	genSvg(fontname, "0x1D03C", "BYZANTINE MUSICAL SYMBOL RAPISMA"); \
	genSvg(fontname, "0x1D03D", "BYZANTINE MUSICAL SYMBOL PARAKALESMA ARCHAION"); \
	genSvg(fontname, "0x1D03E", "BYZANTINE MUSICAL SYMBOL PARAKLITIKI ARCHAION"); \
	genSvg(fontname, "0x1D03F", "BYZANTINE MUSICAL SYMBOL ICHADIN"); \
	genSvg(fontname, "0x1D040", "BYZANTINE MUSICAL SYMBOL NANA"); \
	genSvg(fontname, "0x1D041", "BYZANTINE MUSICAL SYMBOL PETASMA"); \
	genSvg(fontname, "0x1D042", "BYZANTINE MUSICAL SYMBOL KONTEVMA ALLO"); \
	genSvg(fontname, "0x1D043", "BYZANTINE MUSICAL SYMBOL TROMIKON ALLO"); \
	genSvg(fontname, "0x1D044", "BYZANTINE MUSICAL SYMBOL STRAGGISMATA"); \
	genSvg(fontname, "0x1D045", "BYZANTINE MUSICAL SYMBOL GRONTHISMATA"); \
	genSvg(fontname, "0x1D046", "BYZANTINE MUSICAL SYMBOL ISON NEO"); \
	genSvg(fontname, "0x1D047", "BYZANTINE MUSICAL SYMBOL OLIGON NEO"); \
	genSvg(fontname, "0x1D048", "BYZANTINE MUSICAL SYMBOL OXEIA NEO"); \
	genSvg(fontname, "0x1D049", "BYZANTINE MUSICAL SYMBOL PETASTI"); \
	genSvg(fontname, "0x1D04A", "BYZANTINE MUSICAL SYMBOL KOUFISMA"); \
	genSvg(fontname, "0x1D04B", "BYZANTINE MUSICAL SYMBOL PETASTOKOUFISMA"); \
	genSvg(fontname, "0x1D04C", "BYZANTINE MUSICAL SYMBOL KRATIMOKOUFISMA"); \
	genSvg(fontname, "0x1D04D", "BYZANTINE MUSICAL SYMBOL PELASTON NEO"); \
	genSvg(fontname, "0x1D04E", "BYZANTINE MUSICAL SYMBOL KENTIMATA NEO ANO"); \
	genSvg(fontname, "0x1D04F", "BYZANTINE MUSICAL SYMBOL KENTIMA NEO ANO"); \
	genSvg(fontname, "0x1D050", "BYZANTINE MUSICAL SYMBOL YPSILI"); \
	genSvg(fontname, "0x1D051", "BYZANTINE MUSICAL SYMBOL APOSTROFOS NEO"); \
	genSvg(fontname, "0x1D052", "BYZANTINE MUSICAL SYMBOL APOSTROFOI SYNDESMOS NEO"); \
	genSvg(fontname, "0x1D053", "BYZANTINE MUSICAL SYMBOL YPORROI"); \
	genSvg(fontname, "0x1D054", "BYZANTINE MUSICAL SYMBOL KRATIMOYPORROON"); \
	genSvg(fontname, "0x1D055", "BYZANTINE MUSICAL SYMBOL ELAFRON"); \
	genSvg(fontname, "0x1D056", "BYZANTINE MUSICAL SYMBOL CHAMILI"); \
	genSvg(fontname, "0x1D057", "BYZANTINE MUSICAL SYMBOL MIKRON ISON"); \
	genSvg(fontname, "0x1D058", "BYZANTINE MUSICAL SYMBOL VAREIA NEO"); \
	genSvg(fontname, "0x1D059", "BYZANTINE MUSICAL SYMBOL PIASMA NEO"); \
	genSvg(fontname, "0x1D05A", "BYZANTINE MUSICAL SYMBOL PSIFISTON NEO"); \
	genSvg(fontname, "0x1D05B", "BYZANTINE MUSICAL SYMBOL OMALON"); \
	genSvg(fontname, "0x1D05C", "BYZANTINE MUSICAL SYMBOL ANTIKENOMA"); \
	genSvg(fontname, "0x1D05D", "BYZANTINE MUSICAL SYMBOL LYGISMA"); \
	genSvg(fontname, "0x1D05E", "BYZANTINE MUSICAL SYMBOL PARAKLITIKI NEO"); \
	genSvg(fontname, "0x1D05F", "BYZANTINE MUSICAL SYMBOL PARAKALESMA NEO"); \
	genSvg(fontname, "0x1D060", "BYZANTINE MUSICAL SYMBOL ETERON PARAKALESMA"); \
	genSvg(fontname, "0x1D061", "BYZANTINE MUSICAL SYMBOL KYLISMA"); \
	genSvg(fontname, "0x1D062", "BYZANTINE MUSICAL SYMBOL ANTIKENOKYLISMA"); \
	genSvg(fontname, "0x1D063", "BYZANTINE MUSICAL SYMBOL TROMIKON NEO"); \
	genSvg(fontname, "0x1D064", "BYZANTINE MUSICAL SYMBOL EKSTREPTON"); \
	genSvg(fontname, "0x1D065", "BYZANTINE MUSICAL SYMBOL SYNAGMA NEO"); \
	genSvg(fontname, "0x1D066", "BYZANTINE MUSICAL SYMBOL SYRMA"); \
	genSvg(fontname, "0x1D067", "BYZANTINE MUSICAL SYMBOL CHOREVMA NEO"); \
	genSvg(fontname, "0x1D068", "BYZANTINE MUSICAL SYMBOL EPEGERMA"); \
	genSvg(fontname, "0x1D069", "BYZANTINE MUSICAL SYMBOL SEISMA NEO"); \
	genSvg(fontname, "0x1D06A", "BYZANTINE MUSICAL SYMBOL XIRON KLASMA"); \
	genSvg(fontname, "0x1D06B", "BYZANTINE MUSICAL SYMBOL TROMIKOPSIFISTON"); \
	genSvg(fontname, "0x1D06C", "BYZANTINE MUSICAL SYMBOL PSIFISTOLYGISMA"); \
	genSvg(fontname, "0x1D06D", "BYZANTINE MUSICAL SYMBOL TROMIKOLYGISMA"); \
	genSvg(fontname, "0x1D06E", "BYZANTINE MUSICAL SYMBOL TROMIKOPARAKALESMA"); \
	genSvg(fontname, "0x1D06F", "BYZANTINE MUSICAL SYMBOL PSIFISTOPARAKALESMA"); \
	genSvg(fontname, "0x1D070", "BYZANTINE MUSICAL SYMBOL TROMIKOSYNAGMA"); \
	genSvg(fontname, "0x1D071", "BYZANTINE MUSICAL SYMBOL PSIFISTOSYNAGMA"); \
	genSvg(fontname, "0x1D072", "BYZANTINE MUSICAL SYMBOL GORGOSYNTHETON"); \
	genSvg(fontname, "0x1D073", "BYZANTINE MUSICAL SYMBOL ARGOSYNTHETON"); \
	genSvg(fontname, "0x1D074", "BYZANTINE MUSICAL SYMBOL ETERON ARGOSYNTHETON"); \
	genSvg(fontname, "0x1D075", "BYZANTINE MUSICAL SYMBOL OYRANISMA NEO"); \
	genSvg(fontname, "0x1D076", "BYZANTINE MUSICAL SYMBOL THEMATISMOS ESO"); \
	genSvg(fontname, "0x1D077", "BYZANTINE MUSICAL SYMBOL THEMATISMOS EXO"); \
	genSvg(fontname, "0x1D078", "BYZANTINE MUSICAL SYMBOL THEMA APLOUN"); \
	genSvg(fontname, "0x1D079", "BYZANTINE MUSICAL SYMBOL THES KAI APOTHES"); \
	genSvg(fontname, "0x1D07A", "BYZANTINE MUSICAL SYMBOL KATAVASMA"); \
	genSvg(fontname, "0x1D07B", "BYZANTINE MUSICAL SYMBOL ENDOFONON"); \
	genSvg(fontname, "0x1D07C", "BYZANTINE MUSICAL SYMBOL YFEN KATO"); \
	genSvg(fontname, "0x1D07D", "BYZANTINE MUSICAL SYMBOL YFEN ANO"); \
	genSvg(fontname, "0x1D07E", "BYZANTINE MUSICAL SYMBOL STAVROS"); \
	genSvg(fontname, "0x1D07F", "BYZANTINE MUSICAL SYMBOL KLASMA ANO"); \
	genSvg(fontname, "0x1D080", "BYZANTINE MUSICAL SYMBOL DIPLI ARCHAION"); \
	genSvg(fontname, "0x1D081", "BYZANTINE MUSICAL SYMBOL KRATIMA ARCHAION"); \
	genSvg(fontname, "0x1D082", "BYZANTINE MUSICAL SYMBOL KRATIMA ALLO"); \
	genSvg(fontname, "0x1D083", "BYZANTINE MUSICAL SYMBOL KRATIMA NEO"); \
	genSvg(fontname, "0x1D084", "BYZANTINE MUSICAL SYMBOL APODERMA NEO"); \
	genSvg(fontname, "0x1D085", "BYZANTINE MUSICAL SYMBOL APLI"); \
	genSvg(fontname, "0x1D086", "BYZANTINE MUSICAL SYMBOL DIPLI"); \
	genSvg(fontname, "0x1D087", "BYZANTINE MUSICAL SYMBOL TRIPLI"); \
	genSvg(fontname, "0x1D088", "BYZANTINE MUSICAL SYMBOL TETRAPLI"); \
	genSvg(fontname, "0x1D089", "BYZANTINE MUSICAL SYMBOL KORONIS"); \
	genSvg(fontname, "0x1D08A", "BYZANTINE MUSICAL SYMBOL LEIMMA ENOS CHRONOU"); \
	genSvg(fontname, "0x1D08B", "BYZANTINE MUSICAL SYMBOL LEIMMA DYO CHRONON"); \
	genSvg(fontname, "0x1D08C", "BYZANTINE MUSICAL SYMBOL LEIMMA TRION CHRONON"); \
	genSvg(fontname, "0x1D08D", "BYZANTINE MUSICAL SYMBOL LEIMMA TESSARON CHRONON"); \
	genSvg(fontname, "0x1D08E", "BYZANTINE MUSICAL SYMBOL LEIMMA IMISEOS CHRONOU"); \
	genSvg(fontname, "0x1D08F", "BYZANTINE MUSICAL SYMBOL GORGON NEO ANO"); \
	genSvg(fontname, "0x1D090", "BYZANTINE MUSICAL SYMBOL GORGON PARESTIGMENON ARISTERA"); \
	genSvg(fontname, "0x1D091", "BYZANTINE MUSICAL SYMBOL GORGON PARESTIGMENON DEXIA"); \
	genSvg(fontname, "0x1D092", "BYZANTINE MUSICAL SYMBOL DIGORGON"); \
	genSvg(fontname, "0x1D093", "BYZANTINE MUSICAL SYMBOL DIGORGON PARESTIGMENON ARISTERA KATO"); \
	genSvg(fontname, "0x1D094", "BYZANTINE MUSICAL SYMBOL DIGORGON PARESTIGMENON ARISTERA ANO"); \
	genSvg(fontname, "0x1D095", "BYZANTINE MUSICAL SYMBOL DIGORGON PARESTIGMENON DEXIA"); \
	genSvg(fontname, "0x1D096", "BYZANTINE MUSICAL SYMBOL TRIGORGON"); \
	genSvg(fontname, "0x1D097", "BYZANTINE MUSICAL SYMBOL ARGON"); \
	genSvg(fontname, "0x1D098", "BYZANTINE MUSICAL SYMBOL IMIDIARGON"); \
	genSvg(fontname, "0x1D099", "BYZANTINE MUSICAL SYMBOL DIARGON"); \
	genSvg(fontname, "0x1D09A", "BYZANTINE MUSICAL SYMBOL AGOGI POLI ARGI"); \
	genSvg(fontname, "0x1D09B", "BYZANTINE MUSICAL SYMBOL AGOGI ARGOTERI"); \
	genSvg(fontname, "0x1D09C", "BYZANTINE MUSICAL SYMBOL AGOGI ARGI"); \
	genSvg(fontname, "0x1D09D", "BYZANTINE MUSICAL SYMBOL AGOGI METRIA"); \
	genSvg(fontname, "0x1D09E", "BYZANTINE MUSICAL SYMBOL AGOGI MESI"); \
	genSvg(fontname, "0x1D09F", "BYZANTINE MUSICAL SYMBOL AGOGI GORGI"); \
	genSvg(fontname, "0x1D0A0", "BYZANTINE MUSICAL SYMBOL AGOGI GORGOTERI"); \
	genSvg(fontname, "0x1D0A1", "BYZANTINE MUSICAL SYMBOL AGOGI POLI GORGI"); \
	genSvg(fontname, "0x1D0A2", "BYZANTINE MUSICAL SYMBOL MARTYRIA PROTOS ICHOS"); \
	genSvg(fontname, "0x1D0A3", "BYZANTINE MUSICAL SYMBOL MARTYRIA ALLI PROTOS ICHOS"); \
	genSvg(fontname, "0x1D0A4", "BYZANTINE MUSICAL SYMBOL MARTYRIA DEYTEROS ICHOS"); \
	genSvg(fontname, "0x1D0A5", "BYZANTINE MUSICAL SYMBOL MARTYRIA ALLI DEYTEROS ICHOS"); \
	genSvg(fontname, "0x1D0A6", "BYZANTINE MUSICAL SYMBOL MARTYRIA TRITOS ICHOS"); \
	genSvg(fontname, "0x1D0A7", "BYZANTINE MUSICAL SYMBOL MARTYRIA TRIFONIAS"); \
	genSvg(fontname, "0x1D0A8", "BYZANTINE MUSICAL SYMBOL MARTYRIA TETARTOS ICHOS"); \
	genSvg(fontname, "0x1D0A9", "BYZANTINE MUSICAL SYMBOL MARTYRIA TETARTOS LEGETOS ICHOS"); \
	genSvg(fontname, "0x1D0AA", "BYZANTINE MUSICAL SYMBOL MARTYRIA LEGETOS ICHOS"); \
	genSvg(fontname, "0x1D0AB", "BYZANTINE MUSICAL SYMBOL MARTYRIA PLAGIOS ICHOS"); \
	genSvg(fontname, "0x1D0AC", "BYZANTINE MUSICAL SYMBOL ISAKIA TELOUS ICHIMATOS"); \
	genSvg(fontname, "0x1D0AD", "BYZANTINE MUSICAL SYMBOL APOSTROFOI TELOUS ICHIMATOS"); \
	genSvg(fontname, "0x1D0AE", "BYZANTINE MUSICAL SYMBOL FANEROSIS TETRAFONIAS"); \
	genSvg(fontname, "0x1D0AF", "BYZANTINE MUSICAL SYMBOL FANEROSIS MONOFONIAS"); \
	genSvg(fontname, "0x1D0B0", "BYZANTINE MUSICAL SYMBOL FANEROSIS DIFONIAS"); \
	genSvg(fontname, "0x1D0B1", "BYZANTINE MUSICAL SYMBOL MARTYRIA VARYS ICHOS"); \
	genSvg(fontname, "0x1D0B2", "BYZANTINE MUSICAL SYMBOL MARTYRIA PROTOVARYS ICHOS"); \
	genSvg(fontname, "0x1D0B3", "BYZANTINE MUSICAL SYMBOL MARTYRIA PLAGIOS TETARTOS ICHOS"); \
	genSvg(fontname, "0x1D0B4", "BYZANTINE MUSICAL SYMBOL GORTHMIKON N APLOUN"); \
	genSvg(fontname, "0x1D0B5", "BYZANTINE MUSICAL SYMBOL GORTHMIKON N DIPLOUN"); \
	genSvg(fontname, "0x1D0B6", "BYZANTINE MUSICAL SYMBOL ENARXIS KAI FTHORA VOU"); \
	genSvg(fontname, "0x1D0B7", "BYZANTINE MUSICAL SYMBOL IMIFONON"); \
	genSvg(fontname, "0x1D0B8", "BYZANTINE MUSICAL SYMBOL IMIFTHORON"); \
	genSvg(fontname, "0x1D0B9", "BYZANTINE MUSICAL SYMBOL FTHORA ARCHAION DEYTEROU ICHOU"); \
	genSvg(fontname, "0x1D0BA", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI PA"); \
	genSvg(fontname, "0x1D0BB", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI NANA"); \
	genSvg(fontname, "0x1D0BC", "BYZANTINE MUSICAL SYMBOL FTHORA NAOS ICHOS"); \
	genSvg(fontname, "0x1D0BD", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI DI"); \
	genSvg(fontname, "0x1D0BE", "BYZANTINE MUSICAL SYMBOL FTHORA SKLIRON DIATONON DI"); \
	genSvg(fontname, "0x1D0BF", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI KE"); \
	genSvg(fontname, "0x1D0C0", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI ZO"); \
	genSvg(fontname, "0x1D0C1", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI NI KATO"); \
	genSvg(fontname, "0x1D0C2", "BYZANTINE MUSICAL SYMBOL FTHORA DIATONIKI NI ANO"); \
	genSvg(fontname, "0x1D0C3", "BYZANTINE MUSICAL SYMBOL FTHORA MALAKON CHROMA DIFONIAS"); \
	genSvg(fontname, "0x1D0C4", "BYZANTINE MUSICAL SYMBOL FTHORA MALAKON CHROMA MONOFONIAS"); \
	genSvg(fontname, "0x1D0C5", "BYZANTINE MUSICAL SYMBOL FHTORA SKLIRON CHROMA VASIS"); \
	genSvg(fontname, "0x1D0C6", "BYZANTINE MUSICAL SYMBOL FTHORA SKLIRON CHROMA SYNAFI"); \
	genSvg(fontname, "0x1D0C7", "BYZANTINE MUSICAL SYMBOL FTHORA NENANO"); \
	genSvg(fontname, "0x1D0C8", "BYZANTINE MUSICAL SYMBOL CHROA ZYGOS"); \
	genSvg(fontname, "0x1D0C9", "BYZANTINE MUSICAL SYMBOL CHROA KLITON"); \
	genSvg(fontname, "0x1D0CA", "BYZANTINE MUSICAL SYMBOL CHROA SPATHI"); \
	genSvg(fontname, "0x1D0CB", "BYZANTINE MUSICAL SYMBOL FTHORA I YFESIS TETARTIMORION"); \
	genSvg(fontname, "0x1D0CC", "BYZANTINE MUSICAL SYMBOL FTHORA ENARMONIOS ANTIFONIA"); \
	genSvg(fontname, "0x1D0CD", "BYZANTINE MUSICAL SYMBOL YFESIS TRITIMORION"); \
	genSvg(fontname, "0x1D0CE", "BYZANTINE MUSICAL SYMBOL DIESIS TRITIMORION"); \
	genSvg(fontname, "0x1D0CF", "BYZANTINE MUSICAL SYMBOL DIESIS TETARTIMORION"); \
	genSvg(fontname, "0x1D0D0", "BYZANTINE MUSICAL SYMBOL DIESIS APLI DYO DODEKATA"); \
	genSvg(fontname, "0x1D0D1", "BYZANTINE MUSICAL SYMBOL DIESIS MONOGRAMMOS TESSERA DODEKATA"); \
	genSvg(fontname, "0x1D0D2", "BYZANTINE MUSICAL SYMBOL DIESIS DIGRAMMOS EX DODEKATA"); \
	genSvg(fontname, "0x1D0D3", "BYZANTINE MUSICAL SYMBOL DIESIS TRIGRAMMOS OKTO DODEKATA"); \
	genSvg(fontname, "0x1D0D4", "BYZANTINE MUSICAL SYMBOL YFESIS APLI DYO DODEKATA"); \
	genSvg(fontname, "0x1D0D5", "BYZANTINE MUSICAL SYMBOL YFESIS MONOGRAMMOS TESSERA DODEKATA"); \
	genSvg(fontname, "0x1D0D6", "BYZANTINE MUSICAL SYMBOL YFESIS DIGRAMMOS EX DODEKATA"); \
	genSvg(fontname, "0x1D0D7", "BYZANTINE MUSICAL SYMBOL YFESIS TRIGRAMMOS OKTO DODEKATA"); \
	genSvg(fontname, "0x1D0D8", "BYZANTINE MUSICAL SYMBOL GENIKI DIESIS"); \
	genSvg(fontname, "0x1D0D9", "BYZANTINE MUSICAL SYMBOL GENIKI YFESIS"); \
	genSvg(fontname, "0x1D0DA", "BYZANTINE MUSICAL SYMBOL DIASTOLI APLI MIKRI"); \
	genSvg(fontname, "0x1D0DB", "BYZANTINE MUSICAL SYMBOL DIASTOLI APLI MEGALI"); \
	genSvg(fontname, "0x1D0DC", "BYZANTINE MUSICAL SYMBOL DIASTOLI DIPLI"); \
	genSvg(fontname, "0x1D0DD", "BYZANTINE MUSICAL SYMBOL DIASTOLI THESEOS"); \
	genSvg(fontname, "0x1D0DE", "BYZANTINE MUSICAL SYMBOL SIMANSIS THESEOS"); \
	genSvg(fontname, "0x1D0DF", "BYZANTINE MUSICAL SYMBOL SIMANSIS THESEOS DISIMOU"); \
	genSvg(fontname, "0x1D0E0", "BYZANTINE MUSICAL SYMBOL SIMANSIS THESEOS TRISIMOU"); \
	genSvg(fontname, "0x1D0E1", "BYZANTINE MUSICAL SYMBOL SIMANSIS THESEOS TETRASIMOU"); \
	genSvg(fontname, "0x1D0E2", "BYZANTINE MUSICAL SYMBOL SIMANSIS ARSEOS"); \
	genSvg(fontname, "0x1D0E3", "BYZANTINE MUSICAL SYMBOL SIMANSIS ARSEOS DISIMOU"); \
	genSvg(fontname, "0x1D0E4", "BYZANTINE MUSICAL SYMBOL SIMANSIS ARSEOS TRISIMOU"); \
	genSvg(fontname, "0x1D0E5", "BYZANTINE MUSICAL SYMBOL SIMANSIS ARSEOS TETRASIMOU"); \
	genSvg(fontname, "0x1D0E6", "BYZANTINE MUSICAL SYMBOL DIGRAMMA GG"); \
	genSvg(fontname, "0x1D0E7", "BYZANTINE MUSICAL SYMBOL DIFTOGGOS OU"); \
	genSvg(fontname, "0x1D0E8", "BYZANTINE MUSICAL SYMBOL STIGMA"); \
	genSvg(fontname, "0x1D0E9", "BYZANTINE MUSICAL SYMBOL ARKTIKO PA"); \
	genSvg(fontname, "0x1D0EA", "BYZANTINE MUSICAL SYMBOL ARKTIKO VOU"); \
	genSvg(fontname, "0x1D0EB", "BYZANTINE MUSICAL SYMBOL ARKTIKO GA"); \
	genSvg(fontname, "0x1D0EC", "BYZANTINE MUSICAL SYMBOL ARKTIKO DI"); \
	genSvg(fontname, "0x1D0ED", "BYZANTINE MUSICAL SYMBOL ARKTIKO KE"); \
	genSvg(fontname, "0x1D0EE", "BYZANTINE MUSICAL SYMBOL ARKTIKO ZO"); \
	genSvg(fontname, "0x1D0EF", "BYZANTINE MUSICAL SYMBOL ARKTIKO NI"); \
	genSvg(fontname, "0x1D0F0", "BYZANTINE MUSICAL SYMBOL KENTIMATA NEO MESO"); \
	genSvg(fontname, "0x1D0F1", "BYZANTINE MUSICAL SYMBOL KENTIMA NEO MESO"); \
	genSvg(fontname, "0x1D0F2", "BYZANTINE MUSICAL SYMBOL KENTIMATA NEO KATO"); \
	genSvg(fontname, "0x1D0F3", "BYZANTINE MUSICAL SYMBOL KENTIMA NEO KATO"); \
	genSvg(fontname, "0x1D0F4", "BYZANTINE MUSICAL SYMBOL KLASMA KATO"); \
	genSvg(fontname, "0x1D0F5", "BYZANTINE MUSICAL SYMBOL GORGON NEO KATO");

#define ANCIENT_GREEK_MUSICAL_NOTATION \
	genSvg(fontname, "0x1D200", "GREEK VOCAL NOTATION SYMBOL-1"); \
	genSvg(fontname, "0x1D201", "GREEK VOCAL NOTATION SYMBOL-2"); \
	genSvg(fontname, "0x1D202", "GREEK VOCAL NOTATION SYMBOL-3"); \
	genSvg(fontname, "0x1D203", "GREEK VOCAL NOTATION SYMBOL-4"); \
	genSvg(fontname, "0x1D204", "GREEK VOCAL NOTATION SYMBOL-5"); \
	genSvg(fontname, "0x1D205", "GREEK VOCAL NOTATION SYMBOL-6"); \
	genSvg(fontname, "0x1D206", "GREEK VOCAL NOTATION SYMBOL-7"); \
	genSvg(fontname, "0x1D207", "GREEK VOCAL NOTATION SYMBOL-8"); \
	genSvg(fontname, "0x1D208", "GREEK VOCAL NOTATION SYMBOL-9"); \
	genSvg(fontname, "0x1D209", "GREEK VOCAL NOTATION SYMBOL-10"); \
	genSvg(fontname, "0x1D20A", "GREEK VOCAL NOTATION SYMBOL-11"); \
	genSvg(fontname, "0x1D20B", "GREEK VOCAL NOTATION SYMBOL-12"); \
	genSvg(fontname, "0x1D20C", "GREEK VOCAL NOTATION SYMBOL-13"); \
	genSvg(fontname, "0x1D20D", "GREEK VOCAL NOTATION SYMBOL-14"); \
	genSvg(fontname, "0x1D20E", "GREEK VOCAL NOTATION SYMBOL-15"); \
	genSvg(fontname, "0x1D20F", "GREEK VOCAL NOTATION SYMBOL-16"); \
	genSvg(fontname, "0x1D210", "GREEK VOCAL NOTATION SYMBOL-17"); \
	genSvg(fontname, "0x1D211", "GREEK VOCAL NOTATION SYMBOL-18"); \
	genSvg(fontname, "0x1D212", "GREEK VOCAL NOTATION SYMBOL-19"); \
	genSvg(fontname, "0x1D213", "GREEK VOCAL NOTATION SYMBOL-20"); \
	genSvg(fontname, "0x1D214", "GREEK VOCAL NOTATION SYMBOL-21"); \
	genSvg(fontname, "0x1D215", "GREEK VOCAL NOTATION SYMBOL-22"); \
	genSvg(fontname, "0x1D216", "GREEK VOCAL NOTATION SYMBOL-23"); \
	genSvg(fontname, "0x1D217", "GREEK VOCAL NOTATION SYMBOL-24"); \
	genSvg(fontname, "0x1D218", "GREEK VOCAL NOTATION SYMBOL-50"); \
	genSvg(fontname, "0x1D219", "GREEK VOCAL NOTATION SYMBOL-51"); \
	genSvg(fontname, "0x1D21A", "GREEK VOCAL NOTATION SYMBOL-52"); \
	genSvg(fontname, "0x1D21B", "GREEK VOCAL NOTATION SYMBOL-53"); \
	genSvg(fontname, "0x1D21C", "GREEK VOCAL NOTATION SYMBOL-54"); \
	genSvg(fontname, "0x1D21D", "GREEK INSTRUMENTAL NOTATION SYMBOL-1"); \
	genSvg(fontname, "0x1D21E", "GREEK INSTRUMENTAL NOTATION SYMBOL-2"); \
	genSvg(fontname, "0x1D21F", "GREEK INSTRUMENTAL NOTATION SYMBOL-4"); \
	genSvg(fontname, "0x1D220", "GREEK INSTRUMENTAL NOTATION SYMBOL-5"); \
	genSvg(fontname, "0x1D221", "GREEK INSTRUMENTAL NOTATION SYMBOL-7"); \
	genSvg(fontname, "0x1D222", "GREEK INSTRUMENTAL NOTATION SYMBOL-8"); \
	genSvg(fontname, "0x1D223", "GREEK INSTRUMENTAL NOTATION SYMBOL-11"); \
	genSvg(fontname, "0x1D224", "GREEK INSTRUMENTAL NOTATION SYMBOL-12"); \
	genSvg(fontname, "0x1D225", "GREEK INSTRUMENTAL NOTATION SYMBOL-13"); \
	genSvg(fontname, "0x1D226", "GREEK INSTRUMENTAL NOTATION SYMBOL-14"); \
	genSvg(fontname, "0x1D227", "GREEK INSTRUMENTAL NOTATION SYMBOL-17"); \
	genSvg(fontname, "0x1D228", "GREEK INSTRUMENTAL NOTATION SYMBOL-18"); \
	genSvg(fontname, "0x1D229", "GREEK INSTRUMENTAL NOTATION SYMBOL-19"); \
	genSvg(fontname, "0x1D22A", "GREEK INSTRUMENTAL NOTATION SYMBOL-23"); \
	genSvg(fontname, "0x1D22B", "GREEK INSTRUMENTAL NOTATION SYMBOL-24"); \
	genSvg(fontname, "0x1D22C", "GREEK INSTRUMENTAL NOTATION SYMBOL-25"); \
	genSvg(fontname, "0x1D22D", "GREEK INSTRUMENTAL NOTATION SYMBOL-26"); \
	genSvg(fontname, "0x1D22E", "GREEK INSTRUMENTAL NOTATION SYMBOL-27"); \
	genSvg(fontname, "0x1D22F", "GREEK INSTRUMENTAL NOTATION SYMBOL-29"); \
	genSvg(fontname, "0x1D230", "GREEK INSTRUMENTAL NOTATION SYMBOL-30"); \
	genSvg(fontname, "0x1D231", "GREEK INSTRUMENTAL NOTATION SYMBOL-32"); \
	genSvg(fontname, "0x1D232", "GREEK INSTRUMENTAL NOTATION SYMBOL-36"); \
	genSvg(fontname, "0x1D233", "GREEK INSTRUMENTAL NOTATION SYMBOL-37"); \
	genSvg(fontname, "0x1D234", "GREEK INSTRUMENTAL NOTATION SYMBOL-38"); \
	genSvg(fontname, "0x1D235", "GREEK INSTRUMENTAL NOTATION SYMBOL-39"); \
	genSvg(fontname, "0x1D236", "GREEK INSTRUMENTAL NOTATION SYMBOL-40"); \
	genSvg(fontname, "0x1D237", "GREEK INSTRUMENTAL NOTATION SYMBOL-42"); \
	genSvg(fontname, "0x1D238", "GREEK INSTRUMENTAL NOTATION SYMBOL-43"); \
	genSvg(fontname, "0x1D239", "GREEK INSTRUMENTAL NOTATION SYMBOL-45"); \
	genSvg(fontname, "0x1D23A", "GREEK INSTRUMENTAL NOTATION SYMBOL-47"); \
	genSvg(fontname, "0x1D23B", "GREEK INSTRUMENTAL NOTATION SYMBOL-48"); \
	genSvg(fontname, "0x1D23C", "GREEK INSTRUMENTAL NOTATION SYMBOL-49"); \
	genSvg(fontname, "0x1D23D", "GREEK INSTRUMENTAL NOTATION SYMBOL-50"); \
	genSvg(fontname, "0x1D23E", "GREEK INSTRUMENTAL NOTATION SYMBOL-51"); \
	genSvg(fontname, "0x1D23F", "GREEK INSTRUMENTAL NOTATION SYMBOL-52"); \
	genSvg(fontname, "0x1D240", "GREEK INSTRUMENTAL NOTATION SYMBOL-53"); \
	genSvg(fontname, "0x1D241", "GREEK INSTRUMENTAL NOTATION SYMBOL-54"); \
	genSvg(fontname, "0x1D242", "COMBINING GREEK MUSICAL TRISEME"); \
	genSvg(fontname, "0x1D243", "COMBINING GREEK MUSICAL TETRASEME"); \
	genSvg(fontname, "0x1D244", "COMBINING GREEK MUSICAL PENTASEME"); \
	genSvg(fontname, "0x1D245", "GREEK MUSICAL LEIMMA");

#define DUPLOYAN \
	genSvg(fontname, "0x1BC00", "DUPLOYAN LETTER H"); \
	genSvg(fontname, "0x1BC01", "DUPLOYAN LETTER X"); \
	genSvg(fontname, "0x1BC02", "DUPLOYAN LETTER P"); \
	genSvg(fontname, "0x1BC03", "DUPLOYAN LETTER T"); \
	genSvg(fontname, "0x1BC04", "DUPLOYAN LETTER F"); \
	genSvg(fontname, "0x1BC05", "DUPLOYAN LETTER K"); \
	genSvg(fontname, "0x1BC06", "DUPLOYAN LETTER L"); \
	genSvg(fontname, "0x1BC07", "DUPLOYAN LETTER B"); \
	genSvg(fontname, "0x1BC08", "DUPLOYAN LETTER D"); \
	genSvg(fontname, "0x1BC09", "DUPLOYAN LETTER V"); \
	genSvg(fontname, "0x1BC0A", "DUPLOYAN LETTER G"); \
	genSvg(fontname, "0x1BC0B", "DUPLOYAN LETTER R"); \
	genSvg(fontname, "0x1BC0C", "DUPLOYAN LETTER P N"); \
	genSvg(fontname, "0x1BC0D", "DUPLOYAN LETTER D S"); \
	genSvg(fontname, "0x1BC0E", "DUPLOYAN LETTER F N"); \
	genSvg(fontname, "0x1BC0F", "DUPLOYAN LETTER K M"); \
	genSvg(fontname, "0x1BC10", "DUPLOYAN LETTER R S"); \
	genSvg(fontname, "0x1BC11", "DUPLOYAN LETTER TH"); \
	genSvg(fontname, "0x1BC12", "DUPLOYAN LETTER SLOAN DH"); \
	genSvg(fontname, "0x1BC13", "DUPLOYAN LETTER DH"); \
	genSvg(fontname, "0x1BC14", "DUPLOYAN LETTER KK"); \
	genSvg(fontname, "0x1BC15", "DUPLOYAN LETTER SLOAN J"); \
	genSvg(fontname, "0x1BC16", "DUPLOYAN LETTER HL"); \
	genSvg(fontname, "0x1BC17", "DUPLOYAN LETTER LH"); \
	genSvg(fontname, "0x1BC18", "DUPLOYAN LETTER RH"); \
	genSvg(fontname, "0x1BC19", "DUPLOYAN LETTER M"); \
	genSvg(fontname, "0x1BC1A", "DUPLOYAN LETTER N"); \
	genSvg(fontname, "0x1BC1B", "DUPLOYAN LETTER J"); \
	genSvg(fontname, "0x1BC1C", "DUPLOYAN LETTER S"); \
	genSvg(fontname, "0x1BC1D", "DUPLOYAN LETTER M N"); \
	genSvg(fontname, "0x1BC1E", "DUPLOYAN LETTER N M"); \
	genSvg(fontname, "0x1BC1F", "DUPLOYAN LETTER J M"); \
	genSvg(fontname, "0x1BC20", "DUPLOYAN LETTER S J"); \
	genSvg(fontname, "0x1BC21", "DUPLOYAN LETTER M WITH DOT"); \
	genSvg(fontname, "0x1BC22", "DUPLOYAN LETTER N WITH DOT"); \
	genSvg(fontname, "0x1BC23", "DUPLOYAN LETTER J WITH DOT"); \
	genSvg(fontname, "0x1BC24", "DUPLOYAN LETTER J WITH DOTS INSIDE AND ABOVE"); \
	genSvg(fontname, "0x1BC25", "DUPLOYAN LETTER S WITH DOT"); \
	genSvg(fontname, "0x1BC26", "DUPLOYAN LETTER S WITH DOT BELOW"); \
	genSvg(fontname, "0x1BC27", "DUPLOYAN LETTER M S"); \
	genSvg(fontname, "0x1BC28", "DUPLOYAN LETTER N S"); \
	genSvg(fontname, "0x1BC29", "DUPLOYAN LETTER J S"); \
	genSvg(fontname, "0x1BC2A", "DUPLOYAN LETTER S S"); \
	genSvg(fontname, "0x1BC2B", "DUPLOYAN LETTER M N S"); \
	genSvg(fontname, "0x1BC2C", "DUPLOYAN LETTER N M S"); \
	genSvg(fontname, "0x1BC2D", "DUPLOYAN LETTER J M S"); \
	genSvg(fontname, "0x1BC2E", "DUPLOYAN LETTER S J S"); \
	genSvg(fontname, "0x1BC2F", "DUPLOYAN LETTER J S WITH DOT"); \
	genSvg(fontname, "0x1BC30", "DUPLOYAN LETTER J N"); \
	genSvg(fontname, "0x1BC31", "DUPLOYAN LETTER J N S"); \
	genSvg(fontname, "0x1BC32", "DUPLOYAN LETTER S T"); \
	genSvg(fontname, "0x1BC33", "DUPLOYAN LETTER S T R"); \
	genSvg(fontname, "0x1BC34", "DUPLOYAN LETTER S P"); \
	genSvg(fontname, "0x1BC35", "DUPLOYAN LETTER S P R"); \
	genSvg(fontname, "0x1BC36", "DUPLOYAN LETTER T S"); \
	genSvg(fontname, "0x1BC37", "DUPLOYAN LETTER T R S"); \
	genSvg(fontname, "0x1BC38", "DUPLOYAN LETTER W"); \
	genSvg(fontname, "0x1BC39", "DUPLOYAN LETTER WH"); \
	genSvg(fontname, "0x1BC3A", "DUPLOYAN LETTER W R"); \
	genSvg(fontname, "0x1BC3B", "DUPLOYAN LETTER S N"); \
	genSvg(fontname, "0x1BC3C", "DUPLOYAN LETTER S M"); \
	genSvg(fontname, "0x1BC3D", "DUPLOYAN LETTER K R S"); \
	genSvg(fontname, "0x1BC3E", "DUPLOYAN LETTER G R S"); \
	genSvg(fontname, "0x1BC3F", "DUPLOYAN LETTER S K"); \
	genSvg(fontname, "0x1BC40", "DUPLOYAN LETTER S K R"); \
	genSvg(fontname, "0x1BC41", "DUPLOYAN LETTER A"); \
	genSvg(fontname, "0x1BC42", "DUPLOYAN LETTER SLOAN OW"); \
	genSvg(fontname, "0x1BC43", "DUPLOYAN LETTER OA"); \
	genSvg(fontname, "0x1BC44", "DUPLOYAN LETTER O"); \
	genSvg(fontname, "0x1BC45", "DUPLOYAN LETTER AOU"); \
	genSvg(fontname, "0x1BC46", "DUPLOYAN LETTER I"); \
	genSvg(fontname, "0x1BC47", "DUPLOYAN LETTER E"); \
	genSvg(fontname, "0x1BC48", "DUPLOYAN LETTER IE"); \
	genSvg(fontname, "0x1BC49", "DUPLOYAN LETTER SHORT I"); \
	genSvg(fontname, "0x1BC4A", "DUPLOYAN LETTER UI"); \
	genSvg(fontname, "0x1BC4B", "DUPLOYAN LETTER EE"); \
	genSvg(fontname, "0x1BC4C", "DUPLOYAN LETTER SLOAN EH"); \
	genSvg(fontname, "0x1BC4D", "DUPLOYAN LETTER ROMANIAN I"); \
	genSvg(fontname, "0x1BC4E", "DUPLOYAN LETTER SLOAN EE"); \
	genSvg(fontname, "0x1BC4F", "DUPLOYAN LETTER LONG I"); \
	genSvg(fontname, "0x1BC50", "DUPLOYAN LETTER YE"); \
	genSvg(fontname, "0x1BC51", "DUPLOYAN LETTER U"); \
	genSvg(fontname, "0x1BC52", "DUPLOYAN LETTER EU"); \
	genSvg(fontname, "0x1BC53", "DUPLOYAN LETTER XW"); \
	genSvg(fontname, "0x1BC54", "DUPLOYAN LETTER U N"); \
	genSvg(fontname, "0x1BC55", "DUPLOYAN LETTER LONG U"); \
	genSvg(fontname, "0x1BC56", "DUPLOYAN LETTER ROMANIAN U"); \
	genSvg(fontname, "0x1BC57", "DUPLOYAN LETTER UH"); \
	genSvg(fontname, "0x1BC58", "DUPLOYAN LETTER SLOAN U"); \
	genSvg(fontname, "0x1BC59", "DUPLOYAN LETTER OOH"); \
	genSvg(fontname, "0x1BC5A", "DUPLOYAN LETTER OW"); \
	genSvg(fontname, "0x1BC5B", "DUPLOYAN LETTER OU"); \
	genSvg(fontname, "0x1BC5C", "DUPLOYAN LETTER WA"); \
	genSvg(fontname, "0x1BC5D", "DUPLOYAN LETTER WO"); \
	genSvg(fontname, "0x1BC5E", "DUPLOYAN LETTER WI"); \
	genSvg(fontname, "0x1BC5F", "DUPLOYAN LETTER WEI"); \
	genSvg(fontname, "0x1BC60", "DUPLOYAN LETTER WOW"); \
	genSvg(fontname, "0x1BC61", "DUPLOYAN LETTER NASAL U"); \
	genSvg(fontname, "0x1BC62", "DUPLOYAN LETTER NASAL O"); \
	genSvg(fontname, "0x1BC63", "DUPLOYAN LETTER NASAL I"); \
	genSvg(fontname, "0x1BC64", "DUPLOYAN LETTER NASAL A"); \
	genSvg(fontname, "0x1BC65", "DUPLOYAN LETTER PERNIN AN"); \
	genSvg(fontname, "0x1BC66", "DUPLOYAN LETTER PERNIN AM"); \
	genSvg(fontname, "0x1BC67", "DUPLOYAN LETTER SLOAN EN"); \
	genSvg(fontname, "0x1BC68", "DUPLOYAN LETTER SLOAN AN"); \
	genSvg(fontname, "0x1BC69", "DUPLOYAN LETTER SLOAN ON"); \
	genSvg(fontname, "0x1BC6A", "DUPLOYAN LETTER VOCALIC M"); \
	genSvg(fontname, "0x1BC70", "DUPLOYAN AFFIX LEFT HORIZONTAL SECANT"); \
	genSvg(fontname, "0x1BC71", "DUPLOYAN AFFIX MID HORIZONTAL SECANT"); \
	genSvg(fontname, "0x1BC72", "DUPLOYAN AFFIX RIGHT HORIZONTAL SECANT"); \
	genSvg(fontname, "0x1BC73", "DUPLOYAN AFFIX LOW VERTICAL SECANT"); \
	genSvg(fontname, "0x1BC74", "DUPLOYAN AFFIX MID VERTICAL SECANT"); \
	genSvg(fontname, "0x1BC75", "DUPLOYAN AFFIX HIGH VERTICAL SECANT"); \
	genSvg(fontname, "0x1BC76", "DUPLOYAN AFFIX ATTACHED SECANT"); \
	genSvg(fontname, "0x1BC77", "DUPLOYAN AFFIX ATTACHED LEFT-TO-RIGHT SECANT"); \
	genSvg(fontname, "0x1BC78", "DUPLOYAN AFFIX ATTACHED TANGENT"); \
	genSvg(fontname, "0x1BC79", "DUPLOYAN AFFIX ATTACHED TAIL"); \
	genSvg(fontname, "0x1BC7A", "DUPLOYAN AFFIX ATTACHED E HOOK"); \
	genSvg(fontname, "0x1BC7B", "DUPLOYAN AFFIX ATTACHED I HOOK"); \
	genSvg(fontname, "0x1BC7C", "DUPLOYAN AFFIX ATTACHED TANGENT HOOK"); \
	genSvg(fontname, "0x1BC80", "DUPLOYAN AFFIX HIGH ACUTE"); \
	genSvg(fontname, "0x1BC81", "DUPLOYAN AFFIX HIGH TIGHT ACUTE"); \
	genSvg(fontname, "0x1BC82", "DUPLOYAN AFFIX HIGH GRAVE"); \
	genSvg(fontname, "0x1BC83", "DUPLOYAN AFFIX HIGH LONG GRAVE"); \
	genSvg(fontname, "0x1BC84", "DUPLOYAN AFFIX HIGH DOT"); \
	genSvg(fontname, "0x1BC85", "DUPLOYAN AFFIX HIGH CIRCLE"); \
	genSvg(fontname, "0x1BC86", "DUPLOYAN AFFIX HIGH LINE"); \
	genSvg(fontname, "0x1BC87", "DUPLOYAN AFFIX HIGH WAVE"); \
	genSvg(fontname, "0x1BC88", "DUPLOYAN AFFIX HIGH VERTICAL"); \
	genSvg(fontname, "0x1BC90", "DUPLOYAN AFFIX LOW ACUTE"); \
	genSvg(fontname, "0x1BC91", "DUPLOYAN AFFIX LOW TIGHT ACUTE"); \
	genSvg(fontname, "0x1BC92", "DUPLOYAN AFFIX LOW GRAVE"); \
	genSvg(fontname, "0x1BC93", "DUPLOYAN AFFIX LOW LONG GRAVE"); \
	genSvg(fontname, "0x1BC94", "DUPLOYAN AFFIX LOW DOT"); \
	genSvg(fontname, "0x1BC95", "DUPLOYAN AFFIX LOW CIRCLE"); \
	genSvg(fontname, "0x1BC96", "DUPLOYAN AFFIX LOW LINE"); \
	genSvg(fontname, "0x1BC97", "DUPLOYAN AFFIX LOW WAVE"); \
	genSvg(fontname, "0x1BC98", "DUPLOYAN AFFIX LOW VERTICAL"); \
	genSvg(fontname, "0x1BC99", "DUPLOYAN AFFIX LOW ARROW"); \
	genSvg(fontname, "0x1BC9C", "DUPLOYAN SIGN O WITH CROSS"); \
	genSvg(fontname, "0x1BC9D", "DUPLOYAN THICK LETTER SELECTOR"); \
	genSvg(fontname, "0x1BC9E", "DUPLOYAN DOUBLE MARK"); \
	genSvg(fontname, "0x1BC9F", "DUPLOYAN PUNCTUATION CHINOOK FULL STOP");

#define SHORTHAND_FORMAT_CONTROLS \
	genSvg(fontname, "0x1BCA0", "SHORTHAND FORMAT LETTER OVERLAP"); \
	genSvg(fontname, "0x1BCA1", "SHORTHAND FORMAT CONTINUING OVERLAP"); \
	genSvg(fontname, "0x1BCA2", "SHORTHAND FORMAT DOWN STEP"); \
	genSvg(fontname, "0x1BCA3", "SHORTHAND FORMAT UP STEP");

#define SUTTON_SIGNWRITING \
	genSvg(fontname, "0x1D800", "SIGNWRITING HAND-FIST INDEX"); \
	genSvg(fontname, "0x1D801", "SIGNWRITING HAND-CIRCLE INDEX"); \
	genSvg(fontname, "0x1D802", "SIGNWRITING HAND-CUP INDEX"); \
	genSvg(fontname, "0x1D803", "SIGNWRITING HAND-OVAL INDEX"); \
	genSvg(fontname, "0x1D804", "SIGNWRITING HAND-HINGE INDEX"); \
	genSvg(fontname, "0x1D805", "SIGNWRITING HAND-ANGLE INDEX"); \
	genSvg(fontname, "0x1D806", "SIGNWRITING HAND-FIST INDEX BENT"); \
	genSvg(fontname, "0x1D807", "SIGNWRITING HAND-CIRCLE INDEX BENT"); \
	genSvg(fontname, "0x1D808", "SIGNWRITING HAND-FIST THUMB UNDER INDEX BENT"); \
	genSvg(fontname, "0x1D809", "SIGNWRITING HAND-FIST INDEX RAISED KNUCKLE"); \
	genSvg(fontname, "0x1D80A", "SIGNWRITING HAND-FIST INDEX CUPPED"); \
	genSvg(fontname, "0x1D80B", "SIGNWRITING HAND-FIST INDEX HINGED"); \
	genSvg(fontname, "0x1D80C", "SIGNWRITING HAND-FIST INDEX HINGED LOW"); \
	genSvg(fontname, "0x1D80D", "SIGNWRITING HAND-CIRCLE INDEX HINGE"); \
	genSvg(fontname, "0x1D80E", "SIGNWRITING HAND-FIST INDEX MIDDLE"); \
	genSvg(fontname, "0x1D80F", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE"); \
	genSvg(fontname, "0x1D810", "SIGNWRITING HAND-FIST INDEX MIDDLE BENT"); \
	genSvg(fontname, "0x1D811", "SIGNWRITING HAND-FIST INDEX MIDDLE RAISED KNUCKLES"); \
	genSvg(fontname, "0x1D812", "SIGNWRITING HAND-FIST INDEX MIDDLE HINGED"); \
	genSvg(fontname, "0x1D813", "SIGNWRITING HAND-FIST INDEX UP MIDDLE HINGED"); \
	genSvg(fontname, "0x1D814", "SIGNWRITING HAND-FIST INDEX HINGED MIDDLE UP"); \
	genSvg(fontname, "0x1D815", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED"); \
	genSvg(fontname, "0x1D816", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED INDEX BENT"); \
	genSvg(fontname, "0x1D817", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED MIDDLE BENT"); \
	genSvg(fontname, "0x1D818", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED CUPPED"); \
	genSvg(fontname, "0x1D819", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED HINGED"); \
	genSvg(fontname, "0x1D81A", "SIGNWRITING HAND-FIST INDEX MIDDLE CROSSED"); \
	genSvg(fontname, "0x1D81B", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE CROSSED"); \
	genSvg(fontname, "0x1D81C", "SIGNWRITING HAND-FIST MIDDLE BENT OVER INDEX"); \
	genSvg(fontname, "0x1D81D", "SIGNWRITING HAND-FIST INDEX BENT OVER MIDDLE"); \
	genSvg(fontname, "0x1D81E", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB"); \
	genSvg(fontname, "0x1D81F", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE THUMB"); \
	genSvg(fontname, "0x1D820", "SIGNWRITING HAND-FIST INDEX MIDDLE STRAIGHT THUMB BENT"); \
	genSvg(fontname, "0x1D821", "SIGNWRITING HAND-FIST INDEX MIDDLE BENT THUMB STRAIGHT"); \
	genSvg(fontname, "0x1D822", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB BENT"); \
	genSvg(fontname, "0x1D823", "SIGNWRITING HAND-FIST INDEX MIDDLE HINGED SPREAD THUMB SIDE"); \
	genSvg(fontname, "0x1D824", "SIGNWRITING HAND-FIST INDEX UP MIDDLE HINGED THUMB SIDE"); \
	genSvg(fontname, "0x1D825", "SIGNWRITING HAND-FIST INDEX UP MIDDLE HINGED THUMB CONJOINED"); \
	genSvg(fontname, "0x1D826", "SIGNWRITING HAND-FIST INDEX HINGED MIDDLE UP THUMB SIDE"); \
	genSvg(fontname, "0x1D827", "SIGNWRITING HAND-FIST INDEX MIDDLE UP SPREAD THUMB FORWARD"); \
	genSvg(fontname, "0x1D828", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB CUPPED"); \
	genSvg(fontname, "0x1D829", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB CIRCLED"); \
	genSvg(fontname, "0x1D82A", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB HOOKED"); \
	genSvg(fontname, "0x1D82B", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB HINGED"); \
	genSvg(fontname, "0x1D82C", "SIGNWRITING HAND-FIST THUMB BETWEEN INDEX MIDDLE STRAIGHT"); \
	genSvg(fontname, "0x1D82D", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED THUMB SIDE"); \
	genSvg(fontname, "0x1D82E", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED THUMB SIDE CONJOINED"); \
	genSvg(fontname, "0x1D82F", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED THUMB SIDE BENT"); \
	genSvg(fontname, "0x1D830", "SIGNWRITING HAND-FIST MIDDLE THUMB HOOKED INDEX UP"); \
	genSvg(fontname, "0x1D831", "SIGNWRITING HAND-FIST INDEX THUMB HOOKED MIDDLE UP"); \
	genSvg(fontname, "0x1D832", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED HINGED THUMB SIDE"); \
	genSvg(fontname, "0x1D833", "SIGNWRITING HAND-FIST INDEX MIDDLE CROSSED THUMB SIDE"); \
	genSvg(fontname, "0x1D834", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED THUMB FORWARD"); \
	genSvg(fontname, "0x1D835", "SIGNWRITING HAND-FIST INDEX MIDDLE CONJOINED CUPPED THUMB FORWARD"); \
	genSvg(fontname, "0x1D836", "SIGNWRITING HAND-FIST MIDDLE THUMB CUPPED INDEX UP"); \
	genSvg(fontname, "0x1D837", "SIGNWRITING HAND-FIST INDEX THUMB CUPPED MIDDLE UP"); \
	genSvg(fontname, "0x1D838", "SIGNWRITING HAND-FIST MIDDLE THUMB CIRCLED INDEX UP"); \
	genSvg(fontname, "0x1D839", "SIGNWRITING HAND-FIST MIDDLE THUMB CIRCLED INDEX HINGED"); \
	genSvg(fontname, "0x1D83A", "SIGNWRITING HAND-FIST INDEX THUMB ANGLED OUT MIDDLE UP"); \
	genSvg(fontname, "0x1D83B", "SIGNWRITING HAND-FIST INDEX THUMB ANGLED IN MIDDLE UP"); \
	genSvg(fontname, "0x1D83C", "SIGNWRITING HAND-FIST INDEX THUMB CIRCLED MIDDLE UP"); \
	genSvg(fontname, "0x1D83D", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB CONJOINED HINGED"); \
	genSvg(fontname, "0x1D83E", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB ANGLED OUT"); \
	genSvg(fontname, "0x1D83F", "SIGNWRITING HAND-FIST INDEX MIDDLE THUMB ANGLED"); \
	genSvg(fontname, "0x1D840", "SIGNWRITING HAND-FIST MIDDLE THUMB ANGLED OUT INDEX UP"); \
	genSvg(fontname, "0x1D841", "SIGNWRITING HAND-FIST MIDDLE THUMB ANGLED OUT INDEX CROSSED"); \
	genSvg(fontname, "0x1D842", "SIGNWRITING HAND-FIST MIDDLE THUMB ANGLED INDEX UP"); \
	genSvg(fontname, "0x1D843", "SIGNWRITING HAND-FIST INDEX THUMB HOOKED MIDDLE HINGED"); \
	genSvg(fontname, "0x1D844", "SIGNWRITING HAND-FLAT FOUR FINGERS"); \
	genSvg(fontname, "0x1D845", "SIGNWRITING HAND-FLAT FOUR FINGERS BENT"); \
	genSvg(fontname, "0x1D846", "SIGNWRITING HAND-FLAT FOUR FINGERS HINGED"); \
	genSvg(fontname, "0x1D847", "SIGNWRITING HAND-FLAT FOUR FINGERS CONJOINED"); \
	genSvg(fontname, "0x1D848", "SIGNWRITING HAND-FLAT FOUR FINGERS CONJOINED SPLIT"); \
	genSvg(fontname, "0x1D849", "SIGNWRITING HAND-CLAW FOUR FINGERS CONJOINED"); \
	genSvg(fontname, "0x1D84A", "SIGNWRITING HAND-FIST FOUR FINGERS CONJOINED BENT"); \
	genSvg(fontname, "0x1D84B", "SIGNWRITING HAND-HINGE FOUR FINGERS CONJOINED"); \
	genSvg(fontname, "0x1D84C", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD"); \
	genSvg(fontname, "0x1D84D", "SIGNWRITING HAND-FLAT HEEL FIVE FINGERS SPREAD"); \
	genSvg(fontname, "0x1D84E", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD FOUR BENT"); \
	genSvg(fontname, "0x1D84F", "SIGNWRITING HAND-FLAT HEEL FIVE FINGERS SPREAD FOUR BENT"); \
	genSvg(fontname, "0x1D850", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD BENT"); \
	genSvg(fontname, "0x1D851", "SIGNWRITING HAND-FLAT HEEL FIVE FINGERS SPREAD BENT"); \
	genSvg(fontname, "0x1D852", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD THUMB FORWARD"); \
	genSvg(fontname, "0x1D853", "SIGNWRITING HAND-CUP FIVE FINGERS SPREAD"); \
	genSvg(fontname, "0x1D854", "SIGNWRITING HAND-CUP FIVE FINGERS SPREAD OPEN"); \
	genSvg(fontname, "0x1D855", "SIGNWRITING HAND-HINGE FIVE FINGERS SPREAD OPEN"); \
	genSvg(fontname, "0x1D856", "SIGNWRITING HAND-OVAL FIVE FINGERS SPREAD"); \
	genSvg(fontname, "0x1D857", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD HINGED"); \
	genSvg(fontname, "0x1D858", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD HINGED THUMB SIDE"); \
	genSvg(fontname, "0x1D859", "SIGNWRITING HAND-FLAT FIVE FINGERS SPREAD HINGED NO THUMB"); \
	genSvg(fontname, "0x1D85A", "SIGNWRITING HAND-FLAT"); \
	genSvg(fontname, "0x1D85B", "SIGNWRITING HAND-FLAT BETWEEN PALM FACINGS"); \
	genSvg(fontname, "0x1D85C", "SIGNWRITING HAND-FLAT HEEL"); \
	genSvg(fontname, "0x1D85D", "SIGNWRITING HAND-FLAT THUMB SIDE"); \
	genSvg(fontname, "0x1D85E", "SIGNWRITING HAND-FLAT HEEL THUMB SIDE"); \
	genSvg(fontname, "0x1D85F", "SIGNWRITING HAND-FLAT THUMB BENT"); \
	genSvg(fontname, "0x1D860", "SIGNWRITING HAND-FLAT THUMB FORWARD"); \
	genSvg(fontname, "0x1D861", "SIGNWRITING HAND-FLAT SPLIT INDEX THUMB SIDE"); \
	genSvg(fontname, "0x1D862", "SIGNWRITING HAND-FLAT SPLIT CENTRE"); \
	genSvg(fontname, "0x1D863", "SIGNWRITING HAND-FLAT SPLIT CENTRE THUMB SIDE"); \
	genSvg(fontname, "0x1D864", "SIGNWRITING HAND-FLAT SPLIT CENTRE THUMB SIDE BENT"); \
	genSvg(fontname, "0x1D865", "SIGNWRITING HAND-FLAT SPLIT LITTLE"); \
	genSvg(fontname, "0x1D866", "SIGNWRITING HAND-CLAW"); \
	genSvg(fontname, "0x1D867", "SIGNWRITING HAND-CLAW THUMB SIDE"); \
	genSvg(fontname, "0x1D868", "SIGNWRITING HAND-CLAW NO THUMB"); \
	genSvg(fontname, "0x1D869", "SIGNWRITING HAND-CLAW THUMB FORWARD"); \
	genSvg(fontname, "0x1D86A", "SIGNWRITING HAND-HOOK CURLICUE"); \
	genSvg(fontname, "0x1D86B", "SIGNWRITING HAND-HOOK"); \
	genSvg(fontname, "0x1D86C", "SIGNWRITING HAND-CUP OPEN"); \
	genSvg(fontname, "0x1D86D", "SIGNWRITING HAND-CUP"); \
	genSvg(fontname, "0x1D86E", "SIGNWRITING HAND-CUP OPEN THUMB SIDE"); \
	genSvg(fontname, "0x1D86F", "SIGNWRITING HAND-CUP THUMB SIDE"); \
	genSvg(fontname, "0x1D870", "SIGNWRITING HAND-CUP OPEN NO THUMB"); \
	genSvg(fontname, "0x1D871", "SIGNWRITING HAND-CUP NO THUMB"); \
	genSvg(fontname, "0x1D872", "SIGNWRITING HAND-CUP OPEN THUMB FORWARD"); \
	genSvg(fontname, "0x1D873", "SIGNWRITING HAND-CUP THUMB FORWARD"); \
	genSvg(fontname, "0x1D874", "SIGNWRITING HAND-CURLICUE OPEN"); \
	genSvg(fontname, "0x1D875", "SIGNWRITING HAND-CURLICUE"); \
	genSvg(fontname, "0x1D876", "SIGNWRITING HAND-CIRCLE"); \
	genSvg(fontname, "0x1D877", "SIGNWRITING HAND-OVAL"); \
	genSvg(fontname, "0x1D878", "SIGNWRITING HAND-OVAL THUMB SIDE"); \
	genSvg(fontname, "0x1D879", "SIGNWRITING HAND-OVAL NO THUMB"); \
	genSvg(fontname, "0x1D87A", "SIGNWRITING HAND-OVAL THUMB FORWARD"); \
	genSvg(fontname, "0x1D87B", "SIGNWRITING HAND-HINGE OPEN"); \
	genSvg(fontname, "0x1D87C", "SIGNWRITING HAND-HINGE OPEN THUMB FORWARD"); \
	genSvg(fontname, "0x1D87D", "SIGNWRITING HAND-HINGE"); \
	genSvg(fontname, "0x1D87E", "SIGNWRITING HAND-HINGE SMALL"); \
	genSvg(fontname, "0x1D87F", "SIGNWRITING HAND-HINGE OPEN THUMB SIDE"); \
	genSvg(fontname, "0x1D880", "SIGNWRITING HAND-HINGE THUMB SIDE"); \
	genSvg(fontname, "0x1D881", "SIGNWRITING HAND-HINGE OPEN NO THUMB"); \
	genSvg(fontname, "0x1D882", "SIGNWRITING HAND-HINGE NO THUMB"); \
	genSvg(fontname, "0x1D883", "SIGNWRITING HAND-HINGE THUMB SIDE TOUCHING INDEX"); \
	genSvg(fontname, "0x1D884", "SIGNWRITING HAND-HINGE THUMB BETWEEN MIDDLE RING"); \
	genSvg(fontname, "0x1D885", "SIGNWRITING HAND-ANGLE"); \
	genSvg(fontname, "0x1D886", "SIGNWRITING HAND-FIST INDEX MIDDLE RING"); \
	genSvg(fontname, "0x1D887", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE RING"); \
	genSvg(fontname, "0x1D888", "SIGNWRITING HAND-HINGE INDEX MIDDLE RING"); \
	genSvg(fontname, "0x1D889", "SIGNWRITING HAND-ANGLE INDEX MIDDLE RING"); \
	genSvg(fontname, "0x1D88A", "SIGNWRITING HAND-HINGE LITTLE"); \
	genSvg(fontname, "0x1D88B", "SIGNWRITING HAND-FIST INDEX MIDDLE RING BENT"); \
	genSvg(fontname, "0x1D88C", "SIGNWRITING HAND-FIST INDEX MIDDLE RING CONJOINED"); \
	genSvg(fontname, "0x1D88D", "SIGNWRITING HAND-HINGE INDEX MIDDLE RING CONJOINED"); \
	genSvg(fontname, "0x1D88E", "SIGNWRITING HAND-FIST LITTLE DOWN"); \
	genSvg(fontname, "0x1D88F", "SIGNWRITING HAND-FIST LITTLE DOWN RIPPLE STRAIGHT"); \
	genSvg(fontname, "0x1D890", "SIGNWRITING HAND-FIST LITTLE DOWN RIPPLE CURVED"); \
	genSvg(fontname, "0x1D891", "SIGNWRITING HAND-FIST LITTLE DOWN OTHERS CIRCLED"); \
	genSvg(fontname, "0x1D892", "SIGNWRITING HAND-FIST LITTLE UP"); \
	genSvg(fontname, "0x1D893", "SIGNWRITING HAND-FIST THUMB UNDER LITTLE UP"); \
	genSvg(fontname, "0x1D894", "SIGNWRITING HAND-CIRCLE LITTLE UP"); \
	genSvg(fontname, "0x1D895", "SIGNWRITING HAND-OVAL LITTLE UP"); \
	genSvg(fontname, "0x1D896", "SIGNWRITING HAND-ANGLE LITTLE UP"); \
	genSvg(fontname, "0x1D897", "SIGNWRITING HAND-FIST LITTLE RAISED KNUCKLE"); \
	genSvg(fontname, "0x1D898", "SIGNWRITING HAND-FIST LITTLE BENT"); \
	genSvg(fontname, "0x1D899", "SIGNWRITING HAND-FIST LITTLE TOUCHES THUMB"); \
	genSvg(fontname, "0x1D89A", "SIGNWRITING HAND-FIST LITTLE THUMB"); \
	genSvg(fontname, "0x1D89B", "SIGNWRITING HAND-HINGE LITTLE THUMB"); \
	genSvg(fontname, "0x1D89C", "SIGNWRITING HAND-FIST LITTLE INDEX THUMB"); \
	genSvg(fontname, "0x1D89D", "SIGNWRITING HAND-HINGE LITTLE INDEX THUMB"); \
	genSvg(fontname, "0x1D89E", "SIGNWRITING HAND-ANGLE LITTLE INDEX THUMB INDEX THUMB OUT"); \
	genSvg(fontname, "0x1D89F", "SIGNWRITING HAND-ANGLE LITTLE INDEX THUMB INDEX THUMB"); \
	genSvg(fontname, "0x1D8A0", "SIGNWRITING HAND-FIST LITTLE INDEX"); \
	genSvg(fontname, "0x1D8A1", "SIGNWRITING HAND-CIRCLE LITTLE INDEX"); \
	genSvg(fontname, "0x1D8A2", "SIGNWRITING HAND-HINGE LITTLE INDEX"); \
	genSvg(fontname, "0x1D8A3", "SIGNWRITING HAND-ANGLE LITTLE INDEX"); \
	genSvg(fontname, "0x1D8A4", "SIGNWRITING HAND-FIST INDEX MIDDLE LITTLE"); \
	genSvg(fontname, "0x1D8A5", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE LITTLE"); \
	genSvg(fontname, "0x1D8A6", "SIGNWRITING HAND-HINGE INDEX MIDDLE LITTLE"); \
	genSvg(fontname, "0x1D8A7", "SIGNWRITING HAND-HINGE RING"); \
	genSvg(fontname, "0x1D8A8", "SIGNWRITING HAND-ANGLE INDEX MIDDLE LITTLE"); \
	genSvg(fontname, "0x1D8A9", "SIGNWRITING HAND-FIST INDEX MIDDLE CROSS LITTLE"); \
	genSvg(fontname, "0x1D8AA", "SIGNWRITING HAND-CIRCLE INDEX MIDDLE CROSS LITTLE"); \
	genSvg(fontname, "0x1D8AB", "SIGNWRITING HAND-FIST RING DOWN"); \
	genSvg(fontname, "0x1D8AC", "SIGNWRITING HAND-HINGE RING DOWN INDEX THUMB HOOK MIDDLE"); \
	genSvg(fontname, "0x1D8AD", "SIGNWRITING HAND-ANGLE RING DOWN MIDDLE THUMB INDEX CROSS"); \
	genSvg(fontname, "0x1D8AE", "SIGNWRITING HAND-FIST RING UP"); \
	genSvg(fontname, "0x1D8AF", "SIGNWRITING HAND-FIST RING RAISED KNUCKLE"); \
	genSvg(fontname, "0x1D8B0", "SIGNWRITING HAND-FIST RING LITTLE"); \
	genSvg(fontname, "0x1D8B1", "SIGNWRITING HAND-CIRCLE RING LITTLE"); \
	genSvg(fontname, "0x1D8B2", "SIGNWRITING HAND-OVAL RING LITTLE"); \
	genSvg(fontname, "0x1D8B3", "SIGNWRITING HAND-ANGLE RING LITTLE"); \
	genSvg(fontname, "0x1D8B4", "SIGNWRITING HAND-FIST RING MIDDLE"); \
	genSvg(fontname, "0x1D8B5", "SIGNWRITING HAND-FIST RING MIDDLE CONJOINED"); \
	genSvg(fontname, "0x1D8B6", "SIGNWRITING HAND-FIST RING MIDDLE RAISED KNUCKLES"); \
	genSvg(fontname, "0x1D8B7", "SIGNWRITING HAND-FIST RING INDEX"); \
	genSvg(fontname, "0x1D8B8", "SIGNWRITING HAND-FIST RING THUMB"); \
	genSvg(fontname, "0x1D8B9", "SIGNWRITING HAND-HOOK RING THUMB"); \
	genSvg(fontname, "0x1D8BA", "SIGNWRITING HAND-FIST INDEX RING LITTLE"); \
	genSvg(fontname, "0x1D8BB", "SIGNWRITING HAND-CIRCLE INDEX RING LITTLE"); \
	genSvg(fontname, "0x1D8BC", "SIGNWRITING HAND-CURLICUE INDEX RING LITTLE ON"); \
	genSvg(fontname, "0x1D8BD", "SIGNWRITING HAND-HOOK INDEX RING LITTLE OUT"); \
	genSvg(fontname, "0x1D8BE", "SIGNWRITING HAND-HOOK INDEX RING LITTLE IN"); \
	genSvg(fontname, "0x1D8BF", "SIGNWRITING HAND-HOOK INDEX RING LITTLE UNDER"); \
	genSvg(fontname, "0x1D8C0", "SIGNWRITING HAND-CUP INDEX RING LITTLE"); \
	genSvg(fontname, "0x1D8C1", "SIGNWRITING HAND-HINGE INDEX RING LITTLE"); \
	genSvg(fontname, "0x1D8C2", "SIGNWRITING HAND-ANGLE INDEX RING LITTLE OUT"); \
	genSvg(fontname, "0x1D8C3", "SIGNWRITING HAND-ANGLE INDEX RING LITTLE"); \
	genSvg(fontname, "0x1D8C4", "SIGNWRITING HAND-FIST MIDDLE DOWN"); \
	genSvg(fontname, "0x1D8C5", "SIGNWRITING HAND-HINGE MIDDLE"); \
	genSvg(fontname, "0x1D8C6", "SIGNWRITING HAND-FIST MIDDLE UP"); \
	genSvg(fontname, "0x1D8C7", "SIGNWRITING HAND-CIRCLE MIDDLE UP"); \
	genSvg(fontname, "0x1D8C8", "SIGNWRITING HAND-FIST MIDDLE RAISED KNUCKLE"); \
	genSvg(fontname, "0x1D8C9", "SIGNWRITING HAND-FIST MIDDLE UP THUMB SIDE"); \
	genSvg(fontname, "0x1D8CA", "SIGNWRITING HAND-HOOK MIDDLE THUMB"); \
	genSvg(fontname, "0x1D8CB", "SIGNWRITING HAND-FIST MIDDLE THUMB LITTLE"); \
	genSvg(fontname, "0x1D8CC", "SIGNWRITING HAND-FIST MIDDLE LITTLE"); \
	genSvg(fontname, "0x1D8CD", "SIGNWRITING HAND-FIST MIDDLE RING LITTLE"); \
	genSvg(fontname, "0x1D8CE", "SIGNWRITING HAND-CIRCLE MIDDLE RING LITTLE"); \
	genSvg(fontname, "0x1D8CF", "SIGNWRITING HAND-CURLICUE MIDDLE RING LITTLE ON"); \
	genSvg(fontname, "0x1D8D0", "SIGNWRITING HAND-CUP MIDDLE RING LITTLE"); \
	genSvg(fontname, "0x1D8D1", "SIGNWRITING HAND-HINGE MIDDLE RING LITTLE"); \
	genSvg(fontname, "0x1D8D2", "SIGNWRITING HAND-ANGLE MIDDLE RING LITTLE OUT"); \
	genSvg(fontname, "0x1D8D3", "SIGNWRITING HAND-ANGLE MIDDLE RING LITTLE IN"); \
	genSvg(fontname, "0x1D8D4", "SIGNWRITING HAND-ANGLE MIDDLE RING LITTLE"); \
	genSvg(fontname, "0x1D8D5", "SIGNWRITING HAND-CIRCLE MIDDLE RING LITTLE BENT"); \
	genSvg(fontname, "0x1D8D6", "SIGNWRITING HAND-CLAW MIDDLE RING LITTLE CONJOINED"); \
	genSvg(fontname, "0x1D8D7", "SIGNWRITING HAND-CLAW MIDDLE RING LITTLE CONJOINED SIDE"); \
	genSvg(fontname, "0x1D8D8", "SIGNWRITING HAND-HOOK MIDDLE RING LITTLE CONJOINED OUT"); \
	genSvg(fontname, "0x1D8D9", "SIGNWRITING HAND-HOOK MIDDLE RING LITTLE CONJOINED IN"); \
	genSvg(fontname, "0x1D8DA", "SIGNWRITING HAND-HOOK MIDDLE RING LITTLE CONJOINED"); \
	genSvg(fontname, "0x1D8DB", "SIGNWRITING HAND-HINGE INDEX HINGED"); \
	genSvg(fontname, "0x1D8DC", "SIGNWRITING HAND-FIST INDEX THUMB SIDE"); \
	genSvg(fontname, "0x1D8DD", "SIGNWRITING HAND-HINGE INDEX THUMB SIDE"); \
	genSvg(fontname, "0x1D8DE", "SIGNWRITING HAND-FIST INDEX THUMB SIDE THUMB DIAGONAL"); \
	genSvg(fontname, "0x1D8DF", "SIGNWRITING HAND-FIST INDEX THUMB SIDE THUMB CONJOINED"); \
	genSvg(fontname, "0x1D8E0", "SIGNWRITING HAND-FIST INDEX THUMB SIDE THUMB BENT"); \
	genSvg(fontname, "0x1D8E1", "SIGNWRITING HAND-FIST INDEX THUMB SIDE INDEX BENT"); \
	genSvg(fontname, "0x1D8E2", "SIGNWRITING HAND-FIST INDEX THUMB SIDE BOTH BENT"); \
	genSvg(fontname, "0x1D8E3", "SIGNWRITING HAND-FIST INDEX THUMB SIDE INDEX HINGE"); \
	genSvg(fontname, "0x1D8E4", "SIGNWRITING HAND-FIST INDEX THUMB FORWARD INDEX STRAIGHT"); \
	genSvg(fontname, "0x1D8E5", "SIGNWRITING HAND-FIST INDEX THUMB FORWARD INDEX BENT"); \
	genSvg(fontname, "0x1D8E6", "SIGNWRITING HAND-FIST INDEX THUMB HOOK"); \
	genSvg(fontname, "0x1D8E7", "SIGNWRITING HAND-FIST INDEX THUMB CURLICUE"); \
	genSvg(fontname, "0x1D8E8", "SIGNWRITING HAND-FIST INDEX THUMB CURVE THUMB INSIDE"); \
	genSvg(fontname, "0x1D8E9", "SIGNWRITING HAND-CLAW INDEX THUMB CURVE THUMB INSIDE"); \
	genSvg(fontname, "0x1D8EA", "SIGNWRITING HAND-FIST INDEX THUMB CURVE THUMB UNDER"); \
	genSvg(fontname, "0x1D8EB", "SIGNWRITING HAND-FIST INDEX THUMB CIRCLE"); \
	genSvg(fontname, "0x1D8EC", "SIGNWRITING HAND-CUP INDEX THUMB"); \
	genSvg(fontname, "0x1D8ED", "SIGNWRITING HAND-CUP INDEX THUMB OPEN"); \
	genSvg(fontname, "0x1D8EE", "SIGNWRITING HAND-HINGE INDEX THUMB OPEN"); \
	genSvg(fontname, "0x1D8EF", "SIGNWRITING HAND-HINGE INDEX THUMB LARGE"); \
	genSvg(fontname, "0x1D8F0", "SIGNWRITING HAND-HINGE INDEX THUMB"); \
	genSvg(fontname, "0x1D8F1", "SIGNWRITING HAND-HINGE INDEX THUMB SMALL"); \
	genSvg(fontname, "0x1D8F2", "SIGNWRITING HAND-ANGLE INDEX THUMB OUT"); \
	genSvg(fontname, "0x1D8F3", "SIGNWRITING HAND-ANGLE INDEX THUMB IN"); \
	genSvg(fontname, "0x1D8F4", "SIGNWRITING HAND-ANGLE INDEX THUMB"); \
	genSvg(fontname, "0x1D8F5", "SIGNWRITING HAND-FIST THUMB"); \
	genSvg(fontname, "0x1D8F6", "SIGNWRITING HAND-FIST THUMB HEEL"); \
	genSvg(fontname, "0x1D8F7", "SIGNWRITING HAND-FIST THUMB SIDE DIAGONAL"); \
	genSvg(fontname, "0x1D8F8", "SIGNWRITING HAND-FIST THUMB SIDE CONJOINED"); \
	genSvg(fontname, "0x1D8F9", "SIGNWRITING HAND-FIST THUMB SIDE BENT"); \
	genSvg(fontname, "0x1D8FA", "SIGNWRITING HAND-FIST THUMB FORWARD"); \
	genSvg(fontname, "0x1D8FB", "SIGNWRITING HAND-FIST THUMB BETWEEN INDEX MIDDLE"); \
	genSvg(fontname, "0x1D8FC", "SIGNWRITING HAND-FIST THUMB BETWEEN MIDDLE RING"); \
	genSvg(fontname, "0x1D8FD", "SIGNWRITING HAND-FIST THUMB BETWEEN RING LITTLE"); \
	genSvg(fontname, "0x1D8FE", "SIGNWRITING HAND-FIST THUMB UNDER TWO FINGERS"); \
	genSvg(fontname, "0x1D8FF", "SIGNWRITING HAND-FIST THUMB OVER TWO FINGERS"); \
	genSvg(fontname, "0x1D900", "SIGNWRITING HAND-FIST THUMB UNDER THREE FINGERS"); \
	genSvg(fontname, "0x1D901", "SIGNWRITING HAND-FIST THUMB UNDER FOUR FINGERS"); \
	genSvg(fontname, "0x1D902", "SIGNWRITING HAND-FIST THUMB OVER FOUR RAISED KNUCKLES"); \
	genSvg(fontname, "0x1D903", "SIGNWRITING HAND-FIST"); \
	genSvg(fontname, "0x1D904", "SIGNWRITING HAND-FIST HEEL"); \
	genSvg(fontname, "0x1D905", "SIGNWRITING TOUCH SINGLE"); \
	genSvg(fontname, "0x1D906", "SIGNWRITING TOUCH MULTIPLE"); \
	genSvg(fontname, "0x1D907", "SIGNWRITING TOUCH BETWEEN"); \
	genSvg(fontname, "0x1D908", "SIGNWRITING GRASP SINGLE"); \
	genSvg(fontname, "0x1D909", "SIGNWRITING GRASP MULTIPLE"); \
	genSvg(fontname, "0x1D90A", "SIGNWRITING GRASP BETWEEN"); \
	genSvg(fontname, "0x1D90B", "SIGNWRITING STRIKE SINGLE"); \
	genSvg(fontname, "0x1D90C", "SIGNWRITING STRIKE MULTIPLE"); \
	genSvg(fontname, "0x1D90D", "SIGNWRITING STRIKE BETWEEN"); \
	genSvg(fontname, "0x1D90E", "SIGNWRITING BRUSH SINGLE"); \
	genSvg(fontname, "0x1D90F", "SIGNWRITING BRUSH MULTIPLE"); \
	genSvg(fontname, "0x1D910", "SIGNWRITING BRUSH BETWEEN"); \
	genSvg(fontname, "0x1D911", "SIGNWRITING RUB SINGLE"); \
	genSvg(fontname, "0x1D912", "SIGNWRITING RUB MULTIPLE"); \
	genSvg(fontname, "0x1D913", "SIGNWRITING RUB BETWEEN"); \
	genSvg(fontname, "0x1D914", "SIGNWRITING SURFACE SYMBOLS"); \
	genSvg(fontname, "0x1D915", "SIGNWRITING SURFACE BETWEEN"); \
	genSvg(fontname, "0x1D916", "SIGNWRITING SQUEEZE LARGE SINGLE"); \
	genSvg(fontname, "0x1D917", "SIGNWRITING SQUEEZE SMALL SINGLE"); \
	genSvg(fontname, "0x1D918", "SIGNWRITING SQUEEZE LARGE MULTIPLE"); \
	genSvg(fontname, "0x1D919", "SIGNWRITING SQUEEZE SMALL MULTIPLE"); \
	genSvg(fontname, "0x1D91A", "SIGNWRITING SQUEEZE SEQUENTIAL"); \
	genSvg(fontname, "0x1D91B", "SIGNWRITING FLICK LARGE SINGLE"); \
	genSvg(fontname, "0x1D91C", "SIGNWRITING FLICK SMALL SINGLE"); \
	genSvg(fontname, "0x1D91D", "SIGNWRITING FLICK LARGE MULTIPLE"); \
	genSvg(fontname, "0x1D91E", "SIGNWRITING FLICK SMALL MULTIPLE"); \
	genSvg(fontname, "0x1D91F", "SIGNWRITING FLICK SEQUENTIAL"); \
	genSvg(fontname, "0x1D920", "SIGNWRITING SQUEEZE FLICK ALTERNATING"); \
	genSvg(fontname, "0x1D921", "SIGNWRITING MOVEMENT-HINGE UP DOWN LARGE"); \
	genSvg(fontname, "0x1D922", "SIGNWRITING MOVEMENT-HINGE UP DOWN SMALL"); \
	genSvg(fontname, "0x1D923", "SIGNWRITING MOVEMENT-HINGE UP SEQUENTIAL"); \
	genSvg(fontname, "0x1D924", "SIGNWRITING MOVEMENT-HINGE DOWN SEQUENTIAL"); \
	genSvg(fontname, "0x1D925", "SIGNWRITING MOVEMENT-HINGE UP DOWN ALTERNATING LARGE"); \
	genSvg(fontname, "0x1D926", "SIGNWRITING MOVEMENT-HINGE UP DOWN ALTERNATING SMALL"); \
	genSvg(fontname, "0x1D927", "SIGNWRITING MOVEMENT-HINGE SIDE TO SIDE SCISSORS"); \
	genSvg(fontname, "0x1D928", "SIGNWRITING MOVEMENT-WALLPLANE FINGER CONTACT"); \
	genSvg(fontname, "0x1D929", "SIGNWRITING MOVEMENT-FLOORPLANE FINGER CONTACT"); \
	genSvg(fontname, "0x1D92A", "SIGNWRITING MOVEMENT-WALLPLANE SINGLE STRAIGHT SMALL"); \
	genSvg(fontname, "0x1D92B", "SIGNWRITING MOVEMENT-WALLPLANE SINGLE STRAIGHT MEDIUM"); \
	genSvg(fontname, "0x1D92C", "SIGNWRITING MOVEMENT-WALLPLANE SINGLE STRAIGHT LARGE"); \
	genSvg(fontname, "0x1D92D", "SIGNWRITING MOVEMENT-WALLPLANE SINGLE STRAIGHT LARGEST"); \
	genSvg(fontname, "0x1D92E", "SIGNWRITING MOVEMENT-WALLPLANE SINGLE WRIST FLEX"); \
	genSvg(fontname, "0x1D92F", "SIGNWRITING MOVEMENT-WALLPLANE DOUBLE STRAIGHT"); \
	genSvg(fontname, "0x1D930", "SIGNWRITING MOVEMENT-WALLPLANE DOUBLE WRIST FLEX"); \
	genSvg(fontname, "0x1D931", "SIGNWRITING MOVEMENT-WALLPLANE DOUBLE ALTERNATING"); \
	genSvg(fontname, "0x1D932", "SIGNWRITING MOVEMENT-WALLPLANE DOUBLE ALTERNATING WRIST FLEX"); \
	genSvg(fontname, "0x1D933", "SIGNWRITING MOVEMENT-WALLPLANE CROSS"); \
	genSvg(fontname, "0x1D934", "SIGNWRITING MOVEMENT-WALLPLANE TRIPLE STRAIGHT MOVEMENT"); \
	genSvg(fontname, "0x1D935", "SIGNWRITING MOVEMENT-WALLPLANE TRIPLE WRIST FLEX"); \
	genSvg(fontname, "0x1D936", "SIGNWRITING MOVEMENT-WALLPLANE TRIPLE ALTERNATING"); \
	genSvg(fontname, "0x1D937", "SIGNWRITING MOVEMENT-WALLPLANE TRIPLE ALTERNATING WRIST FLEX"); \
	genSvg(fontname, "0x1D938", "SIGNWRITING MOVEMENT-WALLPLANE BEND SMALL"); \
	genSvg(fontname, "0x1D939", "SIGNWRITING MOVEMENT-WALLPLANE BEND MEDIUM"); \
	genSvg(fontname, "0x1D93A", "SIGNWRITING MOVEMENT-WALLPLANE BEND LARGE"); \
	genSvg(fontname, "0x1D93B", "SIGNWRITING MOVEMENT-WALLPLANE CORNER SMALL"); \
	genSvg(fontname, "0x1D93C", "SIGNWRITING MOVEMENT-WALLPLANE CORNER MEDIUM"); \
	genSvg(fontname, "0x1D93D", "SIGNWRITING MOVEMENT-WALLPLANE CORNER LARGE"); \
	genSvg(fontname, "0x1D93E", "SIGNWRITING MOVEMENT-WALLPLANE CORNER ROTATION"); \
	genSvg(fontname, "0x1D93F", "SIGNWRITING MOVEMENT-WALLPLANE CHECK SMALL"); \
	genSvg(fontname, "0x1D940", "SIGNWRITING MOVEMENT-WALLPLANE CHECK MEDIUM"); \
	genSvg(fontname, "0x1D941", "SIGNWRITING MOVEMENT-WALLPLANE CHECK LARGE"); \
	genSvg(fontname, "0x1D942", "SIGNWRITING MOVEMENT-WALLPLANE BOX SMALL"); \
	genSvg(fontname, "0x1D943", "SIGNWRITING MOVEMENT-WALLPLANE BOX MEDIUM"); \
	genSvg(fontname, "0x1D944", "SIGNWRITING MOVEMENT-WALLPLANE BOX LARGE"); \
	genSvg(fontname, "0x1D945", "SIGNWRITING MOVEMENT-WALLPLANE ZIGZAG SMALL"); \
	genSvg(fontname, "0x1D946", "SIGNWRITING MOVEMENT-WALLPLANE ZIGZAG MEDIUM"); \
	genSvg(fontname, "0x1D947", "SIGNWRITING MOVEMENT-WALLPLANE ZIGZAG LARGE"); \
	genSvg(fontname, "0x1D948", "SIGNWRITING MOVEMENT-WALLPLANE PEAKS SMALL"); \
	genSvg(fontname, "0x1D949", "SIGNWRITING MOVEMENT-WALLPLANE PEAKS MEDIUM"); \
	genSvg(fontname, "0x1D94A", "SIGNWRITING MOVEMENT-WALLPLANE PEAKS LARGE"); \
	genSvg(fontname, "0x1D94B", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-WALLPLANE SINGLE"); \
	genSvg(fontname, "0x1D94C", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-WALLPLANE DOUBLE"); \
	genSvg(fontname, "0x1D94D", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-WALLPLANE ALTERNATING"); \
	genSvg(fontname, "0x1D94E", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-FLOORPLANE SINGLE"); \
	genSvg(fontname, "0x1D94F", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-FLOORPLANE DOUBLE"); \
	genSvg(fontname, "0x1D950", "SIGNWRITING TRAVEL-WALLPLANE ROTATION-FLOORPLANE ALTERNATING"); \
	genSvg(fontname, "0x1D951", "SIGNWRITING TRAVEL-WALLPLANE SHAKING"); \
	genSvg(fontname, "0x1D952", "SIGNWRITING TRAVEL-WALLPLANE ARM SPIRAL SINGLE"); \
	genSvg(fontname, "0x1D953", "SIGNWRITING TRAVEL-WALLPLANE ARM SPIRAL DOUBLE"); \
	genSvg(fontname, "0x1D954", "SIGNWRITING TRAVEL-WALLPLANE ARM SPIRAL TRIPLE"); \
	genSvg(fontname, "0x1D955", "SIGNWRITING MOVEMENT-DIAGONAL AWAY SMALL"); \
	genSvg(fontname, "0x1D956", "SIGNWRITING MOVEMENT-DIAGONAL AWAY MEDIUM"); \
	genSvg(fontname, "0x1D957", "SIGNWRITING MOVEMENT-DIAGONAL AWAY LARGE"); \
	genSvg(fontname, "0x1D958", "SIGNWRITING MOVEMENT-DIAGONAL AWAY LARGEST"); \
	genSvg(fontname, "0x1D959", "SIGNWRITING MOVEMENT-DIAGONAL TOWARDS SMALL"); \
	genSvg(fontname, "0x1D95A", "SIGNWRITING MOVEMENT-DIAGONAL TOWARDS MEDIUM"); \
	genSvg(fontname, "0x1D95B", "SIGNWRITING MOVEMENT-DIAGONAL TOWARDS LARGE"); \
	genSvg(fontname, "0x1D95C", "SIGNWRITING MOVEMENT-DIAGONAL TOWARDS LARGEST"); \
	genSvg(fontname, "0x1D95D", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN AWAY SMALL"); \
	genSvg(fontname, "0x1D95E", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN AWAY MEDIUM"); \
	genSvg(fontname, "0x1D95F", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN AWAY LARGE"); \
	genSvg(fontname, "0x1D960", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN AWAY LARGEST"); \
	genSvg(fontname, "0x1D961", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN TOWARDS SMALL"); \
	genSvg(fontname, "0x1D962", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN TOWARDS MEDIUM"); \
	genSvg(fontname, "0x1D963", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN TOWARDS LARGE"); \
	genSvg(fontname, "0x1D964", "SIGNWRITING MOVEMENT-DIAGONAL BETWEEN TOWARDS LARGEST"); \
	genSvg(fontname, "0x1D965", "SIGNWRITING MOVEMENT-FLOORPLANE SINGLE STRAIGHT SMALL"); \
	genSvg(fontname, "0x1D966", "SIGNWRITING MOVEMENT-FLOORPLANE SINGLE STRAIGHT MEDIUM"); \
	genSvg(fontname, "0x1D967", "SIGNWRITING MOVEMENT-FLOORPLANE SINGLE STRAIGHT LARGE"); \
	genSvg(fontname, "0x1D968", "SIGNWRITING MOVEMENT-FLOORPLANE SINGLE STRAIGHT LARGEST"); \
	genSvg(fontname, "0x1D969", "SIGNWRITING MOVEMENT-FLOORPLANE SINGLE WRIST FLEX"); \
	genSvg(fontname, "0x1D96A", "SIGNWRITING MOVEMENT-FLOORPLANE DOUBLE STRAIGHT"); \
	genSvg(fontname, "0x1D96B", "SIGNWRITING MOVEMENT-FLOORPLANE DOUBLE WRIST FLEX"); \
	genSvg(fontname, "0x1D96C", "SIGNWRITING MOVEMENT-FLOORPLANE DOUBLE ALTERNATING"); \
	genSvg(fontname, "0x1D96D", "SIGNWRITING MOVEMENT-FLOORPLANE DOUBLE ALTERNATING WRIST FLEX"); \
	genSvg(fontname, "0x1D96E", "SIGNWRITING MOVEMENT-FLOORPLANE CROSS"); \
	genSvg(fontname, "0x1D96F", "SIGNWRITING MOVEMENT-FLOORPLANE TRIPLE STRAIGHT MOVEMENT"); \
	genSvg(fontname, "0x1D970", "SIGNWRITING MOVEMENT-FLOORPLANE TRIPLE WRIST FLEX"); \
	genSvg(fontname, "0x1D971", "SIGNWRITING MOVEMENT-FLOORPLANE TRIPLE ALTERNATING MOVEMENT"); \
	genSvg(fontname, "0x1D972", "SIGNWRITING MOVEMENT-FLOORPLANE TRIPLE ALTERNATING WRIST FLEX"); \
	genSvg(fontname, "0x1D973", "SIGNWRITING MOVEMENT-FLOORPLANE BEND"); \
	genSvg(fontname, "0x1D974", "SIGNWRITING MOVEMENT-FLOORPLANE CORNER SMALL"); \
	genSvg(fontname, "0x1D975", "SIGNWRITING MOVEMENT-FLOORPLANE CORNER MEDIUM"); \
	genSvg(fontname, "0x1D976", "SIGNWRITING MOVEMENT-FLOORPLANE CORNER LARGE"); \
	genSvg(fontname, "0x1D977", "SIGNWRITING MOVEMENT-FLOORPLANE CHECK"); \
	genSvg(fontname, "0x1D978", "SIGNWRITING MOVEMENT-FLOORPLANE BOX SMALL"); \
	genSvg(fontname, "0x1D979", "SIGNWRITING MOVEMENT-FLOORPLANE BOX MEDIUM"); \
	genSvg(fontname, "0x1D97A", "SIGNWRITING MOVEMENT-FLOORPLANE BOX LARGE"); \
	genSvg(fontname, "0x1D97B", "SIGNWRITING MOVEMENT-FLOORPLANE ZIGZAG SMALL"); \
	genSvg(fontname, "0x1D97C", "SIGNWRITING MOVEMENT-FLOORPLANE ZIGZAG MEDIUM"); \
	genSvg(fontname, "0x1D97D", "SIGNWRITING MOVEMENT-FLOORPLANE ZIGZAG LARGE"); \
	genSvg(fontname, "0x1D97E", "SIGNWRITING MOVEMENT-FLOORPLANE PEAKS SMALL"); \
	genSvg(fontname, "0x1D97F", "SIGNWRITING MOVEMENT-FLOORPLANE PEAKS MEDIUM"); \
	genSvg(fontname, "0x1D980", "SIGNWRITING MOVEMENT-FLOORPLANE PEAKS LARGE"); \
	genSvg(fontname, "0x1D981", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-FLOORPLANE SINGLE"); \
	genSvg(fontname, "0x1D982", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-FLOORPLANE DOUBLE"); \
	genSvg(fontname, "0x1D983", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-FLOORPLANE ALTERNATING"); \
	genSvg(fontname, "0x1D984", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-WALLPLANE SINGLE"); \
	genSvg(fontname, "0x1D985", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-WALLPLANE DOUBLE"); \
	genSvg(fontname, "0x1D986", "SIGNWRITING TRAVEL-FLOORPLANE ROTATION-WALLPLANE ALTERNATING"); \
	genSvg(fontname, "0x1D987", "SIGNWRITING TRAVEL-FLOORPLANE SHAKING"); \
	genSvg(fontname, "0x1D988", "SIGNWRITING MOVEMENT-WALLPLANE CURVE QUARTER SMALL"); \
	genSvg(fontname, "0x1D989", "SIGNWRITING MOVEMENT-WALLPLANE CURVE QUARTER MEDIUM"); \
	genSvg(fontname, "0x1D98A", "SIGNWRITING MOVEMENT-WALLPLANE CURVE QUARTER LARGE"); \
	genSvg(fontname, "0x1D98B", "SIGNWRITING MOVEMENT-WALLPLANE CURVE QUARTER LARGEST"); \
	genSvg(fontname, "0x1D98C", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HALF-CIRCLE SMALL"); \
	genSvg(fontname, "0x1D98D", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HALF-CIRCLE MEDIUM"); \
	genSvg(fontname, "0x1D98E", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HALF-CIRCLE LARGE"); \
	genSvg(fontname, "0x1D98F", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HALF-CIRCLE LARGEST"); \
	genSvg(fontname, "0x1D990", "SIGNWRITING MOVEMENT-WALLPLANE CURVE THREE-QUARTER CIRCLE SMALL"); \
	genSvg(fontname, "0x1D991", "SIGNWRITING MOVEMENT-WALLPLANE CURVE THREE-QUARTER CIRCLE MEDIUM"); \
	genSvg(fontname, "0x1D992", "SIGNWRITING MOVEMENT-WALLPLANE HUMP SMALL"); \
	genSvg(fontname, "0x1D993", "SIGNWRITING MOVEMENT-WALLPLANE HUMP MEDIUM"); \
	genSvg(fontname, "0x1D994", "SIGNWRITING MOVEMENT-WALLPLANE HUMP LARGE"); \
	genSvg(fontname, "0x1D995", "SIGNWRITING MOVEMENT-WALLPLANE LOOP SMALL"); \
	genSvg(fontname, "0x1D996", "SIGNWRITING MOVEMENT-WALLPLANE LOOP MEDIUM"); \
	genSvg(fontname, "0x1D997", "SIGNWRITING MOVEMENT-WALLPLANE LOOP LARGE"); \
	genSvg(fontname, "0x1D998", "SIGNWRITING MOVEMENT-WALLPLANE LOOP SMALL DOUBLE"); \
	genSvg(fontname, "0x1D999", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE DOUBLE SMALL"); \
	genSvg(fontname, "0x1D99A", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE DOUBLE MEDIUM"); \
	genSvg(fontname, "0x1D99B", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE DOUBLE LARGE"); \
	genSvg(fontname, "0x1D99C", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE TRIPLE SMALL"); \
	genSvg(fontname, "0x1D99D", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE TRIPLE MEDIUM"); \
	genSvg(fontname, "0x1D99E", "SIGNWRITING MOVEMENT-WALLPLANE WAVE CURVE TRIPLE LARGE"); \
	genSvg(fontname, "0x1D99F", "SIGNWRITING MOVEMENT-WALLPLANE CURVE THEN STRAIGHT"); \
	genSvg(fontname, "0x1D9A0", "SIGNWRITING MOVEMENT-WALLPLANE CURVED CROSS SMALL"); \
	genSvg(fontname, "0x1D9A1", "SIGNWRITING MOVEMENT-WALLPLANE CURVED CROSS MEDIUM"); \
	genSvg(fontname, "0x1D9A2", "SIGNWRITING ROTATION-WALLPLANE SINGLE"); \
	genSvg(fontname, "0x1D9A3", "SIGNWRITING ROTATION-WALLPLANE DOUBLE"); \
	genSvg(fontname, "0x1D9A4", "SIGNWRITING ROTATION-WALLPLANE ALTERNATE"); \
	genSvg(fontname, "0x1D9A5", "SIGNWRITING MOVEMENT-WALLPLANE SHAKING"); \
	genSvg(fontname, "0x1D9A6", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9A7", "SIGNWRITING MOVEMENT-WALLPLANE HUMP HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9A8", "SIGNWRITING MOVEMENT-WALLPLANE LOOP HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9A9", "SIGNWRITING MOVEMENT-WALLPLANE WAVE HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9AA", "SIGNWRITING ROTATION-WALLPLANE SINGLE HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9AB", "SIGNWRITING ROTATION-WALLPLANE DOUBLE HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9AC", "SIGNWRITING ROTATION-WALLPLANE ALTERNATING HITTING FRONT WALL"); \
	genSvg(fontname, "0x1D9AD", "SIGNWRITING MOVEMENT-WALLPLANE CURVE HITTING CHEST"); \
	genSvg(fontname, "0x1D9AE", "SIGNWRITING MOVEMENT-WALLPLANE HUMP HITTING CHEST"); \
	genSvg(fontname, "0x1D9AF", "SIGNWRITING MOVEMENT-WALLPLANE LOOP HITTING CHEST"); \
	genSvg(fontname, "0x1D9B0", "SIGNWRITING MOVEMENT-WALLPLANE WAVE HITTING CHEST"); \
	genSvg(fontname, "0x1D9B1", "SIGNWRITING ROTATION-WALLPLANE SINGLE HITTING CHEST"); \
	genSvg(fontname, "0x1D9B2", "SIGNWRITING ROTATION-WALLPLANE DOUBLE HITTING CHEST"); \
	genSvg(fontname, "0x1D9B3", "SIGNWRITING ROTATION-WALLPLANE ALTERNATING HITTING CHEST"); \
	genSvg(fontname, "0x1D9B4", "SIGNWRITING MOVEMENT-WALLPLANE WAVE DIAGONAL PATH SMALL"); \
	genSvg(fontname, "0x1D9B5", "SIGNWRITING MOVEMENT-WALLPLANE WAVE DIAGONAL PATH MEDIUM"); \
	genSvg(fontname, "0x1D9B6", "SIGNWRITING MOVEMENT-WALLPLANE WAVE DIAGONAL PATH LARGE"); \
	genSvg(fontname, "0x1D9B7", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE HITTING CEILING SMALL"); \
	genSvg(fontname, "0x1D9B8", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE HITTING CEILING LARGE"); \
	genSvg(fontname, "0x1D9B9", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING CEILING SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9BA", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING CEILING LARGE DOUBLE"); \
	genSvg(fontname, "0x1D9BB", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING CEILING SMALL TRIPLE"); \
	genSvg(fontname, "0x1D9BC", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING CEILING LARGE TRIPLE"); \
	genSvg(fontname, "0x1D9BD", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING CEILING SMALL SINGLE"); \
	genSvg(fontname, "0x1D9BE", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING CEILING LARGE SINGLE"); \
	genSvg(fontname, "0x1D9BF", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING CEILING SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9C0", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING CEILING LARGE DOUBLE"); \
	genSvg(fontname, "0x1D9C1", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE HITTING CEILING SMALL"); \
	genSvg(fontname, "0x1D9C2", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE HITTING CEILING LARGE"); \
	genSvg(fontname, "0x1D9C3", "SIGNWRITING ROTATION-FLOORPLANE SINGLE HITTING CEILING"); \
	genSvg(fontname, "0x1D9C4", "SIGNWRITING ROTATION-FLOORPLANE DOUBLE HITTING CEILING"); \
	genSvg(fontname, "0x1D9C5", "SIGNWRITING ROTATION-FLOORPLANE ALTERNATING HITTING CEILING"); \
	genSvg(fontname, "0x1D9C6", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE HITTING FLOOR SMALL"); \
	genSvg(fontname, "0x1D9C7", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE HITTING FLOOR LARGE"); \
	genSvg(fontname, "0x1D9C8", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING FLOOR SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9C9", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING FLOOR LARGE DOUBLE"); \
	genSvg(fontname, "0x1D9CA", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING FLOOR TRIPLE SMALL TRIPLE"); \
	genSvg(fontname, "0x1D9CB", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP HITTING FLOOR TRIPLE LARGE TRIPLE"); \
	genSvg(fontname, "0x1D9CC", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING FLOOR SMALL SINGLE"); \
	genSvg(fontname, "0x1D9CD", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING FLOOR LARGE SINGLE"); \
	genSvg(fontname, "0x1D9CE", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING FLOOR SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9CF", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP HITTING FLOOR LARGE DOUBLE"); \
	genSvg(fontname, "0x1D9D0", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE HITTING FLOOR SMALL"); \
	genSvg(fontname, "0x1D9D1", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE HITTING FLOOR LARGE"); \
	genSvg(fontname, "0x1D9D2", "SIGNWRITING ROTATION-FLOORPLANE SINGLE HITTING FLOOR"); \
	genSvg(fontname, "0x1D9D3", "SIGNWRITING ROTATION-FLOORPLANE DOUBLE HITTING FLOOR"); \
	genSvg(fontname, "0x1D9D4", "SIGNWRITING ROTATION-FLOORPLANE ALTERNATING HITTING FLOOR"); \
	genSvg(fontname, "0x1D9D5", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE SMALL"); \
	genSvg(fontname, "0x1D9D6", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE MEDIUM"); \
	genSvg(fontname, "0x1D9D7", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE LARGE"); \
	genSvg(fontname, "0x1D9D8", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE LARGEST"); \
	genSvg(fontname, "0x1D9D9", "SIGNWRITING MOVEMENT-FLOORPLANE CURVE COMBINED"); \
	genSvg(fontname, "0x1D9DA", "SIGNWRITING MOVEMENT-FLOORPLANE HUMP SMALL"); \
	genSvg(fontname, "0x1D9DB", "SIGNWRITING MOVEMENT-FLOORPLANE LOOP SMALL"); \
	genSvg(fontname, "0x1D9DC", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE SNAKE"); \
	genSvg(fontname, "0x1D9DD", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE SMALL"); \
	genSvg(fontname, "0x1D9DE", "SIGNWRITING MOVEMENT-FLOORPLANE WAVE LARGE"); \
	genSvg(fontname, "0x1D9DF", "SIGNWRITING ROTATION-FLOORPLANE SINGLE"); \
	genSvg(fontname, "0x1D9E0", "SIGNWRITING ROTATION-FLOORPLANE DOUBLE"); \
	genSvg(fontname, "0x1D9E1", "SIGNWRITING ROTATION-FLOORPLANE ALTERNATING"); \
	genSvg(fontname, "0x1D9E2", "SIGNWRITING MOVEMENT-FLOORPLANE SHAKING PARALLEL"); \
	genSvg(fontname, "0x1D9E3", "SIGNWRITING MOVEMENT-WALLPLANE ARM CIRCLE SMALL SINGLE"); \
	genSvg(fontname, "0x1D9E4", "SIGNWRITING MOVEMENT-WALLPLANE ARM CIRCLE MEDIUM SINGLE"); \
	genSvg(fontname, "0x1D9E5", "SIGNWRITING MOVEMENT-WALLPLANE ARM CIRCLE SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9E6", "SIGNWRITING MOVEMENT-WALLPLANE ARM CIRCLE MEDIUM DOUBLE"); \
	genSvg(fontname, "0x1D9E7", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL SMALL SINGLE"); \
	genSvg(fontname, "0x1D9E8", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL MEDIUM SINGLE"); \
	genSvg(fontname, "0x1D9E9", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL LARGE SINGLE"); \
	genSvg(fontname, "0x1D9EA", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL SMALL DOUBLE"); \
	genSvg(fontname, "0x1D9EB", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL MEDIUM DOUBLE"); \
	genSvg(fontname, "0x1D9EC", "SIGNWRITING MOVEMENT-FLOORPLANE ARM CIRCLE HITTING WALL LARGE DOUBLE"); \
	genSvg(fontname, "0x1D9ED", "SIGNWRITING MOVEMENT-WALLPLANE WRIST CIRCLE FRONT SINGLE"); \
	genSvg(fontname, "0x1D9EE", "SIGNWRITING MOVEMENT-WALLPLANE WRIST CIRCLE FRONT DOUBLE"); \
	genSvg(fontname, "0x1D9EF", "SIGNWRITING MOVEMENT-FLOORPLANE WRIST CIRCLE HITTING WALL SINGLE"); \
	genSvg(fontname, "0x1D9F0", "SIGNWRITING MOVEMENT-FLOORPLANE WRIST CIRCLE HITTING WALL DOUBLE"); \
	genSvg(fontname, "0x1D9F1", "SIGNWRITING MOVEMENT-WALLPLANE FINGER CIRCLES SINGLE"); \
	genSvg(fontname, "0x1D9F2", "SIGNWRITING MOVEMENT-WALLPLANE FINGER CIRCLES DOUBLE"); \
	genSvg(fontname, "0x1D9F3", "SIGNWRITING MOVEMENT-FLOORPLANE FINGER CIRCLES HITTING WALL SINGLE"); \
	genSvg(fontname, "0x1D9F4", "SIGNWRITING MOVEMENT-FLOORPLANE FINGER CIRCLES HITTING WALL DOUBLE"); \
	genSvg(fontname, "0x1D9F5", "SIGNWRITING DYNAMIC ARROWHEAD SMALL"); \
	genSvg(fontname, "0x1D9F6", "SIGNWRITING DYNAMIC ARROWHEAD LARGE"); \
	genSvg(fontname, "0x1D9F7", "SIGNWRITING DYNAMIC FAST"); \
	genSvg(fontname, "0x1D9F8", "SIGNWRITING DYNAMIC SLOW"); \
	genSvg(fontname, "0x1D9F9", "SIGNWRITING DYNAMIC TENSE"); \
	genSvg(fontname, "0x1D9FA", "SIGNWRITING DYNAMIC RELAXED"); \
	genSvg(fontname, "0x1D9FB", "SIGNWRITING DYNAMIC SIMULTANEOUS"); \
	genSvg(fontname, "0x1D9FC", "SIGNWRITING DYNAMIC SIMULTANEOUS ALTERNATING"); \
	genSvg(fontname, "0x1D9FD", "SIGNWRITING DYNAMIC EVERY OTHER TIME"); \
	genSvg(fontname, "0x1D9FE", "SIGNWRITING DYNAMIC GRADUAL"); \
	genSvg(fontname, "0x1D9FF", "SIGNWRITING HEAD"); \
	genSvg(fontname, "0x1DA00", "SIGNWRITING HEAD RIM"); \
	genSvg(fontname, "0x1DA01", "SIGNWRITING HEAD MOVEMENT-WALLPLANE STRAIGHT"); \
	genSvg(fontname, "0x1DA02", "SIGNWRITING HEAD MOVEMENT-WALLPLANE TILT"); \
	genSvg(fontname, "0x1DA03", "SIGNWRITING HEAD MOVEMENT-FLOORPLANE STRAIGHT"); \
	genSvg(fontname, "0x1DA04", "SIGNWRITING HEAD MOVEMENT-WALLPLANE CURVE"); \
	genSvg(fontname, "0x1DA05", "SIGNWRITING HEAD MOVEMENT-FLOORPLANE CURVE"); \
	genSvg(fontname, "0x1DA06", "SIGNWRITING HEAD MOVEMENT CIRCLE"); \
	genSvg(fontname, "0x1DA07", "SIGNWRITING FACE DIRECTION POSITION NOSE FORWARD TILTING"); \
	genSvg(fontname, "0x1DA08", "SIGNWRITING FACE DIRECTION POSITION NOSE UP OR DOWN"); \
	genSvg(fontname, "0x1DA09", "SIGNWRITING FACE DIRECTION POSITION NOSE UP OR DOWN TILTING"); \
	genSvg(fontname, "0x1DA0A", "SIGNWRITING EYEBROWS STRAIGHT UP"); \
	genSvg(fontname, "0x1DA0B", "SIGNWRITING EYEBROWS STRAIGHT NEUTRAL"); \
	genSvg(fontname, "0x1DA0C", "SIGNWRITING EYEBROWS STRAIGHT DOWN"); \
	genSvg(fontname, "0x1DA0D", "SIGNWRITING DREAMY EYEBROWS NEUTRAL DOWN"); \
	genSvg(fontname, "0x1DA0E", "SIGNWRITING DREAMY EYEBROWS DOWN NEUTRAL"); \
	genSvg(fontname, "0x1DA0F", "SIGNWRITING DREAMY EYEBROWS UP NEUTRAL"); \
	genSvg(fontname, "0x1DA10", "SIGNWRITING DREAMY EYEBROWS NEUTRAL UP"); \
	genSvg(fontname, "0x1DA11", "SIGNWRITING FOREHEAD NEUTRAL"); \
	genSvg(fontname, "0x1DA12", "SIGNWRITING FOREHEAD CONTACT"); \
	genSvg(fontname, "0x1DA13", "SIGNWRITING FOREHEAD WRINKLED"); \
	genSvg(fontname, "0x1DA14", "SIGNWRITING EYES OPEN"); \
	genSvg(fontname, "0x1DA15", "SIGNWRITING EYES SQUEEZED"); \
	genSvg(fontname, "0x1DA16", "SIGNWRITING EYES CLOSED"); \
	genSvg(fontname, "0x1DA17", "SIGNWRITING EYE BLINK SINGLE"); \
	genSvg(fontname, "0x1DA18", "SIGNWRITING EYE BLINK MULTIPLE"); \
	genSvg(fontname, "0x1DA19", "SIGNWRITING EYES HALF OPEN"); \
	genSvg(fontname, "0x1DA1A", "SIGNWRITING EYES WIDE OPEN"); \
	genSvg(fontname, "0x1DA1B", "SIGNWRITING EYES HALF CLOSED"); \
	genSvg(fontname, "0x1DA1C", "SIGNWRITING EYES WIDENING MOVEMENT"); \
	genSvg(fontname, "0x1DA1D", "SIGNWRITING EYE WINK"); \
	genSvg(fontname, "0x1DA1E", "SIGNWRITING EYELASHES UP"); \
	genSvg(fontname, "0x1DA1F", "SIGNWRITING EYELASHES DOWN"); \
	genSvg(fontname, "0x1DA20", "SIGNWRITING EYELASHES FLUTTERING"); \
	genSvg(fontname, "0x1DA21", "SIGNWRITING EYEGAZE-WALLPLANE STRAIGHT"); \
	genSvg(fontname, "0x1DA22", "SIGNWRITING EYEGAZE-WALLPLANE STRAIGHT DOUBLE"); \
	genSvg(fontname, "0x1DA23", "SIGNWRITING EYEGAZE-WALLPLANE STRAIGHT ALTERNATING"); \
	genSvg(fontname, "0x1DA24", "SIGNWRITING EYEGAZE-FLOORPLANE STRAIGHT"); \
	genSvg(fontname, "0x1DA25", "SIGNWRITING EYEGAZE-FLOORPLANE STRAIGHT DOUBLE"); \
	genSvg(fontname, "0x1DA26", "SIGNWRITING EYEGAZE-FLOORPLANE STRAIGHT ALTERNATING"); \
	genSvg(fontname, "0x1DA27", "SIGNWRITING EYEGAZE-WALLPLANE CURVED"); \
	genSvg(fontname, "0x1DA28", "SIGNWRITING EYEGAZE-FLOORPLANE CURVED"); \
	genSvg(fontname, "0x1DA29", "SIGNWRITING EYEGAZE-WALLPLANE CIRCLING"); \
	genSvg(fontname, "0x1DA2A", "SIGNWRITING CHEEKS PUFFED"); \
	genSvg(fontname, "0x1DA2B", "SIGNWRITING CHEEKS NEUTRAL"); \
	genSvg(fontname, "0x1DA2C", "SIGNWRITING CHEEKS SUCKED"); \
	genSvg(fontname, "0x1DA2D", "SIGNWRITING TENSE CHEEKS HIGH"); \
	genSvg(fontname, "0x1DA2E", "SIGNWRITING TENSE CHEEKS MIDDLE"); \
	genSvg(fontname, "0x1DA2F", "SIGNWRITING TENSE CHEEKS LOW"); \
	genSvg(fontname, "0x1DA30", "SIGNWRITING EARS"); \
	genSvg(fontname, "0x1DA31", "SIGNWRITING NOSE NEUTRAL"); \
	genSvg(fontname, "0x1DA32", "SIGNWRITING NOSE CONTACT"); \
	genSvg(fontname, "0x1DA33", "SIGNWRITING NOSE WRINKLES"); \
	genSvg(fontname, "0x1DA34", "SIGNWRITING NOSE WIGGLES"); \
	genSvg(fontname, "0x1DA35", "SIGNWRITING AIR BLOWING OUT"); \
	genSvg(fontname, "0x1DA36", "SIGNWRITING AIR SUCKING IN"); \
	genSvg(fontname, "0x1DA37", "SIGNWRITING AIR BLOW SMALL ROTATIONS"); \
	genSvg(fontname, "0x1DA38", "SIGNWRITING AIR SUCK SMALL ROTATIONS"); \
	genSvg(fontname, "0x1DA39", "SIGNWRITING BREATH INHALE"); \
	genSvg(fontname, "0x1DA3A", "SIGNWRITING BREATH EXHALE"); \
	genSvg(fontname, "0x1DA3B", "SIGNWRITING MOUTH CLOSED NEUTRAL"); \
	genSvg(fontname, "0x1DA3C", "SIGNWRITING MOUTH CLOSED FORWARD"); \
	genSvg(fontname, "0x1DA3D", "SIGNWRITING MOUTH CLOSED CONTACT"); \
	genSvg(fontname, "0x1DA3E", "SIGNWRITING MOUTH SMILE"); \
	genSvg(fontname, "0x1DA3F", "SIGNWRITING MOUTH SMILE WRINKLED"); \
	genSvg(fontname, "0x1DA40", "SIGNWRITING MOUTH SMILE OPEN"); \
	genSvg(fontname, "0x1DA41", "SIGNWRITING MOUTH FROWN"); \
	genSvg(fontname, "0x1DA42", "SIGNWRITING MOUTH FROWN WRINKLED"); \
	genSvg(fontname, "0x1DA43", "SIGNWRITING MOUTH FROWN OPEN"); \
	genSvg(fontname, "0x1DA44", "SIGNWRITING MOUTH OPEN CIRCLE"); \
	genSvg(fontname, "0x1DA45", "SIGNWRITING MOUTH OPEN FORWARD"); \
	genSvg(fontname, "0x1DA46", "SIGNWRITING MOUTH OPEN WRINKLED"); \
	genSvg(fontname, "0x1DA47", "SIGNWRITING MOUTH OPEN OVAL"); \
	genSvg(fontname, "0x1DA48", "SIGNWRITING MOUTH OPEN OVAL WRINKLED"); \
	genSvg(fontname, "0x1DA49", "SIGNWRITING MOUTH OPEN OVAL YAWN"); \
	genSvg(fontname, "0x1DA4A", "SIGNWRITING MOUTH OPEN RECTANGLE"); \
	genSvg(fontname, "0x1DA4B", "SIGNWRITING MOUTH OPEN RECTANGLE WRINKLED"); \
	genSvg(fontname, "0x1DA4C", "SIGNWRITING MOUTH OPEN RECTANGLE YAWN"); \
	genSvg(fontname, "0x1DA4D", "SIGNWRITING MOUTH KISS"); \
	genSvg(fontname, "0x1DA4E", "SIGNWRITING MOUTH KISS FORWARD"); \
	genSvg(fontname, "0x1DA4F", "SIGNWRITING MOUTH KISS WRINKLED"); \
	genSvg(fontname, "0x1DA50", "SIGNWRITING MOUTH TENSE"); \
	genSvg(fontname, "0x1DA51", "SIGNWRITING MOUTH TENSE FORWARD"); \
	genSvg(fontname, "0x1DA52", "SIGNWRITING MOUTH TENSE SUCKED"); \
	genSvg(fontname, "0x1DA53", "SIGNWRITING LIPS PRESSED TOGETHER"); \
	genSvg(fontname, "0x1DA54", "SIGNWRITING LIP LOWER OVER UPPER"); \
	genSvg(fontname, "0x1DA55", "SIGNWRITING LIP UPPER OVER LOWER"); \
	genSvg(fontname, "0x1DA56", "SIGNWRITING MOUTH CORNERS"); \
	genSvg(fontname, "0x1DA57", "SIGNWRITING MOUTH WRINKLES SINGLE"); \
	genSvg(fontname, "0x1DA58", "SIGNWRITING MOUTH WRINKLES DOUBLE"); \
	genSvg(fontname, "0x1DA59", "SIGNWRITING TONGUE STICKING OUT FAR"); \
	genSvg(fontname, "0x1DA5A", "SIGNWRITING TONGUE LICKING LIPS"); \
	genSvg(fontname, "0x1DA5B", "SIGNWRITING TONGUE TIP BETWEEN LIPS"); \
	genSvg(fontname, "0x1DA5C", "SIGNWRITING TONGUE TIP TOUCHING INSIDE MOUTH"); \
	genSvg(fontname, "0x1DA5D", "SIGNWRITING TONGUE INSIDE MOUTH RELAXED"); \
	genSvg(fontname, "0x1DA5E", "SIGNWRITING TONGUE MOVES AGAINST CHEEK"); \
	genSvg(fontname, "0x1DA5F", "SIGNWRITING TONGUE CENTRE STICKING OUT"); \
	genSvg(fontname, "0x1DA60", "SIGNWRITING TONGUE CENTRE INSIDE MOUTH"); \
	genSvg(fontname, "0x1DA61", "SIGNWRITING TEETH"); \
	genSvg(fontname, "0x1DA62", "SIGNWRITING TEETH MOVEMENT"); \
	genSvg(fontname, "0x1DA63", "SIGNWRITING TEETH ON TONGUE"); \
	genSvg(fontname, "0x1DA64", "SIGNWRITING TEETH ON TONGUE MOVEMENT"); \
	genSvg(fontname, "0x1DA65", "SIGNWRITING TEETH ON LIPS"); \
	genSvg(fontname, "0x1DA66", "SIGNWRITING TEETH ON LIPS MOVEMENT"); \
	genSvg(fontname, "0x1DA67", "SIGNWRITING TEETH BITE LIPS"); \
	genSvg(fontname, "0x1DA68", "SIGNWRITING MOVEMENT-WALLPLANE JAW"); \
	genSvg(fontname, "0x1DA69", "SIGNWRITING MOVEMENT-FLOORPLANE JAW"); \
	genSvg(fontname, "0x1DA6A", "SIGNWRITING NECK"); \
	genSvg(fontname, "0x1DA6B", "SIGNWRITING HAIR"); \
	genSvg(fontname, "0x1DA6C", "SIGNWRITING EXCITEMENT"); \
	genSvg(fontname, "0x1DA6D", "SIGNWRITING SHOULDER HIP SPINE"); \
	genSvg(fontname, "0x1DA6E", "SIGNWRITING SHOULDER HIP POSITIONS"); \
	genSvg(fontname, "0x1DA6F", "SIGNWRITING WALLPLANE SHOULDER HIP MOVE"); \
	genSvg(fontname, "0x1DA70", "SIGNWRITING FLOORPLANE SHOULDER HIP MOVE"); \
	genSvg(fontname, "0x1DA71", "SIGNWRITING SHOULDER TILTING FROM WAIST"); \
	genSvg(fontname, "0x1DA72", "SIGNWRITING TORSO-WALLPLANE STRAIGHT STRETCH"); \
	genSvg(fontname, "0x1DA73", "SIGNWRITING TORSO-WALLPLANE CURVED BEND"); \
	genSvg(fontname, "0x1DA74", "SIGNWRITING TORSO-FLOORPLANE TWISTING"); \
	genSvg(fontname, "0x1DA75", "SIGNWRITING UPPER BODY TILTING FROM HIP JOINTS"); \
	genSvg(fontname, "0x1DA76", "SIGNWRITING LIMB COMBINATION"); \
	genSvg(fontname, "0x1DA77", "SIGNWRITING LIMB LENGTH-1"); \
	genSvg(fontname, "0x1DA78", "SIGNWRITING LIMB LENGTH-2"); \
	genSvg(fontname, "0x1DA79", "SIGNWRITING LIMB LENGTH-3"); \
	genSvg(fontname, "0x1DA7A", "SIGNWRITING LIMB LENGTH-4"); \
	genSvg(fontname, "0x1DA7B", "SIGNWRITING LIMB LENGTH-5"); \
	genSvg(fontname, "0x1DA7C", "SIGNWRITING LIMB LENGTH-6"); \
	genSvg(fontname, "0x1DA7D", "SIGNWRITING LIMB LENGTH-7"); \
	genSvg(fontname, "0x1DA7E", "SIGNWRITING FINGER"); \
	genSvg(fontname, "0x1DA7F", "SIGNWRITING LOCATION-WALLPLANE SPACE"); \
	genSvg(fontname, "0x1DA80", "SIGNWRITING LOCATION-FLOORPLANE SPACE"); \
	genSvg(fontname, "0x1DA81", "SIGNWRITING LOCATION HEIGHT"); \
	genSvg(fontname, "0x1DA82", "SIGNWRITING LOCATION WIDTH"); \
	genSvg(fontname, "0x1DA83", "SIGNWRITING LOCATION DEPTH"); \
	genSvg(fontname, "0x1DA84", "SIGNWRITING LOCATION HEAD NECK"); \
	genSvg(fontname, "0x1DA85", "SIGNWRITING LOCATION TORSO"); \
	genSvg(fontname, "0x1DA86", "SIGNWRITING LOCATION LIMBS DIGITS"); \
	genSvg(fontname, "0x1DA87", "SIGNWRITING COMMA"); \
	genSvg(fontname, "0x1DA88", "SIGNWRITING FULL STOP"); \
	genSvg(fontname, "0x1DA89", "SIGNWRITING SEMICOLON"); \
	genSvg(fontname, "0x1DA8A", "SIGNWRITING COLON"); \
	genSvg(fontname, "0x1DA8B", "SIGNWRITING PARENTHESIS"); \
	genSvg(fontname, "0x1DA9B", "SIGNWRITING FILL MODIFIER-2"); \
	genSvg(fontname, "0x1DA9C", "SIGNWRITING FILL MODIFIER-3"); \
	genSvg(fontname, "0x1DA9D", "SIGNWRITING FILL MODIFIER-4"); \
	genSvg(fontname, "0x1DA9E", "SIGNWRITING FILL MODIFIER-5"); \
	genSvg(fontname, "0x1DA9F", "SIGNWRITING FILL MODIFIER-6"); \
	genSvg(fontname, "0x1DAA1", "SIGNWRITING ROTATION MODIFIER-2"); \
	genSvg(fontname, "0x1DAA2", "SIGNWRITING ROTATION MODIFIER-3"); \
	genSvg(fontname, "0x1DAA3", "SIGNWRITING ROTATION MODIFIER-4"); \
	genSvg(fontname, "0x1DAA4", "SIGNWRITING ROTATION MODIFIER-5"); \
	genSvg(fontname, "0x1DAA5", "SIGNWRITING ROTATION MODIFIER-6"); \
	genSvg(fontname, "0x1DAA6", "SIGNWRITING ROTATION MODIFIER-7"); \
	genSvg(fontname, "0x1DAA7", "SIGNWRITING ROTATION MODIFIER-8"); \
	genSvg(fontname, "0x1DAA8", "SIGNWRITING ROTATION MODIFIER-9"); \
	genSvg(fontname, "0x1DAA9", "SIGNWRITING ROTATION MODIFIER-10"); \
	genSvg(fontname, "0x1DAAA", "SIGNWRITING ROTATION MODIFIER-11"); \
	genSvg(fontname, "0x1DAAB", "SIGNWRITING ROTATION MODIFIER-12"); \
	genSvg(fontname, "0x1DAAC", "SIGNWRITING ROTATION MODIFIER-13"); \
	genSvg(fontname, "0x1DAAD", "SIGNWRITING ROTATION MODIFIER-14"); \
	genSvg(fontname, "0x1DAAE", "SIGNWRITING ROTATION MODIFIER-15"); \
	genSvg(fontname, "0x1DAAF", "SIGNWRITING ROTATION MODIFIER-16");

#define ALCHEMICAL_SYMBOLS \
	genSvg(fontname, "0x1F700", "ALCHEMICAL SYMBOL FOR QUINTESSENCE"); \
	genSvg(fontname, "0x1F701", "ALCHEMICAL SYMBOL FOR AIR"); \
	genSvg(fontname, "0x1F702", "ALCHEMICAL SYMBOL FOR FIRE"); \
	genSvg(fontname, "0x1F703", "ALCHEMICAL SYMBOL FOR EARTH"); \
	genSvg(fontname, "0x1F704", "ALCHEMICAL SYMBOL FOR WATER"); \
	genSvg(fontname, "0x1F705", "ALCHEMICAL SYMBOL FOR AQUAFORTIS"); \
	genSvg(fontname, "0x1F706", "ALCHEMICAL SYMBOL FOR AQUA REGIA"); \
	genSvg(fontname, "0x1F707", "ALCHEMICAL SYMBOL FOR AQUA REGIA-2"); \
	genSvg(fontname, "0x1F708", "ALCHEMICAL SYMBOL FOR AQUA VITAE"); \
	genSvg(fontname, "0x1F709", "ALCHEMICAL SYMBOL FOR AQUA VITAE-2"); \
	genSvg(fontname, "0x1F70A", "ALCHEMICAL SYMBOL FOR VINEGAR"); \
	genSvg(fontname, "0x1F70B", "ALCHEMICAL SYMBOL FOR VINEGAR-2"); \
	genSvg(fontname, "0x1F70C", "ALCHEMICAL SYMBOL FOR VINEGAR-3"); \
	genSvg(fontname, "0x1F70D", "ALCHEMICAL SYMBOL FOR SULFUR"); \
	genSvg(fontname, "0x1F70E", "ALCHEMICAL SYMBOL FOR PHILOSOPHERS SULFUR"); \
	genSvg(fontname, "0x1F70F", "ALCHEMICAL SYMBOL FOR BLACK SULFUR"); \
	genSvg(fontname, "0x1F710", "ALCHEMICAL SYMBOL FOR MERCURY SUBLIMATE"); \
	genSvg(fontname, "0x1F711", "ALCHEMICAL SYMBOL FOR MERCURY SUBLIMATE-2"); \
	genSvg(fontname, "0x1F712", "ALCHEMICAL SYMBOL FOR MERCURY SUBLIMATE-3"); \
	genSvg(fontname, "0x1F713", "ALCHEMICAL SYMBOL FOR CINNABAR"); \
	genSvg(fontname, "0x1F714", "ALCHEMICAL SYMBOL FOR SALT"); \
	genSvg(fontname, "0x1F715", "ALCHEMICAL SYMBOL FOR NITRE"); \
	genSvg(fontname, "0x1F716", "ALCHEMICAL SYMBOL FOR VITRIOL"); \
	genSvg(fontname, "0x1F717", "ALCHEMICAL SYMBOL FOR VITRIOL-2"); \
	genSvg(fontname, "0x1F718", "ALCHEMICAL SYMBOL FOR ROCK SALT"); \
	genSvg(fontname, "0x1F719", "ALCHEMICAL SYMBOL FOR ROCK SALT-2"); \
	genSvg(fontname, "0x1F71A", "ALCHEMICAL SYMBOL FOR GOLD"); \
	genSvg(fontname, "0x1F71B", "ALCHEMICAL SYMBOL FOR SILVER"); \
	genSvg(fontname, "0x1F71C", "ALCHEMICAL SYMBOL FOR IRON ORE"); \
	genSvg(fontname, "0x1F71D", "ALCHEMICAL SYMBOL FOR IRON ORE-2"); \
	genSvg(fontname, "0x1F71E", "ALCHEMICAL SYMBOL FOR CROCUS OF IRON"); \
	genSvg(fontname, "0x1F71F", "ALCHEMICAL SYMBOL FOR REGULUS OF IRON"); \
	genSvg(fontname, "0x1F720", "ALCHEMICAL SYMBOL FOR COPPER ORE"); \
	genSvg(fontname, "0x1F721", "ALCHEMICAL SYMBOL FOR IRON-COPPER ORE"); \
	genSvg(fontname, "0x1F722", "ALCHEMICAL SYMBOL FOR SUBLIMATE OF COPPER"); \
	genSvg(fontname, "0x1F723", "ALCHEMICAL SYMBOL FOR CROCUS OF COPPER"); \
	genSvg(fontname, "0x1F724", "ALCHEMICAL SYMBOL FOR CROCUS OF COPPER-2"); \
	genSvg(fontname, "0x1F725", "ALCHEMICAL SYMBOL FOR COPPER ANTIMONIATE"); \
	genSvg(fontname, "0x1F726", "ALCHEMICAL SYMBOL FOR SALT OF COPPER ANTIMONIATE"); \
	genSvg(fontname, "0x1F727", "ALCHEMICAL SYMBOL FOR SUBLIMATE OF SALT OF COPPER"); \
	genSvg(fontname, "0x1F728", "ALCHEMICAL SYMBOL FOR VERDIGRIS"); \
	genSvg(fontname, "0x1F729", "ALCHEMICAL SYMBOL FOR TIN ORE"); \
	genSvg(fontname, "0x1F72A", "ALCHEMICAL SYMBOL FOR LEAD ORE"); \
	genSvg(fontname, "0x1F72B", "ALCHEMICAL SYMBOL FOR ANTIMONY ORE"); \
	genSvg(fontname, "0x1F72C", "ALCHEMICAL SYMBOL FOR SUBLIMATE OF ANTIMONY"); \
	genSvg(fontname, "0x1F72D", "ALCHEMICAL SYMBOL FOR SALT OF ANTIMONY"); \
	genSvg(fontname, "0x1F72E", "ALCHEMICAL SYMBOL FOR SUBLIMATE OF SALT OF ANTIMONY"); \
	genSvg(fontname, "0x1F72F", "ALCHEMICAL SYMBOL FOR VINEGAR OF ANTIMONY"); \
	genSvg(fontname, "0x1F730", "ALCHEMICAL SYMBOL FOR REGULUS OF ANTIMONY"); \
	genSvg(fontname, "0x1F731", "ALCHEMICAL SYMBOL FOR REGULUS OF ANTIMONY-2"); \
	genSvg(fontname, "0x1F732", "ALCHEMICAL SYMBOL FOR REGULUS"); \
	genSvg(fontname, "0x1F733", "ALCHEMICAL SYMBOL FOR REGULUS-2"); \
	genSvg(fontname, "0x1F734", "ALCHEMICAL SYMBOL FOR REGULUS-3"); \
	genSvg(fontname, "0x1F735", "ALCHEMICAL SYMBOL FOR REGULUS-4"); \
	genSvg(fontname, "0x1F736", "ALCHEMICAL SYMBOL FOR ALKALI"); \
	genSvg(fontname, "0x1F737", "ALCHEMICAL SYMBOL FOR ALKALI-2"); \
	genSvg(fontname, "0x1F738", "ALCHEMICAL SYMBOL FOR MARCASITE"); \
	genSvg(fontname, "0x1F739", "ALCHEMICAL SYMBOL FOR SAL-AMMONIAC"); \
	genSvg(fontname, "0x1F73A", "ALCHEMICAL SYMBOL FOR ARSENIC"); \
	genSvg(fontname, "0x1F73B", "ALCHEMICAL SYMBOL FOR REALGAR"); \
	genSvg(fontname, "0x1F73C", "ALCHEMICAL SYMBOL FOR REALGAR-2"); \
	genSvg(fontname, "0x1F73D", "ALCHEMICAL SYMBOL FOR AURIPIGMENT"); \
	genSvg(fontname, "0x1F73E", "ALCHEMICAL SYMBOL FOR BISMUTH ORE"); \
	genSvg(fontname, "0x1F73F", "ALCHEMICAL SYMBOL FOR TARTAR"); \
	genSvg(fontname, "0x1F740", "ALCHEMICAL SYMBOL FOR TARTAR-2"); \
	genSvg(fontname, "0x1F741", "ALCHEMICAL SYMBOL FOR QUICK LIME"); \
	genSvg(fontname, "0x1F742", "ALCHEMICAL SYMBOL FOR BORAX"); \
	genSvg(fontname, "0x1F743", "ALCHEMICAL SYMBOL FOR BORAX-2"); \
	genSvg(fontname, "0x1F744", "ALCHEMICAL SYMBOL FOR BORAX-3"); \
	genSvg(fontname, "0x1F745", "ALCHEMICAL SYMBOL FOR ALUM"); \
	genSvg(fontname, "0x1F746", "ALCHEMICAL SYMBOL FOR OIL"); \
	genSvg(fontname, "0x1F747", "ALCHEMICAL SYMBOL FOR SPIRIT"); \
	genSvg(fontname, "0x1F748", "ALCHEMICAL SYMBOL FOR TINCTURE"); \
	genSvg(fontname, "0x1F749", "ALCHEMICAL SYMBOL FOR GUM"); \
	genSvg(fontname, "0x1F74A", "ALCHEMICAL SYMBOL FOR WAX"); \
	genSvg(fontname, "0x1F74B", "ALCHEMICAL SYMBOL FOR POWDER"); \
	genSvg(fontname, "0x1F74C", "ALCHEMICAL SYMBOL FOR CALX"); \
	genSvg(fontname, "0x1F74D", "ALCHEMICAL SYMBOL FOR TUTTY"); \
	genSvg(fontname, "0x1F74E", "ALCHEMICAL SYMBOL FOR CAPUT MORTUUM"); \
	genSvg(fontname, "0x1F74F", "ALCHEMICAL SYMBOL FOR SCEPTER OF JOVE"); \
	genSvg(fontname, "0x1F750", "ALCHEMICAL SYMBOL FOR CADUCEUS"); \
	genSvg(fontname, "0x1F751", "ALCHEMICAL SYMBOL FOR TRIDENT"); \
	genSvg(fontname, "0x1F752", "ALCHEMICAL SYMBOL FOR STARRED TRIDENT"); \
	genSvg(fontname, "0x1F753", "ALCHEMICAL SYMBOL FOR LODESTONE"); \
	genSvg(fontname, "0x1F754", "ALCHEMICAL SYMBOL FOR SOAP"); \
	genSvg(fontname, "0x1F755", "ALCHEMICAL SYMBOL FOR URINE"); \
	genSvg(fontname, "0x1F756", "ALCHEMICAL SYMBOL FOR HORSE DUNG"); \
	genSvg(fontname, "0x1F757", "ALCHEMICAL SYMBOL FOR ASHES"); \
	genSvg(fontname, "0x1F758", "ALCHEMICAL SYMBOL FOR POT ASHES"); \
	genSvg(fontname, "0x1F759", "ALCHEMICAL SYMBOL FOR BRICK"); \
	genSvg(fontname, "0x1F75A", "ALCHEMICAL SYMBOL FOR POWDERED BRICK"); \
	genSvg(fontname, "0x1F75B", "ALCHEMICAL SYMBOL FOR AMALGAM"); \
	genSvg(fontname, "0x1F75C", "ALCHEMICAL SYMBOL FOR STRATUM SUPER STRATUM"); \
	genSvg(fontname, "0x1F75D", "ALCHEMICAL SYMBOL FOR STRATUM SUPER STRATUM-2"); \
	genSvg(fontname, "0x1F75E", "ALCHEMICAL SYMBOL FOR SUBLIMATION"); \
	genSvg(fontname, "0x1F75F", "ALCHEMICAL SYMBOL FOR PRECIPITATE"); \
	genSvg(fontname, "0x1F760", "ALCHEMICAL SYMBOL FOR DISTILL"); \
	genSvg(fontname, "0x1F761", "ALCHEMICAL SYMBOL FOR DISSOLVE"); \
	genSvg(fontname, "0x1F762", "ALCHEMICAL SYMBOL FOR DISSOLVE-2"); \
	genSvg(fontname, "0x1F763", "ALCHEMICAL SYMBOL FOR PURIFY"); \
	genSvg(fontname, "0x1F764", "ALCHEMICAL SYMBOL FOR PUTREFACTION"); \
	genSvg(fontname, "0x1F765", "ALCHEMICAL SYMBOL FOR CRUCIBLE"); \
	genSvg(fontname, "0x1F766", "ALCHEMICAL SYMBOL FOR CRUCIBLE-2"); \
	genSvg(fontname, "0x1F767", "ALCHEMICAL SYMBOL FOR CRUCIBLE-3"); \
	genSvg(fontname, "0x1F768", "ALCHEMICAL SYMBOL FOR CRUCIBLE-4"); \
	genSvg(fontname, "0x1F769", "ALCHEMICAL SYMBOL FOR CRUCIBLE-5"); \
	genSvg(fontname, "0x1F76A", "ALCHEMICAL SYMBOL FOR ALEMBIC"); \
	genSvg(fontname, "0x1F76B", "ALCHEMICAL SYMBOL FOR BATH OF MARY"); \
	genSvg(fontname, "0x1F76C", "ALCHEMICAL SYMBOL FOR BATH OF VAPOURS"); \
	genSvg(fontname, "0x1F76D", "ALCHEMICAL SYMBOL FOR RETORT"); \
	genSvg(fontname, "0x1F76E", "ALCHEMICAL SYMBOL FOR HOUR"); \
	genSvg(fontname, "0x1F76F", "ALCHEMICAL SYMBOL FOR NIGHT"); \
	genSvg(fontname, "0x1F770", "ALCHEMICAL SYMBOL FOR DAY-NIGHT"); \
	genSvg(fontname, "0x1F771", "ALCHEMICAL SYMBOL FOR MONTH"); \
	genSvg(fontname, "0x1F772", "ALCHEMICAL SYMBOL FOR HALF DRAM"); \
	genSvg(fontname, "0x1F773", "ALCHEMICAL SYMBOL FOR HALF OUNCE");

#define CHESS_SYMBOLS \
	genSvg(fontname, "0x1FA60", "XIANGQI RED GENERAL"); \
	genSvg(fontname, "0x1FA61", "XIANGQI RED MANDARIN"); \
	genSvg(fontname, "0x1FA62", "XIANGQI RED ELEPHANT"); \
	genSvg(fontname, "0x1FA63", "XIANGQI RED HORSE"); \
	genSvg(fontname, "0x1FA64", "XIANGQI RED CHARIOT"); \
	genSvg(fontname, "0x1FA65", "XIANGQI RED CANNON"); \
	genSvg(fontname, "0x1FA66", "XIANGQI RED SOLDIER"); \
	genSvg(fontname, "0x1FA67", "XIANGQI BLACK GENERAL"); \
	genSvg(fontname, "0x1FA68", "XIANGQI BLACK MANDARIN"); \
	genSvg(fontname, "0x1FA69", "XIANGQI BLACK ELEPHANT"); \
	genSvg(fontname, "0x1FA6A", "XIANGQI BLACK HORSE"); \
	genSvg(fontname, "0x1FA6B", "XIANGQI BLACK CHARIOT"); \
	genSvg(fontname, "0x1FA6C", "XIANGQI BLACK CANNON"); \
	genSvg(fontname, "0x1FA6D", "XIANGQI BLACK SOLDIER");

#define DOMINO_TILES \
	genSvg(fontname, "0x1F030", "DOMINO TILE HORIZONTAL BACK"); \
	genSvg(fontname, "0x1F031", "DOMINO TILE HORIZONTAL-00-00"); \
	genSvg(fontname, "0x1F032", "DOMINO TILE HORIZONTAL-00-01"); \
	genSvg(fontname, "0x1F033", "DOMINO TILE HORIZONTAL-00-02"); \
	genSvg(fontname, "0x1F034", "DOMINO TILE HORIZONTAL-00-03"); \
	genSvg(fontname, "0x1F035", "DOMINO TILE HORIZONTAL-00-04"); \
	genSvg(fontname, "0x1F036", "DOMINO TILE HORIZONTAL-00-05"); \
	genSvg(fontname, "0x1F037", "DOMINO TILE HORIZONTAL-00-06"); \
	genSvg(fontname, "0x1F038", "DOMINO TILE HORIZONTAL-01-00"); \
	genSvg(fontname, "0x1F039", "DOMINO TILE HORIZONTAL-01-01"); \
	genSvg(fontname, "0x1F03A", "DOMINO TILE HORIZONTAL-01-02"); \
	genSvg(fontname, "0x1F03B", "DOMINO TILE HORIZONTAL-01-03"); \
	genSvg(fontname, "0x1F03C", "DOMINO TILE HORIZONTAL-01-04"); \
	genSvg(fontname, "0x1F03D", "DOMINO TILE HORIZONTAL-01-05"); \
	genSvg(fontname, "0x1F03E", "DOMINO TILE HORIZONTAL-01-06"); \
	genSvg(fontname, "0x1F03F", "DOMINO TILE HORIZONTAL-02-00"); \
	genSvg(fontname, "0x1F040", "DOMINO TILE HORIZONTAL-02-01"); \
	genSvg(fontname, "0x1F041", "DOMINO TILE HORIZONTAL-02-02"); \
	genSvg(fontname, "0x1F042", "DOMINO TILE HORIZONTAL-02-03"); \
	genSvg(fontname, "0x1F043", "DOMINO TILE HORIZONTAL-02-04"); \
	genSvg(fontname, "0x1F044", "DOMINO TILE HORIZONTAL-02-05"); \
	genSvg(fontname, "0x1F045", "DOMINO TILE HORIZONTAL-02-06"); \
	genSvg(fontname, "0x1F046", "DOMINO TILE HORIZONTAL-03-00"); \
	genSvg(fontname, "0x1F047", "DOMINO TILE HORIZONTAL-03-01"); \
	genSvg(fontname, "0x1F048", "DOMINO TILE HORIZONTAL-03-02"); \
	genSvg(fontname, "0x1F049", "DOMINO TILE HORIZONTAL-03-03"); \
	genSvg(fontname, "0x1F04A", "DOMINO TILE HORIZONTAL-03-04"); \
	genSvg(fontname, "0x1F04B", "DOMINO TILE HORIZONTAL-03-05"); \
	genSvg(fontname, "0x1F04C", "DOMINO TILE HORIZONTAL-03-06"); \
	genSvg(fontname, "0x1F04D", "DOMINO TILE HORIZONTAL-04-00"); \
	genSvg(fontname, "0x1F04E", "DOMINO TILE HORIZONTAL-04-01"); \
	genSvg(fontname, "0x1F04F", "DOMINO TILE HORIZONTAL-04-02"); \
	genSvg(fontname, "0x1F050", "DOMINO TILE HORIZONTAL-04-03"); \
	genSvg(fontname, "0x1F051", "DOMINO TILE HORIZONTAL-04-04"); \
	genSvg(fontname, "0x1F052", "DOMINO TILE HORIZONTAL-04-05"); \
	genSvg(fontname, "0x1F053", "DOMINO TILE HORIZONTAL-04-06"); \
	genSvg(fontname, "0x1F054", "DOMINO TILE HORIZONTAL-05-00"); \
	genSvg(fontname, "0x1F055", "DOMINO TILE HORIZONTAL-05-01"); \
	genSvg(fontname, "0x1F056", "DOMINO TILE HORIZONTAL-05-02"); \
	genSvg(fontname, "0x1F057", "DOMINO TILE HORIZONTAL-05-03"); \
	genSvg(fontname, "0x1F058", "DOMINO TILE HORIZONTAL-05-04"); \
	genSvg(fontname, "0x1F059", "DOMINO TILE HORIZONTAL-05-05"); \
	genSvg(fontname, "0x1F05A", "DOMINO TILE HORIZONTAL-05-06"); \
	genSvg(fontname, "0x1F05B", "DOMINO TILE HORIZONTAL-06-00"); \
	genSvg(fontname, "0x1F05C", "DOMINO TILE HORIZONTAL-06-01"); \
	genSvg(fontname, "0x1F05D", "DOMINO TILE HORIZONTAL-06-02"); \
	genSvg(fontname, "0x1F05E", "DOMINO TILE HORIZONTAL-06-03"); \
	genSvg(fontname, "0x1F05F", "DOMINO TILE HORIZONTAL-06-04"); \
	genSvg(fontname, "0x1F060", "DOMINO TILE HORIZONTAL-06-05"); \
	genSvg(fontname, "0x1F061", "DOMINO TILE HORIZONTAL-06-06"); \
	genSvg(fontname, "0x1F062", "DOMINO TILE VERTICAL BACK"); \
	genSvg(fontname, "0x1F063", "DOMINO TILE VERTICAL-00-00"); \
	genSvg(fontname, "0x1F064", "DOMINO TILE VERTICAL-00-01"); \
	genSvg(fontname, "0x1F065", "DOMINO TILE VERTICAL-00-02"); \
	genSvg(fontname, "0x1F066", "DOMINO TILE VERTICAL-00-03"); \
	genSvg(fontname, "0x1F067", "DOMINO TILE VERTICAL-00-04"); \
	genSvg(fontname, "0x1F068", "DOMINO TILE VERTICAL-00-05"); \
	genSvg(fontname, "0x1F069", "DOMINO TILE VERTICAL-00-06"); \
	genSvg(fontname, "0x1F06A", "DOMINO TILE VERTICAL-01-00"); \
	genSvg(fontname, "0x1F06B", "DOMINO TILE VERTICAL-01-01"); \
	genSvg(fontname, "0x1F06C", "DOMINO TILE VERTICAL-01-02"); \
	genSvg(fontname, "0x1F06D", "DOMINO TILE VERTICAL-01-03"); \
	genSvg(fontname, "0x1F06E", "DOMINO TILE VERTICAL-01-04"); \
	genSvg(fontname, "0x1F06F", "DOMINO TILE VERTICAL-01-05"); \
	genSvg(fontname, "0x1F070", "DOMINO TILE VERTICAL-01-06"); \
	genSvg(fontname, "0x1F071", "DOMINO TILE VERTICAL-02-00"); \
	genSvg(fontname, "0x1F072", "DOMINO TILE VERTICAL-02-01"); \
	genSvg(fontname, "0x1F073", "DOMINO TILE VERTICAL-02-02"); \
	genSvg(fontname, "0x1F074", "DOMINO TILE VERTICAL-02-03"); \
	genSvg(fontname, "0x1F075", "DOMINO TILE VERTICAL-02-04"); \
	genSvg(fontname, "0x1F076", "DOMINO TILE VERTICAL-02-05"); \
	genSvg(fontname, "0x1F077", "DOMINO TILE VERTICAL-02-06"); \
	genSvg(fontname, "0x1F078", "DOMINO TILE VERTICAL-03-00"); \
	genSvg(fontname, "0x1F079", "DOMINO TILE VERTICAL-03-01"); \
	genSvg(fontname, "0x1F07A", "DOMINO TILE VERTICAL-03-02"); \
	genSvg(fontname, "0x1F07B", "DOMINO TILE VERTICAL-03-03"); \
	genSvg(fontname, "0x1F07C", "DOMINO TILE VERTICAL-03-04"); \
	genSvg(fontname, "0x1F07D", "DOMINO TILE VERTICAL-03-05"); \
	genSvg(fontname, "0x1F07E", "DOMINO TILE VERTICAL-03-06"); \
	genSvg(fontname, "0x1F07F", "DOMINO TILE VERTICAL-04-00"); \
	genSvg(fontname, "0x1F080", "DOMINO TILE VERTICAL-04-01"); \
	genSvg(fontname, "0x1F081", "DOMINO TILE VERTICAL-04-02"); \
	genSvg(fontname, "0x1F082", "DOMINO TILE VERTICAL-04-03"); \
	genSvg(fontname, "0x1F083", "DOMINO TILE VERTICAL-04-04"); \
	genSvg(fontname, "0x1F084", "DOMINO TILE VERTICAL-04-05"); \
	genSvg(fontname, "0x1F085", "DOMINO TILE VERTICAL-04-06"); \
	genSvg(fontname, "0x1F086", "DOMINO TILE VERTICAL-05-00"); \
	genSvg(fontname, "0x1F087", "DOMINO TILE VERTICAL-05-01"); \
	genSvg(fontname, "0x1F088", "DOMINO TILE VERTICAL-05-02"); \
	genSvg(fontname, "0x1F089", "DOMINO TILE VERTICAL-05-03"); \
	genSvg(fontname, "0x1F08A", "DOMINO TILE VERTICAL-05-04"); \
	genSvg(fontname, "0x1F08B", "DOMINO TILE VERTICAL-05-05"); \
	genSvg(fontname, "0x1F08C", "DOMINO TILE VERTICAL-05-06"); \
	genSvg(fontname, "0x1F08D", "DOMINO TILE VERTICAL-06-00"); \
	genSvg(fontname, "0x1F08E", "DOMINO TILE VERTICAL-06-01"); \
	genSvg(fontname, "0x1F08F", "DOMINO TILE VERTICAL-06-02"); \
	genSvg(fontname, "0x1F090", "DOMINO TILE VERTICAL-06-03"); \
	genSvg(fontname, "0x1F091", "DOMINO TILE VERTICAL-06-04"); \
	genSvg(fontname, "0x1F092", "DOMINO TILE VERTICAL-06-05"); \
	genSvg(fontname, "0x1F093", "DOMINO TILE VERTICAL-06-06");

#define MAHJONG_TILES \
	genSvg(fontname, "0x1F000", "MAHJONG TILE EAST WIND"); \
	genSvg(fontname, "0x1F001", "MAHJONG TILE SOUTH WIND"); \
	genSvg(fontname, "0x1F002", "MAHJONG TILE WEST WIND"); \
	genSvg(fontname, "0x1F003", "MAHJONG TILE NORTH WIND"); \
	genSvg(fontname, "0x1F004", "MAHJONG TILE RED DRAGON"); \
	genSvg(fontname, "0x1F005", "MAHJONG TILE GREEN DRAGON"); \
	genSvg(fontname, "0x1F006", "MAHJONG TILE WHITE DRAGON"); \
	genSvg(fontname, "0x1F007", "MAHJONG TILE ONE OF CHARACTERS"); \
	genSvg(fontname, "0x1F008", "MAHJONG TILE TWO OF CHARACTERS"); \
	genSvg(fontname, "0x1F009", "MAHJONG TILE THREE OF CHARACTERS"); \
	genSvg(fontname, "0x1F00A", "MAHJONG TILE FOUR OF CHARACTERS"); \
	genSvg(fontname, "0x1F00B", "MAHJONG TILE FIVE OF CHARACTERS"); \
	genSvg(fontname, "0x1F00C", "MAHJONG TILE SIX OF CHARACTERS"); \
	genSvg(fontname, "0x1F00D", "MAHJONG TILE SEVEN OF CHARACTERS"); \
	genSvg(fontname, "0x1F00E", "MAHJONG TILE EIGHT OF CHARACTERS"); \
	genSvg(fontname, "0x1F00F", "MAHJONG TILE NINE OF CHARACTERS"); \
	genSvg(fontname, "0x1F010", "MAHJONG TILE ONE OF BAMBOOS"); \
	genSvg(fontname, "0x1F011", "MAHJONG TILE TWO OF BAMBOOS"); \
	genSvg(fontname, "0x1F012", "MAHJONG TILE THREE OF BAMBOOS"); \
	genSvg(fontname, "0x1F013", "MAHJONG TILE FOUR OF BAMBOOS"); \
	genSvg(fontname, "0x1F014", "MAHJONG TILE FIVE OF BAMBOOS"); \
	genSvg(fontname, "0x1F015", "MAHJONG TILE SIX OF BAMBOOS"); \
	genSvg(fontname, "0x1F016", "MAHJONG TILE SEVEN OF BAMBOOS"); \
	genSvg(fontname, "0x1F017", "MAHJONG TILE EIGHT OF BAMBOOS"); \
	genSvg(fontname, "0x1F018", "MAHJONG TILE NINE OF BAMBOOS"); \
	genSvg(fontname, "0x1F019", "MAHJONG TILE ONE OF CIRCLES"); \
	genSvg(fontname, "0x1F01A", "MAHJONG TILE TWO OF CIRCLES"); \
	genSvg(fontname, "0x1F01B", "MAHJONG TILE THREE OF CIRCLES"); \
	genSvg(fontname, "0x1F01C", "MAHJONG TILE FOUR OF CIRCLES"); \
	genSvg(fontname, "0x1F01D", "MAHJONG TILE FIVE OF CIRCLES"); \
	genSvg(fontname, "0x1F01E", "MAHJONG TILE SIX OF CIRCLES"); \
	genSvg(fontname, "0x1F01F", "MAHJONG TILE SEVEN OF CIRCLES"); \
	genSvg(fontname, "0x1F020", "MAHJONG TILE EIGHT OF CIRCLES"); \
	genSvg(fontname, "0x1F021", "MAHJONG TILE NINE OF CIRCLES"); \
	genSvg(fontname, "0x1F022", "MAHJONG TILE PLUM"); \
	genSvg(fontname, "0x1F023", "MAHJONG TILE ORCHID"); \
	genSvg(fontname, "0x1F024", "MAHJONG TILE BAMBOO"); \
	genSvg(fontname, "0x1F025", "MAHJONG TILE CHRYSANTHEMUM"); \
	genSvg(fontname, "0x1F026", "MAHJONG TILE SPRING"); \
	genSvg(fontname, "0x1F027", "MAHJONG TILE SUMMER"); \
	genSvg(fontname, "0x1F028", "MAHJONG TILE AUTUMN"); \
	genSvg(fontname, "0x1F029", "MAHJONG TILE WINTER"); \
	genSvg(fontname, "0x1F02A", "MAHJONG TILE JOKER"); \
	genSvg(fontname, "0x1F02B", "MAHJONG TILE BACK");

#define PLAYING_CARDS \
	genSvg(fontname, "0x1F0A0", "PLAYING CARD BACK"); \
	genSvg(fontname, "0x1F0A1", "PLAYING CARD ACE OF SPADES"); \
	genSvg(fontname, "0x1F0A2", "PLAYING CARD TWO OF SPADES"); \
	genSvg(fontname, "0x1F0A3", "PLAYING CARD THREE OF SPADES"); \
	genSvg(fontname, "0x1F0A4", "PLAYING CARD FOUR OF SPADES"); \
	genSvg(fontname, "0x1F0A5", "PLAYING CARD FIVE OF SPADES"); \
	genSvg(fontname, "0x1F0A6", "PLAYING CARD SIX OF SPADES"); \
	genSvg(fontname, "0x1F0A7", "PLAYING CARD SEVEN OF SPADES"); \
	genSvg(fontname, "0x1F0A8", "PLAYING CARD EIGHT OF SPADES"); \
	genSvg(fontname, "0x1F0A9", "PLAYING CARD NINE OF SPADES"); \
	genSvg(fontname, "0x1F0AA", "PLAYING CARD TEN OF SPADES"); \
	genSvg(fontname, "0x1F0AB", "PLAYING CARD JACK OF SPADES"); \
	genSvg(fontname, "0x1F0AC", "PLAYING CARD KNIGHT OF SPADES"); \
	genSvg(fontname, "0x1F0AD", "PLAYING CARD QUEEN OF SPADES"); \
	genSvg(fontname, "0x1F0AE", "PLAYING CARD KING OF SPADES"); \
	genSvg(fontname, "0x1F0B1", "PLAYING CARD ACE OF HEARTS"); \
	genSvg(fontname, "0x1F0B2", "PLAYING CARD TWO OF HEARTS"); \
	genSvg(fontname, "0x1F0B3", "PLAYING CARD THREE OF HEARTS"); \
	genSvg(fontname, "0x1F0B4", "PLAYING CARD FOUR OF HEARTS"); \
	genSvg(fontname, "0x1F0B5", "PLAYING CARD FIVE OF HEARTS"); \
	genSvg(fontname, "0x1F0B6", "PLAYING CARD SIX OF HEARTS"); \
	genSvg(fontname, "0x1F0B7", "PLAYING CARD SEVEN OF HEARTS"); \
	genSvg(fontname, "0x1F0B8", "PLAYING CARD EIGHT OF HEARTS"); \
	genSvg(fontname, "0x1F0B9", "PLAYING CARD NINE OF HEARTS"); \
	genSvg(fontname, "0x1F0BA", "PLAYING CARD TEN OF HEARTS"); \
	genSvg(fontname, "0x1F0BB", "PLAYING CARD JACK OF HEARTS"); \
	genSvg(fontname, "0x1F0BC", "PLAYING CARD KNIGHT OF HEARTS"); \
	genSvg(fontname, "0x1F0BD", "PLAYING CARD QUEEN OF HEARTS"); \
	genSvg(fontname, "0x1F0BE", "PLAYING CARD KING OF HEARTS"); \
	genSvg(fontname, "0x1F0BF", "PLAYING CARD RED JOKER"); \
	genSvg(fontname, "0x1F0C1", "PLAYING CARD ACE OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C2", "PLAYING CARD TWO OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C3", "PLAYING CARD THREE OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C4", "PLAYING CARD FOUR OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C5", "PLAYING CARD FIVE OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C6", "PLAYING CARD SIX OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C7", "PLAYING CARD SEVEN OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C8", "PLAYING CARD EIGHT OF DIAMONDS"); \
	genSvg(fontname, "0x1F0C9", "PLAYING CARD NINE OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CA", "PLAYING CARD TEN OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CB", "PLAYING CARD JACK OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CC", "PLAYING CARD KNIGHT OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CD", "PLAYING CARD QUEEN OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CE", "PLAYING CARD KING OF DIAMONDS"); \
	genSvg(fontname, "0x1F0CF", "PLAYING CARD BLACK JOKER"); \
	genSvg(fontname, "0x1F0D1", "PLAYING CARD ACE OF CLUBS"); \
	genSvg(fontname, "0x1F0D2", "PLAYING CARD TWO OF CLUBS"); \
	genSvg(fontname, "0x1F0D3", "PLAYING CARD THREE OF CLUBS"); \
	genSvg(fontname, "0x1F0D4", "PLAYING CARD FOUR OF CLUBS"); \
	genSvg(fontname, "0x1F0D5", "PLAYING CARD FIVE OF CLUBS"); \
	genSvg(fontname, "0x1F0D6", "PLAYING CARD SIX OF CLUBS"); \
	genSvg(fontname, "0x1F0D7", "PLAYING CARD SEVEN OF CLUBS"); \
	genSvg(fontname, "0x1F0D8", "PLAYING CARD EIGHT OF CLUBS"); \
	genSvg(fontname, "0x1F0D9", "PLAYING CARD NINE OF CLUBS"); \
	genSvg(fontname, "0x1F0DA", "PLAYING CARD TEN OF CLUBS"); \
	genSvg(fontname, "0x1F0DB", "PLAYING CARD JACK OF CLUBS"); \
	genSvg(fontname, "0x1F0DC", "PLAYING CARD KNIGHT OF CLUBS"); \
	genSvg(fontname, "0x1F0DD", "PLAYING CARD QUEEN OF CLUBS"); \
	genSvg(fontname, "0x1F0DE", "PLAYING CARD KING OF CLUBS"); \
	genSvg(fontname, "0x1F0DF", "PLAYING CARD WHITE JOKER"); \
	genSvg(fontname, "0x1F0E0", "PLAYING CARD FOOL"); \
	genSvg(fontname, "0x1F0E1", "PLAYING CARD TRUMP-1"); \
	genSvg(fontname, "0x1F0E2", "PLAYING CARD TRUMP-2"); \
	genSvg(fontname, "0x1F0E3", "PLAYING CARD TRUMP-3"); \
	genSvg(fontname, "0x1F0E4", "PLAYING CARD TRUMP-4"); \
	genSvg(fontname, "0x1F0E5", "PLAYING CARD TRUMP-5"); \
	genSvg(fontname, "0x1F0E6", "PLAYING CARD TRUMP-6"); \
	genSvg(fontname, "0x1F0E7", "PLAYING CARD TRUMP-7"); \
	genSvg(fontname, "0x1F0E8", "PLAYING CARD TRUMP-8"); \
	genSvg(fontname, "0x1F0E9", "PLAYING CARD TRUMP-9"); \
	genSvg(fontname, "0x1F0EA", "PLAYING CARD TRUMP-10"); \
	genSvg(fontname, "0x1F0EB", "PLAYING CARD TRUMP-11"); \
	genSvg(fontname, "0x1F0EC", "PLAYING CARD TRUMP-12"); \
	genSvg(fontname, "0x1F0ED", "PLAYING CARD TRUMP-13"); \
	genSvg(fontname, "0x1F0EE", "PLAYING CARD TRUMP-14"); \
	genSvg(fontname, "0x1F0EF", "PLAYING CARD TRUMP-15"); \
	genSvg(fontname, "0x1F0F0", "PLAYING CARD TRUMP-16"); \
	genSvg(fontname, "0x1F0F1", "PLAYING CARD TRUMP-17"); \
	genSvg(fontname, "0x1F0F2", "PLAYING CARD TRUMP-18"); \
	genSvg(fontname, "0x1F0F3", "PLAYING CARD TRUMP-19"); \
	genSvg(fontname, "0x1F0F4", "PLAYING CARD TRUMP-20"); \
	genSvg(fontname, "0x1F0F5", "PLAYING CARD TRUMP-21");

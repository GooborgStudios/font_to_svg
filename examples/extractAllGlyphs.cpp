//
// extractAllGlyphs.cpp - font_to_svg
// Vinyl Darkscratch © 2018, MIT License.
// www.queengoob.org
// 
// This program takes a given TTF font file and generates SVGs for every available glyph.  Currently supports:
// - Basic Latin
// - Latin-1 Supplement
// - Latin Extended-A
// - Latin Extended-B
// - Latin Extended Additional
//

// TODO: Add more characters as listed on https://en.wikipedia.org/wiki/List_of_Unicode_characters

#include <iostream>
#include <fstream>
#include "font_to_svg.hpp"

void genSvg(std::string fontname, std::string charCode, std::string name) {
	// Obtain the given glyph
	font2svg::glyph g(fontname.c_str(), charCode);
	std::string data = g.outline();

	if (data != "<!-- font had 0 points -->" && data != "<!-- font had 0 contours -->") { // Create the file if the glyph exists
		std::string fname = std::string("./Output/") + charCode + " - " + name + ".svg";
		std::ofstream file(fname.c_str());
		file << g.svgheader() << g.svgtransform() << g.svgborder() << data << g.svgfooter();
		file.close();
	}

	g.free();
}

void create_svgs(std::string fontname) {
	// -=- Basic Latin

	// ASCII Punctuation & Symbols
	genSvg(fontname, "0x0021", "EXCLAMATION MARK");
	genSvg(fontname, "0x0022", "QUOTATION MARK");
	genSvg(fontname, "0x0023", "NUMBER SIGN");
	genSvg(fontname, "0x0024", "DOLLAR SIGN");
	genSvg(fontname, "0x0025", "PERCENT SIGN");
	genSvg(fontname, "0x0026", "AMPERSAND");
	genSvg(fontname, "0x0027", "APOSTROPHE");
	genSvg(fontname, "0x0028", "LEFT PARENTHESIS");
	genSvg(fontname, "0x0029", "RIGHT PARENTHESIS");
	genSvg(fontname, "0x002A", "ASTERISK");
	genSvg(fontname, "0x002B", "PLUS SIGN");
	genSvg(fontname, "0x002C", "COMMA");
	genSvg(fontname, "0x002D", "HYPHEN-MINUS");
	genSvg(fontname, "0x002E", "FULL STOP");
	genSvg(fontname, "0x002F", "FORWARD SLASH");

	// ASCII Digits
	genSvg(fontname, "0x0030", "DIGIT ZERO");
	genSvg(fontname, "0x0031", "DIGIT ONE");
	genSvg(fontname, "0x0032", "DIGIT TWO");
	genSvg(fontname, "0x0033", "DIGIT THREE");
	genSvg(fontname, "0x0034", "DIGIT FOUR");
	genSvg(fontname, "0x0035", "DIGIT FIVE");
	genSvg(fontname, "0x0036", "DIGIT SIX");
	genSvg(fontname, "0x0037", "DIGIT SEVEN");
	genSvg(fontname, "0x0038", "DIGIT EIGHT");
	genSvg(fontname, "0x0039", "DIGIT NINE");

	// ASCII Punctuation & Symbols
	genSvg(fontname, "0x003A", "COLON");
	genSvg(fontname, "0x003B", "SEMICOLON");
	genSvg(fontname, "0x003C", "LESS-THAN SIGN");
	genSvg(fontname, "0x003D", "EQUAL SIGN");
	genSvg(fontname, "0x003E", "GREATER-THAN SIGN");
	genSvg(fontname, "0x003F", "QUESTION MARK");
	genSvg(fontname, "0x0040", "AT SIGN");

	// Latin Alphabet: Uppercase
	genSvg(fontname, "0x0041", "LATIN CAPITAL LETTER A");
	genSvg(fontname, "0x0042", "LATIN CAPITAL LETTER B");
	genSvg(fontname, "0x0043", "LATIN CAPITAL LETTER C");
	genSvg(fontname, "0x0044", "LATIN CAPITAL LETTER D");
	genSvg(fontname, "0x0045", "LATIN CAPITAL LETTER E");
	genSvg(fontname, "0x0046", "LATIN CAPITAL LETTER F");
	genSvg(fontname, "0x0047", "LATIN CAPITAL LETTER G");
	genSvg(fontname, "0x0048", "LATIN CAPITAL LETTER H");
	genSvg(fontname, "0x0049", "LATIN CAPITAL LETTER I");
	genSvg(fontname, "0x004A", "LATIN CAPITAL LETTER J");
	genSvg(fontname, "0x004B", "LATIN CAPITAL LETTER K");
	genSvg(fontname, "0x004C", "LATIN CAPITAL LETTER L");
	genSvg(fontname, "0x004D", "LATIN CAPITAL LETTER M");
	genSvg(fontname, "0x004E", "LATIN CAPITAL LETTER N");
	genSvg(fontname, "0x004F", "LATIN CAPITAL LETTER O");
	genSvg(fontname, "0x0050", "LATIN CAPITAL LETTER P");
	genSvg(fontname, "0x0051", "LATIN CAPITAL LETTER Q");
	genSvg(fontname, "0x0052", "LATIN CAPITAL LETTER R");
	genSvg(fontname, "0x0053", "LATIN CAPITAL LETTER S");
	genSvg(fontname, "0x0054", "LATIN CAPITAL LETTER T");
	genSvg(fontname, "0x0055", "LATIN CAPITAL LETTER U");
	genSvg(fontname, "0x0056", "LATIN CAPITAL LETTER V");
	genSvg(fontname, "0x0057", "LATIN CAPITAL LETTER W");
	genSvg(fontname, "0x0058", "LATIN CAPITAL LETTER X");
	genSvg(fontname, "0x0059", "LATIN CAPITAL LETTER Y");
	genSvg(fontname, "0x005A", "LATIN CAPITAL LETTER Z");

	// ASCII Punctuation & Symbols
	genSvg(fontname, "0x005B", "LEFT SQUARE BRACKET");
	genSvg(fontname, "0x005C", "BACKSLASH");
	genSvg(fontname, "0x005D", "RIGHT SQUARE BRACKET");
	genSvg(fontname, "0x005E", "CIRCUMFLEX ACCENT");
	genSvg(fontname, "0x005F", "LOW LINE");
	genSvg(fontname, "0x0060", "GRAVE ACCENT");

	// Latin Alphabet: Lowercase
	genSvg(fontname, "0x0061", "LATIN SMALL LETTER A");
	genSvg(fontname, "0x0062", "LATIN SMALL LETTER B");
	genSvg(fontname, "0x0063", "LATIN SMALL LETTER C");
	genSvg(fontname, "0x0064", "LATIN SMALL LETTER D");
	genSvg(fontname, "0x0065", "LATIN SMALL LETTER E");
	genSvg(fontname, "0x0066", "LATIN SMALL LETTER F");
	genSvg(fontname, "0x0067", "LATIN SMALL LETTER G");
	genSvg(fontname, "0x0068", "LATIN SMALL LETTER H");
	genSvg(fontname, "0x0069", "LATIN SMALL LETTER I");
	genSvg(fontname, "0x006A", "LATIN SMALL LETTER J");
	genSvg(fontname, "0x006B", "LATIN SMALL LETTER K");
	genSvg(fontname, "0x006C", "LATIN SMALL LETTER L");
	genSvg(fontname, "0x006D", "LATIN SMALL LETTER M");
	genSvg(fontname, "0x006E", "LATIN SMALL LETTER N");
	genSvg(fontname, "0x006F", "LATIN SMALL LETTER O");
	genSvg(fontname, "0x0070", "LATIN SMALL LETTER P");
	genSvg(fontname, "0x0071", "LATIN SMALL LETTER Q");
	genSvg(fontname, "0x0072", "LATIN SMALL LETTER R");
	genSvg(fontname, "0x0073", "LATIN SMALL LETTER S");
	genSvg(fontname, "0x0074", "LATIN SMALL LETTER T");
	genSvg(fontname, "0x0075", "LATIN SMALL LETTER U");
	genSvg(fontname, "0x0076", "LATIN SMALL LETTER V");
	genSvg(fontname, "0x0077", "LATIN SMALL LETTER W");
	genSvg(fontname, "0x0078", "LATIN SMALL LETTER X");
	genSvg(fontname, "0x0079", "LATIN SMALL LETTER Y");
	genSvg(fontname, "0x007A", "LATIN SMALL LETTER Z");

	// ASCII Punctuation & Symbols
	genSvg(fontname, "0x007B", "LEFT CURLY BRACKET");
	genSvg(fontname, "0x007C", "VERTICAL BAR");
	genSvg(fontname, "0x007D", "RIGHT CURLY BRACKET");
	genSvg(fontname, "0x007E", "TILDE");

	// -=- Latin-1 Supplement

	// Latin-1 Punctuation & Symbols
	genSvg(fontname, "0x00A1", "INVERTED EXCLAMATION MARK");
	genSvg(fontname, "0x00A2", "CENT SIGN");
	genSvg(fontname, "0x00A3", "POUND SIGN");
	genSvg(fontname, "0x00A4", "CURRENCY SIGN");
	genSvg(fontname, "0x00A5", "YEN SIGN");
	genSvg(fontname, "0x00A6", "BROKEN BAR");
	genSvg(fontname, "0x00A7", "SECTION SIGN");
	genSvg(fontname, "0x00A8", "DIAERESIS");
	genSvg(fontname, "0x00A9", "COPYRIGHT SIGN");
	genSvg(fontname, "0x00AA", "FEMININE ORDINAL INDICATOR");
	genSvg(fontname, "0x00AB", "LEFT-POINTING DOUBLE ANGLE QUOTATION MARK");
	genSvg(fontname, "0x00AC", "NOT SIGN");
	genSvg(fontname, "0x00AD", "SOFT HYPHEN");
	genSvg(fontname, "0x00AE", "REGISTERED SIGN");
	genSvg(fontname, "0x00AF", "MACRON");
	genSvg(fontname, "0x00B0", "DEGREE SYMBOL");
	genSvg(fontname, "0x00B1", "PLUS-MINUS SIGN");
	genSvg(fontname, "0x00B2", "SUPERSCRIPT TWO");
	genSvg(fontname, "0x00B3", "SUPERSCRIPT THREE");
	genSvg(fontname, "0x00B4", "ACUTE ACCENT");
	genSvg(fontname, "0x00B5", "MICRO SIGN");
	genSvg(fontname, "0x00B6", "PILCROW SIGN");
	genSvg(fontname, "0x00B7", "MIDDLE DOT");
	genSvg(fontname, "0x00B8", "CEDILLA");
	genSvg(fontname, "0x00B9", "SUPERSCRIPT ONE");
	genSvg(fontname, "0x00BA", "MASCULINE ORDINAL INDICATOR");
	genSvg(fontname, "0x00BB", "RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK");
	genSvg(fontname, "0x00BC", "VULGAR FRACTION ONE QUARTER");
	genSvg(fontname, "0x00BD", "VULGAR FRACTION ONE HALF");
	genSvg(fontname, "0x00BE", "VULGAR FRACTION THREE QUARTERS");
	genSvg(fontname, "0x00BF", "INVERTED QUESTION MARK");

	// Letters: Uppercase
	genSvg(fontname, "0x00C0", "LATIN CAPITAL LETTER A WITH GRAVE");
	genSvg(fontname, "0x00C1", "LATIN CAPITAL LETTER A WITH ACUTE");
	genSvg(fontname, "0x00C2", "LATIN CAPITAL LETTER A WITH CIRCUMFLEX");
	genSvg(fontname, "0x00C3", "LATIN CAPITAL LETTER A WITH TILDE");
	genSvg(fontname, "0x00C4", "LATIN CAPITAL LETTER A WITH DIAERESIS");
	genSvg(fontname, "0x00C5", "LATIN CAPITAL LETTER A WITH RING ABOVE");
	genSvg(fontname, "0x00C6", "LATIN CAPITAL LETTER AE");
	genSvg(fontname, "0x00C7", "LATIN CAPITAL LETTER C WITH CEDILLA");
	genSvg(fontname, "0x00C8", "LATIN CAPITAL LETTER E WITH GRAVE");
	genSvg(fontname, "0x00C9", "LATIN CAPITAL LETTER E WITH ACUTE");
	genSvg(fontname, "0x00CA", "LATIN CAPITAL LETTER E WITH CIRCUMFLEX");
	genSvg(fontname, "0x00CB", "LATIN CAPITAL LETTER E WITH DIAERESIS");
	genSvg(fontname, "0x00CC", "LATIN CAPITAL LETTER I WITH GRAVE");
	genSvg(fontname, "0x00CD", "LATIN CAPITAL LETTER I WITH ACUTE");
	genSvg(fontname, "0x00CE", "LATIN CAPITAL LETTER I WITH CIRCUMFLEX");
	genSvg(fontname, "0x00CF", "LATIN CAPITAL LETTER I WITH DIAERESIS");
	genSvg(fontname, "0x00D0", "LATIN CAPITAL LETTER ETH");
	genSvg(fontname, "0x00D1", "LATIN CAPITAL LETTER N WITH TILDE");
	genSvg(fontname, "0x00D2", "LATIN CAPITAL LETTER O WITH GRAVE");
	genSvg(fontname, "0x00D3", "LATIN CAPITAL LETTER O WITH ACUTE");
	genSvg(fontname, "0x00D4", "LATIN CAPITAL LETTER O WITH CIRCUMFLEX");
	genSvg(fontname, "0x00D5", "LATIN CAPITAL LETTER O WITH TILDE");
	genSvg(fontname, "0x00D6", "LATIN CAPITAL LETTER O WITH DIAERESIS");

	// Math
	genSvg(fontname, "0x00D7", "MULTIPLICATION SIGN");

	// Letters: Uppercase
	genSvg(fontname, "0x00D8", "LATIN CAPITAL LETTER O WITH STROKE");
	genSvg(fontname, "0x00D9", "LATIN CAPITAL LETTER U WITH GRAVE");
	genSvg(fontname, "0x00DA", "LATIN CAPITAL LETTER U WITH ACUTE");
	genSvg(fontname, "0x00DB", "LATIN CAPITAL LETTER U WITH CIRCUMFLEX");
	genSvg(fontname, "0x00DC", "LATIN CAPITAL LETTER U WITH DIAERESIS");
	genSvg(fontname, "0x00DD", "LATIN CAPITAL LETTER Y WITH ACUTE");
	genSvg(fontname, "0x00DE", "LATIN CAPITAL LETTER THORN");

	// Letters: Lowercase
	genSvg(fontname, "0x00DF", "LATIN SMALL LETTER SHARP S");
	genSvg(fontname, "0x00E0", "LATIN SMALL LETTER A WITH GRAVE");
	genSvg(fontname, "0x00E1", "LATIN SMALL LETTER A WITH ACUTE");
	genSvg(fontname, "0x00E2", "LATIN SMALL LETTER A WITH CIRCUMFLEX");
	genSvg(fontname, "0x00E3", "LATIN SMALL LETTER A WITH TILDE");
	genSvg(fontname, "0x00E4", "LATIN SMALL LETTER A WITH DIAERESIS");
	genSvg(fontname, "0x00E5", "LATIN SMALL LETTER A WITH RING ABOVE");
	genSvg(fontname, "0x00E6", "LATIN SMALL LETTER AE");
	genSvg(fontname, "0x00E7", "LATIN SMALL LETTER C WITH CEDILLA");
	genSvg(fontname, "0x00E8", "LATIN SMALL LETTER E WITH GRAVE");
	genSvg(fontname, "0x00E9", "LATIN SMALL LETTER E WITH ACUTE");
	genSvg(fontname, "0x00EA", "LATIN SMALL LETTER E WITH CIRCUMFLEX");
	genSvg(fontname, "0x00EB", "LATIN SMALL LETTER E WITH DIAERESIS");
	genSvg(fontname, "0x00EC", "LATIN SMALL LETTER I WITH GRAVE");
	genSvg(fontname, "0x00ED", "LATIN SMALL LETTER I WITH ACUTE");
	genSvg(fontname, "0x00EE", "LATIN SMALL LETTER I WITH CIRCUMFLEX");
	genSvg(fontname, "0x00EF", "LATIN SMALL LETTER I WITH DIAERESIS");
	genSvg(fontname, "0x00F0", "LATIN SMALL LETTER ETH");
	genSvg(fontname, "0x00F1", "LATIN SMALL LETTER N WITH TILDE");
	genSvg(fontname, "0x00F2", "LATIN SMALL LETTER O WITH GRAVE");
	genSvg(fontname, "0x00F3", "LATIN SMALL LETTER O WITH ACUTE");
	genSvg(fontname, "0x00F4", "LATIN SMALL LETTER O WITH CIRCUMFLEX");
	genSvg(fontname, "0x00F5", "LATIN SMALL LETTER O WITH TILDE");
	genSvg(fontname, "0x00F6", "LATIN SMALL LETTER O WITH DIAERESIS");

	// Math
	genSvg(fontname, "0x00F7", "DIVISION SIGN");

	// Letters: Lowercase
	genSvg(fontname, "0x00F8", "LATIN SMALL LETTER O WITH STROKE");
	genSvg(fontname, "0x00F9", "LATIN SMALL LETTER U WITH GRAVE");
	genSvg(fontname, "0x00FA", "LATIN SMALL LETTER U WITH ACUTE");
	genSvg(fontname, "0x00FB", "LATIN SMALL LETTER U WITH CIRCUMFLEX");
	genSvg(fontname, "0x00FC", "LATIN SMALL LETTER U WITH DIAERESIS");
	genSvg(fontname, "0x00FD", "LATIN SMALL LETTER Y WITH ACUTE");
	genSvg(fontname, "0x00FE", "LATIN SMALL LETTER THORN");
	genSvg(fontname, "0x00FF", "LATIN SMALL LETTER Y WITH DIAERESIS");

	// -=- Latin Extended-A

	genSvg(fontname, "0x0100", "LATIN CAPITAL LETTER A WITH MACRON");
	genSvg(fontname, "0x0101", "LATIN SMALL LETTER A WITH MACRON");
	genSvg(fontname, "0x0102", "LATIN CAPITAL LETTER A WITH BREVE");
	genSvg(fontname, "0x0103", "LATIN SMALL LETTER A WITH BREVE");
	genSvg(fontname, "0x0104", "LATIN CAPITAL LETTER A WITH OGONEK");
	genSvg(fontname, "0x0105", "LATIN SMALL LETTER A WITH OGONEK");
	genSvg(fontname, "0x0106", "LATIN CAPITAL LETTER C WITH ACUTE");
	genSvg(fontname, "0x0107", "LATIN SMALL LETTER C WITH ACUTE");
	genSvg(fontname, "0x0108", "LATIN CAPITAL LETTER C WITH CIRCUMFLEX");
	genSvg(fontname, "0x0109", "LATIN SMALL LETTER C WITH CIRCUMFLEX");
	genSvg(fontname, "0x010A", "LATIN CAPITAL LETTER C WITH DOT ABOVE");
	genSvg(fontname, "0x010B", "LATIN SMALL LETTER C WITH DOT ABOVE");
	genSvg(fontname, "0x010C", "LATIN CAPITAL LETTER C WITH CARON");
	genSvg(fontname, "0x010D", "LATIN SMALL LETTER C WITH CARON");
	genSvg(fontname, "0x010E", "LATIN CAPITAL LETTER D WITH CARON");
	genSvg(fontname, "0x010F", "LATIN SMALL LETTER D WITH CARON");
	genSvg(fontname, "0x0110", "LATIN CAPITAL LETTER D WITH STROKE");
	genSvg(fontname, "0x0111", "LATIN SMALL LETTER D WITH STROKE");
	genSvg(fontname, "0x0112", "LATIN CAPITAL LETTER E WITH MACRON");
	genSvg(fontname, "0x0113", "LATIN SMALL LETTER E WITH MACRON");
	genSvg(fontname, "0x0114", "LATIN CAPITAL LETTER E WITH BREVE");
	genSvg(fontname, "0x0115", "LATIN SMALL LETTER E WITH BREVE");
	genSvg(fontname, "0x0116", "LATIN CAPITAL LETTER E WITH DOT ABOVE");
	genSvg(fontname, "0x0117", "LATIN SMALL LETTER E WITH DOT ABOVE");
	genSvg(fontname, "0x0118", "LATIN CAPITAL LETTER E WITH OGONEK");
	genSvg(fontname, "0x0119", "LATIN SMALL LETTER E WITH OGONEK");
	genSvg(fontname, "0x011A", "LATIN CAPITAL LETTER E WITH CARON");
	genSvg(fontname, "0x011B", "LATIN SMALL LETTER E WITH CARON");
	genSvg(fontname, "0x011C", "LATIN CAPITAL LETTER G WITH CIRCUMFLEX");
	genSvg(fontname, "0x011D", "LATIN SMALL LETTER G WITH CIRCUMFLEX");
	genSvg(fontname, "0x011E", "LATIN CAPITAL LETTER G WITH BREVE");
	genSvg(fontname, "0x011F", "LATIN SMALL LETTER G WITH BREVE");
	genSvg(fontname, "0x0120", "LATIN CAPITAL LETTER G WITH DOT ABOVE");
	genSvg(fontname, "0x0121", "LATIN SMALL LETTER G WITH DOT ABOVE");
	genSvg(fontname, "0x0122", "LATIN CAPITAL LETTER G WITH CEDILLA");
	genSvg(fontname, "0x0123", "LATIN SMALL LETTER G WITH CEDILLA");
	genSvg(fontname, "0x0124", "LATIN CAPITAL LETTER H WITH CIRCUMFLEX");
	genSvg(fontname, "0x0125", "LATIN SMALL LETTER H WITH CIRCUMFLEX");
	genSvg(fontname, "0x0126", "LATIN CAPITAL LETTER H WITH STROKE");
	genSvg(fontname, "0x0127", "LATIN SMALL LETTER H WITH STROKE");
	genSvg(fontname, "0x0128", "LATIN CAPITAL LETTER I WITH TILDE");
	genSvg(fontname, "0x0129", "LATIN SMALL LETTER I WITH TILDE");
	genSvg(fontname, "0x012A", "LATIN CAPITAL LETTER I WITH MACRON");
	genSvg(fontname, "0x012B", "LATIN SMALL LETTER I WITH MACRON");
	genSvg(fontname, "0x012C", "LATIN CAPITAL LETTER I WITH BREVE");
	genSvg(fontname, "0x012D", "LATIN SMALL LETTER I WITH BREVE");
	genSvg(fontname, "0x012E", "LATIN CAPITAL LETTER I WITH OGONEK");
	genSvg(fontname, "0x012F", "LATIN SMALL LETTER I WITH OGONEK");
	genSvg(fontname, "0x0130", "LATIN CAPITAL LETTER I WITH DOT ABOVE");
	genSvg(fontname, "0x0131", "LATIN SMALL LETTER DOTLESS I");
	genSvg(fontname, "0x0132", "LATIN CAPITAL LIGATURE IJ");
	genSvg(fontname, "0x0133", "LATIN SMALL LIGATURE IJ");
	genSvg(fontname, "0x0134", "LATIN CAPITAL LETTER J WITH CIRCUMFLEX");
	genSvg(fontname, "0x0135", "LATIN SMALL LETTER J WITH CIRCUMFLEX");
	genSvg(fontname, "0x0136", "LATIN CAPITAL LETTER K WITH CEDILLA");
	genSvg(fontname, "0x0137", "LATIN SMALL LETTER K WITH CEDILLA");
	genSvg(fontname, "0x0138", "LATIN SMALL LETTER KRA");
	genSvg(fontname, "0x0139", "LATIN CAPITAL LETTER L WITH ACUTE");
	genSvg(fontname, "0x013A", "LATIN SMALL LETTER L WITH ACUTE");
	genSvg(fontname, "0x013B", "LATIN CAPITAL LETTER L WITH CEDILLA");
	genSvg(fontname, "0x013C", "LATIN SMALL LETTER L WITH CEDILLA");
	genSvg(fontname, "0x013D", "LATIN CAPITAL LETTER L WITH CARON");
	genSvg(fontname, "0x013E", "LATIN SMALL LETTER L WITH CARON");
	genSvg(fontname, "0x013F", "LATIN CAPITAL LETTER L WITH MIDDLE DOT");
	genSvg(fontname, "0x0140", "LATIN SMALL LETTER L WITH MIDDLE DOT");
	genSvg(fontname, "0x0141", "LATIN CAPITAL LETTER L WITH STROKE");
	genSvg(fontname, "0x0142", "LATIN SMALL LETTER L WITH STROKE");
	genSvg(fontname, "0x0143", "LATIN CAPITAL LETTER N WITH ACUTE");
	genSvg(fontname, "0x0144", "LATIN SMALL LETTER N WITH ACUTE");
	genSvg(fontname, "0x0145", "LATIN CAPITAL LETTER N WITH CEDILLA");
	genSvg(fontname, "0x0146", "LATIN SMALL LETTER N WITH CEDILLA");
	genSvg(fontname, "0x0147", "LATIN CAPITAL LETTER N WITH CARON");
	genSvg(fontname, "0x0148", "LATIN SMALL LETTER N WITH CARON");
	genSvg(fontname, "0x014A", "LATIN CAPITAL LETTER ENG");
	genSvg(fontname, "0x014B", "LATIN SMALL LETTER ENG");
	genSvg(fontname, "0x014C", "LATIN CAPITAL LETTER O WITH MACRON");
	genSvg(fontname, "0x014D", "LATIN SMALL LETTER O WITH MACRON");
	genSvg(fontname, "0x014E", "LATIN CAPITAL LETTER O WITH BREVE");
	genSvg(fontname, "0x014F", "LATIN SMALL LETTER O WITH BREVE");
	genSvg(fontname, "0x0150", "LATIN CAPITAL LETTER O WITH DOUBLE ACUTE");
	genSvg(fontname, "0x0151", "LATIN SMALL LETTER O WITH DOUBLE ACUTE");
	genSvg(fontname, "0x0152", "LATIN CAPITAL LIGATURE OE");
	genSvg(fontname, "0x0153", "LATIN SMALL LIGATURE OE");
	genSvg(fontname, "0x0154", "LATIN CAPITAL LETTER R WITH ACUTE");
	genSvg(fontname, "0x0155", "LATIN SMALL LETTER R WITH ACUTE");
	genSvg(fontname, "0x0156", "LATIN CAPITAL LETTER R WITH CEDILLA");
	genSvg(fontname, "0x0157", "LATIN SMALL LETTER R WITH CEDILLA");
	genSvg(fontname, "0x0158", "LATIN CAPITAL LETTER R WITH CARON");
	genSvg(fontname, "0x0159", "LATIN SMALL LETTER R WITH CARON");
	genSvg(fontname, "0x015A", "LATIN CAPITAL LETTER S WITH ACUTE");
	genSvg(fontname, "0x015B", "LATIN SMALL LETTER S WITH ACUTE");
	genSvg(fontname, "0x015C", "LATIN CAPITAL LETTER S WITH CIRCUMFLEX");
	genSvg(fontname, "0x015D", "LATIN SMALL LETTER S WITH CIRCUMFLEX");
	genSvg(fontname, "0x015E", "LATIN CAPITAL LETTER S WITH CEDILLA");
	genSvg(fontname, "0x015F", "LATIN SMALL LETTER S WITH CEDILLA");
	genSvg(fontname, "0x0160", "LATIN CAPITAL LETTER S WITH CARON");
	genSvg(fontname, "0x0161", "LATIN SMALL LETTER S WITH CARON");
	genSvg(fontname, "0x0162", "LATIN CAPITAL LETTER T WITH CEDILLA");
	genSvg(fontname, "0x0163", "LATIN SMALL LETTER T WITH CEDILLA");
	genSvg(fontname, "0x0164", "LATIN CAPITAL LETTER T WITH CARON");
	genSvg(fontname, "0x0165", "LATIN SMALL LETTER T WITH CARON");
	genSvg(fontname, "0x0166", "LATIN CAPITAL LETTER T WITH STROKE");
	genSvg(fontname, "0x0167", "LATIN SMALL LETTER T WITH STROKE");
	genSvg(fontname, "0x0168", "LATIN CAPITAL LETTER U WITH TILDE");
	genSvg(fontname, "0x0169", "LATIN SMALL LETTER U WITH TILDE");
	genSvg(fontname, "0x016A", "LATIN CAPITAL LETTER U WITH MACRON");
	genSvg(fontname, "0x016B", "LATIN SMALL LETTER U WITH MACRON");
	genSvg(fontname, "0x016C", "LATIN CAPITAL LETTER U WITH BREVE");
	genSvg(fontname, "0x016D", "LATIN SMALL LETTER U WITH BREVE");
	genSvg(fontname, "0x016E", "LATIN CAPITAL LETTER U WITH RING ABOVE");
	genSvg(fontname, "0x016F", "LATIN SMALL LETTER U WITH RING ABOVE");
	genSvg(fontname, "0x0170", "LATIN CAPITAL LETTER U WITH DOUBLE ACUTE");
	genSvg(fontname, "0x0171", "LATIN SMALL LETTER U WITH DOUBLE ACUTE");
	genSvg(fontname, "0x0172", "LATIN CAPITAL LETTER U WITH OGONEK");
	genSvg(fontname, "0x0173", "LATIN SMALL LETTER U WITH OGONEK");
	genSvg(fontname, "0x0174", "LATIN CAPITAL LETTER W WITH CIRCUMFLEX");
	genSvg(fontname, "0x0175", "LATIN SMALL LETTER W WITH CIRCUMFLEX");
	genSvg(fontname, "0x0176", "LATIN CAPITAL LETTER Y WITH CIRCUMFLEX");
	genSvg(fontname, "0x0177", "LATIN SMALL LETTER Y WITH CIRCUMFLEX");
	genSvg(fontname, "0x0178", "LATIN CAPITAL LETTER Y WITH DIAERESIS");
	genSvg(fontname, "0x0179", "LATIN CAPITAL LETTER Z WITH ACUTE");
	genSvg(fontname, "0x017A", "LATIN SMALL LETTER Z WITH ACUTE");
	genSvg(fontname, "0x017B", "LATIN CAPITAL LETTER Z WITH DOT ABOVE");
	genSvg(fontname, "0x017C", "LATIN SMALL LETTER Z WITH DOT ABOVE");
	genSvg(fontname, "0x017D", "LATIN CAPITAL LETTER Z WITH CARON");
	genSvg(fontname, "0x017E", "LATIN SMALL LETTER Z WITH CARON");
	genSvg(fontname, "0x017F", "LATIN SMALL LETTER LONG S");

	// -=- Latin Extended-B

	// Non-European & Historic Latin
	genSvg(fontname, "0x0180", "LATIN SMALL LETTER B WITH STROKE");
	genSvg(fontname, "0x0181", "LATIN CAPITAL LETTER B WITH HOOK");
	genSvg(fontname, "0x0182", "LATIN CAPITAL LETTER B WITH TOP BAR");
	genSvg(fontname, "0x0183", "LATIN SMALL LETTER B WITH TOP BAR");
	genSvg(fontname, "0x0184", "LATIN CAPITAL LETTER TONE SIX");
	genSvg(fontname, "0x0185", "LATIN SMALL LETTER TONE SIX");
	genSvg(fontname, "0x0186", "LATIN CAPITAL LETTER OPEN O");
	genSvg(fontname, "0x0187", "LATIN CAPITAL LETTER C WITH HOOK");
	genSvg(fontname, "0x0188", "LATIN SMALL LETTER C WITH HOOK");
	genSvg(fontname, "0x0189", "LATIN CAPITAL LETTER AFRICAN D");
	genSvg(fontname, "0x018A", "LATIN CAPITAL LETTER D WITH HOOK");
	genSvg(fontname, "0x018B", "LATIN CAPITAL LETTER D WITH TOP BAR");
	genSvg(fontname, "0x018C", "LATIN SMALL LETTER D WITH TOP BAR");
	genSvg(fontname, "0x018D", "LATIN SMALL LETTER TURNED DELTA");
	genSvg(fontname, "0x018E", "LATIN CAPITAL LETTER REVERSED E");
	genSvg(fontname, "0x018F", "LATIN CAPITAL LETTER SCHWA");
	genSvg(fontname, "0x0190", "LATIN CAPITAL LETTER OPEN E");
	genSvg(fontname, "0x0191", "LATIN CAPITAL LETTER F WITH HOOK");
	genSvg(fontname, "0x0192", "LATIN SMALL LETTER F WITH HOOK");
	genSvg(fontname, "0x0193", "LATIN CAPITAL LETTER G WITH HOOK");
	genSvg(fontname, "0x0194", "LATIN CAPITAL LETTER GAMMA");
	genSvg(fontname, "0x0195", "LATIN SMALL LETTER HV");
	genSvg(fontname, "0x0196", "LATIN CAPITAL LETTER IOTA");
	genSvg(fontname, "0x0197", "LATIN CAPITAL LETTER I WITH STROKE");
	genSvg(fontname, "0x0198", "LATIN CAPITAL LETTER K WITH HOOK");
	genSvg(fontname, "0x0199", "LATIN SMALL LETTER K WITH HOOK");
	genSvg(fontname, "0x019A", "LATIN SMALL LETTER L WITH BAR");
	genSvg(fontname, "0x019B", "LATIN SMALL LETTER LAMBDA WITH STROKE");
	genSvg(fontname, "0x019C", "LATIN CAPITAL LETTER TURNED M");
	genSvg(fontname, "0x019D", "LATIN CAPITAL LETTER N WITH LEFT HOOK");
	genSvg(fontname, "0x019E", "LATIN SMALL LETTER N WITH LONG RIGHT LEG");
	genSvg(fontname, "0x019F", "LATIN CAPITAL LETTER O WITH MIDDLE TILDE");
	genSvg(fontname, "0x01A0", "LATIN CAPITAL LETTER O WITH HORN");
	genSvg(fontname, "0x01A1", "LATIN SMALL LETTER O WITH HORN");
	genSvg(fontname, "0x01A2", "LATIN CAPITAL LETTER OI");
	genSvg(fontname, "0x01A3", "LATIN SMALL LETTER OI");
	genSvg(fontname, "0x01A4", "LATIN CAPITAL LETTER P WITH HOOK");
	genSvg(fontname, "0x01A5", "LATIN SMALL LETTER P WITH HOOK");
	genSvg(fontname, "0x01A6", "LATIN LETTER YR");
	genSvg(fontname, "0x01A7", "LATIN CAPITAL LETTER TONE TWO");
	genSvg(fontname, "0x01A8", "LATIN SMALL LETTER TONE TWO");
	genSvg(fontname, "0x01A9", "LATIN CAPITAL LETTER ESH");
	genSvg(fontname, "0x01AA", "LATIN LETTER REVERSED ESH LOOP");
	genSvg(fontname, "0x01AB", "LATIN SMALL LETTER T WITH PALATAL HOOK");
	genSvg(fontname, "0x01AC", "LATIN CAPITAL LETTER T WITH HOOK");
	genSvg(fontname, "0x01AD", "LATIN SMALL LETTER T WITH HOOK");
	genSvg(fontname, "0x01AE", "LATIN CAPITAL LETTER T WITH RETROFLEX HOOK");
	genSvg(fontname, "0x01AF", "LATIN CAPITAL LETTER U WITH HORN");
	genSvg(fontname, "0x01B0", "LATIN SMALL LETTER U WITH HORN");
	genSvg(fontname, "0x01B1", "LATIN CAPITAL LETTER UPSILON");
	genSvg(fontname, "0x01B2", "LATIN CAPITAL LETTER V WITH HOOK");
	genSvg(fontname, "0x01B3", "LATIN CAPITAL LETTER Y WITH HOOK");
	genSvg(fontname, "0x01B4", "LATIN SMALL LETTER Y WITH HOOK");
	genSvg(fontname, "0x01B5", "LATIN CAPITAL LETTER Z WITH STROKE");
	genSvg(fontname, "0x01B6", "LATIN SMALL LETTER Z WITH STROKE");
	genSvg(fontname, "0x01B7", "LATIN CAPITAL LETTER EZH");
	genSvg(fontname, "0x01B8", "LATIN CAPITAL LETTER EZH REVERSED");
	genSvg(fontname, "0x01B9", "LATIN SMALL LETTER EZH REVERSED");
	genSvg(fontname, "0x01BA", "LATIN SMALL LETTER EZH WITH TAIL");
	genSvg(fontname, "0x01BB", "LATIN LETTER TWO WITH STROKE");
	genSvg(fontname, "0x01BC", "LATIN CAPITAL LETTER TONE FIVE");
	genSvg(fontname, "0x01BD", "LATIN SMALL LETTER TONE FIVE");
	genSvg(fontname, "0x01BE", "LATIN LETTER INVERTED GLOTTAL STOP WITH STROKE");
	genSvg(fontname, "0x01BF", "LATIN LETTER WYNN");

	// African Clicks
	genSvg(fontname, "0x01C0", "LATIN LETTER DENTAL CLICK");
	genSvg(fontname, "0x01C1", "LATIN LETTER LATERAL CLICK");
	genSvg(fontname, "0x01C2", "LATIN LETTER ALVEOLAR CLICK");
	genSvg(fontname, "0x01C3", "LATIN LETTER RETROFLEX CLICK");

	// Croatian
	genSvg(fontname, "0x01C4", "LATIN CAPITAL LETTER DZ WITH CARON");
	genSvg(fontname, "0x01C5", "LATIN CAPITAL LETTER D WITH SMALL LETTER Z WITH CARON");
	genSvg(fontname, "0x01C6", "LATIN SMALL LETTER DZ WITH CARON");
	genSvg(fontname, "0x01C7", "LATIN CAPITAL LETTER LJ");
	genSvg(fontname, "0x01C8", "LATIN CAPITAL LETTER L WITH SMALL LETTER J");
	genSvg(fontname, "0x01C9", "LATIN SMALL LETTER LJ");
	genSvg(fontname, "0x01CA", "LATIN CAPITAL LETTER NJ");
	genSvg(fontname, "0x01CB", "LATIN CAPITAL LETTER N WITH SMALL LETTER J");
	genSvg(fontname, "0x01CC", "LATIN SMALL LETTER NJ");

	// Pinyin
	genSvg(fontname, "0x01CD", "LATIN CAPITAL LETTER A WITH CARON");
	genSvg(fontname, "0x01CE", "LATIN SMALL LETTER A WITH CARON");
	genSvg(fontname, "0x01CF", "LATIN CAPITAL LETTER I WITH CARON");
	genSvg(fontname, "0x01D0", "LATIN SMALL LETTER I WITH CARON");
	genSvg(fontname, "0x01D1", "LATIN CAPITAL LETTER O WITH CARON");
	genSvg(fontname, "0x01D2", "LATIN SMALL LETTER O WITH CARON");
	genSvg(fontname, "0x01D3", "LATIN CAPITAL LETTER U WITH CARON");
	genSvg(fontname, "0x01D4", "LATIN SMALL LETTER U WITH CARON");
	genSvg(fontname, "0x01D5", "LATIN CAPITAL LETTER U WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x01D6", "LATIN SMALL LETTER U WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x01D7", "LATIN CAPITAL LETTER U WITH DIAERESIS AND ACUTE");
	genSvg(fontname, "0x01D8", "LATIN SMALL LETTER U WITH DIAERESIS AND ACUTE");
	genSvg(fontname, "0x01D9", "LATIN CAPITAL LETTER U WITH DIAERESIS AND CARON");
	genSvg(fontname, "0x01DA", "LATIN SMALL LETTER U WITH DIAERESIS AND CARON");
	genSvg(fontname, "0x01DB", "LATIN CAPITAL LETTER U WITH DIAERESIS AND GRAVE");
	genSvg(fontname, "0x01DC", "LATIN SMALL LETTER U WITH DIAERESIS AND GRAVE");

	// Phonetic & Historic Letters
	genSvg(fontname, "0x01DD", "LATIN SMALL LETTER TURNED E");
	genSvg(fontname, "0x01DE", "LATIN CAPITAL LETTER A WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x01DF", "LATIN SMALL LETTER A WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x01E0", "LATIN CAPITAL LETTER A WITH DOT ABOVE AND MACRON");
	genSvg(fontname, "0x01E1", "LATIN SMALL LETTER A WITH DOT ABOVE AND MACRON");
	genSvg(fontname, "0x01E2", "LATIN CAPITAL LETTER Æ WITH MACRON");
	genSvg(fontname, "0x01E3", "LATIN SMALL LETTER Æ WITH MACRON");
	genSvg(fontname, "0x01E4", "LATIN CAPITAL LETTER G WITH STROKE");
	genSvg(fontname, "0x01E5", "LATIN SMALL LETTER G WITH STROKE");
	genSvg(fontname, "0x01E6", "LATIN CAPITAL LETTER G WITH CARON");
	genSvg(fontname, "0x01E7", "LATIN SMALL LETTER G WITH CARON");
	genSvg(fontname, "0x01E8", "LATIN CAPITAL LETTER K WITH CARON");
	genSvg(fontname, "0x01E9", "LATIN SMALL LETTER K WITH CARON");
	genSvg(fontname, "0x01EA", "LATIN CAPITAL LETTER O WITH OGONEK");
	genSvg(fontname, "0x01EB", "LATIN SMALL LETTER O WITH OGONEK");
	genSvg(fontname, "0x01EC", "LATIN CAPITAL LETTER O WITH OGONEK AND MACRON");
	genSvg(fontname, "0x01ED", "LATIN SMALL LETTER O WITH OGONEK AND MACRON");
	genSvg(fontname, "0x01EE", "LATIN CAPITAL LETTER EZH WITH CARON");
	genSvg(fontname, "0x01EF", "LATIN SMALL LETTER EZH WITH CARON");
	genSvg(fontname, "0x01F0", "LATIN SMALL LETTER J WITH CARON");
	genSvg(fontname, "0x01F1", "LATIN CAPITAL LETTER DZ");
	genSvg(fontname, "0x01F2", "LATIN CAPITAL LETTER D WITH SMALL LETTER Z");
	genSvg(fontname, "0x01F3", "LATIN SMALL LETTER DZ");
	genSvg(fontname, "0x01F4", "LATIN CAPITAL LETTER G WITH ACUTE");
	genSvg(fontname, "0x01F5", "LATIN SMALL LETTER G WITH ACUTE");
	genSvg(fontname, "0x01F6", "LATIN CAPITAL LETTER HWAIR");
	genSvg(fontname, "0x01F7", "LATIN CAPITAL LETTER WYNN");
	genSvg(fontname, "0x01F8", "LATIN CAPITAL LETTER N WITH GRAVE");
	genSvg(fontname, "0x01F9", "LATIN SMALL LETTER N WITH GRAVE");
	genSvg(fontname, "0x01FA", "LATIN CAPITAL LETTER A WITH RING ABOVE AND ACUTE");
	genSvg(fontname, "0x01FB", "LATIN SMALL LETTER A WITH RING ABOVE AND ACUTE");
	genSvg(fontname, "0x01FC", "LATIN CAPITAL LETTER Æ WITH ACUTE");
	genSvg(fontname, "0x01FD", "LATIN SMALL LETTER Æ WITH ACUTE");
	genSvg(fontname, "0x01FE", "LATIN CAPITAL LETTER O WITH STROKE AND ACUTE");
	genSvg(fontname, "0x01FF", "LATIN SMALL LETTER O WITH STROKE AND ACUTE");

	// Slovenian & Croatian
	genSvg(fontname, "0x0200", "LATIN CAPITAL LETTER A WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0201", "LATIN SMALL LETTER A WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0202", "LATIN CAPITAL LETTER A WITH INVERTED BREVE");
	genSvg(fontname, "0x0203", "LATIN SMALL LETTER A WITH INVERTED BREVE");
	genSvg(fontname, "0x0204", "LATIN CAPITAL LETTER E WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0205", "LATIN SMALL LETTER E WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0206", "LATIN CAPITAL LETTER E WITH INVERTED BREVE");
	genSvg(fontname, "0x0207", "LATIN SMALL LETTER E WITH INVERTED BREVE");
	genSvg(fontname, "0x0208", "LATIN CAPITAL LETTER I WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0209", "LATIN SMALL LETTER I WITH DOUBLE GRAVE");
	genSvg(fontname, "0x020A", "LATIN CAPITAL LETTER I WITH INVERTED BREVE");
	genSvg(fontname, "0x020B", "LATIN SMALL LETTER I WITH INVERTED BREVE");
	genSvg(fontname, "0x020C", "LATIN CAPITAL LETTER O WITH DOUBLE GRAVE");
	genSvg(fontname, "0x020D", "LATIN SMALL LETTER O WITH DOUBLE GRAVE");
	genSvg(fontname, "0x020E", "LATIN CAPITAL LETTER O WITH INVERTED BREVE");
	genSvg(fontname, "0x020F", "LATIN SMALL LETTER O WITH INVERTED BREVE");
	genSvg(fontname, "0x0210", "LATIN CAPITAL LETTER R WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0211", "LATIN SMALL LETTER R WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0212", "LATIN CAPITAL LETTER R WITH INVERTED BREVE");
	genSvg(fontname, "0x0213", "LATIN SMALL LETTER R WITH INVERTED BREVE");
	genSvg(fontname, "0x0214", "LATIN CAPITAL LETTER U WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0215", "LATIN SMALL LETTER U WITH DOUBLE GRAVE");
	genSvg(fontname, "0x0216", "LATIN CAPITAL LETTER U WITH INVERTED BREVE");
	genSvg(fontname, "0x0217", "LATIN SMALL LETTER U WITH INVERTED BREVE");

	// Romanian
	genSvg(fontname, "0x0218", "LATIN CAPITAL LETTER S WITH COMMA BELOW");
	genSvg(fontname, "0x0219", "LATIN SMALL LETTER S WITH COMMA BELOW");
	genSvg(fontname, "0x021A", "LATIN CAPITAL LETTER T WITH COMMA BELOW");
	genSvg(fontname, "0x021B", "LATIN SMALL LETTER T WITH COMMA BELOW");

	// Miscellaneous
	genSvg(fontname, "0x021C", "LATIN CAPITAL LETTER YOGH");
	genSvg(fontname, "0x021D", "LATIN SMALL LETTER YOGH");
	genSvg(fontname, "0x021E", "LATIN CAPITAL LETTER H WITH CARON");
	genSvg(fontname, "0x021F", "LATIN SMALL LETTER H WITH CARON");
	genSvg(fontname, "0x0220", "LATIN CAPITAL LETTER N WITH LONG RIGHT LEG");
	genSvg(fontname, "0x0221", "LATIN SMALL LETTER D WITH CURL");
	genSvg(fontname, "0x0222", "LATIN CAPITAL LETTER OU");
	genSvg(fontname, "0x0223", "LATIN SMALL LETTER OU");
	genSvg(fontname, "0x0224", "LATIN CAPITAL LETTER Z WITH HOOK");
	genSvg(fontname, "0x0225", "LATIN SMALL LETTER Z WITH HOOK");
	genSvg(fontname, "0x0226", "LATIN CAPITAL LETTER A WITH DOT ABOVE");
	genSvg(fontname, "0x0227", "LATIN SMALL LETTER A WITH DOT ABOVE");
	genSvg(fontname, "0x0228", "LATIN CAPITAL LETTER E WITH CEDILLA");
	genSvg(fontname, "0x0229", "LATIN SMALL LETTER E WITH CEDILLA");

	// Livonian
	genSvg(fontname, "0x022A", "LATIN CAPITAL LETTER O WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x022B", "LATIN SMALL LETTER O WITH DIAERESIS AND MACRON");
	genSvg(fontname, "0x022C", "LATIN CAPITAL LETTER O WITH TILDE AND MACRON");
	genSvg(fontname, "0x022D", "LATIN SMALL LETTER O WITH TILDE AND MACRON");
	genSvg(fontname, "0x022E", "LATIN CAPITAL LETTER O WITH DOT ABOVE");
	genSvg(fontname, "0x022F", "LATIN SMALL LETTER O WITH DOT ABOVE");
	genSvg(fontname, "0x0230", "LATIN CAPITAL LETTER O WITH DOT ABOVE AND MACRON");
	genSvg(fontname, "0x0231", "LATIN SMALL LETTER O WITH DOT ABOVE AND MACRON");
	genSvg(fontname, "0x0232", "LATIN CAPITAL LETTER Y WITH MACRON");
	genSvg(fontname, "0x0233", "LATIN SMALL LETTER Y WITH MACRON");

	// Sinology
	genSvg(fontname, "0x0234", "LATIN SMALL LETTER L WITH CURL");
	genSvg(fontname, "0x0235", "LATIN SMALL LETTER N WITH CURL");
	genSvg(fontname, "0x0236", "LATIN SMALL LETTER T WITH CURL");

	// Miscellaneous
	genSvg(fontname, "0x0237", "LATIN SMALL LETTER DOTLESS J");
	genSvg(fontname, "0x0238", "LATIN SMALL LETTER DB DIGRAPH");
	genSvg(fontname, "0x0239", "LATIN SMALL LETTER QP DIGRAPH");
	genSvg(fontname, "0x023A", "LATIN CAPITAL LETTER A WITH STROKE");
	genSvg(fontname, "0x023B", "LATIN CAPITAL LETTER C WITH STROKE");
	genSvg(fontname, "0x023C", "LATIN SMALL LETTER C WITH STROKE");
	genSvg(fontname, "0x023D", "LATIN CAPITAL LETTER L WITH BAR");
	genSvg(fontname, "0x023E", "LATIN CAPITAL LETTER T WITH DIAGONAL STROKE");
	genSvg(fontname, "0x023F", "LATIN SMALL LETTER S WITH SWASH TAIL");
	genSvg(fontname, "0x0240", "LATIN SMALL LETTER Z WITH SWASH TAIL");
	genSvg(fontname, "0x0241", "LATIN CAPITAL LETTER GLOTTAL STOP");
	genSvg(fontname, "0x0242", "LATIN SMALL LETTER GLOTTAL STOP");
	genSvg(fontname, "0x0243", "LATIN CAPITAL LETTER B WITH STROKE");
	genSvg(fontname, "0x0244", "LATIN CAPITAL LETTER U BAR");
	genSvg(fontname, "0x0245", "LATIN CAPITAL LETTER TURNED V");
	genSvg(fontname, "0x0246", "LATIN CAPITAL LETTER E WITH STROKE");
	genSvg(fontname, "0x0247", "LATIN SMALL LETTER E WITH STROKE");
	genSvg(fontname, "0x0248", "LATIN CAPITAL LETTER J WITH STROKE");
	genSvg(fontname, "0x0249", "LATIN SMALL LETTER J WITH STROKE");
	genSvg(fontname, "0x024A", "LATIN CAPITAL LETTER Q WITH HOOK TAIL");
	genSvg(fontname, "0x024B", "LATIN SMALL LETTER Q WITH HOOK TAIL");
	genSvg(fontname, "0x024C", "LATIN CAPITAL LETTER R WITH STROKE");
	genSvg(fontname, "0x024D", "LATIN SMALL LETTER R WITH STROKE");
	genSvg(fontname, "0x024E", "LATIN CAPITAL LETTER Y WITH STROKE");
	genSvg(fontname, "0x024F", "LATIN SMALL LETTER Y WITH STROKE");

	// -=- Latin Extended Additional

	genSvg(fontname, "0x1E02", "LATIN CAPITAL LETTER B WITH DOT ABOVE");
	genSvg(fontname, "0x1E03", "LATIN SMALL LETTER B WITH DOT ABOVE");
	genSvg(fontname, "0x1E0A", "LATIN CAPITAL LETTER D WITH DOT ABOVE");
	genSvg(fontname, "0x1E0B", "LATIN SMALL LETTER D WITH DOT ABOVE");
	genSvg(fontname, "0x1E1E", "LATIN CAPITAL LETTER F WITH DOT ABOVE");
	genSvg(fontname, "0x1E1F", "LATIN SMALL LETTER F WITH DOT ABOVE");
	genSvg(fontname, "0x1E40", "LATIN CAPITAL LETTER M WITH DOT ABOVE");
	genSvg(fontname, "0x1E41", "LATIN SMALL LETTER M WITH DOT ABOVE");
	genSvg(fontname, "0x1E56", "LATIN CAPITAL LETTER P WITH DOT ABOVE");
	genSvg(fontname, "0x1E57", "LATIN SMALL LETTER P WITH DOT ABOVE");
	genSvg(fontname, "0x1E60", "LATIN CAPITAL LETTER S WITH DOT ABOVE");
	genSvg(fontname, "0x1E61", "LATIN SMALL LETTER S WITH DOT ABOVE");
	genSvg(fontname, "0x1E6A", "LATIN CAPITAL LETTER T WITH DOT ABOVE");
	genSvg(fontname, "0x1E6B", "LATIN SMALL LETTER T WITH DOT ABOVE");
	genSvg(fontname, "0x1E80", "LATIN CAPITAL LETTER W WITH GRAVE");
	genSvg(fontname, "0x1E81", "LATIN SMALL LETTER W WITH GRAVE");
	genSvg(fontname, "0x1E82", "LATIN CAPITAL LETTER W WITH ACUTE");
	genSvg(fontname, "0x1E83", "LATIN SMALL LETTER W WITH ACUTE");
	genSvg(fontname, "0x1E84", "LATIN CAPITAL LETTER W WITH DIAERESIS");
	genSvg(fontname, "0x1E85", "LATIN SMALL LETTER W WITH DIAERESIS");
	genSvg(fontname, "0x1E9B", "LATIN SMALL LETTER LONG S WITH DOT ABOVE");
	genSvg(fontname, "0x1EF2", "LATIN CAPITAL LETTER Y WITH GRAVE");
	genSvg(fontname, "0x1EF3", "LATIN SMALL LETTER Y WITH GRAVE");
}

int main(int argc, char * argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " font.ttf\n" << std::endl
			<< "Output: ./Output/*.svg" << std::endl;
		exit(1);
	}

	create_svgs(argv[1]);

	return 0;
}

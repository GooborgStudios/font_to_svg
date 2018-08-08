//
// unicode_blocks/phonetic.hpp - font_to_svg
// Vinyl Darkscratch © 2018, MIT License.
// www.queengoob.org
// 
// This file contains the following unicode blocks:
// - IPA Extensions
// - Spacing Modifier Letters
// - Phonetic Extensions
// - Phonetic Extensions Supplement
// 

#define IPA_EXTENSIONS \
	genSvg(fontname, "0x0259", "LATIN SMALL LETTER SCHWA"); \
	genSvg(fontname, "0x027C", "LATIN SMALL LETTER R WITH LONG LEG"); \
	genSvg(fontname, "0x0292", "LATIN SMALL LETTER EZH");

#define SPACING_MODIFIER_LETTERS \
	genSvg(fontname, "0x02B0", "MODIFIER LETTER SMALL H"); \
	genSvg(fontname, "0x02B1", "MODIFIER LETTER SMALL H WITH HOOK"); \
	genSvg(fontname, "0x02B2", "MODIFIER LETTER SMALL J"); \
	genSvg(fontname, "0x02B3", "MODIFIER LETTER SMALL R"); \
	genSvg(fontname, "0x02B4", "MODIFIER LETTER SMALL TURNED R"); \
	genSvg(fontname, "0x02B5", "MODIFIER LETTER SMALL TURNED R WITH HOOK"); \
	genSvg(fontname, "0x02B6", "MODIFIER LETTER SMALL CAPITAL INVERTED R"); \
	genSvg(fontname, "0x02B7", "MODIFIER LETTER SMALL W"); \
	genSvg(fontname, "0x02B8", "MODIFIER LETTER SMALL Y"); \
	genSvg(fontname, "0x02B9", "MODIFIER LETTER PRIME"); \
	genSvg(fontname, "0x02BA", "MODIFIER LETTER DOUBLE PRIME"); \
	genSvg(fontname, "0x02BB", "MODIFIER LETTER TURNED COMMA"); \
	genSvg(fontname, "0x02BC", "MODIFIER LETTER APOSTROPHE"); \
	genSvg(fontname, "0x02BD", "MODIFIER LETTER REVERSED COMMA"); \
	genSvg(fontname, "0x02BE", "MODIFIER LETTER RIGHT HALF RING"); \
	genSvg(fontname, "0x02BF", "MODIFIER LETTER LEFT HALF RING"); \
	genSvg(fontname, "0x02C0", "MODIFIER LETTER GLOTTAL STOP"); \
	genSvg(fontname, "0x02C1", "MODIFIER LETTER REVERSED GLOTTAL STOP"); \
	genSvg(fontname, "0x02C2", "MODIFIER LETTER LEFT ARROWHEAD"); \
	genSvg(fontname, "0x02C3", "MODIFIER LETTER RIGHT ARROWHEAD"); \
	genSvg(fontname, "0x02C4", "MODIFIER LETTER UP ARROWHEAD"); \
	genSvg(fontname, "0x02C5", "MODIFIER LETTER DOWN ARROWHEAD"); \
	genSvg(fontname, "0x02C6", "MODIFIER LETTER CIRCUMFLEX ACCENT"); \
	genSvg(fontname, "0x02C7", "CARON"); \
	genSvg(fontname, "0x02C8", "MODIFIER LETTER VERTICAL LINE"); \
	genSvg(fontname, "0x02C9", "MODIFIER LETTER MACRON"); \
	genSvg(fontname, "0x02CA", "MODIFIER LETTER ACUTE ACCENT"); \
	genSvg(fontname, "0x02CB", "MODIFIER LETTER GRAVE ACCENT"); \
	genSvg(fontname, "0x02CC", "MODIFIER LETTER LOW VERTICAL LINE"); \
	genSvg(fontname, "0x02CD", "MODIFIER LETTER LOW MACRON"); \
	genSvg(fontname, "0x02CE", "MODIFIER LETTER LOW GRAVE ACCENT"); \
	genSvg(fontname, "0x02CF", "MODIFIER LETTER LOW ACUTE ACCENT"); \
	genSvg(fontname, "0x02D0", "MODIFIER LETTER TRIANGULAR COLON"); \
	genSvg(fontname, "0x02D1", "MODIFIER LETTER HALF TRIANGULAR COLON"); \
	genSvg(fontname, "0x02D2", "MODIFIER LETTER CENTERED RIGHT HALF RING"); \
	genSvg(fontname, "0x02D3", "MODIFIER LETTER CENTERED LEFT HALF RING"); \
	genSvg(fontname, "0x02D4", "MODIFIER LETTER UP TACK"); \
	genSvg(fontname, "0x02D5", "MODIFIER LETTER DOWN TACK"); \
	genSvg(fontname, "0x02D6", "MODIFIER LETTER PLUS SIGN"); \
	genSvg(fontname, "0x02D7", "MODIFIER LETTER MINUS SIGN"); \
	genSvg(fontname, "0x02D8", "BREVE"); \
	genSvg(fontname, "0x02D9", "DOT ABOVE"); \
	genSvg(fontname, "0x02DA", "RING ABOVE"); \
	genSvg(fontname, "0x02DB", "OGONEK"); \
	genSvg(fontname, "0x02DC", "SMALL TILDE"); \
	genSvg(fontname, "0x02DD", "DOUBLE ACUTE ACCENT"); \
	genSvg(fontname, "0x02DE", "MODIFIER LETTER RHOTIC HOOK"); \
	genSvg(fontname, "0x02DF", "MODIFIER LETTER CROSS ACCENT"); \
	genSvg(fontname, "0x02E0", "MODIFIER LETTER SMALL GAMMA"); \
	genSvg(fontname, "0x02E1", "MODIFIER LETTER SMALL L"); \
	genSvg(fontname, "0x02E2", "MODIFIER LETTER SMALL S"); \
	genSvg(fontname, "0x02E3", "MODIFIER LETTER SMALL X"); \
	genSvg(fontname, "0x02E4", "MODIFIER LETTER SMALL REVERSED GLOTTAL STOP"); \
	genSvg(fontname, "0x02E5", "MODIFIER LETTER EXTRA-HIGH TONE BAR"); \
	genSvg(fontname, "0x02E6", "MODIFIER LETTER HIGH TONE BAR"); \
	genSvg(fontname, "0x02E7", "MODIFIER LETTER MID TONE BAR"); \
	genSvg(fontname, "0x02E8", "MODIFIER LETTER LOW TONE BAR"); \
	genSvg(fontname, "0x02E9", "MODIFIER LETTER EXTRA-LOW TONE BAR"); \
	genSvg(fontname, "0x02EA", "MODIFIER LETTER YIN DEPARTING TONE MARK"); \
	genSvg(fontname, "0x02EB", "MODIFIER LETTER YANG DEPARTING TONE MARK"); \
	genSvg(fontname, "0x02EC", "MODIFIER LETTER VOICING"); \
	genSvg(fontname, "0x02ED", "MODIFIER LETTER UNASPIRATED"); \
	genSvg(fontname, "0x02EE", "MODIFIER LETTER DOUBLE APOSTROPHE"); \
	genSvg(fontname, "0x02EF", "MODIFIER LETTER LOW DOWN ARROWHEAD"); \
	genSvg(fontname, "0x02F0", "MODIFIER LETTER LOW UP ARROWHEAD"); \
	genSvg(fontname, "0x02F1", "MODIFIER LETTER LOW LEFT ARROWHEAD"); \
	genSvg(fontname, "0x02F2", "MODIFIER LETTER LOW RIGHT ARROWHEAD"); \
	genSvg(fontname, "0x02F3", "MODIFIER LETTER LOW RING"); \
	genSvg(fontname, "0x02F4", "MODIFIER LETTER MIDDLE GRAVE ACCENT"); \
	genSvg(fontname, "0x02F5", "MODIFIER LETTER MIDDLE DOUBLE GRAVE ACCENT"); \
	genSvg(fontname, "0x02F6", "MODIFIER LETTER MIDDLE DOUBLE ACUTE ACCENT"); \
	genSvg(fontname, "0x02F7", "MODIFIER LETTER LOW TILDE"); \
	genSvg(fontname, "0x02F8", "MODIFIER LETTER RAISED COLON"); \
	genSvg(fontname, "0x02F9", "MODIFIER LETTER BEGIN HIGH TONE"); \
	genSvg(fontname, "0x02FA", "MODIFIER LETTER END HIGH TONE"); \
	genSvg(fontname, "0x02FB", "MODIFIER LETTER BEGIN LOW TONE"); \
	genSvg(fontname, "0x02FC", "MODIFIER LETTER END LOW TONE"); \
	genSvg(fontname, "0x02FD", "MODIFIER LETTER SHELF"); \
	genSvg(fontname, "0x02FE", "MODIFIER LETTER OPEN SHELF"); \
	genSvg(fontname, "0x02FF", "MODIFIER LETTER LOW LEFT ARROW");

#define PHONETIC_EXTENSIONS \
	genSvg(fontname, "0x1D00", "LATIN LETTER SMALL CAPITAL A"); \
	genSvg(fontname, "0x1D01", "LATIN LETTER SMALL CAPITAL AE"); \
	genSvg(fontname, "0x1D02", "LATIN SMALL LETTER TURNED AE"); \
	genSvg(fontname, "0x1D03", "LATIN LETTER SMALL CAPITAL BARRED B"); \
	genSvg(fontname, "0x1D04", "LATIN LETTER SMALL CAPITAL C"); \
	genSvg(fontname, "0x1D05", "LATIN LETTER SMALL CAPITAL D"); \
	genSvg(fontname, "0x1D06", "LATIN LETTER SMALL CAPITAL ETH"); \
	genSvg(fontname, "0x1D07", "LATIN LETTER SMALL CAPITAL E"); \
	genSvg(fontname, "0x1D08", "LATIN SMALL LETTER TURNED OPEN E"); \
	genSvg(fontname, "0x1D09", "LATIN SMALL LETTER TURNED I"); \
	genSvg(fontname, "0x1D0A", "LATIN LETTER SMALL CAPITAL J"); \
	genSvg(fontname, "0x1D0B", "LATIN LETTER SMALL CAPITAL K"); \
	genSvg(fontname, "0x1D0C", "LATIN LETTER SMALL CAPITAL L WITH STROKE"); \
	genSvg(fontname, "0x1D0D", "LATIN LETTER SMALL CAPITAL M"); \
	genSvg(fontname, "0x1D0E", "LATIN LETTER SMALL CAPITAL REVERSED N"); \
	genSvg(fontname, "0x1D0F", "LATIN LETTER SMALL CAPITAL O"); \
	genSvg(fontname, "0x1D10", "LATIN LETTER SMALL CAPITAL OPEN O"); \
	genSvg(fontname, "0x1D11", "LATIN SMALL LETTER SIDEWAYS O"); \
	genSvg(fontname, "0x1D12", "LATIN SMALL LETTER SIDEWAYS OPEN O"); \
	genSvg(fontname, "0x1D13", "LATIN SMALL LETTER SIDEWAYS O WITH STROKE"); \
	genSvg(fontname, "0x1D14", "LATIN SMALL LETTER TURNED OE"); \
	genSvg(fontname, "0x1D15", "LATIN LETTER SMALL CAPITAL OU"); \
	genSvg(fontname, "0x1D16", "LATIN SMALL LETTER TOP HALF O"); \
	genSvg(fontname, "0x1D17", "LATIN SMALL LETTER BOTTOM HALF O"); \
	genSvg(fontname, "0x1D18", "LATIN LETTER SMALL CAPITAL P"); \
	genSvg(fontname, "0x1D19", "LATIN LETTER SMALL CAPITAL REVERSED R"); \
	genSvg(fontname, "0x1D1A", "LATIN LETTER SMALL CAPITAL TURNED R"); \
	genSvg(fontname, "0x1D1B", "LATIN LETTER SMALL CAPITAL T"); \
	genSvg(fontname, "0x1D1C", "LATIN LETTER SMALL CAPITAL U"); \
	genSvg(fontname, "0x1D1D", "LATIN SMALL LETTER SIDEWAYS U"); \
	genSvg(fontname, "0x1D1E", "LATIN SMALL LETTER SIDEWAYS DIAERESIZED U"); \
	genSvg(fontname, "0x1D1F", "LATIN SMALL LETTER SIDEWAYS TURNED M"); \
	genSvg(fontname, "0x1D20", "LATIN LETTER SMALL CAPITAL V"); \
	genSvg(fontname, "0x1D21", "LATIN LETTER SMALL CAPITAL W"); \
	genSvg(fontname, "0x1D22", "LATIN LETTER SMALL CAPITAL Z"); \
	genSvg(fontname, "0x1D23", "LATIN LETTER SMALL CAPITAL EZH"); \
	genSvg(fontname, "0x1D24", "LATIN LETTER VOICED LARYNGEAL SPIRANT"); \
	genSvg(fontname, "0x1D25", "LATIN LETTER AIN"); \
	genSvg(fontname, "0x1D26", "GREEK LETTER SMALL CAPITAL GAMMA"); \
	genSvg(fontname, "0x1D27", "GREEK LETTER SMALL CAPITAL LAMDA"); \
	genSvg(fontname, "0x1D28", "GREEK LETTER SMALL CAPITAL PI"); \
	genSvg(fontname, "0x1D29", "GREEK LETTER SMALL CAPITAL RHO"); \
	genSvg(fontname, "0x1D2A", "GREEK LETTER SMALL CAPITAL PSI"); \
	genSvg(fontname, "0x1D2B", "CYRILLIC LETTER SMALL CAPITAL EL"); \
	genSvg(fontname, "0x1D2C", "MODIFIER LETTER CAPITAL A"); \
	genSvg(fontname, "0x1D2D", "MODIFIER LETTER CAPITAL AE"); \
	genSvg(fontname, "0x1D2E", "MODIFIER LETTER CAPITAL B"); \
	genSvg(fontname, "0x1D2F", "MODIFIER LETTER CAPITAL BARRED B"); \
	genSvg(fontname, "0x1D30", "MODIFIER LETTER CAPITAL D"); \
	genSvg(fontname, "0x1D31", "MODIFIER LETTER CAPITAL E"); \
	genSvg(fontname, "0x1D32", "MODIFIER LETTER CAPITAL REVERSED E"); \
	genSvg(fontname, "0x1D33", "MODIFIER LETTER CAPITAL G"); \
	genSvg(fontname, "0x1D34", "MODIFIER LETTER CAPITAL H"); \
	genSvg(fontname, "0x1D35", "MODIFIER LETTER CAPITAL I"); \
	genSvg(fontname, "0x1D36", "MODIFIER LETTER CAPITAL J"); \
	genSvg(fontname, "0x1D37", "MODIFIER LETTER CAPITAL K"); \
	genSvg(fontname, "0x1D38", "MODIFIER LETTER CAPITAL L"); \
	genSvg(fontname, "0x1D39", "MODIFIER LETTER CAPITAL M"); \
	genSvg(fontname, "0x1D3A", "MODIFIER LETTER CAPITAL N"); \
	genSvg(fontname, "0x1D3B", "MODIFIER LETTER CAPITAL REVERSED N"); \
	genSvg(fontname, "0x1D3C", "MODIFIER LETTER CAPITAL O"); \
	genSvg(fontname, "0x1D3D", "MODIFIER LETTER CAPITAL OU"); \
	genSvg(fontname, "0x1D3E", "MODIFIER LETTER CAPITAL P"); \
	genSvg(fontname, "0x1D3F", "MODIFIER LETTER CAPITAL R"); \
	genSvg(fontname, "0x1D40", "MODIFIER LETTER CAPITAL T"); \
	genSvg(fontname, "0x1D41", "MODIFIER LETTER CAPITAL U"); \
	genSvg(fontname, "0x1D42", "MODIFIER LETTER CAPITAL W"); \
	genSvg(fontname, "0x1D43", "MODIFIER LETTER SMALL A"); \
	genSvg(fontname, "0x1D44", "MODIFIER LETTER SMALL TURNED A"); \
	genSvg(fontname, "0x1D45", "MODIFIER LETTER SMALL ALPHA"); \
	genSvg(fontname, "0x1D46", "MODIFIER LETTER SMALL TURNED AE"); \
	genSvg(fontname, "0x1D47", "MODIFIER LETTER SMALL B"); \
	genSvg(fontname, "0x1D48", "MODIFIER LETTER SMALL D"); \
	genSvg(fontname, "0x1D49", "MODIFIER LETTER SMALL E"); \
	genSvg(fontname, "0x1D4A", "MODIFIER LETTER SMALL SCHWA"); \
	genSvg(fontname, "0x1D4B", "MODIFIER LETTER SMALL OPEN E"); \
	genSvg(fontname, "0x1D4C", "MODIFIER LETTER SMALL TURNED OPEN E"); \
	genSvg(fontname, "0x1D4D", "MODIFIER LETTER SMALL G"); \
	genSvg(fontname, "0x1D4E", "MODIFIER LETTER SMALL TURNED I"); \
	genSvg(fontname, "0x1D4F", "MODIFIER LETTER SMALL K"); \
	genSvg(fontname, "0x1D50", "MODIFIER LETTER SMALL M"); \
	genSvg(fontname, "0x1D51", "MODIFIER LETTER SMALL ENG"); \
	genSvg(fontname, "0x1D52", "MODIFIER LETTER SMALL O"); \
	genSvg(fontname, "0x1D53", "MODIFIER LETTER SMALL OPEN O"); \
	genSvg(fontname, "0x1D54", "MODIFIER LETTER SMALL TOP HALF O"); \
	genSvg(fontname, "0x1D55", "MODIFIER LETTER SMALL BOTTOM HALF O"); \
	genSvg(fontname, "0x1D56", "MODIFIER LETTER SMALL P"); \
	genSvg(fontname, "0x1D57", "MODIFIER LETTER SMALL T"); \
	genSvg(fontname, "0x1D58", "MODIFIER LETTER SMALL U"); \
	genSvg(fontname, "0x1D59", "MODIFIER LETTER SMALL SIDEWAYS U"); \
	genSvg(fontname, "0x1D5A", "MODIFIER LETTER SMALL TURNED M"); \
	genSvg(fontname, "0x1D5B", "MODIFIER LETTER SMALL V"); \
	genSvg(fontname, "0x1D5C", "MODIFIER LETTER SMALL AIN"); \
	genSvg(fontname, "0x1D5D", "MODIFIER LETTER SMALL BETA"); \
	genSvg(fontname, "0x1D5E", "MODIFIER LETTER SMALL GREEK GAMMA"); \
	genSvg(fontname, "0x1D5F", "MODIFIER LETTER SMALL DELTA"); \
	genSvg(fontname, "0x1D60", "MODIFIER LETTER SMALL GREEK PHI"); \
	genSvg(fontname, "0x1D61", "MODIFIER LETTER SMALL CHI"); \
	genSvg(fontname, "0x1D62", "LATIN SUBSCRIPT SMALL LETTER I"); \
	genSvg(fontname, "0x1D63", "LATIN SUBSCRIPT SMALL LETTER R"); \
	genSvg(fontname, "0x1D64", "LATIN SUBSCRIPT SMALL LETTER U"); \
	genSvg(fontname, "0x1D65", "LATIN SUBSCRIPT SMALL LETTER V"); \
	genSvg(fontname, "0x1D66", "GREEK SUBSCRIPT SMALL LETTER BETA"); \
	genSvg(fontname, "0x1D67", "GREEK SUBSCRIPT SMALL LETTER GAMMA"); \
	genSvg(fontname, "0x1D68", "GREEK SUBSCRIPT SMALL LETTER RHO"); \
	genSvg(fontname, "0x1D69", "GREEK SUBSCRIPT SMALL LETTER PHI"); \
	genSvg(fontname, "0x1D6A", "GREEK SUBSCRIPT SMALL LETTER CHI"); \
	genSvg(fontname, "0x1D6B", "LATIN SMALL LETTER UE"); \
	genSvg(fontname, "0x1D6C", "LATIN SMALL LETTER B WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D6D", "LATIN SMALL LETTER D WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D6E", "LATIN SMALL LETTER F WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D6F", "LATIN SMALL LETTER M WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D70", "LATIN SMALL LETTER N WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D71", "LATIN SMALL LETTER P WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D72", "LATIN SMALL LETTER R WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D73", "LATIN SMALL LETTER R WITH FISHHOOK AND MIDDLE TILDE"); \
	genSvg(fontname, "0x1D74", "LATIN SMALL LETTER S WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D75", "LATIN SMALL LETTER T WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D76", "LATIN SMALL LETTER Z WITH MIDDLE TILDE"); \
	genSvg(fontname, "0x1D77", "LATIN SMALL LETTER TURNED G"); \
	genSvg(fontname, "0x1D78", "MODIFIER LETTER CYRILLIC EN"); \
	genSvg(fontname, "0x1D79", "LATIN SMALL LETTER INSULAR G"); \
	genSvg(fontname, "0x1D7A", "LATIN SMALL LETTER TH WITH STRIKETHROUGH"); \
	genSvg(fontname, "0x1D7B", "LATIN SMALL CAPITAL LETTER I WITH STROKE"); \
	genSvg(fontname, "0x1D7C", "LATIN SMALL LETTER IOTA WITH STROKE"); \
	genSvg(fontname, "0x1D7D", "LATIN SMALL LETTER P WITH STROKE"); \
	genSvg(fontname, "0x1D7E", "LATIN SMALL CAPITAL LETTER U WITH STROKE"); \
	genSvg(fontname, "0x1D7F", "LATIN SMALL LETTER UPSILON WITH STROKE");

#define PHONETIC_EXTENSIONS_SUPPLEMENT \
	genSvg(fontname, "0x1D80", "LATIN SMALL LETTER B WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D81", "LATIN SMALL LETTER D WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D82", "LATIN SMALL LETTER F WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D83", "LATIN SMALL LETTER G WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D84", "LATIN SMALL LETTER K WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D85", "LATIN SMALL LETTER L WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D86", "LATIN SMALL LETTER M WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D87", "LATIN SMALL LETTER N WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D88", "LATIN SMALL LETTER P WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D89", "LATIN SMALL LETTER R WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8A", "LATIN SMALL LETTER S WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8B", "LATIN SMALL LETTER ESH WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8C", "LATIN SMALL LETTER V WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8D", "LATIN SMALL LETTER X WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8E", "LATIN SMALL LETTER Z WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1D8F", "LATIN SMALL LETTER A WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D90", "LATIN SMALL LETTER ALPHA WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D91", "LATIN SMALL LETTER D WITH HOOK AND TAIL"); \
	genSvg(fontname, "0x1D92", "LATIN SMALL LETTER E WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D93", "LATIN SMALL LETTER OPEN E WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D94", "LATIN SMALL LETTER REVERSED OPEN E WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D95", "LATIN SMALL LETTER SCHWA WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D96", "LATIN SMALL LETTER I WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D97", "LATIN SMALL LETTER OPEN O WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D98", "LATIN SMALL LETTER ESH WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D99", "LATIN SMALL LETTER U WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D9A", "LATIN SMALL LETTER EZH WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1D9B", "MODIFIER LETTER SMALL TURNED ALPHA"); \
	genSvg(fontname, "0x1D9C", "MODIFIER LETTER SMALL C"); \
	genSvg(fontname, "0x1D9D", "MODIFIER LETTER SMALL C WITH CURL"); \
	genSvg(fontname, "0x1D9E", "MODIFIER LETTER SMALL ETH"); \
	genSvg(fontname, "0x1D9F", "MODIFIER LETTER SMALL REVERSED OPEN E"); \
	genSvg(fontname, "0x1DA0", "MODIFIER LETTER SMALL F"); \
	genSvg(fontname, "0x1DA1", "MODIFIER LETTER SMALL DOTLESS J WITH STROKE"); \
	genSvg(fontname, "0x1DA2", "MODIFIER LETTER SMALL SCRIPT G"); \
	genSvg(fontname, "0x1DA3", "MODIFIER LETTER SMALL TURNED H"); \
	genSvg(fontname, "0x1DA4", "MODIFIER LETTER SMALL I WITH STROKE"); \
	genSvg(fontname, "0x1DA5", "MODIFIER LETTER SMALL IOTA"); \
	genSvg(fontname, "0x1DA6", "MODIFIER LETTER SMALL CAPITAL I"); \
	genSvg(fontname, "0x1DA7", "MODIFIER LETTER SMALL CAPITAL I WITH STROKE"); \
	genSvg(fontname, "0x1DA8", "MODIFIER LETTER SMALL J WITH CROSSED-TAIL"); \
	genSvg(fontname, "0x1DA9", "MODIFIER LETTER SMALL L WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1DAA", "MODIFIER LETTER SMALL L WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1DAB", "MODIFIER LETTER SMALL CAPITAL L"); \
	genSvg(fontname, "0x1DAC", "MODIFIER LETTER SMALL M WITH HOOK"); \
	genSvg(fontname, "0x1DAD", "MODIFIER LETTER SMALL TURNED M WITH LONG LEG"); \
	genSvg(fontname, "0x1DAE", "MODIFIER LETTER SMALL N WITH LEFT HOOK"); \
	genSvg(fontname, "0x1DAF", "MODIFIER LETTER SMALL N WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1DB0", "MODIFIER LETTER SMALL CAPITAL N"); \
	genSvg(fontname, "0x1DB1", "MODIFIER LETTER SMALL BARRED O"); \
	genSvg(fontname, "0x1DB2", "MODIFIER LETTER SMALL PHI"); \
	genSvg(fontname, "0x1DB3", "MODIFIER LETTER SMALL S WITH HOOK"); \
	genSvg(fontname, "0x1DB4", "MODIFIER LETTER SMALL ESH"); \
	genSvg(fontname, "0x1DB5", "MODIFIER LETTER SMALL T WITH PALATAL HOOK"); \
	genSvg(fontname, "0x1DB6", "MODIFIER LETTER SMALL U BAR"); \
	genSvg(fontname, "0x1DB7", "MODIFIER LETTER SMALL UPSILON"); \
	genSvg(fontname, "0x1DB8", "MODIFIER LETTER SMALL CAPITAL U"); \
	genSvg(fontname, "0x1DB9", "MODIFIER LETTER SMALL V WITH HOOK"); \
	genSvg(fontname, "0x1DBA", "MODIFIER LETTER SMALL TURNED V"); \
	genSvg(fontname, "0x1DBB", "MODIFIER LETTER SMALL Z"); \
	genSvg(fontname, "0x1DBC", "MODIFIER LETTER SMALL Z WITH RETROFLEX HOOK"); \
	genSvg(fontname, "0x1DBD", "MODIFIER LETTER SMALL Z WITH CURL"); \
	genSvg(fontname, "0x1DBE", "MODIFIER LETTER SMALL EZH"); \
	genSvg(fontname, "0x1DBF", "MODIFIER LETTER SMALL THETA");

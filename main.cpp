//
// main.cpp - font_to_svg
// Gooborg Studios (www.gooborg.com) © 2018-2020, MIT License.
// 
// This program takes a given TTF font file and generates SVGs for every available glyph.

// XXX Figure out more efficient database format -- cannot run program with everything together.

#include <iostream>
#include <fstream>
#include "font_to_svg.hpp"

// Include each unicode block
#include "unicode_blocks/latin.hpp"
#include "unicode_blocks/phonetic.hpp"
#include "unicode_blocks/combining_marks.hpp"
#include "unicode_blocks/greek_and_coptic.hpp"
#include "unicode_blocks/cyrillic.hpp"
//#include "unicode_blocks/armenian.hpp"
//#include "unicode_blocks/semitic.hpp"
//#include "unicode_blocks/thaana.hpp"
//#include "unicode_blocks/brahmic.hpp"
//#include "unicode_blocks/other_southcentral_asian.hpp"
//#include "unicode_blocks/georgian.hpp"
//#include "unicode_blocks/african.hpp"
//#include "unicode_blocks/american.hpp"
//#include "unicode_blocks/symbols.hpp"
//#include "unicode_blocks/mongolian.hpp"
//#include "unicode_blocks/east_asian_p1.hpp"
//#include "unicode_blocks/east_asian_p2.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_p1.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_p2.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_p3.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_p4.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_a.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p1.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p2.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p3.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p4.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p5.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p6.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_b_p7.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_c.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_d.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_e.hpp"
//#include "unicode_blocks/cjk_unified_ideographs_extension_f.hpp"
//#include "unicode_blocks/cjk_compatibility.hpp"
//#include "unicode_blocks/southeast_asian.hpp"
//#include "unicode_blocks/alphabetic_presentation.hpp"
//#include "unicode_blocks/ancient.hpp"
//#include "unicode_blocks/shavian.hpp"

void genSvg(std::string fontname, std::string charCode, std::string name) {
	// Obtain the outline of the given glyph
	font2svg::glyph g(fontname.c_str(), charCode);
	std::string data = g.outline();

	// Create the file if the glyph exists
	if (data != "<!-- font had 0 points -->" && data != "<!-- font had 0 contours -->") {
		// XXX If the folder doesn't exist, there will be no file output.  We should create the folder.
		std::string fname = std::string("./Output/") + charCode + " - " + name + ".svg";
		std::ofstream file(fname.c_str());
		file << g.svgheader() << g.svgtransform() << g.svgborder() << data << g.svgfooter();
		file.close();
	}

	// Cleanup
	g.free();
}

void create_svgs(std::string fontname) {
	LATIN_ASCII
	LATIN_1SUPPLEMENT
	LATIN_EXTENDED_A
	LATIN_EXTENDED_B
	LATIN_EXTENDED_ADDITIONAL
	LATIN_EXTENDED_C
	LATIN_EXTENDED_D
	LATIN_EXTENDED_E

	IPA_EXTENSIONS
	SPACING_MODIFIER_LETTERS
	PHONETIC_EXTENSIONS
	PHONETIC_EXTENSIONS_SUPPLEMENT

	COMBINING_DIACRITICAL_MARKS
	COMBINING_DIACRITICAL_MARKS_EXTENDED
	COMBINING_HALF_MARKS
	COMBINING_DIACRITICAL_MARKS_SUPPLEMENT
	COMBINING_DIACRITICAL_MARKS_FOR_SYMBOLS

	GREEK_AND_COPTIC
	GREEK_EXTENDED

	CYRILLIC
	CYRILLIC_SUPPLEMENT
	CYRILLIC_EXTENDED_A
	CYRILLIC_EXTENDED_B
	CYRILLIC_EXTENDED_C

//	ARMENIAN
//
//	ARABIC
//	ARABIC_SUPPLEMENT
//	ARABIC_EXTENDED_A
//	ARABIC_PRESENTATION_FORMS_A
//	ARABIC_PRESENTATION_FORMS_B
//	RUMI_NUMERAL_SYMBOLS
//	ARABIC_MATHEMATIC_ALPHABETIC_SYMBOLS
//	HEBREW
//	MANDAIC
//	SAMARITAN
//	SYRIAC
//	SYRIAC_SUPPLEMENT
//
//	THAANA
//
//	DEVANAGARI
//	DEVANAGARI_EXTENDED
//	VEDIC_EXTENSIONS
//	BENGALI
//	GURMUKHI
//	GUJARATI
//	ORIYA
//	TAMIL
//	TELUGU
//	KANNADA
//	MALAYALAM
//	SINHALA
//	SINHALA_ARCHAIC_NUMBERS
//	AHOM
//	BALINESE
//	BATAK
//	BHAIKSUKI
//	BRAHMI
//	BUHID
//	BUGINESE
//	CHAKMA
//	CHAM
//	COMMON_INDIC_NUMBER_FORMS
//	DOGRA
//	GRANTHA
//	GUNJALA_GONDI
//	HANUNOO
//	JAVANESE
//	KAITHI
//	KHMER
//	KHMER_SYMBOLS
//	KHOJKI
//	KHUDAWADI
//	LAO
//	LEPCHA
//	LIMBU
//	MAHAJANI
//	MAKASAR
//	MARCHEN
//	MEETEI_MAYEK
//	MEETEI_MAYEK_EXTENSIONS
//	MODI
//	MULTANI
//	NEW_TAI_LUE
//	NEWA
//	OL_CHIKI
//	PHAGS_PA
//	REJANG
//	SAURASHTRA
//	SHARADA
//	SIDDHAM
//	SUNDANESE
//	SUNDANESE_SUPPLEMENT
//	SYLOTI_NAGRI
//	TAGALOG
//	TAGBANWA
//	TAI_LE
//	TAI_THAM
//	TAI_VIET
//	TAKRI
//	THAI
//	TIBETAN
//	TIRHUTA
//
//	MASARAM_GONDI
//	MRO
//	SORA_SOMPENG
//	WARANG_CITI

//	GEORGIAN
//	GEORGIAN_EXTENDED
//	GEORGIAN_SUPPLEMENT
//
//	ADLAM
//	BAMUM
//	BAMUM_SUPPLEMENT
//	BASSA_VAH
//	ETHIOPIC
//	ETHIOPIC_SUPPLEMENT
//	ETHIOPIC_EXTENDED
//	ETHIOPIC_EXTENDED_A
//	MEDEFAIDRIN
//	MENDE_KIKAKUI
//	NKO
//	OSMANYA
//	TIFINAGH
//	VAI
//
//	CHEROKEE
//	CHEROKEE_SUPPLEMENT
//	DESERET
//	OSAGE
//	UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS
//	UNIFIED_CANADIAN_ABORIGINAL_SYLLABICS_EXTENDED

//	UNICODE_SYMBOLS
//	GENERAL_PUNCTUATION
//	SUPERSCRIPTS_AND_SUBSCRIPTS
//	CURRENCY_SYMBOLS
//	LETTERLIKE_SYMBOLS
//	NUMBER_FORMS
//	ARROWS
//	MISCELLANEOUS_SYMBOLS_AND_ARROWS
//	SUPPLEMENTAL_ARROWS_A
//	SUPPLEMENTAL_ARROWS_B
//	SUPPLEMENTAL_ARROWS_C
//	MATHEMATICAL_OPERATORS
//	SUPPLEMENTAL_MATHEMATICAL_OPERATORS
//	MISCELLANEOUS_MATHEMATICAL_SYMBOLS_A
//	MISCELLANEOUS_MATHEMATICAL_SYMBOLS_B
//	MATHEMATICAL_ALPHANUMERIC_SYMBOLS
//	MISCELLANEOUS_TECHNICAL
//	OPTICAL_CHARACTER_RECOGNITION
//	ENCLOSED_ALPHANUMERICS
//	BOX_DRAWING
//	BLOCK_ELEMENTS
//	GEOMETRIC_SHAPES
//	MISCELLANEOUS_SYMBOLS
//	DINGBAT
//	BRAILLE_PATTERNS
//	MUSICAL_SYMBOLS
//	BYZANTINE_MUSICAL_SYMBOLS
//	ANCIENT_GREEK_MUSICAL_NOTATION
//	DUPLOYAN
//	SHORTHAND_FORMAT_CONTROLS
//	SUTTON_SIGNWRITING
//	ALCHEMICAL_SYMBOLS
//	CHESS_SYMBOLS
//	DOMINO_TILES
//	MAHJONG_TILES
//	PLAYING_CARDS
//
//	MONGOLIAN
//	MONGOLIAN_SUPPLEMENT

//	BOPOMOFO
//	BOPOMOFO_EXTENDED
//	COUNTING_ROD_NUMERALS
//	ENCLOSED_ALPHANUMERIC_SUPPLEMENT
//	ENCLOSED_CJK_LETTERS_AND_MONTHS
//	ENCLOSED_IDEOGRAPHIC_SUPPLEMENT
//	HALFWIDTH_AND_FULLWIDTH_FORMS
//	HANGUL_JAMO
//	HANGUL_COMPATIBILITY_JAMO
//	HANGUL_JAMO_EXTENDED_A
//	HANGUL_JAMO_EXTENDED_B
//	HIRAGANA
//	IDEOGRAPHIC_DESCRIPTION_CHARACTERS
//	IDEOGRAPHIC_SYMBOLS_AND_PUNCTUATION
//	KANBUN
//	KANGXI_RADICALS
//	KATAKANA
//	KANA_EXTENDED_A
//	KANA_SUPPLEMENT
//	KATAKANA_PHONETIC_EXTENSIONS
//	LISU
//	MIAO
//	MODIFIER_TONE_LETTERS
//	SMALL_FORM_VARIANTS
//	TAI_XUAN_JING_SYMBOLS
//	VERTICAL_FORMS
//	YI_SYLLABLES
//	YI_RADICALS
//	YIJING_HEXAGRAM_SYMBOLS
//
//	HANGUL_SYLLABLES
//	NUSHU
//	TANGUT
//	TANGUT_COMPONENTS

//	CJK_UNIFIED_IDEOGRAPHS_PART_1
//	CJK_UNIFIED_IDEOGRAPHS_PART_2
//	CJK_UNIFIED_IDEOGRAPHS_PART_3
//	CJK_UNIFIED_IDEOGRAPHS_PART_4
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_A
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_1
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_2
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_3
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_4
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_5
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_6
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_B_PART_7
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_C
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_D
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_E
//	CJK_UNIFIED_IDEOGRAPHS_EXTENSION_F

//	CJK_COMPATIBILITY
//	CJK_COMPATIBILITY_FORMS
//	CJK_COMPATIBILITY_IDEOGRAPHS
//	CJK_COMPATIBILITY_IDEOGRAPHS_SUPPLEMENT
//	CJK_RADICALS_SUPPLEMENT
//	CJK_STROKES
//	CJK_SYMBOLS_AND_PUNCTUATION

//	HANIFI_ROHINGYA
//	KAYAH_LI
//	PAHAWH_HMONG
//	PAU_CIN_HAU
//
//	ALPHABETIC_PRESENTATION_FORMS
//
//	AEGEAN_NUMBERS
//	ANATOLIAN_HIEROGLYPHS
//	ANCIENT_GREEK_NUMBERS
//	ANCIENT_SYMBOLS
//	AVESTAN
//	CARIAN
//	CAUCASIAN_ALBANIAN
//	CUNEIFORM
//	CUNEIFORM_NUMBERS_AND_PUNCTUATION
//	CYPRIOT_SYLLABARY
//	EARLY_DYNASTIC_CUNEIFORM
//	EGYPTIAN_HIEROGLYPHS
//	ELBASAN
//	GLAGOLITIC
//	GLAGOLITIC_SUPPLEMENT
//	GOTHIC
//	HATRAN
//	IMPERIAL_ARAMAIC
//	INDIC_SIYAQ_NUMBERS
//	INSCRIPTIONAL_PAHLAVI
//	INSCRIPTIONAL_PARTHIAN
//	KHAROSHTHI
//	LINEAR_A
//	LINEAR_B_IDEOGRAMS
//	LINEAR_B_SYLLABARY
//	LYCIAN
//	LYDIAN
//	MANICHAEAN
//	MAYAN_NUMERALS
//	MEROITIC_CURSIVE
//	MEROITIC_HIEROGLYPHS
//	NABATAEAN
//	OGHAM
//	OLD_HUNGARIAN
//	OLD_ITALIC
//	OLD_NORTH_ARABIAN
//	OLD_PERMIC
//	OLD_PERSIAN
//	OLD_SOGDIAN
//	OLD_SOUTH_ARABIAN
//	OLD_TURKIC
//	PALMYRENE
//	PHAISTOS_DISC
//	PHOENICIAN
//	PSALTER_PAHLAVI
//	RUNIC
//	SOGDIAN
//	SOYOMBO
//	UGARITIC
//	ZANABAZAR_SQUARE
//
//	SHAVIAN
}

int main(int argc, char * argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " font.ttf\n" << std::endl
			<< "Output: ./Output/*.svg" << std::endl;
		exit(1);
	}

	// XXX Create the "Output" folder here.

	create_svgs(argv[1]);

	return 0;
}

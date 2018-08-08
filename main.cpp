//
// main.cpp - font_to_svg
// Vinyl Darkscratch © 2018, MIT License.
// www.queengoob.org
// 
// This program takes a given TTF font file and generates SVGs for every available glyph.

// Todo (each as a separate file):
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Semitic_languages
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Thaana
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Brahmic_(Indic)_scripts
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Other_south_and_central_Asian_writing_systems
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Georgian
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#African_scripts
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#American_scripts
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Mongolian
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#East_Asian_writing_systems
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Southeast_Asian_writing_systems
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Alphabetic_Presentation_Forms
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Ancient_and_historic_scripts
// - https://en.wikipedia.org/wiki/List_of_Unicode_characters#Shavian

#include <iostream>
#include <fstream>
#include "font_to_svg.hpp"

#include "unicode_blocks/latin.hpp"
#include "unicode_blocks/phonetic.hpp"
#include "unicode_blocks/combining_marks.hpp"
#include "unicode_blocks/greek_and_coptic.hpp"
#include "unicode_blocks/cyrillic.hpp"
#include "unicode_blocks/armenian.hpp"
#include "unicode_blocks/symbols.hpp"

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

	ARMENIAN

	UNICODE_SYMBOLS
	BLOCK_ELEMENTS
	GEOMETRIC_SHAPES
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

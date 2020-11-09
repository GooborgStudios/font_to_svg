//
// main.cpp - font_to_svg
// Gooborg Studios (www.gooborg.com) © 2018-2020, MIT License.
// 
// This program takes a given TTF font file and generates SVGs for every available glyph.

// XXX Figure out more efficient database format -- cannot run program with everything together.

#include <iostream>
#include <fstream>

#include <nlohmann/json.hpp>

#include "font_to_svg.hpp"

using json = nlohmann::json;

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
	json blocks;
	std::ifstream jsonfile("unicode.json");
	jsonfile >> blocks;

	for (auto& [blockname, glyphs] : blocks.items()) {
		for (auto& glyph : glyphs) {
			genSvg(fontname, glyph["code"], glyph["name"]);
		}
	}
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

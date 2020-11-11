//
// main.cpp - TTF SVG Extractor
// Gooborg Studios (www.gooborg.com) © 2018-2020, BSD-3-Clause License.
// See LICENSE file for more information
//
// This program takes a given TTF font file and generates SVGs for every
// available glyph.
//

#include <filesystem>
#include <fstream>
#include <iostream>

#include <nlohmann/json.hpp>

#include "font_to_svg.hpp"

using json = nlohmann::json;

void genSvg(std::string output, std::string fontname, std::string charCode,
            std::string name) {
	// Obtain the outline of the given glyph
	font2svg::glyph g(fontname.c_str(), charCode);

	// Create the file if the glyph exists
	if (!g.isempty()) {
		std::filesystem::create_directories(output);

		std::string fname = output + charCode + " - " + name + ".svg";
		std::ofstream file(fname.c_str());
		file << g.svg();
		file.close();
	}

	// Cleanup
	g.free();
}

void create_svgs(std::string output, std::string fontname) {
	json blocks;
	std::ifstream jsonfile("unicode.json");
	jsonfile >> blocks;

	int blockcount = blocks.size();

	for (auto &[block, glyphs] : blocks.items()) {
		std::string i = block.substr(0, block.find(": "));
		std::string blockname = block.substr(block.find(": ") + 2);

		std::cout << "Generating SVG for block: " << blockname << " ("
				  << i << "/" << blockcount << ")..." << std::endl;

		for (auto &[code, glyphname] : glyphs.items()) {
			genSvg(
				output + std::string("/" + i + "-" + blockname + "/"),
				fontname, code, glyphname
			);
		}
	}
}

int main(int argc, char *argv[]) {
	if (argc < 2) {
		std::cerr << "Usage: " << argv[0] << " font.ttf\n"
				  << std::endl
				  << "Output: ./Output/<fontname>/*.svg" << std::endl;
		exit(1);
	}

	std::stringstream output;
	output << "./Output/" << argv[1] << "/";
	create_svgs(output.str(), argv[1]);

	return 0;
}

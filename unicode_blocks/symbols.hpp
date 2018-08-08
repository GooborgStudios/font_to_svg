//
// unicode_blocks/symbols.hpp - font_to_svg
// Vinyl Darkscratch © 2018, MIT License.
// www.queengoob.org
// 
// This file contains the following unicode blocks:
// - Unicode Symbols
// - Block Elements
// - Geometric Shapes
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

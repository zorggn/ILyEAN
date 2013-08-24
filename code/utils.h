/*
	General Helper Utilities Interface
	ILyEAN Codebase
*/

/*
	Generic utils used in the DAW to communicate with the filesystem, OS or things like that. (networking elsewhere)
*/

#ifndef UTILS_H
#define UTILS_H

	#include <string>

	namespace Utils {

		// Get the path to the program (NOT where it was ran from)
		std::string& getProgramPath();
	
	}
	
#else
	#ifndef _MSC_VER
		#warning "UTILS_H already defined!"
	#else
		#pragma message ( "UTILS_H already defined!" )
	#endif
#endif

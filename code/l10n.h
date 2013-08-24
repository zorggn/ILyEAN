/*
	Localization Interface
	ILyEAN Codebase
*/

/*
	These functions will deal with showing the strings in the application in the correct language.
*/

#ifndef L10N_H
#define L10N_H

	#include <string>

	namespace L10n {

		// Enumerate all strings inside the program, fast lookup; needs hierarchical naming scheme
		enum StringId { 
			L10N__UNTITLED_PROJECT
		};

		// Enumerate all supported languages
		enum LanguageId {
			LOCALE_EN-US,
			LOCALE_EN-UK,
			LOCALE_HU
		} currentLangId;

		// Setter and getter for languages
		void setLanguage(LanguageId langId);
		languageId getLanguage();

		// (Re)Load the currently selected language's strings into memory
		int loadStringsIntoMemory(LanguageId langId);

		// Return the correct string based on enum id
		std::string& translate(StringId strId);

	}

#else
	#ifndef _MSC_VER
		#warning "L10N_H already defined!"
	#else
		#pragma message ( "L10N_H already defined!" )
	#endif
#endif

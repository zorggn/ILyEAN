/*
	Audio Clip Interface
	ILyEAN Codebase
*/

/*
	Audio clips hold uncompressed audio streams. They refer to DSP modules, where they wish to be sent to through playback and rendering.
	The audio clips can have their data at a specified bitrate (default: 16bit), but the sampling rate must be the same as the project's.

	(A derived class, Freeze, can store compressed audiostreams as well, and send those to other collab participants through the net, if someone requests them for a clip.)
*/

#ifndef AUDIOCLIP_H
#define AUDIOCLIP_H

	class Audioclip
	{

	public:

		// Default constructor
		Audioclip();

		// Destructor
		~Audioclip();

		// If the clip is processed or not
		bool enabled;

		// Name of the clip
		std::string name;

		// Audio container
		

		// DSP module link
		Module* audioSource;
		
	};

#else
	#ifndef _MSC_VER
		#warning "AUDIOCLIP_H already defined!"
	#else
		#pragma message ( "AUDIOCLIP_H already defined!" )
	#endif
#endif
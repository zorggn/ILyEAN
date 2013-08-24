/*
	Timebase Interface
	ILyEAN Codebase
*/

/*
	Timebase used in the arranger hierarchy. (other two are sample(point)s and miliseconds, mostly used elsewhere)
*/

#ifndef TIMEBASE_H
#define TIMEBASE_H

	struct Time {

		// Range: 32bits, should be enough for everything
		uint32_t measure;

		// Range: 0 -> (N-1), N is the numerator of the (local) time signature
		uint32_t beat;

		// Range: 0 -> (M-1), M determined by PPQ value along with the denominator of the (local) time signature
		uint32_t pulse;
		
	};

#else
	#ifndef _MSC_VER
		#warning "TIMEBASE_H already defined!"
	#else
		#pragma message ( "TIMEBASE_H already defined!" )
	#endif
#endif
/*
	Node Interface
	ILyEAN Codebase
*/

/*
	The node is the most basic element of the arrangement hierarchy, it records temporal placement, value, and a function to interpolate by.
	The interpolation functions take a nodelist, the current position, and the length of the list; all these data are passed to it by a function in an enclosing class.
	The reason it doesn't use pointers to next (and prev.) nodes is because additions/deletions in the envelopes would cause side-effects in the form of the next and prev pointers of nodes would need to be updated, which would take time to do; when collabbing, side-effects like that should be avoided at all costs.
*/

#ifndef NODE_H
#define NODE_H

	#include "timebase.h"

	// Forward declaration
	struct Node;

	// Interpolator function signature
	typedef double (*Interpolator)(const uint32_t,const uint32_t,const **tNode);

	struct Node {

		// Temporal position
		Time position;

		// Value (whether it's normalized to [0,1], [-1,1] or not is not the job of the Node itself)
		double value;

		// Interpolator function pointer
		Interpolator interpolator;
		
	};

#else
	#ifndef _MSC_VER
		#warning "NODE_H already defined!"
	#else
		#pragma message ( "NODE_H already defined!" )
	#endif
#endif
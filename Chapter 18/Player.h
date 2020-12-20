// -----------------------------------------------------------------------------
#ifndef PLAYER_H_
#define PLAYER_H_

// ---- INCLUDES ---- //
#include "ConsoleHelpers.h"


// -----------------------------------------------------------------------------

struct Player
{
	Player()
		: mPlanks(5)
		, mArrows(5)
	{}

	CodeHelp::Vector2D mPosition;
	int mCurrentRoom;
	int mPlanks, mArrows;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !PLAYER_H_
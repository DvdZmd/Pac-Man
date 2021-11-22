#include "PathmapTile.h"

PathmapTile::PathmapTile(int anX, int anY, bool aIsBlockingFlag)
: myX(anX)
, myY(anY)
, myIsBlockingFlag(aIsBlockingFlag)
, isDecisionFlag(false)
,myIsVisitedFlag(false)
{
}

PathmapTile::~PathmapTile(void)
{
}

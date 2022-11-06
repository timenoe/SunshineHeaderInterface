#pragma once

#include <SMS/collision/MapCollisionMove.hxx>
#include <SMS/mapobj/MapObjGeneral.hxx>

class TMapObjTree : public TMapObjGeneral {
public:
    u32 _148;
    u32 _14C;
    s32 mLeafCount;
    TMapCollisionMove *mCollisionMove;
};
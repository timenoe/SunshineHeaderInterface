#pragma once

#include <Dolphin/types.h>
#include <JSystem/JGeometry.hxx>

#include <SMS/actor/LiveActor.hxx>
#include <SMS/collision/MapCollisionBase.hxx>

class TMapCollisionWarp : TMapCollisionBase {
public:
    TMapCollisionWarp();

    virtual void init(const char *, u16, const TLiveActor *) override;
    virtual void remove() override;
    virtual void setUp() override;
    virtual void setUpTrans(const TVec3f &) override;

    u16 _60;
    TLiveActor *mActor;  // 0x0064
};
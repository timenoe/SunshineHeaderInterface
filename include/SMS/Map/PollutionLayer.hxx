#pragma once

#include <Dolphin/types.h>
#include <SMS/Map/PollutionPos.hxx>
#include <SMS/Map/Joint.hxx>

class TPollutionLayer : public TJointModel {

public:
    u16 mPollutionEffect;  // 0x0030
};S
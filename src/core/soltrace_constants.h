#pragma once
                
#include <cstdint>

namespace OptixCSP {

    // Hit type
    enum HitType : uint8_t {
        HIT_UNASSIGNED = 0,
        HIT_CREATE = 1,  // raygen
        HIT_REFLECT = 2,
        HIT_TRANSMIT = 3,
        HIT_ABSORB = 4,
        HIT_MISS = 5
    };

    // Element ID consts
    constexpr int32_t kElementIdBuffer = 0;
    constexpr int32_t kElementIdRayGen = -1;
    constexpr int32_t kElementIdUnassigned = -2;

}
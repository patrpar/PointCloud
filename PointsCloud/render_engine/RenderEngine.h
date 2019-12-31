#pragma once

#include <vector>

#include "../core/Points.h"
#include "../core/core_helpers.h"
#include "RenderEngineHelper.h"

class RenderEngine
{
public:
    RenderEngine(std::vector<Points>& points) {
        pointsCloud = points;
    }

    void view();


private:
    std::vector<Points> pointsCloud;

};


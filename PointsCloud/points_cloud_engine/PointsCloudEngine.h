#pragma once


#include <vector>
#include <string_view>
#include <string>
#include "../core/Points.h"
#include "../core/core_helpers.h"
#include "PointsCloudEngineHelper.h"


class PointsCloudEngine
{
public:
    

    PointsCloudEngine() { };

    void readPoints(std::string_view filePath);

    std::vector<Points> getExamplePoints();


private:
    std::vector<Points> cloudPoints;
};


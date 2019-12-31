#include "PointsCloudEngine.h"

void PointsCloudEngine::readPoints(std::string_view filepath)
{


   // if failed reading from file use  _ASSERT(false);
}

std::vector<Points> PointsCloudEngine::getExamplePoints()
{
    std::vector<Points> examplePointsCloud{ {1.0f, 1.0f, 1.0f}, { 2.0f, 2.0f, 2.0f}, {3.0f, 3.0f, 3.0f} };

    return examplePointsCloud;
}

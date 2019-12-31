#include "render_engine/RenderEngine.h"
#include "points_cloud_engine/PointsCloudEngine.h"

#include "core/Points.h"


int main()
{  

    PointsCloudEngine pointsCloudEngine;

    auto examplePoints = pointsCloudEngine.getExamplePoints(); // auto samo ustawia zmienne w czasie kompilacji tutaj to bedzie vector<Points> jak najedziecie na zmienna to bedzie podpowiadalo jej typ

    RenderEngine renderEngine(examplePoints);

    renderEngine.view();


    return 0;
}
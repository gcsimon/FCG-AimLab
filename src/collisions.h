//Funções de colisão:
// Headers da biblioteca GLM: criação de matrizes e vetores.
#include <glm/mat4x4.hpp>
#include <glm/vec4.hpp>
#include <glm/gtc/type_ptr.hpp>
#include "float.h"

bool isPointInSphere(glm::vec4 pointToTest, glm::vec4 centerSphere, float radiusSphere);

bool isPointInSphere(glm::vec4 pointToTest, glm::vec4 centerSphere, float radiusSphere)
{
    float pointDistance=glm::length(centerSphere - pointToTest);
    if(pointDistance>0&&pointDistance <= DBL_MAX)
        if(pointDistance<0)
        {
            pointDistance=pointDistance*(-1);
        }
    if(pointDistance<radiusSphere)
    {
        return true;
    }
    else return false;
}

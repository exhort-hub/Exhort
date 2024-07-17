
#include "Physics2D.h"
#include "../include/raymath.h"

bool IsPointInsideCircle(Vector2 point, Vector2 circleCenter, float circleRadius) {
    Vector2 dir = Vector2Subtract(point, circleCenter);
    float distance = Vector2Length(dir);
    if (distance > circleRadius) {
        return false;
    } else {
        return true;
    }
}
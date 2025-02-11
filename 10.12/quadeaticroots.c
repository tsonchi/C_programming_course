#include <stdio.h>
#include <math.h>
#include "quadraticroots.h"

QuadraticRootsResult findroots(long double a, long double b, long double c) {
    QuadraticRootsResult result;
    long double discriminant = b * b - 4 * a * c;

    if (discriminant < 0) {
        result.norealroots = 1; 
    } else {
        result.norealroots = 0;
        long double sqrt_discriminant = sqrtl(discriminant);
        result.x1 = (-b + sqrt_discriminant) / (2 * a);
        result.x2 = (-b - sqrt_discriminant) / (2 * a);
    }

    return result;
}

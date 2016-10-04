#include "calcutils.h"

double calcUtils::min3(double x, double y, double z) {
    return min(min(x, y), z);
}
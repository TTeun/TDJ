#include "calcutils.h"

double calcUtils::max3(double x, double y, double z) {
    return max(max(x, y), z);
}
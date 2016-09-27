#include "calcutils.h"

double calcUtils::average(const std::vector <double>& vec) {
    double sum = 0;
    for (const double& idx : vec)
        sum += idx;

    return sum / vec.size();
}

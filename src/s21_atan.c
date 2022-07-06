#include "s21_math.h"

long double s21_atan(double x) {
    long double atan;
    if (x > 1.0 || x < -1.0) {
        atan = S21_NAN;
    } else {
    atan = s21_asin(x / s21_sqrt(1 + x * x));
    }
    return atan;
}

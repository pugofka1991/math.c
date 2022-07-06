#include "s21_math.h"

long double s21_fabs(double x) {
    long double res = x;
    return res >= 0 ? res : -res;
}

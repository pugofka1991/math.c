#include "s21_math.h"

long double s21_sin(double x) {
    long double n = 3;
    long double tmp = s21_fmod(x, 2.0 * S21_PI);
    long double sin = tmp;
    long double tmps = tmp;
    while (s21_fabs(tmp) > S21_EPS) {
        tmp = -1 * (tmp * tmps * tmps) / ((n - 1) * n);
        sin += tmp;
        n += 2;
    }
    return sin;
}

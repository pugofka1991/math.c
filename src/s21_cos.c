#include "s21_math.h"

long double s21_cos(double x) {
    long double cos;
    if (x == S21_NAN || x == S21_INF || x == -S21_INF) {
        cos = S21_NAN;
    } else {
        long double n = 2;
        long double tmp = s21_fmod(x, 2.0 * S21_PI);
        long double tmpc = tmp;
        tmp = 1;
        cos = tmp;
        while (s21_fabs(tmp) > S21_EPS) {
            tmp = (-1) * (tmp * tmpc * tmpc) / ((n - 1) * n);
            cos += tmp;
            n += 2;
        }
    }
    return cos;
}

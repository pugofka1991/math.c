#include "s21_math.h"

long double s21_asin(double x) {
    long double arcsin;
    if (x == 1.0) {
        arcsin = S21_PI / 2;
    } else if (x == -1.0) {
        arcsin = -S21_PI / 2;
    } else if (x > 1.0 || x < -1.0) {
        arcsin = S21_NAN;
    } else {
        arcsin = x;
        long double tmp = x;
        int n = 1;
        while (s21_fabs(tmp) > S21_EPS) {
            tmp = (tmp * x * x * (2.0 * n - 1.0) * (2.0 * n - 1.0)) / ((2.0 * n) * (2.0 * n + 1.0));
            arcsin += tmp;
            n++;
        }
    }
    return arcsin;
}

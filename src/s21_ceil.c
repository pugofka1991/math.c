#include "s21_math.h"

long double s21_ceil(double x) {
    if (x == S21_INF) {
        x = S21_INF;
    } else if (x == -S21_INF) {
        x = -S21_INF;
    } else if (S21_ISNAN(x)) {
        x = S21_NAN;
    } else if (s21_fabs(s21_fmod(x, 1)) > 0) {
        x = x > 0.0 ? (int)(x + 1.0) : (int)x;
    }
    return x;
}

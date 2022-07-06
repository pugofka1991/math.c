#include "s21_math.h"

long double s21_floor(double x) {
    long double res = x;
    if (x == S21_INF) {
        res = S21_INF;
    } else if (x == -S21_INF) {
        res = -S21_INF;
    } else {
        if (x > 0) {
            res -= s21_fmod(x, 1);
        } else if (s21_fabs(s21_fmod(x, 1)) > S21_EPS) {
        res -= 1;
        res = s21_fabs(res);
        res -= s21_fmod(res, 1);
        res *= -1;
        }
    }
    return res;
}

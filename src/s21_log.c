#include "s21_math.h"

long double s21_log(double x) {
    long double ans;
    if (x < 0) {
        ans = S21_NAN;
    } else if (x == 0) {
        ans = -S21_INF;
    } else if (x == S21_INF) {
        ans = S21_INF;
    } else {
        int k = 0;
        int t = x < 1.0l;
        if (t) x = 1.0l / x;
        for (; x > S21_EXP; x /= S21_EXP, k++) continue;
        long double yn = x - 1.0;  // using the first term of the taylor series as initial-value
        long double yn1 = yn;

        do {
            yn = yn1;
            yn1 = yn + (2 * (x - s21_exp(yn)) / (x + s21_exp(yn)));
        } while (s21_fabs(yn - yn1) > S21_EPS);
        ans = t != 1.0 ? yn1 + k : -1 * (yn1 + k);
    }
    return ans;
}

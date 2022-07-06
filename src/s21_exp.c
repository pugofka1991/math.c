#include "s21_math.h"

long double s21_exp(double x) {
    int sub_zero = 0;
    if (x < 0) {
        sub_zero = 1;
        x = x * (-1.0l);
    }
    long double ans = 1.0;
    if (S21_ISNAN(x)) {
        ans = S21_NAN;
    } else if (x == -S21_INF) {
        ans = 0;
    } else {
        long double tmp = x;
        long double n = 2.0;
        while (s21_fabs(tmp) > S21_EPS) {
            if (S21_ISINF(ans)) {
                ans = S21_INF;
                break;
            }
            ans += tmp;
            tmp = (tmp * x) / n;
            n += 1.0;
        }
    }
    return sub_zero ? 1 / ans : ans;
}

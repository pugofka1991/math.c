#include "s21_math.h"

long double s21_sqrt(double x) {
    long double sqrt = x;
    if (x >= 0) {
        long double top;
        long double bot;

        if (x >= 1) {
            top = x;
            bot = 0;
        } else {
            bot = x;
            top = 1;
        }
        long double tmp = sqrt * sqrt;
        while (s21_fabs(tmp - x) > S21_EPS && tmp != x) {
                if (tmp > x) {
                    top = sqrt;
                } else {
                    bot = sqrt;
                }
                if (s21_fabs(sqrt * sqrt - x) < S21_EPS) {
                    break;
                }
                sqrt = (top + bot) / 2;
                tmp = sqrt * sqrt;
        }
    } else {
        sqrt = S21_NAN;
    }
    return sqrt;
}

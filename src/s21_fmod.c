#include "s21_math.h"

long double s21_fmod(double x, double y) {
    long double fir = s21_fabs(x);
    long double sec = s21_fabs(y);
    if (sec == 0 || S21_ISINF(fir)) {
        fir = S21_NAN;
    } else if (S21_ISINF(sec)) {
        fir = (int)fir;
    } else {
        long long tmp = fir / sec;
        fir -= sec * tmp;
        if (x < 0) fir *= -1;
    }
    return fir;
}

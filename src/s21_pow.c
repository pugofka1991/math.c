#include "s21_math.h"

long double s21_pow(double base, double e) {
    long double res = 0;
    if (e == 0) {
        res = 1;
    } else if (base == 1) {
        res = 1;
    } else if (S21_ISNAN(base) || S21_ISNAN(e)) {
        res = S21_NAN;
    } else if (base == 0) {
        if (e < 0) res = S21_INF;
        else       res = 0;
    } else if (base == -1 && S21_ISINF(e)) {
        res = 1;
    } else if (e == -S21_INF) {
        if (s21_fabs(base) < 1) res = S21_INF;
        else                    res = 0;
    } else if (e == S21_INF) {
        if (s21_fabs(base) < 1) res = 0;
        else                    res = S21_INF;
    } else if (base == -S21_INF) {
        if (e < 0) {
            if (s21_fabs(s21_fmod(e, 2)) >= 1) res = -0;
            else                               res = 0;
        } else {
            if (s21_fabs(s21_fmod(e, 2)) >= 1) res = -S21_INF;
            else                               res = S21_INF;
        }
    } else if (base == S21_INF) {
        if (e < 0) res = 0;
        else       res = S21_INF;
    } else {
        if (base < 0) {
            if (s21_fabs(s21_fmod(e, 1)) > 0) {
                res = S21_NAN;
            } else {
                base = s21_fabs(base);
                res = s21_exp(e * s21_log(base));
                if (s21_fabs(s21_fmod(e, 2)) >= 1.0) {
                    res *= -1;
                }
            }
        } else {
            res = s21_exp(e * s21_log(base));
        }
    }
    return res;
}

/*
long double s21_pow(double base, double exp) {
    long double res = exp == 0 ? 1.l : exp == 1 ? base : base < 0 && exp != (int)exp ? S21_NAN : 0;
    int r = base < 0 && (int)exp % 2 != 0 ? -1 : 1;
    int g = base < 0 ? -1 : 1, t = exp < 0 ? -1 : 1;
    exp == (int)exp && exp > 0 ? res = my_pow(base, exp) : 0;
    if (res == 0) {
        res = r * s21_exp((exp * t) * log(base * g));
        t < 0 ? res = 1.l / res : 0;
    }
    return res;
}
*/

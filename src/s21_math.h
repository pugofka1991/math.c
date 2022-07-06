#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#include <stdio.h>
#include <stdlib.h>

#define S21_ISNAN(x) !(x >= 0 || x < 0)
#define S21_ISINF(x) ((x == S21_INF) || (x == -S21_INF))
#define S21_PI 3.1415926535897932
#define S21_NAN 0.0 / 0.0
#define S21_INF 1 / 0.0
#define S21_EPS 1e-10l
#define S21_LN10 2.3025850929940456
#define S21_LN2 0.6931471805599453
#define S21_EXP 2.71828182845904523536028747135266249775724709369995
#define TEST_EPS 1e-6l
#define ASIN_EPS 1e-16l

long double s21_log(double x);
long double s21_pow(double base, double exp);
long double s21_exp(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_atan(double x);
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_sin(double x);
long double s21_sqrt(double x);
long double s21_tan(double x);
long double s21_fabs(double x);
long double s21_floor(double x);
long double s21_fmod(double x, double y);
int s21_abs(int x);

#endif  // SRC_S21_MATH_H_

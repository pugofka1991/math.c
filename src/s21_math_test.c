#include "s21_math.h"

#include <check.h>
#include <math.h>
// abs
START_TEST(s21_abs_test_1) {
    ck_assert_int_eq(abs(0), s21_abs(0));
}
END_TEST

START_TEST(s21_abs_test_2) {
    ck_assert_int_eq(abs(-1234), s21_abs(-1234));
}
END_TEST

START_TEST(s21_abs_test_3) {
     ck_assert_int_eq(abs(1234), s21_abs(1234));
}
END_TEST

// acos
START_TEST(s21_acos_test_1) {
    double x = 0.999;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_2) {
    double x = 0.001;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_3) {
    double x = 1 + 1e-16;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_4) {
    double x = 0;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_5) {
    double x = -0.001;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_6) {
    double x = -0.9999;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_7) {
    double x = -1 - 1e-16;
    ck_assert_ldouble_eq_tol(acos(x), s21_acos(x), TEST_EPS);
} END_TEST

START_TEST(s21_acos_test_8) {
    double x = 1.001;
    ck_assert_ldouble_nan(s21_acos(x));
} END_TEST

START_TEST(s21_acos_test_9) {
    double x = -1.1;
    ck_assert_ldouble_nan(s21_acos(x));
} END_TEST

START_TEST(s21_acos_test_10) {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_acos(x));
} END_TEST

START_TEST(s21_acos_test_11) {
    double x = S21_INF;
    ck_assert_ldouble_nan(s21_acos(x));
} END_TEST

// asin
START_TEST(s21_asin_test_1) {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_2) {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_3) {
    double x = 0;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_4) {
    double x = 1;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_5) {
    double x = -1;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_6) {
    double x = 5;
    ck_assert_ldouble_nan(s21_asin(x));
} END_TEST

START_TEST(s21_asin_test_7) {
    double x = -5;
    ck_assert_ldouble_nan(s21_asin(x));
} END_TEST

START_TEST(s21_asin_test_8) {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_9) {
    double x = 1.0l + ASIN_EPS;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_10) {
    double x = -1 - ASIN_EPS;
    ck_assert_ldouble_eq_tol(asin(x), s21_asin(x), TEST_EPS);
} END_TEST

START_TEST(s21_asin_test_11) {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_asin(x));
} END_TEST

START_TEST(s21_asin_test_12) {
    double x = S21_INF;
    ck_assert_ldouble_nan(s21_asin(x));
} END_TEST

// ceil
START_TEST(s21_ceil_test_1) {
     ck_assert_ldouble_eq(ceil(0), s21_ceil(0));
}
END_TEST

START_TEST(s21_ceil_test_2) {
     ck_assert_ldouble_eq(ceil(-1234), s21_ceil(-1234));
}
END_TEST

START_TEST(s21_ceil_test_3) {
     ck_assert_ldouble_eq(ceil(1234), s21_ceil(1234));
}
END_TEST

START_TEST(s21_ceil_test_4) {
     ck_assert_ldouble_eq(ceil(1.7), s21_ceil(1.7));
}
END_TEST

START_TEST(s21_ceil_test_5) {
    ck_assert_int_eq(ceil(-1.7), s21_ceil(-1.7));
}
END_TEST

START_TEST(s21_ceil_test_6) {
    ck_assert_ldouble_eq(ceil(14.7), s21_ceil(14.7));
}
END_TEST
START_TEST(s21_ceil_test_7) {
    ck_assert_ldouble_eq(ceil(0.7), s21_ceil(0.7));
}
END_TEST
START_TEST(s21_ceil_test_8) {
    ck_assert_ldouble_eq(ceil(S21_INF), s21_ceil(S21_INF));
}
END_TEST
START_TEST(s21_ceil_test_9) {
    ck_assert_ldouble_eq(ceil(-S21_INF), s21_ceil(-S21_INF));
}
END_TEST

START_TEST(s21_ceil_test_10) {
     ck_assert_ldouble_nan(s21_ceil(S21_NAN));
}
END_TEST

START_TEST(s21_ceil_test_11) {
    float a = 0.1;
    for (int i = 0; i < 520; i++) {
        ck_assert_ldouble_eq_tol(ceil(a * i), s21_ceil(a * i), TEST_EPS);
        ck_assert_ldouble_eq_tol(ceil(-a * i), s21_ceil(-a * i), TEST_EPS);
    }
}
END_TEST

// cos
START_TEST(s21_cos_test_1) {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_2) {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_3) {
    double x = 0;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_4) {
    double x = 1;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_5) {
    double x = -1;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_6) {
    double x = 598987986;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_7) {
    double x = -5938409234;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_8) {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST
START_TEST(s21_cos_test_9) {
    double x = S21_PI;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_10) {
    double x = 1 + TEST_EPS;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_11) {
    double x = -1 - TEST_EPS;
    ck_assert_ldouble_eq_tol(cos(x), s21_cos(x), TEST_EPS);
}
END_TEST

START_TEST(s21_cos_test_12) {
     ck_assert_ldouble_nan(s21_cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_test_13) {
     ck_assert_ldouble_nan(s21_cos(NAN));
}
END_TEST

START_TEST(s21_cos_test_14) {
     ck_assert_ldouble_nan(s21_cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test_15) {
    int i = _i;
    if (i != 0) {
        ck_assert_ldouble_eq_tol(cos(S21_PI / i), s21_cos(S21_PI / i), TEST_EPS);
    } else {
        ck_assert_ldouble_nan(s21_cos(S21_PI / i));
    }
} END_TEST

START_TEST(s21_cos_test_16) {
    int i = _i;
    ck_assert_ldouble_eq_tol(cos(S21_PI * i), s21_cos(S21_PI * i), TEST_EPS);
} END_TEST

// exp
START_TEST(s21_exp_test_1) {
    double x = 24.67;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
} END_TEST

START_TEST(s21_exp_test_2) {
    double x = 7.345e-29;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
}

START_TEST(s21_exp_test_3) {
    double x = -0.767;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
}

START_TEST(s21_exp_test_4) {
    double x = -13.567;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
} END_TEST

START_TEST(s21_exp_test_5) {
    double x = 0;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
} END_TEST

START_TEST(s21_exp_test_6) {
    double x = NAN;
    ck_assert_ldouble_nan(s21_exp(x));
} END_TEST

START_TEST(s21_exp_test_7) {
    double x = -NAN;
    ck_assert_ldouble_nan(s21_exp(x));
} END_TEST

START_TEST(s21_exp_test_8) {
    double x = INFINITY;
    ck_assert_ldouble_infinite(s21_exp(x));
} END_TEST

START_TEST(s21_exp_test_9) {
    double x = -INFINITY;
    ck_assert_ldouble_eq_tol(exp(x), s21_exp(x), TEST_EPS);
} END_TEST

// fabs
START_TEST(s21_fabs_test_1) {
    ck_assert_int_eq(fabs(0.0), s21_fabs(0.0));
} END_TEST

START_TEST(s21_fabs_test_2) {
    ck_assert_int_eq(fabs(-3425743948574326.345345), s21_fabs(-3425743948574326.345345));
} END_TEST

START_TEST(s21_fabs_test_3) {
    ck_assert_int_eq(fabs(3425743948574326.345345), s21_fabs(3425743948574326.345345));
} END_TEST

// floor
START_TEST(s21_floor_test_1) {
     ck_assert_ldouble_eq(floor(0), s21_floor(0));
}
END_TEST

START_TEST(s21_floor_test_2) {
     ck_assert_ldouble_eq(floor(-1234), s21_floor(-1234));
}
END_TEST

START_TEST(s21_floor_test_3) {
     ck_assert_ldouble_eq(floor(1234), s21_floor(1234));
}
END_TEST

START_TEST(s21_floor_test_4) {
     ck_assert_ldouble_eq(floor(1.7), s21_floor(1.7));
}
END_TEST

START_TEST(s21_floor_test_5) {
    ck_assert_int_eq(floor(-1.7), s21_floor(-1.7));
}
END_TEST

START_TEST(s21_floor_test_6) {
    ck_assert_ldouble_eq(floor(14.7), s21_floor(14.7));
}
END_TEST
START_TEST(s21_floor_test_7) {
    ck_assert_ldouble_eq(floor(0.7), s21_floor(0.7));
}
END_TEST
START_TEST(s21_floor_test_8) {
    ck_assert_ldouble_eq(floor(S21_INF), s21_floor(S21_INF));
}
END_TEST
START_TEST(s21_floor_test_9) {
    ck_assert_ldouble_eq(floor(-S21_INF), s21_floor(-S21_INF));
}
END_TEST

START_TEST(s21_floor_test_10) {
     ck_assert_ldouble_nan(s21_floor(S21_NAN));
}
END_TEST

START_TEST(s21_floor_test_11) {
    ck_assert_ldouble_eq(floor(0.123456907912345),
                         s21_floor(0.123456907912345));
}
END_TEST

START_TEST(s21_floor_test_12) {
    float a = 0.1;
    for (int i = 0; i < 520; i++) {
        ck_assert_ldouble_eq_tol(floor(a * i), s21_floor(a * i), TEST_EPS);
        ck_assert_ldouble_eq_tol(floor(-a * i), s21_floor(-a * i), TEST_EPS);
    }
}
END_TEST

// fmod
START_TEST(s21_fmod_test_1) {
    double x = 534536.34523;
    double y = 2345.34535;
    ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
} END_TEST

START_TEST(s21_fmod_test_2) {
    double x = -5345346.34523;
    double y = 2345.34535;
    ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
} END_TEST

START_TEST(s21_fmod_test_3) {
    double x = 5345346.34523;
    double y = -2345.34535;
    ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
} END_TEST

START_TEST(s21_fmod_test_4) {
    double x = -10.1;
    double y = -3.;
    ck_assert_double_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
}

START_TEST(s21_fmod_test_5) {
    double x = 5345346.34523;
    double y = 0;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_6) {
    double x = 0;
    double y = 4353.64564;
    ck_assert_double_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
} END_TEST

START_TEST(s21_fmod_test_7) {
    double x = 0;
    double y = -S21_NAN;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_8) {
    double x = S21_NAN;
    double y = 245.34535;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_9) {
    double x = 245.34535;
    double y = S21_NAN;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_10) {
    double x = S21_INF;
    double y = 4323.432543;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_11) {
    double x = 436645.34523;
    double y = S21_INF;
    ck_assert_int_eq(fmod(x, y), s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_12) {
    double x = 436645.34523;
    double y = -S21_INF;
    ck_assert_int_eq(fmod(x, y), s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_13) {
    double x = -S21_INF;
    double y = 0;
    ck_assert_ldouble_nan(s21_fmod(x, y));
} END_TEST

START_TEST(s21_fmod_test_14) {
    double x = 0;
    double y = S21_INF;
    ck_assert_ldouble_eq_tol(fmod(x, y), s21_fmod(x, y), TEST_EPS);
} END_TEST

// log
START_TEST(s21_log_test_1) {
    double x = 2.523;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), TEST_EPS);
}

START_TEST(s21_log_test_2) {
    double x = DBL_MAX;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), TEST_EPS);
}

START_TEST(s21_log_test_3) {
    double x = DBL_MIN;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), TEST_EPS);
}

START_TEST(s21_log_test_4) {
    double x = 4.3234323e-43;
    ck_assert_ldouble_eq_tol(log(x), s21_log(x), TEST_EPS);
}

START_TEST(s21_log_test_5) {
    double x = -3432.12;
    ck_assert_ldouble_nan(s21_log(x));
}

START_TEST(s21_log_test_6) {
    double x = 0;
    ck_assert_ldouble_infinite(s21_log(x));
}

START_TEST(s21_log_test_7) {
    double x = NAN;
    ck_assert_ldouble_nan(s21_log(x));
}

START_TEST(s21_log_test_8) {
    double x = -NAN;
    ck_assert_ldouble_nan(s21_log(x));
}

START_TEST(s21_log_test_9) {
    double x = INFINITY;
    ck_assert_ldouble_infinite(s21_log(x));
}

START_TEST(s21_log_test_10) {
    double x = -INFINITY;
    ck_assert_ldouble_nan(s21_log(x));
}

// pow
START_TEST(s21_pow_test_1) {
    double num = 134.5;
    double p = 1.4;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_2) {
    double num = 134.5;
    double p = 20.5e-34;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_3) {
    double num = 563.23;
    double p = -42.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_4) {
    double num = -10.1;
    double p = -3.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_5) {
    double num = -10.1;
    double p = 2.;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_6) {
    double num = -10.1;
    double p = -1.5;
    ck_assert_ldouble_nan(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_7) {
    double num = 10.1;
    double p = 0.123;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_8) {
    double num = -27.45;
    double p = 1.0 / 3.0;
    ck_assert_ldouble_nan(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_9) {
    double nums[6] = { 1.12, -34.45, NAN, -NAN, INFINITY, -INFINITY };
    double p = 0;
    int i = _i;
    ck_assert_ldouble_eq_tol(pow(nums[i], p), s21_pow(nums[i], p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_10) {
    double num = 1.0;
    double p[7] = { 1, 1.23, -1.23, NAN, -NAN, INFINITY, -INFINITY };
    int i = _i;
    ck_assert_ldouble_eq_tol(pow(num, p[i]), s21_pow(num, p[i]), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_11) {
    double num = 12.34;
    double p = 1;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_12) {
    double nums[6] = { 1.12, -34.45, NAN, -NAN, INFINITY, -INFINITY };
    double p = NAN;
    int i = _i;
    ck_assert_ldouble_nan(s21_pow(nums[i], p));
} END_TEST

START_TEST(s21_pow_test_13) {
    double num = NAN;
    double p[8] = { 1, -1, -11.1, 11.1, INFINITY, -INFINITY, NAN, -NAN };
    int i = _i;
    ck_assert_ldouble_nan(s21_pow(num, p[i]));
} END_TEST

START_TEST(s21_pow_test_14) {
    double nums[6] = { 1.12, -34.45, NAN, -NAN, INFINITY, -INFINITY };
    double p = -NAN;
    int i = _i;
    ck_assert_ldouble_nan(s21_pow(nums[i], p));
} END_TEST

START_TEST(s21_pow_test_15) {
    double num = -NAN;
    double p[8] = { 1, -1, -11.1, 11.1, INFINITY, -INFINITY, NAN, -NAN };
    int i = _i;
    ck_assert_ldouble_nan(s21_pow(num, p[i]));
} END_TEST

START_TEST(s21_pow_test_16) {
    double num = 0;
    double p = -12;
    ck_assert_ldouble_infinite(s21_pow(num, p));
}

START_TEST(s21_pow_test_17) {
    double num = 0;
    double p = 12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
}

START_TEST(s21_pow_test_18) {
    double num = -1;
    ck_assert_ldouble_eq_tol(pow(num, INFINITY), s21_pow(num, INFINITY), TEST_EPS);
}

START_TEST(s21_pow_test_19) {
    double num = 0.123;
    double p = -INFINITY;
    ck_assert_ldouble_infinite(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_20) {
    double num = 0.123;
    double p = INFINITY;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_21) {
    double num = 13;
    double p = -INFINITY;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_22) {
    double num = 0.123;
    double p = INFINITY;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_23) {
    double num = 13;
    double p = INFINITY;
    ck_assert_ldouble_infinite(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_24) {
    double num = INFINITY;
    double p = -12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_25) {
    double num = -INFINITY;
    double p = 12;
    ck_assert_ldouble_infinite(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_26) {
    double num = -INFINITY;
    double p = 13;
    ck_assert_ldouble_infinite(s21_pow(num, p));
} END_TEST

START_TEST(s21_pow_test_27) {
    double num = -INFINITY;
    double p = -12;
    ck_assert_ldouble_eq_tol(pow(num, p), s21_pow(num, p), TEST_EPS);
} END_TEST

START_TEST(s21_pow_test_28) {
    double num = INFINITY;
    double p = 12;
    ck_assert_ldouble_infinite(s21_pow(num, p));
} END_TEST

// sin
START_TEST(s21_sin_test_1) {
    double x = 2.523;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_2) {
    double x = -2.523;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_3) {
    double x = 923456789;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_4) {
    double x = -923456789;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_5) {
    double x = 0;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_6) {
    double x = NAN;
    ck_assert_ldouble_nan(s21_sin(x));
} END_TEST

START_TEST(s21_sin_test_7) {
    double x = INFINITY;
    ck_assert_ldouble_nan(s21_sin(x));
} END_TEST

START_TEST(s21_sin_test_8) {
    int i = _i;
    if (i != 0) {
        ck_assert_ldouble_eq_tol(sin(S21_PI / i), s21_sin(S21_PI / i), TEST_EPS);
    } else {
        ck_assert_ldouble_nan(s21_sin(S21_PI / i));
    }
} END_TEST

START_TEST(s21_sin_test_9) {
    int i = _i;
    ck_assert_ldouble_eq_tol(sin(S21_PI * i), s21_sin(S21_PI * i), TEST_EPS);
} END_TEST

START_TEST(s21_sin_test_10) {
    double x = 0.12345678901234567890;
    ck_assert_ldouble_eq_tol(sin(x), s21_sin(x), TEST_EPS);
} END_TEST

// sqrt
START_TEST(s21_sqrt_test_1) {
    double x = 64.;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_2) {
    double x = 123456789;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_3) {
    double x = DBL_MIN;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
}

START_TEST(s21_sqrt_test_4) {
    double x = 2.25;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_5) {
    double x = 981.123e+10;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_6) {
    double x = 4.163435e-34;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_7) {
    double x = 0.;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_8) {
    double x = -0.;
    ck_assert_ldouble_eq_tol(sqrt(x), s21_sqrt(x), TEST_EPS);
} END_TEST

START_TEST(s21_sqrt_test_9) {
    double x = -121.;
    ck_assert_ldouble_nan(s21_sqrt(x));
} END_TEST

START_TEST(s21_sqrt_test_10) {
    double x = -2.89;
    ck_assert_ldouble_nan(s21_sqrt(x));
} END_TEST

START_TEST(s21_sqrt_test_11) {
    double x = NAN;
    ck_assert_ldouble_nan(s21_sqrt(x));
} END_TEST

START_TEST(s21_sqrt_test_12) {
    double x = INFINITY;
    ck_assert_ldouble_infinite(s21_sqrt(x));
} END_TEST

START_TEST(s21_sqrt_test_13) {
    double x = -INFINITY;
    ck_assert_ldouble_nan(s21_sqrt(x));
} END_TEST

// tan

START_TEST(s21_tan_test_1) {
    double x = 0.4;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_2) {
    double x = -0.4;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_3) {
    double x = 0;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_4) {
    double x = 1;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_5) {
    double x = -1;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_6) {
    double x = 598987986;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_7) {
    double x = -5938409236;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_8) {
    double x = 0.123456789012345678901234567890;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST
START_TEST(s21_tan_test_9) {
    double x = S21_PI;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_10) {
    double x = 1 + TEST_EPS;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_11) {
    double x = -1 - TEST_EPS;
    ck_assert_ldouble_eq_tol(tan(x), s21_tan(x), TEST_EPS);
}
END_TEST

START_TEST(s21_tan_test_12) {
     ck_assert_ldouble_nan(s21_tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_test_13) {
     ck_assert_ldouble_nan(s21_tan(NAN));
}
END_TEST

START_TEST(s21_tan_test_14) {
     ck_assert_ldouble_nan(s21_tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test_15) {
    int i = _i;
    if (i != 0) {
        ck_assert_ldouble_eq_tol(tan(S21_PI / i), s21_tan(S21_PI / i), TEST_EPS);
    } else {
        ck_assert_ldouble_nan(s21_tan(S21_PI / i));
    }
} END_TEST

START_TEST(s21_tan_test_16) {
    int i = _i;
    ck_assert_ldouble_eq_tol(tan(S21_PI * i), s21_tan(S21_PI * i), TEST_EPS);
} END_TEST

// atan
START_TEST(s21_atan_test_1) {
    double x = 0.999;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_2) {
    double x = 0.001;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_3) {
    double x = 1 + 1e-16;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_4) {
    double x = 0;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_5) {
    double x = -0.001;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_6) {
    double x = -0.9999;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_7) {
    double x = -1 - 1e-16;
    ck_assert_ldouble_eq_tol(atan(x), s21_atan(x), TEST_EPS);
} END_TEST

START_TEST(s21_atan_test_8) {
    double x = 1.001;
    ck_assert_ldouble_nan(s21_atan(x));
} END_TEST

START_TEST(s21_atan_test_9) {
    double x = -1.1;
    ck_assert_ldouble_nan(s21_atan(x));
} END_TEST

START_TEST(s21_atan_test_10) {
    double x = S21_NAN;
    ck_assert_ldouble_nan(s21_atan(x));
} END_TEST

START_TEST(s21_atan_test_11) {
    double x = S21_INF;
    ck_assert_ldouble_nan(s21_atan(x));
} END_TEST

Suite *s21_math_suite(void) {
    Suite *s = suite_create("s21_math_tests");

    TCase *tc_abs;
    tc_abs = tcase_create("s21_abs_test");

    tcase_add_test(tc_abs, s21_abs_test_1);
    tcase_add_test(tc_abs, s21_abs_test_2);
    tcase_add_test(tc_abs, s21_abs_test_3);
    suite_add_tcase(s, tc_abs);

    TCase *tc_acos;
    tc_acos = tcase_create("s21_acos_test");

    tcase_add_test(tc_acos, s21_acos_test_1);
    tcase_add_test(tc_acos, s21_acos_test_2);
    tcase_add_test(tc_acos, s21_acos_test_3);
    tcase_add_test(tc_acos, s21_acos_test_4);
    tcase_add_test(tc_acos, s21_acos_test_5);
    tcase_add_test(tc_acos, s21_acos_test_6);
    tcase_add_test(tc_acos, s21_acos_test_7);
    tcase_add_test(tc_acos, s21_acos_test_8);
    tcase_add_test(tc_acos, s21_acos_test_9);
    tcase_add_test(tc_acos, s21_acos_test_10);
    tcase_add_test(tc_acos, s21_acos_test_11);
    suite_add_tcase(s, tc_acos);

    TCase *tc_asin;
    tc_asin = tcase_create("s21_asin_test");

    tcase_add_test(tc_asin, s21_asin_test_1);
    tcase_add_test(tc_asin, s21_asin_test_2);
    tcase_add_test(tc_asin, s21_asin_test_3);
    tcase_add_test(tc_asin, s21_asin_test_4);
    tcase_add_test(tc_asin, s21_asin_test_5);
    tcase_add_test(tc_asin, s21_asin_test_6);
    tcase_add_test(tc_asin, s21_asin_test_7);
    tcase_add_test(tc_asin, s21_asin_test_8);
    tcase_add_test(tc_asin, s21_asin_test_9);
    tcase_add_test(tc_asin, s21_asin_test_10);
    tcase_add_test(tc_asin, s21_asin_test_11);
    tcase_add_test(tc_asin, s21_asin_test_12);
    suite_add_tcase(s, tc_asin);

    TCase *tc_ceil;
    tc_ceil = tcase_create("s21_ceil_test");

    tcase_add_test(tc_ceil, s21_ceil_test_1);
    tcase_add_test(tc_ceil, s21_ceil_test_2);
    tcase_add_test(tc_ceil, s21_ceil_test_3);
    tcase_add_test(tc_ceil, s21_ceil_test_4);
    tcase_add_test(tc_ceil, s21_ceil_test_5);
    tcase_add_test(tc_ceil, s21_ceil_test_6);
    tcase_add_test(tc_ceil, s21_ceil_test_7);
    tcase_add_test(tc_ceil, s21_ceil_test_8);
    tcase_add_test(tc_ceil, s21_ceil_test_9);
    tcase_add_test(tc_ceil, s21_ceil_test_10);
    tcase_add_test(tc_ceil, s21_ceil_test_11);
    suite_add_tcase(s, tc_ceil);

    TCase *tc_cos;
    tc_cos = tcase_create("s21_cos_test");

    tcase_add_test(tc_cos, s21_cos_test_1);
    tcase_add_test(tc_cos, s21_cos_test_2);
    tcase_add_test(tc_cos, s21_cos_test_3);
    tcase_add_test(tc_cos, s21_cos_test_4);
    tcase_add_test(tc_cos, s21_cos_test_5);
    tcase_add_test(tc_cos, s21_cos_test_6);
    tcase_add_test(tc_cos, s21_cos_test_7);
    tcase_add_test(tc_cos, s21_cos_test_8);
    tcase_add_test(tc_cos, s21_cos_test_9);
    tcase_add_test(tc_cos, s21_cos_test_10);
    tcase_add_test(tc_cos, s21_cos_test_11);
    tcase_add_test(tc_cos, s21_cos_test_12);
    tcase_add_test(tc_cos, s21_cos_test_13);
    tcase_add_test(tc_cos, s21_cos_test_14);
    tcase_add_test(tc_cos, s21_cos_test_15);
    tcase_add_loop_test(tc_cos, s21_cos_test_16, -10, 10);
    suite_add_tcase(s, tc_cos);

    TCase *tc_exp;
    tc_exp = tcase_create("s21_exp_test");

    tcase_add_test(tc_exp, s21_exp_test_1);
    tcase_add_test(tc_exp, s21_exp_test_2);
    tcase_add_test(tc_exp, s21_exp_test_3);
    tcase_add_test(tc_exp, s21_exp_test_4);
    tcase_add_test(tc_exp, s21_exp_test_5);
    tcase_add_test(tc_exp, s21_exp_test_6);
    tcase_add_test(tc_exp, s21_exp_test_7);
    tcase_add_test(tc_exp, s21_exp_test_8);
    tcase_add_test(tc_exp, s21_exp_test_9);
    suite_add_tcase(s, tc_exp);

    TCase *tc_fabs;
    tc_fabs = tcase_create("s21_fabs_test");

    tcase_add_test(tc_fabs, s21_fabs_test_1);
    tcase_add_test(tc_fabs, s21_fabs_test_2);
    tcase_add_test(tc_fabs, s21_fabs_test_3);
    suite_add_tcase(s, tc_fabs);

    TCase *tc_floor;
    tc_floor = tcase_create("s21_floor_test");

    tcase_add_test(tc_floor, s21_floor_test_1);
    tcase_add_test(tc_floor, s21_floor_test_2);
    tcase_add_test(tc_floor, s21_floor_test_3);
    tcase_add_test(tc_floor, s21_floor_test_4);
    tcase_add_test(tc_floor, s21_floor_test_5);
    tcase_add_test(tc_floor, s21_floor_test_6);
    tcase_add_test(tc_floor, s21_floor_test_7);
    tcase_add_test(tc_floor, s21_floor_test_8);
    tcase_add_test(tc_floor, s21_floor_test_9);
    tcase_add_test(tc_floor, s21_floor_test_10);
    tcase_add_test(tc_floor, s21_floor_test_11);
    tcase_add_test(tc_floor, s21_floor_test_12);
    suite_add_tcase(s, tc_floor);

    TCase *tc_fmod;
    tc_fmod = tcase_create("s21_fmod_test");

    tcase_add_test(tc_fmod, s21_fmod_test_1);
    tcase_add_test(tc_fmod, s21_fmod_test_2);
    tcase_add_test(tc_fmod, s21_fmod_test_3);
    tcase_add_test(tc_fmod, s21_fmod_test_4);
    tcase_add_test(tc_fmod, s21_fmod_test_5);
    tcase_add_test(tc_fmod, s21_fmod_test_6);
    tcase_add_test(tc_fmod, s21_fmod_test_7);
    tcase_add_test(tc_fmod, s21_fmod_test_8);
    tcase_add_test(tc_fmod, s21_fmod_test_9);
    tcase_add_test(tc_fmod, s21_fmod_test_10);
    tcase_add_test(tc_fmod, s21_fmod_test_11);
    tcase_add_test(tc_fmod, s21_fmod_test_12);
    tcase_add_test(tc_fmod, s21_fmod_test_13);
    tcase_add_test(tc_fmod, s21_fmod_test_14);
    suite_add_tcase(s, tc_fmod);

    TCase *tc_log;
    tc_log = tcase_create("s21_log_test");

    tcase_add_test(tc_log, s21_log_test_1);
    tcase_add_test(tc_log, s21_log_test_2);
    tcase_add_test(tc_log, s21_log_test_3);
    tcase_add_test(tc_log, s21_log_test_4);
    tcase_add_test(tc_log, s21_log_test_5);
    tcase_add_test(tc_log, s21_log_test_6);
    tcase_add_test(tc_log, s21_log_test_7);
    tcase_add_test(tc_log, s21_log_test_8);
    tcase_add_test(tc_log, s21_log_test_9);
    tcase_add_test(tc_log, s21_log_test_10);
    suite_add_tcase(s, tc_log);

    TCase *tc_pow;
    tc_pow = tcase_create("s21_pow_test");

    tcase_add_test(tc_pow, s21_pow_test_1);
    tcase_add_test(tc_pow, s21_pow_test_2);
    tcase_add_test(tc_pow, s21_pow_test_3);
    tcase_add_test(tc_pow, s21_pow_test_4);
    tcase_add_test(tc_pow, s21_pow_test_5);
    tcase_add_test(tc_pow, s21_pow_test_6);
    tcase_add_test(tc_pow, s21_pow_test_7);
    tcase_add_test(tc_pow, s21_pow_test_8);
    tcase_add_loop_test(tc_pow, s21_pow_test_9, 0, 6);
    tcase_add_loop_test(tc_pow, s21_pow_test_10, 0, 7);
    tcase_add_test(tc_pow, s21_pow_test_11);
    tcase_add_loop_test(tc_pow, s21_pow_test_12, 0, 6);
    tcase_add_loop_test(tc_pow, s21_pow_test_13, 0, 8);
    tcase_add_loop_test(tc_pow, s21_pow_test_14, 0, 6);
    tcase_add_loop_test(tc_pow, s21_pow_test_15, 0, 8);
    tcase_add_test(tc_pow, s21_pow_test_16);
    tcase_add_test(tc_pow, s21_pow_test_17);
    tcase_add_test(tc_pow, s21_pow_test_18);
    tcase_add_test(tc_pow, s21_pow_test_19);
    tcase_add_test(tc_pow, s21_pow_test_20);
    tcase_add_test(tc_pow, s21_pow_test_21);
    tcase_add_test(tc_pow, s21_pow_test_22);
    tcase_add_test(tc_pow, s21_pow_test_23);
    tcase_add_test(tc_pow, s21_pow_test_24);
    tcase_add_test(tc_pow, s21_pow_test_25);
    tcase_add_test(tc_pow, s21_pow_test_26);
    tcase_add_test(tc_pow, s21_pow_test_27);
    tcase_add_test(tc_pow, s21_pow_test_28);
    suite_add_tcase(s, tc_pow);

    TCase *tc_sin;
    tc_sin = tcase_create("s21_sin_test");

    tcase_add_test(tc_sin, s21_sin_test_1);
    tcase_add_test(tc_sin, s21_sin_test_2);
    tcase_add_test(tc_sin, s21_sin_test_3);
    tcase_add_test(tc_sin, s21_sin_test_4);
    tcase_add_test(tc_sin, s21_sin_test_5);
    tcase_add_test(tc_sin, s21_sin_test_6);
    tcase_add_test(tc_sin, s21_sin_test_7);
    tcase_add_loop_test(tc_sin, s21_sin_test_8, -10, 10);
    tcase_add_loop_test(tc_sin, s21_sin_test_9, -10, 10);
    tcase_add_test(tc_sin, s21_sin_test_10);
    suite_add_tcase(s, tc_sin);

    TCase *tc_sqrt;
    tc_sqrt = tcase_create("s21_sqrt_test");

    tcase_add_test(tc_sqrt, s21_sqrt_test_1);
    tcase_add_test(tc_sqrt, s21_sqrt_test_2);
    tcase_add_test(tc_sqrt, s21_sqrt_test_3);
    tcase_add_test(tc_sqrt, s21_sqrt_test_4);
    tcase_add_test(tc_sqrt, s21_sqrt_test_5);
    tcase_add_test(tc_sqrt, s21_sqrt_test_6);
    tcase_add_test(tc_sqrt, s21_sqrt_test_7);
    tcase_add_test(tc_sqrt, s21_sqrt_test_8);
    tcase_add_test(tc_sqrt, s21_sqrt_test_9);
    tcase_add_test(tc_sqrt, s21_sqrt_test_10);
    tcase_add_test(tc_sqrt, s21_sqrt_test_11);
    tcase_add_test(tc_sqrt, s21_sqrt_test_12);
    tcase_add_test(tc_sqrt, s21_sqrt_test_13);
    suite_add_tcase(s, tc_sqrt);

    TCase *tc_tan;
    tc_tan = tcase_create("s21_tan_test");

    tcase_add_test(tc_tan, s21_tan_test_1);
    tcase_add_test(tc_tan, s21_tan_test_2);
    tcase_add_test(tc_tan, s21_tan_test_3);
    tcase_add_test(tc_tan, s21_tan_test_4);
    tcase_add_test(tc_tan, s21_tan_test_5);
    tcase_add_test(tc_tan, s21_tan_test_6);
    tcase_add_test(tc_tan, s21_tan_test_7);
    tcase_add_test(tc_tan, s21_tan_test_8);
    tcase_add_test(tc_tan, s21_tan_test_9);
    tcase_add_test(tc_tan, s21_tan_test_10);
    tcase_add_test(tc_tan, s21_tan_test_11);
    tcase_add_test(tc_tan, s21_tan_test_12);
    tcase_add_test(tc_tan, s21_tan_test_13);
    tcase_add_test(tc_tan, s21_tan_test_14);
    tcase_add_test(tc_tan, s21_tan_test_15);
    tcase_add_loop_test(tc_tan, s21_tan_test_16, -10, 10);
    suite_add_tcase(s, tc_tan);

    TCase *tc_atan;
    tc_atan = tcase_create("s21_atan_test");

    tcase_add_test(tc_atan, s21_atan_test_1);
    tcase_add_test(tc_atan, s21_atan_test_2);
    tcase_add_test(tc_atan, s21_atan_test_3);
    tcase_add_test(tc_atan, s21_atan_test_4);
    tcase_add_test(tc_atan, s21_atan_test_5);
    tcase_add_test(tc_atan, s21_atan_test_6);
    tcase_add_test(tc_atan, s21_atan_test_7);
    tcase_add_test(tc_atan, s21_atan_test_8);
    tcase_add_test(tc_atan, s21_atan_test_9);
    tcase_add_test(tc_atan, s21_atan_test_10);
    tcase_add_test(tc_atan, s21_atan_test_11);
    suite_add_tcase(s, tc_atan);

    return s;
}

int main(void) {
    int no_failed = 0;
    Suite *s;
    SRunner *runner;

    s = s21_math_suite();
    runner = srunner_create(s);

    srunner_run_all(runner, CK_NORMAL);
    no_failed = srunner_ntests_failed(runner);
    srunner_free(runner);
    return(no_failed == 0) ? 0 : -1;
}

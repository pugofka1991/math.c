CC = gcc
CFLAGC = -Wall -Werror -Wextra -c -g -std=c11
LDFLAGS := -lcheck -fprofile-arcs
SOURCES := s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c s21_math_test.c
GCOVFLAGS := --coverage
OBJECTS := $(SOURCES:.c=.o)

all: test s21_math.a gcov_report

.c.o: 
	$(CC) $(CFLAGC) $< -o $@

s21_math.a: $(SOURCES)
	$(CC) $(CFLAGC) s21_abs.c s21_acos.c s21_asin.c s21_atan.c s21_ceil.c s21_cos.c s21_exp.c s21_fabs.c s21_floor.c s21_fmod.c s21_log.c s21_pow.c s21_sin.c s21_sqrt.c s21_tan.c
	ar rcs s21_math.a s21_acos.o s21_abs.o s21_asin.o s21_atan.o s21_ceil.o s21_cos.o s21_exp.o s21_fabs.o s21_floor.o s21_fmod.o s21_log.o s21_pow.o s21_sin.o s21_sqrt.o s21_tan.o
	ranlib s21_math.a
	
test: 
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_abs.c -o s21_abs.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_acos.c -o s21_acos.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_asin.c -o s21_asin.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_atan.c -o s21_atan.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_ceil.c -o s21_ceil.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_cos.c -o s21_cos.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_exp.c -o s21_exp.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_fabs.c -o s21_fabs.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_floor.c -o s21_floor.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_fmod.c -o s21_fmod.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_log.c -o s21_log.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_pow.c -o s21_pow.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_sin.c -o s21_sin.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_sqrt.c -o s21_sqrt.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_tan.c -o s21_tan.o
	$(CC) $(CFLAGC) $(GCOVFLAGS) s21_math_test.c -o s21_math_test.o
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
	./$@

gcov_report:
	gcovr --html-details report.html

style:
	cp ../materials/linters/CPPLINT.cfg CPPLINT.cfg
	python3 ../materials/linters/cpplint.py --extension=c *.c *.h

leaks:
	leaks -atExit -- ./test

check:
	cppcheck --enable=all --suppress=missingIncludeSystem *.c

rebuild: clean all

clean:
	rm -rf *.o test s21_math.a
	rm -rf *.c.gcov
	rm -rf *.gcno
	rm -rf *.gcda
	rm -rf *.css
	rm -rf *.functions.html
	rm -rf *.html
	rm -rf *.gcov
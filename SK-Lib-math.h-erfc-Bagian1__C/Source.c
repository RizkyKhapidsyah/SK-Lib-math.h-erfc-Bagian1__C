#include <stdio.h>      /* printf */
#include <math.h>       /* erfc */
#include <conio.h>

int main() {
	double x, hasil;
	x = 1.0;
	hasil = erfc(x);
	printf("erfc(%f) = %f\n", x, hasil);
	_getch();
	return 0;
}
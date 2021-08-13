#include<stdio.h>
int x=0, y=0, z=0;
int main() {
	int a, b, c;
	
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b && a < c)
		x = a;
	else if((a>b && a<c) || (a>c && a<b) )
		y = a;
	else if (a > b && a > c)
		z = a;

	if (b < a && b < c)
		x = b;
	else if ((b > a && b < c) || (b > c && b < a))
		y = b;
	else if (b > a && b > c)
		z = b;

	if (c < a && c < b)
		x = c;
	else if ((c > a && c < b) || (c > b && c < a))
		y = c;
	else if (c > a && c > b)
		z = c;

	if ((a == b && a < c) || (a == c && a < b)) {
		x = a;
		y = a;
	}
	else if ((a == b && a > c) || (a == c && a > b)) {
		z = a;
		y = a;
	}
	else if (b == c && b < a) {
		x = b;
		y = b;
	}
	else if (b == c && b > a) {
		z = b;
		y = b;
	}
	else if (a == b && a == c) {
	x = a;
	y = a;
	z = a;
	}
	printf("%d %d %d", x, y, z);
}
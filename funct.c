#include <stdio.h>

int power(int m, int n);

/*test power function*/
int main()
{
	int i;

	for (i =0; i < 10; ++i)
		printf("%d%d%d\n", i, power(2,i), power(-3,i));
	return 0;
}

/* power: raise base to the nth power */
int power(int base, int n)
	{
	 int i, p;
	 for (i = 1; i <= n; ++i)
	 	p = p * base;

	return p;
	
	}

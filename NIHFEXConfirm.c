#include <stdio.h>

int main()
{
    /* NIHFEX CONFIRMATORY TEST 
    (-6, 4) :: 10 = 1 + 0 = 1 ~ 49
    (48, 60) :: 12 = 1 + 2 = 3 ~ 54
    1 = 5
    3 = 7
    -49 = 7
    -54 = 5
    
    Note: Page 9
    */

	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;

	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
	char c = getchar();
	return 0;
}

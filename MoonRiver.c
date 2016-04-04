#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fff[512];
	char *h = "Enter text: ";
	int matrix[9][9] = {
		{37,78,29,70,21,62,13,54,5},
		{6,38,79,30,71,22,63,14,46},
		{47,7,39,80,31,72,23,55,15},
		{16,48,8,40,81,32,64,24,56},
		{57,17,49,9,41,73,33,65,25},
		{26,58,18,50,1,42,74,34,66},
		{67,27,59,10,51,2,43,75,35},
		{36,68,19,60,11,52,3,44,76},
		{77,28,69,20,61,12,53,4,45}
	};
	int hh = 0;
	printf("%s", h);
	gets_s(fff,sizeof(fff));
	int k = strlen(fff);
	for (int u = 0; u < k; ++u)
	{
		hh += (int) fff[u];
	}
	srand(((4*3+13)^46)*hh);
	int buff;
	int total = 0;
	for (int i = 0; i < 9; ++i)
	{
		for (int y = 0; y < 9; ++y)
		{
			buff = matrix[i][y] - matrix[rand() % 9][rand() % 9];
			total += buff;
			
		}
	}
	printf("%d", total);
	char c = getchar();
	return 0;
}

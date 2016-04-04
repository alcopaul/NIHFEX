#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char fff[512];
	char *h = "Enter text: ";
	int matrix[7][7] = {
		{22,47,16,41,10,35,4},
		{5,23,48,17,42,11,29},
		{30,6,24,49,18,36,12},
		{13,31,7,25,43,19,37},
		{38,14,32,1,26,44,20},
		{21,39,8,33,2,27,45},
		{46,15,40,9,34,3,28}
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
	for (int i = 0; i < 7; ++i)
	{
		for (int y = 0; y < 7; ++y)
		{
			buff = matrix[i][y] - matrix[rand() % 7][rand() % 7];
			total += buff;
			
		}
	}
	printf("%d", total);
	char c = getchar();
	return 0;
}

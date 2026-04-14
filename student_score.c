#include <stdio.h>

int main(void)
{
	int score[10];

	for (int i = 0; i < 10; i++)
	{
		printf("student %d : ", i);
	   	scanf("%d", &score[i]);
	}
	
	printf("--result--\n");
	

	for (int i = 0; i < 10; i++)
	{	
		int order = 1;
		for (int j = 0; j < 10; j++)
		{
			if (score[i] < score[j])
				order++;
		}
		printf("student %d : %d - %d\n", i, score[i], order);
	}
	return 0;
}

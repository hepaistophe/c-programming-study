#include <stdio.h>

int main(void)
{
	int n[10];
	for (int i = 0; i < 10; i++)
	{
		printf("%d 번 학생: ", i);
		scanf("%d", &n[i]);
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 9; j > i; j--)
		{
			if (n[i] < n[j])
			{
				int tmp = n[i];
				n[i] = n[j];
				n[j] = tmp;
			}
		}
	}

	printf("성적순: ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", n[i]);
	}
	return 0;
}

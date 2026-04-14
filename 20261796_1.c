#include <stdio.h>

int main (void)
{
	int num;

	printf("1. 이진수 변환기");
	printf("	2. 이진수 덧셈기");
	printf("	3. 이진수 뺄셈기");
	printf("\n번호를 선택하세요: ");
	scanf("%d", &num);

	if (num == 1)
	{
		int bi, dec = 0, sqr2 = 1;
		printf("8비트 이진수를 입력하세요: ");
		scanf("%d", &bi);

		for (int i = 0; i < 8; i++)
		{
			int bit = bi % 10;
			if (bit == 1)
			{
				if (i == 7)
				{
					dec = dec - sqr2;
				}
				else
				{
					dec = dec + sqr2;
				}
			}

			bi = bi/10;
			sqr2 = sqr2 * 2;
		}
		printf("십진수로 %d 입니다.", dec);
	}

	if (num == 2)
	{
		int bi1, bi2;
		int decResul = 0;
		int biResul = 0;
		int twoSqr = 1;
		int dec = 1;
		int round = 0;
		printf("첫 번째 8비트 이진수를 입력하세요: ");
		scanf("%d", &bi1);
		printf("두 번째 8비트 이진수를 입력하세요: ");
		scanf("%d", &bi2);

		for (int i = 0; i < 8; i++)
		{
			int bit1 = bi1 % 10;
			int bit2 = bi2 % 10;
			int currentBit = 0;
			int sum = bit1 + bit2 + round;
		
			if (sum == 0)
			{
				currentBit = 0;
				round = 0;
			}
			
			else if (sum == 1)
			{
				currentBit = 1;
				round = 0;
			}
			else if (sum == 2)
			{
				currentBit = 0;
				round = 1;
			}
			else if (sum == 3)
			{
				currentBit = 1;
				round = 1;
			}
		
			biResul = biResul + currentBit * dec;
			if (currentBit == 1)
			{
				if (i == 7)
					decResul = decResul - twoSqr;
				else
					decResul = decResul + twoSqr;
			}

			dec = dec * 10;
			twoSqr = twoSqr * 2;
			bi1 = bi1 / 10;
			bi2 = bi2 / 10;
		}


		printf("결과는 이진수로 %08d 이고, 십진수로 %d 입니다.\n", biResul, decResul);
	}
	
	if (num == 3)
	{
		int Bi1, Bi2;
		int biResult = 0;
		int decResult = 0;
		int Sqrtwo = 1;
		int Dec = 1;
		int borrow = 0;

		printf("첫 번째  8비트 이진수를 입력하세요: ");
		scanf("%d", &Bi1);
		printf("두 번째 8비트 이진수를 입력하세요: ");
		scanf("%d", &Bi2);

		for (int i = 0; i < 8; i++)
		{
			int Bit1 = Bi1 % 10;
			int Bit2 = Bi2 % 10;
			int bitCurrent = 0;

			int sub = Bit2 + borrow;

			if (Bit1 >= sub)
			{
				bitCurrent = Bit1 - sub;
				borrow = 0;
			}
			else
			{
				bitCurrent = Bit1 + 2 - sub;
				borrow = 1;
			}

			biResult = biResult + bitCurrent * Dec;

			if (bitCurrent == 1)
			{
				if  (i == 7)
					decResult = decResult - Sqrtwo;
				else
					decResult = decResult + Sqrtwo;
			}

			Dec = Dec * 10;
			Sqrtwo = Sqrtwo * 2;
			Bi1 = Bi1 / 10;
			Bi2 = Bi2 / 10;
		}
		printf("결과는 이진수로 %08d 이고, 십진수로 %d 입니다.", biResult, decResult);
	}

	return 0;
}

#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d%d%d", &a, &b, &c);
	d = a + b + c;
	if (d >= 80)
	{
		printf("A");
	}
	else if (d >= 75 && d < 80)
	{
		printf("B+");
	}
	else if (d >= 70 && d < 75)
	{
		printf("B");
	}
	else if (d >= 65 && d < 70)
	{
		printf("C+");
	}
	else if (d >= 60 && d < 65)
	{
		printf("C");
	}
	else if (d >= 55 && d < 60)
	{
		printf("D+");
	}
	else if (d >= 50 && d < 55)
	{
		printf("D");
	}
	else
	{
		printf("F");
	}
	return 0;
}
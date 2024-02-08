int math(int a, int i)
{
	int count = 10;
	int h = 0;
	for (h = 0; h < i - 2; h++)
	{
		count = 10 * count;

	}
	if (i == 1)
		return a;
	else
		return a * count + math(a, i - 1);
}
#include<stdio.h>
int main()
{  
	int h = 0;
	int a = 0;
	int b = 0;
	scanf_s("%d%d", &a, &b);
	int i = 1;
	for (i = 1; i <= b; i++)
	{
		h=math(a,i)+h;
	}
	printf("%d", h);
	return 0;
}
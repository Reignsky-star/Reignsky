#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int odd1[100], even1[100];
	int odd_number=0, even_number=0;
	int n1, n2, i1, j1,i2 ,j2,n;
	int temp1 = 0, temp2 = 0;
	n1=n2 = 0;
	int a,b;
	float odd_add,even_add;
	odd_add = even_add = 0;
	printf("请输入一些数字,输入0表示停止输入\n");
	while (scanf("%d", &n) == 1)
	{
		if (n==0)
			break;
		if (n % 2 == 1)
		{
			
			odd_number++;
			odd_add += n;
			odd1[n1] = n;
			n1++;
		}
		else
		{
			even_number++;
			even_add += n;
			even1[n2] = n;
			n2++;
		}
	}
	for (i1 = 0; i1 < n1 - 1; i1++)
	{
		for (j1 = 0; j1 < n1 - 1-i1; j1++)
		{
			if (odd1[j1] > odd1[j1 + 1])
			{
				temp1 = odd1[j1];
				odd1[j1] = odd1[j1 + 1];
				odd1[j1 + 1] = temp1;
			}
		
	    }
		

	}
	for (i2 = 0; i2< n2 - 1; i2++)
	{
		for (j2 = 0; j2< n2 - 1-i2; j2++)
		{
			if (even1[j2] > even1[j2 + 1])
			{
				temp2 = even1[j2];
				even1[j2] = even1[j2 + 1];
				even1[j2 + 1] = temp2;
			}

		}


	}
	printf("偶数是：");
	for (a = 0; a < n2; a++)
		printf("%d ", even1[a]);
	printf("奇数是：");
	for (b = 0; b <n1; b++)
		printf("%d ", odd1[b]);
	printf("\n");
	printf("你输入了%d个奇数，%d个偶数\n", odd_number, even_number);
	printf("奇数的平均值为%2.2f，偶数的平均值为%2.2f\n", odd_add / odd_number, even_add / even_number);
	return 0;
}
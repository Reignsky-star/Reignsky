#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Temperature(double n);
int main(void)
{
	
	double 华氏温度;
	printf("请输入华氏温度值：");
	while (scanf("%lf", &华氏温度) == 1)
	{
		Temperature(华氏温度);
		printf("请输入华氏温度值：");
	}
	return 0;
}
void Temperature(double n)
{
	double 开氏温度,摄氏温度;
	摄氏温度 = 5.0 / 9.0 * (n - 32.0);
	开氏温度 = n + 273.15;
	printf("摄氏温度，开氏温度\n");
	printf("%8.3lf,%8.3lf\n",摄氏温度,开氏温度);

}

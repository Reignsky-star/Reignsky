#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Temperature(double n);
int main(void)
{
	
	double �����¶�;
	printf("�����뻪���¶�ֵ��");
	while (scanf("%lf", &�����¶�) == 1)
	{
		Temperature(�����¶�);
		printf("�����뻪���¶�ֵ��");
	}
	return 0;
}
void Temperature(double n)
{
	double �����¶�,�����¶�;
	�����¶� = 5.0 / 9.0 * (n - 32.0);
	�����¶� = n + 273.15;
	printf("�����¶ȣ������¶�\n");
	printf("%8.3lf,%8.3lf\n",�����¶�,�����¶�);

}

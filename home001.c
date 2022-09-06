/*#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, t, s, p;
	printf("请输入三个数:");
	scanf_s("%lf,%lf,%lf", &a, &b, &c);
	t = abs(a - b);// 计算绝对值
	p = (a + b + c) / 2;

	if (a + b > c)//第一次判定
	{
		if (t < c)//第二次判定
		{
			s = sqrt(p * (p - a) * (p - b) * (p - c));//计算面积
			printf("构成三角形\n");
			printf("该三角形面积：%.2f:", s);

		}
		else
		{
			printf("不构成三角形");
		}

	}
	else printf("不构成三角形");
}*/
	
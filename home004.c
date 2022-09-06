#include<stdio.h>
int main()
{
	int m = 0, n = 0, w = 0;
	int t = 2;//最小质数
	printf("请输入两个整数");
	scanf_s("%d %d", &m, &n);
	w = max(m, n);//取最大
	while (t<=w)
	{
		if (m % t == 0)//取余，判断是否整除
		{
			if (n % t == 0)//取余，判断是否整除
			{
				printf("两数不互质");
				break;
			}
			else t++;//基数加一
		}
		else if (n % t == 0)
		{
			t++;
		}
		else
		{
			printf("两数互质");
			break;
		}
		if(t>w)
		{
			printf("两数互质");
			break;
		}
	 }
}
int max(int a, int b)
{
	if (a > b) return a;
    else return b;
}

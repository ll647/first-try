#include<stdio.h>
int main()
{
	int s,c;
	int n = 1;
	int i = 0;
	int z = 0;//最后数
	int m = 0;
	printf("请输入整数");
	scanf_s("%d", &s);
	i = s % 10;//取最后位
	while (s > 0)
	{ 
		s = s / 10;//去除最低位
		if (i % 2 > 0)
		{
			c = z;//存储z
			if (z > 1)
			{   
				while (z > 0)//计算z位数
				{
					z = z / 10;
					n = n * 10;//更改位数
				}
				c = c + i * n;
				z = c; 
				n = 1;//重置
			}
			else
			{
				z = z + i;//仅在第一个奇数时生效
			}
		}
		i = s % 10;//取最后位
	}
	printf("z=%d\n", z);
}
#include<stdio.h>
int main()
{
	int s,c;
	int n = 1;
	int i = 0;
	int z = 0;//�����
	int m = 0;
	printf("����������");
	scanf_s("%d", &s);
	i = s % 10;//ȡ���λ
	while (s > 0)
	{ 
		s = s / 10;//ȥ�����λ
		if (i % 2 > 0)
		{
			c = z;//�洢z
			if (z > 1)
			{   
				while (z > 0)//����zλ��
				{
					z = z / 10;
					n = n * 10;//����λ��
				}
				c = c + i * n;
				z = c; 
				n = 1;//����
			}
			else
			{
				z = z + i;//���ڵ�һ������ʱ��Ч
			}
		}
		i = s % 10;//ȡ���λ
	}
	printf("z=%d\n", z);
}
#include<stdio.h>
int main()
{
	int m = 0, n = 0, w = 0;
	int t = 2;//��С����
	printf("��������������");
	scanf_s("%d %d", &m, &n);
	w = max(m, n);//ȡ���
	while (t<=w)
	{
		if (m % t == 0)//ȡ�࣬�ж��Ƿ�����
		{
			if (n % t == 0)//ȡ�࣬�ж��Ƿ�����
			{
				printf("����������");
				break;
			}
			else t++;//������һ
		}
		else if (n % t == 0)
		{
			t++;
		}
		else
		{
			printf("��������");
			break;
		}
		if(t>w)
		{
			printf("��������");
			break;
		}
	 }
}
int max(int a, int b)
{
	if (a > b) return a;
    else return b;
}

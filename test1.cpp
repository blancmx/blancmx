#include <stdio.h>

int main()
{

	/*for (int j=1;j<=9;j++)
	{
		for (int i=1;i<=j;i++)
		{
			int c = i * j;
			printf("%d * %d = %d\t",i,j,c);
		}
		printf("\n");
	}*/
	/*printf("name\tage\tgender\thobby\n");
	printf("kunkun\t2.5\t女\t篮球\n");*/
	//找从2到i质数
	int i;	
	int countA = 0;
	printf("请输入一个正整数");
	scanf("%d",&i);
	for (int a=2;a<=i;a++)
	{
		int count = 0;
		
		for (int b=2;b<a;b++)
		{
			
			if (a%b==0)
			{
				count++;
				break;
			}
		}
			if (count==0)
			{
				countA++;
			}
	}
	
	printf("从2到%d的质数有%d个\n",i,countA);

	return 0;
}

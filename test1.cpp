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
	printf("kunkun\t2.5\tŮ\t����\n");*/
	int i;	
	int countA = 0;
	printf("������һ��������");
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
	
	printf("��2��%d��������%d��\n",i,countA);

	return 0;
}
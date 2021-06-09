#include<stdio.h>

void single(int );
void main()
{
	int i,n,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	single(n);	
}

void single(int x)
{
	int i,l;
	
	i=1;
	l=1;
	while(i<=x)
	{
		if(l!=x+1)
		{
			if(i==x)
			{
				printf("%d\n",i);
				i=1;
				l++;			
			}
			else
			{
				printf("%d",i);
				i++;
			}
		}
		else
		{
			break;
		}
	}
	getch();
}

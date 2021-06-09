#include<stdio.h>

void main()
{
	
	int i,n,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=1;
	l=1;
	while(i<=n)
	{
		if(l!=n+1)
		{
			if(i==n)
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

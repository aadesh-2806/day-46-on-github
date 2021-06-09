#include<stdio.h>

void main()
{
	
	int i,a[100],t,n,m,s,j,u,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);

	i=0;
	while(i<n)
	{
		printf("enter value%d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	i=0;
	s=0;
	while(i<n)
	{
		if(a[i]==0)
		{
			s++;
		}
		i++;
	}
	
	i=0;
	u=n-1;
	while(i<n)
	{
		if(a[i]==0 && u!=(n-s-1))
		{
			l=i;
			while(i<u)
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
				i++;
			}
			u--;
			i=l;
		}
		if(u==(n-s-1))
		{
			break;
		}
		if(a[i]!=0)
		{
			i++;
		}
	}
	
	i=0;
	while(i<n)
	{
		printf("%d ",a[i]);
		i++;
	}
	
	getch();
	
}	 		

#include<stdio.h>

float series(int);
void main()
{
	int n;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d",&n);
	
	printf("%f",series(n));
	getch();
}

float series(int x)
{
	float t,s;
	if(x>1)
	{
		s=series(x-1);
		t=x;
		return (s+1/(t*t));
	}
	else
	{
		return 1;
	}
}

#include<stdio.h>
#include<string.h>
int main()
{
	int i,k,n=0,mid,low,high,c;
	char a[20];
	printf("enter the string\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		n++;
	}
	for(i=0;i<n;i++)
	{
	low=0;
	high=127;
	mid=0;
	c=a[i];	
	for(k=0;k<7;k++)
	{
	mid=(high+low)/2;
	if(c>mid)
	{
		low=mid+1;
		printf("1");
	}	
	else if(c<=mid)
	{
		high=mid-1;
		printf("0");
	}
	else
	{
	}
	}
	}
return 0;
}

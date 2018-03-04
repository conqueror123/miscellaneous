#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int b=1,i,length=0,j,op,r,c1;
	char a[100],c;
	system("clear");
		printf("\n\n\n");
	printf("\t\t\t\t                       ######                   \n");
	printf("\t\t\t\t                      ##    ##                  \n");
	printf("\t\t\t\t                      ##    ##                  \n");
	printf("\t\t\t\t                      ##    ##                  \n");
	printf("\t\t\t\t                     ##########                 \n");
	printf("\t\t\t\t                     ###DATA###                 \n");
	printf("\t\t\t\t                     ##########                 \n");
	printf("\t\t\t\t                     ##########             \n\n\n");
	//printf("\n\n\n");
	printf("\t\t\t\t\t1:ENCRYPTING \t\t\t2:DECRYPTING\n");
	printf("\t\t\t\tHit any of the above keys to enter either of the programmes\n");
	scanf("%d",&op);
	printf("enter\n");
	gets(a);
	switch(op)
	{
		case 1:
			
	srand((unsigned)time(0));
	r=rand();
	c1=(r%100+1);
	printf("\n\n\n");
	printf("                       ######                   \n");
	printf("                      ##    ##                  \n");
	printf("                      ##    ##                  \n");
	printf("                      ##    ##                  \n");
	printf("                     ##########                 \n");
	printf("                     ###DATA###                 \n");
	printf("                     ##########                 \n");
	printf("                     ##########             \n\n\n");
	printf("############################################################\n");
	printf("############################################################\n");
	printf("############### ENCRYPTION PROGRAM 1.0 #####################\n");
	printf("############################################################\n");
	printf("############################################################\n\n");
	printf("THIS C-PROGRAMME ALLOWS YOU TO ENCRYPT YOUR DATA\n\n");
	printf("enter the string to be encrypted\n");
	if(c1%2==0)
	{
		if(c1%4==0)
		{
	        for( ; ; )
		{
			c1=getchar();
		if(c1==EOF)
		{
		printf("\tprogramme terminated\n");
		break;
		}
		printf("ig");
		if(c1>=97&&c1<=123)
		{
		c1 -= 2;putchar(c1);printf("tk");
		}
		}
		}
		else
		{
			for( ; ; )
		{
			c1=getchar();
		if(c1==EOF)
		{
		printf("\tprogramme terminated\n");
		break;
		}
		printf("dtv");
		if(c1>=97&&c1<=123)
		{
		c1 -= 3;putchar(c1);printf("hf");
		}
		}
		}
	}
	else
	{
		if(c1%3==0)
		{
		for( ; ; )
		{
			c1=getchar();
		if(c1==EOF)
		{
		printf("\tprogramme terminated\n");
		break;
		}
		printf("rfh");
		if(c1>=97&&c1<=123)
		{
		c1 -= 7;putchar(c1);printf("vj");
		}
		}
		}
		else if(c1%5==0)
		{
			for( ; ; )
		{
			c1=getchar();
		if(c1==EOF)
		{
		printf("\tprogramme terminated\n");
		break;
		}
		printf("stk");
		if(c1>=97&&c1<=123)
		{
		c1 -= 5;putchar(c1);printf("tlp");
		}
		}
		}
		else
		{
			for( ; ; )
		{
			c1=getchar();
		if(c1==EOF)
		{
		printf("\tprogramme terminated\n");
		break;
		}
		if(c1>=97&&c1<=123)
		{
		c1 -= 4;printf("q");putchar(c1);printf("wnm");
		}
		}
		}
	}
	return 0;
	break;
	case 2:

	//gets(a);
		printf("\n\n\n");
	printf("                       ######                   \n");
	printf("                      ##    ##                  \n");
	printf("                      ##    ##                  \n");
	printf("                            ##                  \n");
	printf("                     ##########                 \n");
	printf("                     ###DATA###                 \n");
	printf("                     ##########                 \n");
	printf("                     ##########             \n\n\n");
	printf("############################################################\n");
	printf("############################################################\n");
	printf("############### DECRYPTION PROGRAM 1.0 #####################\n");
	printf("############################################################\n");
	printf("############################################################\n\n");
	printf("THIS C-PROGRAMME ALLOWS YOU TO DECRYPT YOUR DATA\n\n");
	printf("enter the encrypted string\n");
	//gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		length++;
	}
	if(((a[0]=='q')&&(a[2]=='w'))&&((a[3]=='n')&&(a[4]=='m')))
	{
		i=1;
	length=length/5;
	for(j=0;j<length;j++)
	{
	c=a[i];
	c=c+4;
	printf("%c",c);
	i=i+5;
	}
	}
	else if(((a[0]=='s')&&(a[1]=='t'))&&((a[2]=='k')&&(a[4]=='t')))
	{
		i=3;
		length=length/7;
	for(j=0;j<length;j++)
	{
		c=a[i];
		c=c+5;
		printf("%c",c);
		i=i+7;
	}
	}
	else if(((a[0]=='r')&&(a[1]=='f'))&&((a[2]=='h')&&(a[4]=='v')))
	{
		i=3;
			length=length/6;
		for(j=0;j<length;j++)
		{
			c=a[i];
			c=c+7;
			printf("%c",c);
			i=i+6;
		}
	}
	else if(((a[0]=='d')&&(a[1]=='t'))&&((a[2]=='v')&&(a[4]=='h')))
	{
		i=3;
			length=length/6;
		for(j=0;j<length;j++)
		{
			c=a[i];
			c=c+3;
			printf("%c",c);
			i=i+6;
		}
	}
	else if(((a[0]=='i')&&(a[1]=='g'))&&((a[3]=='t')&&(a[4]=='k')))
	{
	i=2;
	length=length/5;
	for(j=0;j<length;j++)
	{
		c=a[i];
		c=c+2;
		printf("%c",c);
		i=i+5;
	}
	}
	else
	{
		printf("enter the correct encrypted data\n");
	}
return 0;
}

}	

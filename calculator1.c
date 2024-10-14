#include<stdio.h>
void main()
{
	float num1,num2;
	char op;
	printf("ENTER THE VALUE 1:");
	scanf("%f",&num1);
	printf("\n ENTER THE VALUE 2:");
	scanf("%f",&num2);
	printf("\ ENTER THE OPERATOR:");
	scanf("\n %c",&op);
	if (op=='+')
	{
		printf("\n %f",num1+num2);
	}
	else if(op=='-')
	{
		printf("\n %f",num1-num2);
	}
	else if(op=='*')
	{
		printf("\n %.3f",num1*num2);
	}
	else if(op=='/')
	{
		printf("\n %f",num1/num2);
	}
	else
	{
		printf("\n %cINVALID OPERATOR");
	}
	
}

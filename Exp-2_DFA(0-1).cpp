#include<stdio.h>
#include<string.h>
int main()
{  
	char l[100];
	int d,flag=0,i;
	printf("Enter the string: ");
	scanf("%s",&l);
	d=strlen(l);
	for(i=0;i<d;i++)
	{
		if(l[i]!='0'&&l[i]!='1')
			flag=1;
	}
	if(flag==1)
	{
		printf("\nInvalid string");
	}
	else
	{
		printf("\nvalid string");
		if(l[0]=='0'&&l[d-1]=='1')
			printf("\nstring is accepted");
		else
			printf("\nstring is not accepted");
	}
	return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{  
	char l[100];
	int d,flag=0,i,sim=0,a,b;
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
		a=0;
		b=d-1;
		while(a<d/2)
		{
			if(l[a]!=l[b])
				sim=1;
			a=a+1;
			b=b-1;
		}
		if(sim==0)
			printf("\nstring is accepted");
		else
			printf("\nstring is not accepted");
	}
	return 0;
}

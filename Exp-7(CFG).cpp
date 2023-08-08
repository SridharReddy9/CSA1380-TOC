#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int i,len,flag=0,sim=0;
	printf("Enter any string:");
	scanf("%s",&st);
	len=strlen(st);
	for(i=0;i<len;i++)
	{
		if(st[i]!='0'&&st[i]!='1')
			flag=1;
	}
	if(flag==1)
	{
		printf("\nInvalid string");
	}
	else
	{
		printf("\nValid string");
		for(i=0;i<len;i++)
		{
			if(st[i]=='1'&&st[i+1]=='0'&&st[i+2]=='1')
				sim=1;
		}
		if(sim==1)
			printf("\nString is Accepted");
		else
			printf("\nString is not Accepted");
	}
}

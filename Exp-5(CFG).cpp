#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int i,l,flag=0,sim=0,a,b;
	printf("Enter any string:");
	scanf("%s",&st);
	l=strlen(st);
	for(i=0;i<l;i++)
	{
		if(st[i]!='0'&&st[i]!='1')
			flag=1;
	}
	if(flag==1)
	{
		printf("\nInvalid input");
	}
	else
	{
		printf("\nValid input");
		a=0;
		b=l-1;
		while(a<l/2)
		{
			if(st[a]!=st[b])
				sim=1;
			a++;
			b--;
		}
		if(sim==0)
		{
			if(st[0]=='0'&&st[l-1]=='0')
			printf("\nString is Accepted");
		else
			printf("\nString is not Accepted");
		}
	}
}

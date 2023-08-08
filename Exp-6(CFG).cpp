#include<stdio.h>
#include<string.h>
int main()
{
	char st[100];
	int len,i,flag=0,sim=0,a,b;
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
		printf("\nInvalid input");
	}
	else
	{
		printf("\nValid input");
		if(len%2!=0)
			printf("\nLength should be even (no.of 0's equal to no.of 1's)");
		else
		{
			a=0;
			b=len-1;
			while(a<len/2)
			{
				if(st[a]!='0' || st[b]!='1')
					sim=1;
				a++;
				b--;
			}
			if(sim==0)
				printf("\nString is Accepted");
			else
				printf("\nString is not Accepted");
		}
	}
	return 0;
}

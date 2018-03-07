#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int k,i=0;
	
	scanf("%s",str);
	scanf("%d",&k);
	while(i<k)
	{
		printf("%s\n",str);
		i++;
	}
	return 0;
}

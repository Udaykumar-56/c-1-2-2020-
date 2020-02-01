#include<stdio.h>
int main()
{
	char str[1000];
	int i,j;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0',i++)
	{
		l++;
		if(str[i]=='')
		{
			for(j=i-1;j>=0;j--)
			{
				if(str[j]!='')
				printf("%c",str[j]);
				else
				break;
			}
		}
	}
}

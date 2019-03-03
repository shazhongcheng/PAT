#include  <stdio.h>


int main()
{
	char a[81][81];
	int i=0,j=0;
	char c;
	do
	{
		scanf("%s",a[i++]);
	}while((c=getchar())!='\n');
	for(j=i-1;j>=0;j--)
	{
		printf("%s ",a[j]);
	}
	printf("\b"); 
	return 0;
 } 
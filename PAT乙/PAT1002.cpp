#include <stdio.h>
#include <string.h>


int main()
{
	char ch,sh[10][5];
	int sum=0,n=0;
	while((ch=getchar())!='\n')
	sum+=ch-48;
	while(sum){
		switch(sum%10)
		{
			case 0:strcpy(sh[n++],"ling");break;
			case 1:strcpy(sh[n++],"yi");break;
			case 2:strcpy(sh[n++],"er");break;
			case 3:strcpy(sh[n++],"san");break;
			case 4:strcpy(sh[n++],"si");break;
			case 5:strcpy(sh[n++],"wu");break;
			case 6:strcpy(sh[n++],"liu");break;
			case 7:strcpy(sh[n++],"qi");break;
			case 8:strcpy(sh[n++],"ba");break;
			case 9:strcpy(sh[n++],"jiu");break;
			
		}
		sum/=10;
	}
	n--;
	printf("%s",sh[n--]);
	while(n>=0)
	printf(" %s",sh[n--]);
	return 0;
}

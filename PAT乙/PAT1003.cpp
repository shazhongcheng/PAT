#include <stdio.h>
#include <string.h>
int main()
{
    char c[100];
    int i,j,n;
    int count_P,count_A,count_T,pos_P,pos_T;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(c);
        count_P = 0;
        count_A = 0;
        count_T = 0; 
        pos_P = 0;
        pos_T = 0;
        for(j=0;j<strlen(c);j++)
        {
            if(c[j]=='P')
            {
          count_P++;
                pos_P = j;
            }
            if(c[j]=='A')
                count_A++;
            if(c[j]=='T')
            {
                count_T++;
                pos_T = j;
            }
        }
        if(count_P+count_A+count_T != strlen(c) || pos_T-pos_P<=1 || count_P>1 || count_T>1 || pos_P*(pos_T-pos_P-1)!=strlen(c)-pos_T-1)
            printf("NO\n");
        else
            printf("YES\n");
    }
} 

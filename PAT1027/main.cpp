//233
int main()
{
    int n,i,j,t,re,a=-1,temp=-1;
    char c;
    scanf("%d %c",&n,&c);
    while(temp<=n)
    {
        re = n-temp;
        a+=2;
        temp+=2*a;
    }
    a-=2;
    t=(a-1)/2;
    for(i=0;i<a;i++)
    {
        for(j=0;j<t-abs(i-t);j++)
            printf(" ");
        for(j=0;j<abs(i-t)*2+1;j++)
            printf("%c",c);
        printf("\n");
    }
    printf("%d\n",re);
    system("pause");
    return 0;
}

#include <stdio.h>

int main(void)
{
    char ch;
    while((ch=getchar())!=0){
        switch(ch){
            default:
                printf("%c",ch);
        }
    }
    return 0;
}

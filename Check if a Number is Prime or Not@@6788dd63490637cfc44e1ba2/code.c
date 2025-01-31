#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a==0)&&(a==1)&&(a%2==0)&&(a%%3==0)&&(a==4)&&(a==5)&&(a==6)&&(a==7)&&(a==8)&&(a==9)){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
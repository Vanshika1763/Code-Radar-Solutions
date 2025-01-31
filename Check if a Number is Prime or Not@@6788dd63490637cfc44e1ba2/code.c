#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a==0)&&(a==1)&&(a%2==0)&&(a%3==0)&&(a%4==0)&&(a%5==0)&&(a%6==0)&&(a%7==0)&&(a%8==0)&&(a%9==0)){
        printf("Not Prime");
    }
    else if(a%4==0){
        printf(" Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
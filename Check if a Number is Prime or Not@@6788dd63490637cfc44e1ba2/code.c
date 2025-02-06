#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if((a==0)&&(a==1)){
        printf("Not Prime");
    }
    else if(a%4==0){
        printf("Not Prime");
    }
    // else if(a%6==0){
    //     printf("Not Prime");
    // }
    // else if(a%8==0){
    //     printf("Not Prime");
    //}
    else if(a%9==0){
        printf("Not Prime");
    }
    else{
        printf("Prime");
    }
    return 0;
}
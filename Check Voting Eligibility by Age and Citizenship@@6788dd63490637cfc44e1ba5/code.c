#include <stdio.h>
int main()
{
    int age,ctz;
    scanf("%d %d",&age,&ctz);
    if(age>=18&&ctz==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
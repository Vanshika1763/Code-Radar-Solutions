#include <stdio.h>
int main()
{
    int a,b;
    char oper;
    scanf("%d %d",&a,&b);
    scanf("%*c");
    scanf("%c",&oper);
    if(oper =='+'){
        printf("%d",a+b);
    }
    else if(oper =='-'){
        printf("%d",a-b);
    }
    else if(oper =='*'){
        printf("%d",a*b);
    }
    else if(oper =='/'){
        if(b==0){
            printf("error");
        }
        else{
            printf("%d",a/b);
        }
    }
    else{
        printf("error");
    }
    return 0;
}

    
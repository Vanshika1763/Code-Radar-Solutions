#include <stdio.h>
int main()
{
    int a,b,add,sub,mul,div;
    char oper;
    scanf("%d %d",&a,&b);
    scanf("%c",oper);
    if(oper==+){
        add=a+b;
        printf("%d",add);
    }
    else if(oper==-){
        sub=a-b;
        printf("%d",sub);
    }
    else if(oper==*){
        mul=a*b;
        printf("%d",mul);
    }
    else if(oper==/){
        div=a/b;
        printf("%d",div);
    }
    else{
        printf("error");
    }
    return 0;
}
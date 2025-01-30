#include<studio.h>
int main()
{
    int cp,sp;
    scanf("%d %d",&a,&b);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}
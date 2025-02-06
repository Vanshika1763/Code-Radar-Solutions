#include <stdio.h>
int main()
{
    int i=1;
    int N;
    scanf("%d",&N);
    while(i==1){
        while(i>=N){
            printf("*");
            i++;
        }
        printf("\n");
        N++;
    }
    return 0;
}
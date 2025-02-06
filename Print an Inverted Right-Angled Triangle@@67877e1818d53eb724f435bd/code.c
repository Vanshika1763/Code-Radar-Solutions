#include <stdio.h>
int main()
{
    int i=1;
    int N;
    scanf("%d",&N);
    while(i<=N){
        int j=1;
        while(i>=j){
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
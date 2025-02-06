#include <stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int i=N;
    while(i>=1){
        int j=1;
        while(j>=i){
            printf("*");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
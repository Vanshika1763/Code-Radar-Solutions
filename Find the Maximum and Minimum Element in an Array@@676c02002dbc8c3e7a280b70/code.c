#include<stdio.h>
int main()
{
    int i,n,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[0];
        }
        if(arr[i]<min){
            min=arr[0];
        }
    }
    printf("%d %d",min,max);
    return 0;
}
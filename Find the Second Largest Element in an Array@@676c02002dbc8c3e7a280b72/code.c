#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[n]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            scanf("%d",&arr[i]);
        }
        else{
            return -1;
        }
    }
    return 0;
}
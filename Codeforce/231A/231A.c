#include<stdio.h>
#include<string.h>

int main()
{
    int n,j=0,count=0;
    scanf("%d",&n);
    int arr[n][3];

    for(int i=0; i<n; i++){
        scanf("%d %d %d",&arr[i][j],&arr[i][j+1],&arr[i][j+2]);
        if(arr[i][j]+arr[i][j+1]==2 || arr[i][j+1]+arr[i][j+2]==2 || arr[i][j+2]+arr[i][j]==2){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}

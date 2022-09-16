#include<stdio.h>

int main()
{
    int n,k,count=0,count1=0;
    scanf("%d %d",&n,&k);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]<=0){
            count1++;
        }
    }

    if(count1!=n){
        if(arr[k-1]<=0){
            for (int i = 0; i < n; i++)
            {
                if (arr[k-1]<arr[i])
                {
                    count++;
                }
            
            }
        }
        else{
            for (int i = 0; i < n; i++)
            {
                if (arr[k-1]<=arr[i])
                {
                    count++;
                }
            
            }
        }
    }
    
    printf("%d",count);
    

    return 0;
}
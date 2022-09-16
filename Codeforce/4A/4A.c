#include<stdio.h>
 
int main()
{
    int a,i=1,j=1,sum=0,count=0;
    scanf("%d",&a);
    j=a-1;
 
    for(i=1; i<a; ++i){
        if(i%2==0 && j%2==0){
            sum = i+j;
        }
        --j;
        if(sum == a){
            count = 1;
        }
    }
    if(count == 1){
        printf("YES");
    }
    else{
        printf("NO");
    }
    
    return 0;
}
#include<stdio.h>

int main(){
    int arr[5][5],sum=0,r,c;

    for(int i=0; i<5; i++){
        for (int j = 0; j < 5; j++){
            scanf("%d",&arr[i][j]);
            
            if(arr[i][j]== 1){
                r=2-i;
                if (r<0){
                    r=r*(-1);
                }
                c=2-j;
                if (c<0){
                    c=c*(-1);
                }
                sum=r+c;
            }
        }
    }
    printf("%d",sum);
    
    return 0;
}
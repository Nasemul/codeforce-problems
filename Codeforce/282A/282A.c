#include<stdio.h>
#include<string.h>

int main(){
    int n,x=0;
    scanf("%d",&n);
    char strr[10];

    for(int i=0; i<n; i++){

        scanf("%s",strr);
        if((strr[0]=='-' && strr[1]=='-') || (strr[1]=='-' && strr[2]=='-')){
            x--;
        }
        else if((strr[0]=='+' && strr[1]=='+') || (strr[1]=='+' && strr[2]=='+')){
            x++;
        }
    }
    printf("%d",x);
    
    return 0;
}
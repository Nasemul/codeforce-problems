#include<stdio.h>
#include<string.h>

int main()
{
    int n,a;
    scanf("%d",&n);
    char str1[n][101];

    for(int i=0; i<n; i++){
        scanf("%s",&str1[i]);
    }
    for(int i=0; i<n; i++){
        a= strlen(str1[i]);
        if(a<=10){
            printf("%s\n",str1[i]);
        }
        else{
            printf("%c",str1[i][0]);
            printf("%d",a-2);
            printf("%c\n",str1[i][a-1]);
        }
    }
    
    return 0;
}
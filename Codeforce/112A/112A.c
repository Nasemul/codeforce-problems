#include<stdio.h>
#include<string.h>

int main()
{
    int result=0, length;
    char str1[100],str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    length= strlen(str1);
    
    for(int i=0; i<length; i++){
        if(str1[i]< 97){
            str1[i]=str1[i]+32;
        }
        
        if(str2[i]< 97){
            str2[i]=str2[i]+32;
        }
        
        result= str1[i]-str2[i];
        if(result!=0){
            break;
        }
    }
    
    if(result==0){
        printf("0");
    }
    else if(result<0){
        printf("-1");
    }
    else{
        printf("1");
    }
    
    return 0;
}
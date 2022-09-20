/*
Problem - 339A
Nasemul Islam
CSE department
IST, Dhanmondi
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int length1,n=0,a;
    char str1[100],str2[100];
    scanf("%s",str1);
    length1= strlen(str1);
    n=(length1/2)+1;
    
    for(int i=0; i<n; i++){
        if(i==0){
            str2[0]=str1[0];
        }
        else if(i==1){
            str2[1]=str1[2];
        }
        else{
            str2[i]=str1[i*2];
        }
    
    }
    for(int i=0; i<n;i++){
        for(int j=i+1; j<n;j++){
            if(str2[i]<str2[j]){
                a=str2[i];
                str2[i]=str2[j];
                str2[j]=a;
            }
        }
    
    }
    
    for(int i=n-1; i>=0;--i){
        if(i>0){
            printf("%c+",str2[i]);
        }
        else{
            printf("%c",str2[i]);
        }
    }
    
    return 0;
}
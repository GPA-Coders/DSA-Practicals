#include<stdio.h>
#include<string.h>

void main(){
    char s[10];
    int len = 0;

    printf("Enter string : ");
    gets(s);

    while(s[len] != '\0'){
        len++;
    }

    printf("The length of the string is : %d", len);
}
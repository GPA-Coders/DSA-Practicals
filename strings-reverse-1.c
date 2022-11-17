#include<stdio.h>
#include<string.h>

void main(){
    char s[10];
    char n[10];
    int len = -1;

    printf("Enter string : ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++){
        len++;
    }

    int j = len;

    for(int i = 0, j = len; s[i] != '\0'; i++, j--){
        n[i] = s[j];
    }

    n[j+1] = '\0';

    printf("The reversed string is : ");
    puts(n);
}
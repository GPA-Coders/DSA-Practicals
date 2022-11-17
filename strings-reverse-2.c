#include<stdio.h>
#include<string.h>

void main(){
    char s[10];
    int len = -1;
    
    printf("Enter string : ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++){
        len++;
    }

    for(int i = 0, j = len; i <= j; i++, j--){
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }

    printf("The new string is : ");
    puts(s);
}
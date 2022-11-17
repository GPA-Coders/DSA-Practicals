#include<stdio.h>
#include<string.h>

void main(){
    char s[10];
    
    printf("Enter string : ");
    gets(s);

    for(int i = 0; s[i] != '\0'; i++){
        if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
    }

    printf("the new string is : ");
    puts(s);
}
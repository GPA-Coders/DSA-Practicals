// Take array as input from the user

#include<stdio.h>

void main(){
    int a[5];

    for(int i = 0; i < 5; i++){
        printf("Enter element at a[%d] : ", i);
        scanf("%d", &a[i]);
    }
}

#include<stdio.h>

int main(){
    char str[20];

    printf("\n Enter Your Full Name : ");
    gets(str);
    printf("\n\n Hello %s", str);

    return 0;
}
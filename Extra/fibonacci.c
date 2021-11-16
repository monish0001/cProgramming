#include<stdio.h>
void operation(int num){
    int a=0,b=1,c,i=3;
    if(num==1)
    printf("%d",a);
    if(num>=2)
    printf("%d \t %d",a,b);
    while(i<=num){
        c=a+b;
        printf("\t %d",c);
        a=b;
        b=c;
        i++;
    }
    printf("\n\n\n\n");
}
int main(){
   int num;
   printf("\n Plz Enter A Number :: ");
   scanf("%d",&num);
   operation(num);

    return 0;
}
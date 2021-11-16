#include <stdio.h>

void checkPrime(int currentNumber){
    int divisorCount=0;
    for(int j=1; j<=currentNumber; j++){
        if(currentNumber%j==0){
            divisorCount++;
        }
    }
    if(divisorCount==2){
        int lastDigit=(currentNumber%10);
        if(lastDigit==7 || lastDigit==1){
            printf("%d \n",currentNumber);
        }
    }
}
int main()
{
    int sRange,eRange;
    printf("pls enter Staring Range : ");
    scanf("%d", &sRange);
    printf("pls enter Ending Range : ");
    scanf("%d", &eRange);
    printf("\n Number Present Between the range enterd by you : \n");
    for(int i=sRange; i<=eRange; i++){
        checkPrime(i);
    }
    return 0;
}

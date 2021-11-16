/*2. Write a program in C that takes input through keyboard for two integer variables and
calculate their sum, difference, multiplication & division.
*/  

#include<stdio.h>
#include<stdlib.h>
int main(){
    float a,b,result=0;
    int choice;
    printf("\nPlease Enter the First Element : ");
    scanf("%f",&a);
     printf("\nPlease Enter the Second Element : ");
    scanf("%f",&b);
    //value of a and b are provide by user 
    while(1){
        //always true so it run againg and again 
	printf("\n1.Addition \n2.Substraction\n3.Multiplication \n4.Divison\n5.Exit \n\nPlease enter your choice : ");
	//provide a menu bar of operations 
    scanf("%d",&choice);
    //when user enter their operation type
	switch(choice){
		case 1 : {printf("\nAddition Operation Selected\n");
        result=a+b;
			 break;
        }
		case 2 :{printf("\nSubstraction Operation Selected\n");
          result=a-b;
			 break;
             }
		case 3 : {printf("\nMultiplication Operation Selected\n");
          result=a*b;
			 break;
        }
		case 4 :{printf("\nDivison Operation Selected\n");
          result=a/b;
			 break;
        }
        case 5:exit(0);//exit case
		default :{ printf("\n\n Ivalid Choice !!!!!!!!\n\n");
         break;
        }
        //if user enter any other number that will not given in options it will  be wrong choice 
        

	}
    printf("Final Result = %f \n\n\n",result);
    //final result will be display here
    }
    return 0;
}
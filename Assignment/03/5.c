/*5. If the marks obtained by a student in five different subjects are input through the keyboard, find
out the aggregate marks and percentage marks obtained by the student. Assume maximum
marks in each subject=100.*/

#include<stdio.h>
int main(){
    float marks=0,total_marks=0;
    for (int i = 0; i < 5; i++)
    {   printf("\nPlease inter the subject marks of %d : ",i+1);
    //taking input of 5 subjects marks one by one
        scanf("%f",&marks);
        if (marks>100|| marks<0){
            /*if user enter invalid marks then if condition will be true and error message give
            and user need to enter the correct marks */ 
            printf("\nnvalid Marks!\nPlease inter marks greater than or equals to zero and less than or equals to 100!\n");
            i--;
            marks=0;
            continue; 
            
        } 
        total_marks=total_marks+marks;
        
    }
    printf("\nAggregate Marks = %f",total_marks);
    printf("\nPercentage Marks = %f\n\n",total_marks/5);
    return 0;
}

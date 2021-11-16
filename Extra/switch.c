#include<stdio.h>
int main()
{
	char grade;
	printf("Pls Enrter Your Grade : ");
	scanf("%c",&grade);
	switch(grade){
		case 'A' : printf("\n\nExecllent !!!!!!\n\n");
			 break;
		case 'B' :printf("\n\n Very Good !!! \n\n");
			 break;
		case 'C':printf("\n\n Good !!!!\n\n");
		default : printf("\n\n Ivalid Choice !!!!!!!!\n\n");			
	}
	printf("\n\nYour Grade is :::: %c ",grade);

return 0;
}

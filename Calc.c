#include <stdio.h>


#include <math.h>
#include <ctype.h>



char clear_exit(int *a , int *b, int *result);



int main(){
	
	
	
	int a=0,b=0,result;
	char choice;
	do{
	
		system("clear");
		printf("Select operation: \n\n");
		
		printf("A - SUM \nB - SUBTRACTION \nE - exit \n :" );
		scanf("%c",&choice);
		switch(toupper(choice)){
			
			
			
			case 'A':
			do{
				system("clear");
				printf("SUM: \n");
				if(choice !='N'){
				
				scanf("%d",&a);
				
				}else{
					
					printf("%d",result);
					
				}
				printf(" + ");
				scanf("%d",&b);
				result = a + b;
				printf("= %d",result);
				
				printf("\nC - CLEAR \nE - exit");
				
				choice = clear_exit(&a,&b,&result);
			
			}while(toupper(choice)!='E');
			choice = 'A';
			break;
			
			case 'B':
				do{
				system("clear");
				printf("SUB: \n");
				if(choice !='N'){
				
				scanf("%d",&a);
				
				}else{
					
					printf("%d",result);
					
				}
				printf(" - ");
				scanf("%d",&b);
				result = a - b;
				printf("= %d",result);
				
				printf("\nC - CLEAR \nE - exit");
				
				choice = clear_exit(&a,&b,&result);
			
				}while(toupper(choice)!='E');
				choice = 'B';
			break;
			
		}
		
		
		
	}while(toupper(choice) != 'E');
		
	
}


char clear_exit(int *a , int *b, int *result){
	char ch;
	printf("\n : ");
	scanf("%c",&ch);
	switch(toupper(ch)){
		
		case 'E':
			return 'E';
		break;char ch;
		
		case 'C':
			*a = 0;
			*b = 0;
			return 'D';
			
		break;
			
			
		default:
		
			*a = *result;
			return 'N';
		break;	
		
			
			
		
	}
	
	
}

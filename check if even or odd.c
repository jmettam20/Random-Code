#include <stdio.h>
#include "Print and Function.h"
#include "swap numbers without placeholder.h"
#define  main codePick //defines the jinkies function as the main function 

//VARIABLES//
int helloWorld;
int swap;
int operator;

int codePick(){
	printf("WELCOME Pick the program you would like to run");
	printf("\n1) Print Hello World");
		printf("\n2) Swap numbers");
		scanf ("%d%d",&helloWorld,&swap); 
		
		switch(operator){
			
			case '1':
			prtintf("You picked Hello World");
			jinkies();
			break;
			
				case '2':
			prtintf("You picked Swap Numbers");
			swapNumbers();
			break;
			}
		
		

return 0; 
}

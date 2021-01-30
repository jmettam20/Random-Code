#include <stdio.h>
#include "PrintandFunction.h"
#include "swapnumberswithoutplaceholder.h"
#define codePick main  //defines the jinkies function as the main function 

//VARIABLES//
int operator;

int codePick(){
	printf("WELCOME Pick the program you would like to run\n");
	printf("\n1) Print Hello World\n");
		printf("\n2) Swap numbers\n");
		scanf ("%d",&operator); 
		
		switch(operator){
			
			case '1':
			printf("You picked Hello World");
			jinkies();
			break;
			
				case '2':
			printf("You picked Swap Numbers");
			swapNumbers();
			break;

	}

return 0; 
}

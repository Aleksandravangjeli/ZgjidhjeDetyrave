#include<stdio.h>

int main(){
	int piket;
	printf("Vendosni piket nga 0 ne 100:");
	scanf("%d",& piket);
	char nota;
	switch(piket/10){
		case 10:
			printf("Nota eshte A\n");
			break;
		case 9:
		printf("Nota eshte A\n");
			break;
		case 8:
			printf("Nota eshte B\n");
			break;
		case 7:
		    printf("Nota eshte C\n");
		    break;
		case 6:
		   printf("Nota eshte D\n");
		    break;
	    case 0:
	    	printf("Nota eshte F\n");
	    	break;
	    case 1:
	    	printf("Nota eshte F");
		   	break;
	    case 2:
	    	printf("Nota eshte F");
		   	break;
		 case 3:
	    	printf("Nota eshte F");
		   	break;
	    case 4:
	    	printf("Nota eshte F");
		   	break;
	    case 5:
		   	printf("Nota eshte F");
		   	break;
		   	default:printf("Vendosni nje numer te vlefshem."); 		
	}
	return 0;
}


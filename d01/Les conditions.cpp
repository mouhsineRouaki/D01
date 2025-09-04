#include <stdio.h>

int main(){
	//Challenge 1 : Paire ou Impaire
	/*
		int n;
	    printf("Entrez un nombre : ");
	    scanf("%d", &n);
	
	    if (n % 2 == 0){
	        printf("%d est pair.\n", n);
	    }else{
	        printf("%d est impair.\n", n);
	    }
	*/
	
	
	//Challenge 2 : Voyelle ou Non
        char c;
    printf("Entrez un caractere : ");
    scanf(" %c", &c);

    switch(c) {
        case 'a':
        	printf("%c est une voyelle.\n", c);
        	break;
		case 'e': 
			printf("%c est une voyelle.\n", c);
			break;
		case 'i': 
			printf("%c est une voyelle.\n", c);
			break;
		case 'o': 
			printf("%c est une voyelle.\n", c);
			break;
		case 'u':
			printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;

}

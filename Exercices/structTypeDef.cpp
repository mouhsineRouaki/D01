#include <stdio.h>

struct{
    char nom[20];
    char prenom[20];
    float notes[3];

}typedef Etudiant ;

void getElementByIdd(int index , Etudiant etudiants[]){
    printf("le nom : %s |",etudiants[index].nom); 
    printf("le prenom : %s |",etudiants[index].prenom);
    for (int j=0; j<3; j++) {
        printf(" note[%d] = %f | ",j+1,etudiants[index].notes[j]);
    }
}

int main(){

    Etudiant e[3];
    for (int i=0; i<3; i++) {
        printf("entrez le nom : ");
        scanf("%s",e[i].nom);
        printf("entrez le nom : ");
        scanf("%s",e[i].prenom);

        for (int j=0; j<3; j++) {
            printf(" note[%d] :",j);
            scanf("%f",&e[i].notes[j]);
        }
    
    }

    for (int i=0; i<3; i++) {
        printf("nom = %s | prenom = %s",e[i].nom, e[i].prenom);
        for (int j=0; j<3; j++) {
            printf(" note[%d] = %.2f",j,e[i].notes[j]);
        }
        printf("\n");
    
    }
	printf("\npour index 1\n");
    getElementByIdd(1,e);
    return 0;

}

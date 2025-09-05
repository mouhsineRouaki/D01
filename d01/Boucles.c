#include <stdio.h>

int main(){
    // Challenge 1 : Table de Multiplication
    /*
    int nombre = 0;
    int i;
    scanf("%d",&nombre);
    for(i = 1;i<11;i++){
        printf("%d * %d = %d\n", nombre,i,i*nombre);
    }
    */
    
    
    //Challenge 2 : Factorielle d'un Nombre
    /*
    int nombre = 0;
    int i;
    int factorielle=1;
    scanf("%d",&nombre);
    for(i=nombre;i>0;i--){
        factorielle *= i;
    }
    printf("factorielle %d est  %d",nombre ,factorielle);
    */
    
    //Challenge 3 : Somme des N Nombres
    /*
    int nombre = 0;
    int i;
    int somme=0;
    scanf("%d",&nombre);
    for(i=nombre;i>0;i--){
        somme += i;
    }
    printf("somme des nombre de  %d est  %d",nombre ,somme);
    */
    
    //Challenge 4 : Affichage des N Premiers Nombres Impairs
    /*
    int nombre;
    int i;
    int nombrePlus=0;
    scanf("%d",&nombre);
    while(i < nombre){
        nombrePlus+=1;
        if(nombrePlus % 2 != 0){
            printf("%d, ",nombrePlus);
            i+=1;
        };
    }
    */
    
    
    
    //Challenge 5 : Calcul de la Puissance
    /*
    int nombre = 0;
    int i;
    int puisanse=1;
    scanf("%d",&nombre);
    for(i=1;i<nombre + 2;i++){
        puisanse *= nombre;
    }
    printf("%d^%d = %d",nombre,nombre+1,puisanse);
    */
    
    
    
    //Challenge 6 : Affichage des N Premiers Nombres Pair
    /*
    int nombre;
    int i;
    int nombrePlus=0;
    scanf("%d",&nombre);while(i < nombre){
        nombrePlus+=1;
        if(nombrePlus % 2 == 0){
            printf("%d, ",nombrePlus);
            i+=1;
        };
    }
    */
    
    
    
    //Challenge 7 : Inversion d'un Entier
    /*
    int nombre;
    int i;
    int nombreInverser;
    scanf("%d",&nombre);
    while(nombre){
        i = nombre % 10;
        nombreInverser=nombreInverser*10+i;
        nombre /= 10;
    }
    printf("%d ",nombreInverser);
    */
    
    
    
    //Challenge 8 : Affichage de la Suite de Fibonacci
    
    
    //Challenge 9 : Compteur de Chiffres
    /*
    int nombre;
    int i;
    int cmp=0;
    scanf("%d",&nombre);
    while(nombre){
        nombre /= 10;
        cmp +=1;
    }
    printf("%d ",cmp);
    */
    
    
    
    //Challenge 10 : Calcul de la Somme des N Entiers
    /*
    int nombre = 0;
    int i;
    int somme=0;
    scanf("%d",&nombre);
    for(i=nombre;i>0;i--){
        somme += i;
    }
    printf("somme de %d est  %d",nombre ,somme);
    */
    
    
    return 0;
    
}

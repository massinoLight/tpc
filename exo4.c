#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int tailleChaine(char T[]){
int i;
for(i=0;T[i]!='\0';i++);
return i;
}

int main()
{
 int taille;
char chaine[256];
printf("entrer une chaine ");
scanf("%s",chaine);
taille=tailleChaine(chaine);
printf("la chaine fait %d cractéres\n",taille);
}


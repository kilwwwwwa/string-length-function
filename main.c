#include <stdio.h>
#include <stdlib.h>
int longeur_ch(char ch[100]) {
    int i = 0;
    while (ch[i] != '\0') {
        i++;
    }
    return i;
}
int apparition(char x[],char e)
{
int nbr_apparition=0;
int i=0;
while(x[i]!='\0')
{
if(x[i]==e){
nbr_apparition++;
}
return nbr_apparition;
}
}
int main() {
    char chaine[100];
    printf("entrer votre chaine\n");
    gets(chaine);
    int longueur = longeur_ch(chaine);
    printf("La longueur de la chaine est %d\n", longueur);
//************************************************************************
char y[100];
char charcter;
printf("entrer une chaine\n");
gets(y);
printf("entrer un character\n");
scanf("%c",&charcter);
int appar=apparition(y,charcter);
printf("le nombre d'apparition de character dans votre chaine est : %d",appar);
}


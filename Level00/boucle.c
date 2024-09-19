#include <stdio.h>

/* 
voila un exemple de contenu d'une chaine de caracteres.
Le type d'une chaine de caracteres est char * ou bien char [].
Ce n'est qu'en faite une succession de char, on les surnomme string.

On peut voir que le premier caractere de la chaine suivante se trouve a l'index 0.
index :  0 1  2  3  4  5  
valeur:  H e  l  l  o \0

Pour marquer la fin d'une chaine de caractere on utilise le caractere \0.
Une string finira TOUJOURS par \0 sinon, la chaine n'est pas fermee.
*/

void ft_boucle(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0') // boucle tant que le caractere a l'index i n'est pas \0
    {
        printf("%c", str[i]); // on affiche le caractere a l'index i de la chaine str
        i++; // ici on incremente i, le ++ reviens a ecrire i = i + 1;
    }
}

int main(void)
{
    ft_boucle("Hello world\n");
}
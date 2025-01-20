#include <stdlib.h> // la fonction d'allocation mémoire malloc se trouve dans cette librairie.
#include <stdio.h>
#include <string.h>
int ft_strlen(char *str)
{
    int i = 0;

    if (!str)// on vérifie que la chaine n'est pas null sinon on retourne -1.
    {
        return (-1);
    }

    while (str[i] != '\0')
    {
        i++;
    }
    return (i); // On retourne la taille de la chaine de caractères.
}

int main(void)
{
    char *str;// on déclare une string.

    int length;

    length = ft_strlen("test"); // length contiendra la taille de la chaine de caractère "test"
    
    str = malloc(sizeof(char) * (length + 1)); 
    if (str == NULL)
    {
        return (-1);
    }
/* On alloue la mémoire avec malloc:
malloc prend en paramètre le type de ce qu'on veut allouer fois la taille que l'on souhaite.
Ici la chaine de caractère (char *) str est composée de caractères (char) on donne donc:
sizeof(char)
* (signe de fois d'une multiplication)
(length + 1) la taille de la chaine de caractère plus 1 pour le '/0' qui ferme la chaine.
Puis, on vérifie si l'allocation mémoire s'est bien passée. Si elle a raté, alors la chaine
str sera égale à NULL (pas de mémoire alloué).
*/
    str[length] = '\0';
/*On ferme la chaine de caractère avec le \0 à l'index length car le premier caractère se trouve à l'index 0 */
    strcpy(str, "test");
    printf("%s\n", str); // on l'affiche.
    free(str); // On oublie pas de libérer la mémoire alloué lorsqu'on a terminé avec la fonction free
/*TOUJOURS LIBERER LA MEMOIRE ALLOUE sinon il y aura des fuites mémoires aka LEAKS*/
    return (0);
}
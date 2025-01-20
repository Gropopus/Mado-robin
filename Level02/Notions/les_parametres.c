#include <stdio.h>

/*
On remarque que le main a ici des paramètres:
- int argc : ce paramètre est de type "int" c'est à dire que c'est un paramètre numérique.
Il s'agit du nombre de paramètres avec lequel le programme est lancé. Il sera toujours au minimum de 1
car l'ordinateur considère que le programme en lui meme, (le a.out) reprèsente un paramètre.
Exemple:
./a.out "mon premier paramètre" "mon 2iem paramètre"

ici, argc sera égale à 3.

- char **argv : C'est un tableau de chaine de caractères qui contient les paramètres que vous avez entré
en lancant le programme.
en reprenant l'exemple ci dessus, il y aura dans notre tableau de chaine de caractère:
 - argv[0] : "a.out\0"
 - argv[1] : "mon premier paramètre\0"
 - argv[2] : "mon 2iem paramètre\0"
 - argv[3] : NULL
De la meme manière que le signe \0 indique à l'ordinateur la fin d'une chaine de caractères, le NULL
indique à l'ordinateur la fin d'un tableau (int ** ou char ** par exemple).
*/
int main(int argc, char **argv)
{
    if (argc != 2)// si mon nombre d'arguement n'est pas 2 (soit a./out "quelque chose")
    {
        return (-1);// le programme quitte en retournant -1
    }
    printf("%s", argv[1]);// On affiche l'argument passé en paramètre.
    return (0);
}
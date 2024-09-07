/*
Ci-dessous, ce sont des directives de préprocesseur.
Ces lignes permettent d'ajouter des fichiers au projet, 
fichiers que l'on appelle bibliothèques ou librairies.
Grâce à ces bibliothèques, on disposera de fonctions toutes prêtes pour afficher
par exemple un message à l'écran.
*/

#include <stdio.h>
#include <stdlib.h>

/*
Ci-dessous, vous avez la fonction appelée main.
C'est par cette fonction que tous les programmes commencent.
Ici, ma fonction se contente d'afficher Hello world à l'écran.
Le contenu de la fonction est inséré entre les accolades { }
*/

int main(void)
{
  printf("Hello world\n"); // Cette instruction affiche Hello world à l'écran
  return (0);          // Le programme renvoie le nombre 0 puis s'arrête
}

/* On remarque que chaque instruction se termine par ';'. C'est grace à ce signe que
que l'ordinateur peut distinguer une instruction d'une autre. */
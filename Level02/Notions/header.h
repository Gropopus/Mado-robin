#ifndef HEADER_H // TOUJOUR EN MAJUSCULE, le . est transformer en _

/* le ifndef, define et endif permet à l'ordinateur d'éviter les inclusions infini
au moment de la compilation.*/
#define HEADER_H
/*
Un header file est un fichier .h qui vous sera très utile lorsque vous avez plusieurs fichiers c
Il permet de déclarer les fonctions utiles qui seront accessible dans tout vos fichiers
et de n'avoir qu'un seul include par fichier.

On déclare ici toute les librairies dont on aura besoin dans nos fichiers c.
*/
#include <unistd.h>
#include <stdio.h>

/*
Il n'y aura alors qu'a déclarer #include "header.h dans nos fichiers c pour avoir accès aux librairies"
*/
// dans le fichier addition.c
int ft_addition(int a, int b);
// dans le fichier exemple.c
int ft_exemple(char *str);
/*
ici on déclare les fonctions présent dans nos différent fichiers c.
On termine la déclaration par ;
On déclare ainsi les PROTOTYPES de nos fonctions. Ainsi la fonction ft_addition présent dans le fichier
addition.c sera utilisable et reconnue par l'ordinateur dans le fichier exemple.c

On compile toujours les headers avec les fichiers c.

gcc mes_fichier.c -I header.h

le flag -I signifie include pour dire au compilateur d'include tel fichier.h
*/
#endif
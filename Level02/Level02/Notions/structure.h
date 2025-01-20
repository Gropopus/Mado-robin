#ifndef STRUCTURE_H
#define STRUCTURE_H

#include <stdlib.h>
#include <stdio.h>

/*Une structure est un type de variable contenant plusieurs variables
on déclare un type de variable propre avec le mot clé typedef,
et, une structure avec le mot clé struct
on déclare toutes les variables de notre structure entre les { }
*/
typedef struct s_voiture
{
    int nbr_km;
    char *marque;
    char *proprietaire;
}              t_voiture;

#endif
#include "structure.h"

// la fonction affiche le contenu de la structure passé en paramètre.
void print_struct(t_voiture a)
{
    printf("Nombre de km: %d\n", a.nbr_km);
    printf("Marque: %s\n", a.marque);
    printf("Proprietaire: %s\n", a.proprietaire);
}

int main(int argc, char **argv)
{
    // on déclare une occurrence de la structure t_voiture appelée ma_voiture.
    t_voiture ma_voiture;

    if (argc != 3)// si le nombre de paramètre est différent de 3 (soit différent de ./a.out "Nissan" "Thomas")
    {
        return (-1);
    }
    // pour acceder à une variable de la structure on utilise le . 
    ma_voiture.nbr_km = 2000;
    ma_voiture.marque = argv[1];
    ma_voiture.proprietaire = argv[2];

    print_struct(ma_voiture);
    return (0);
}
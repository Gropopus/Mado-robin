#include <unistd.h>

/* La fonction s'appelle ft_is negative, 
   elle est de type int, elle retourne donc une valeur de type integer
   Elle prend en parametre un integer (int nb).
*/
int ft_isnegative(int nb)
{
    if (nb < 0) // si le parametre nb est plus petit que 0
    {
        return (1); // la fonction retourne la valeur 1
    }
    else if (nb > 0) // si le parametre nb est plus grand que 0
    {
        return (2) ; // la fonction retourne la valeur 2
    }
    return (0); // Si auncune condition n'est remplie (nb est egal a 0) la fonction retourne 0
}

int main(void)
{
    int nombre;
    int resultat;

    nombre = 42;
/*  ci-dessous on appel la fonction ft_isnegative, 
    on enregistre la valeur retournée par fonction à la variable resultat.
    On donne a la fonction ft_isnegative le parametre attendu : le int nombre 
*/
    resultat = ft_isnegative(nombre); 

    if (resultat == 1) // Si resultat est egale a 1
    {
        write(1, "Oui le nombre est negatif\n", 26); // on affiche
    }
    else if (resultat == 2) //Sinon si resultat est egale a 2
    {
        write(1, "Non le nombre est positif\n", 26);
    }
    else // Sinon
    {
        write(1, "Le nombre est egal a 0\n", 23);
    }
    return (0);
}
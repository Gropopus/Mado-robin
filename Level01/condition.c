# include <unistd.h> // Declaration de la librairie pour pouvoir utiliser la fonction write

/* Voici un exemple de fonction, elle possede tous les types de conditions.
   Elle est de type "void" c'est a dire qu'elle ne retourne aucune valeur.
   Elle prend en parametre un int  
*/
void ft_exemple(int n)
{
    if (n < 0) // Si le nombre est plus petit que 0
    {
        write(1, "n est negatif\n", 14);
    }
    else if (n != 0 && n < 10) // Sinon si le nombre est different de 0 et plus petit que 10
    {
        write(1, "n est plus petit que 10\n", 25);
    }
    else // Sinon
    {
        write(1, "n est plus grand que 10\n", 24); 
    }
}

/*
    Les mots cles pour reussir vos conditions:
    ==  pour verifier une egalitee
    example : if( nombre1 == nombre2)
    
    != pour verifier une difference 
    example : if (nombre1 != nombre2)

    && signifie "et"
    exemple : if (nombre1 != nombre2 && nombre1 > 10)

    || signifie "ou"
    exemple : if (nombre1 < 18 || nombre1 > 60)
*/

int main(void)
{
    int nbr;

    ft_exemple(42); // on appel la fonction ft_exemple en lui donnant le parametre 42 en dur
    nbr = 8;
    ft_exemple(nbr); /* on appel la fonction ft_exemple en lui donnant une variable du meme type 
    que le parametre attendu. */
    nbr = -2;
    ft_exemple(nbr);

    return (0);
}
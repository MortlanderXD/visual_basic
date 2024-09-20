#include <iostream>


int main() {

    //Créer un tableau d'entier de taille fixe donnée par l'utilisateur;
    std::cout<< "Donner la taille du tableau en entier : ";
    //C++ doesn't allow non-constant values for the size of an array. That's just the way it was designed.
    unsigned int taille_fixe=0;
    std::cin >> taille_fixe;
    //unsigned int tableau[taille_fixe];
    //best way is to make a function
    unsigned int tableau[taille_fixe]={};

    for (size_t i = 0; i < taille_fixe; i++)
    {
        std::cout<<tableau[i] << " ";
    }
    std::cout<<std::endl;
    
    return 0;
}
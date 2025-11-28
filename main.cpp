#include <iostream>
#include "my_function.cpp"

namespace tab_pointeur{

    void until_function(){

// tableau de 5 elements
    int tab[5] = {1,2,3,4,5};


    // cout << tab[3]<< endl;

    for(int i =0; i<5 ; i++){
        cout << *(tab+i) << endl;
    }

    cout << "------------------------" << endl;

    int *tab2 = new int[6];

    for(int i = 0; i< 6; i++){
        cin >> *(tab2+i);
    }

    for(int i = 0; i< 6; i++){
        cout << *(tab2+i) << "\t";
    }
    cout << endl;

    cout << "------------------------" << endl;

    }
}

typedef struct Personne * PPersonne;

typedef struct Personne{
    string prenom, nom;
    int age;
};

int main()
{
    // declarer le pointeur sur une personne et pointee nul part
    Personne * ptr_pers = nullptr;
    Personne p ;

    cout << "Donnez le nom : " << endl;
    cin >> p.nom;

    cout << "Donnez le prenom : " << endl;
    cin >> p.prenom;

    cout << "Donnez l'age : " << endl;
    cin >> p.age;

    //! Affichage avec la variable
    cout << "Prenom : " << p.prenom << " Nom : " << p.nom <<
        " age : " << p.age << endl;
    // pointez vers la variable personne
    ptr_pers = &p;

    //! mode d'acces
    //! nom_pointeur->nom_du_champs
    //string prenom = ptr_pers->prenom;

    //! Affichage avec le pointeur
    cout << "Prenom : " << ptr_pers->prenom << " Nom : " << ptr_pers->nom <<
        " age : " << ptr_pers->age;

    //! Allocation dynamique
    PPersonne pp = new Personne;

    cout << "Donnez le nom : " << endl;
    cin >> pp->nom;
    cout << "Donnez le prenom : " << endl;
    cin >> pp->prenom;
    cout << "Donnez l'age : " << endl;
    cin >> pp->age;

    //! Affichage avec le pointeur
    cout << "Prenom : " << pp->prenom << " Nom : " << pp->nom <<
        " age : " << pp->age;



    return 0;
}

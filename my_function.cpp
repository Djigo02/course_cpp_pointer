#include "my_function.hpp"

//!TEST

 /* cout << "Parcours avec la boucle for" << endl;
   for(int i = 0; i<5; i++){
        cout << "tab["<< i <<"] = " << tab[i] << endl;
    }
    cout << "Parcours avec la boucle while" << endl;
    int i = 0;
    while(i<5){
        cout << "tab["<< i <<"] = " << tab[i] << endl;
        i++;
    }
    */

    /*  int taille = {5};
    int tab[20] = {};

    remplirTableau(tab, taille);
    //! Affichage du tableau
    afficheTableau(tab, taille);
*/
//!END TEST


//! POINTEUR SIMPLE
    /*dans main
    int nb = {5};
    // copie de valeur
    int nbr = nb;


    cout << "nb = " << nb << endl;
    cout << "nbr = " << nbr << endl;

    nb = 6;
    int *pnb = nullptr;
    cout << "nouvelle valeur nb = " << nb << endl;

    // par reference
    pnb = &nb;

    cout << "adresse de la variable ou pointe pnb = " << pnb << endl;
    cout << "valeur de la variable ou pointe pnb = " << *pnb << endl;

    nb = 7;

    cout << "valeur de la variable ou pointe pnb = " << *pnb << endl;

    *pnb = 10;

    cout << "valeur de la variable ou pointe pnb = " << *pnb << endl;

    cout << "nouvelle valeur nb = " << nb << endl;

    int **ppnb = &pnb;
    **ppnb = 56;

    cout << "--------------------------" << endl;
    cout << "adresse de nb = " << &nb << endl;
    cout << "adresse de la valeur ou pointe pnb = " << pnb << endl;
    cout << "adresse du pointeur pnb = " << &pnb << endl;
    cout << "adresse ou pointe ppnb = " << ppnb << endl;
    cout << "valeur de la variable ou pointe ppnb = " << *ppnb << endl;

    cout << "--------------------------" << endl;
    cout << "nouvelle valeur nb = " << nb << endl;
    cout << "nouvelle valeur nb afficher avec pnb = " << *pnb << endl;
    cout << "nouvelle valeur nb afficher avec ppnb = " << **ppnb << endl;
*/

//! END


void remplirTableau(int tab[], int taille){
    for(int i = 0; i<taille;i++){
        do{
            cout << "Donnez la valeur de la cellule " << i << " : ";
            cin >> tab[i]; // 0..20
            if(tab[i]<0 || tab[i]>20){
                cout << "Le nombre doit etre compris entre 0 et 20" <<endl;
            }
        }while(tab[i]<0 || tab[i]>20);
    }
}

void afficheTableau(int tab[], int taille){
    for(int i = 0; i<taille ; i++){
        cout << "tab[" << i << "] = " << tab[i] << "\t";
    }
    cout << endl;
}





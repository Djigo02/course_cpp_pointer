#include <iostream>
#include "my_function.cpp"



int main()
{
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










    return 0;
}

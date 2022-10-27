//
// Created by Jean Loup on 18/10/2022.
//

#ifndef S7_CPP_TP1_ENTREE_H
#define S7_CPP_TP1_ENTREE_H

#include <iostream>

using namespace std;

class Entree {
    string nom;
    string numTel;
    friend class Tableau;

public:
    Entree(string nom, string numTel);

    Entree();

    void display();

    string getNom();

    string getNum();

    friend ostream& operator << (ostream& out, Entree &entree);

};


#endif //S7_CPP_TP1_ENTREE_H

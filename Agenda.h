//
// Created by jl on 26/10/22.
//

#ifndef S7_CPP_TP1_AGENDA_H
#define S7_CPP_TP1_AGENDA_H


#include "Tableau.h"

class Agenda {
    Tableau tab;
public:
    Agenda();

    Agenda(int tailleMax);

    Agenda(const Agenda &copie);

    ~Agenda();

    Agenda concat(Agenda &copie);

    void ajouter(string nom, string num);

    void supprimer(string nom, string num);

    void supprimer(string nom);

    void display();

    friend ostream &operator<<(ostream &out, Agenda &agenda);

    void operator+=(const string &nomEtNum);

    void operator+=(Agenda &a2);

    void operator-=(const string nom);

    void operator=(const Agenda &copie);

    friend Agenda operator+(Agenda &a1, Agenda &a2);

    string operator[](string mot) const;

    void operator==(Agenda &a2);

    friend bool operator/(Agenda &a,string nom);

    void operator()(string lettre);

};


#endif //S7_CPP_TP1_AGENDA_H

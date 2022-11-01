//
// Created by Jean Loup on 18/10/2022.
//
#include <iostream>

using namespace std;

#include "Agenda.h"
//ok


int main() {
    Agenda agenda1(10);
    agenda1.ajouter("Jacqueline", "33");
    agenda1.ajouter("Raoul", "128");
    agenda1.ajouter("Michel", "789");

    //affiche un Agenda avec <<
    cout<<"\n--Affichage de l'agenda 1 avec cout<<agenda1"<<endl;
    cout << agenda1;

    //on ajoute un nom + num à l'agenda avec +=
    cout<<"\n--on ajoute un nom + num a l'agenda avec += Damien 66"<<endl;
    agenda1 += "Damien 66";
    cout<<agenda1;

    //on affecte un agenda à un autre avec =
    Agenda agenda2(6);
    agenda2.ajouter("Xavier", "654654");
    agenda2.ajouter("Lamar", "999");
    agenda1 = agenda2;
    cout << "\n--Affichage de l'agenda 2" << endl << agenda2 << endl;
    cout << "\n--Affichage de agenda1 apres agenda1=agenda2" << endl << agenda1 << endl;
    cout << "\n--On supprime Xavier et on ajoute ScoobyDoo a agenda 1 et on supprime Lamar de agenda 2 et on voit"
            "que ca n'affecte pas l autre agenda donc agenda bien copie" << endl;
    agenda1.supprimer("Xavier");
    agenda2.supprimer("Lamar");
    agenda1 += "ScoobyDoo 777";
    cout << "\nagenda1:\n" << agenda1 << endl << "agenda2:\n" << agenda2 << endl;

    cout << "\n--Concatene agenda1 et agenda 2 avec : agenda3 = agenda1 + agenda2; " << endl;
    Agenda agenda3(15);
    agenda3 = agenda1 + agenda2;
    cout << agenda3;

    cout << "\n--On teste agenda1[ScoobyDoo]" << endl;
    cout << agenda1["ScoobyDoo"] << endl;
    cout << "\n--On teste agenda1[jqhsdqjsdhb] qui n'est pas dans l'agenda" << endl;
    cout << agenda1["jqhsdqjsdhb"] << endl;

    cout << "\n--On teste la concaténation de agenda 2 et agenda 3 avec +=" << endl;
    agenda3.ajouter("Robert", "1");
    agenda3.ajouter("David", "987");
    agenda3.supprimer("Xavier");
    cout << "\nagenda2:\n" << agenda2 << endl << "agenda3:\n" << agenda3 << endl;

    cout << "--Test agenda2+=agenda3 : res de la concatenation:" << endl;
    agenda2 += agenda3;
    cout << agenda2 << endl;

    cout << "\n--agenda3-=" "David" << endl;
    agenda3 -= "David";
    cout << agenda3 << endl;

    cout << "\n--Test agenda2==agenda1" << endl;
    agenda2 == agenda1;
    cout << "\n--Test agenda2==agenda2" << endl;
    agenda2 == agenda2;
    cout << "\n--Test agenda4==agenda5" << endl;
    Agenda agenda4(10);
    agenda4 += "Larissa 33";
    agenda4 += "Arnaud 974";
    Agenda agenda5(10);
    agenda5 += "Arnaud 974";
    agenda5 += "Larissa 33";
    agenda4 == agenda5;

    cout << "\n--Test agenda4/Arnaud (est dedans)" << endl;
    cout << agenda4 / "Arnaud" << endl;
    cout << "--Test agenda1/bagdad (pas de dedans)" << endl;
    cout << agenda1 / "bagdad" << endl;

    cout << "\n--Test de agenda3(S) pour un seul nom commencant par S" << endl;
    agenda3("S");
    agenda3 += "Linge 98";
    cout << "\n--Test de agenda3(L) pour plrs noms commencants par L" << endl;
    agenda3("L");
    cout << "\n--Test de agenda3(Z) pour aucun mot commencant par Z " << endl;
    agenda3("Z");


    return 0;
}


//
// Created by Jean Loup on 18/10/2022.
//
#include <iostream>

using namespace std;

#include "Entree.h"
#include "Tableau.h"
#include "Agenda.h"
//ok


int main() {
    Agenda agenda1(10);
    agenda1.ajouter("Jacqueline", "33");
    agenda1.ajouter("Raoul", "128");
    agenda1.ajouter("Michel", "789");

    //affiche un Agenda avec <<
    cout << agenda1;

    //on ajoute un nom + num à l'agenda avec +=
    agenda1 += "Damien 66";
    cout << "\nAffichage de l'agenda avec ajout via +=\n" << agenda1;

    //on affecte un agenda à un autre avec =
    Agenda agenda2(6);
    agenda2.ajouter("Xavier", "654654");
    agenda2.ajouter("Lamar", "999");
    agenda1 = agenda2;
    cout << "\nAffichage de l'agenda 2" << endl << agenda2 << endl;
    cout << "\nAffichage de agenda1 apres agenda1=agenda2" << endl << agenda1 << endl;
    cout << "\nOn supprime Xavier et on ajoute ScoobyDoo a agenda 1 et on supprime Lamar de agenda 2 et on voit"
            "que ca n'affecte pas l autre agenda donc agenda bien copie" << endl;
    agenda1.supprimer("Xavier");
    agenda2.supprimer("Lamar");
    agenda1 += "ScoobyDoo 777";
    cout << "\nagenda1:\n" << agenda1 << endl << "agenda2:\n" << agenda2 << endl;

    cout << "\nConcatene agenda1 et agenda 2 : " << endl;
    Agenda agenda3(15);
    agenda3 = agenda1 + agenda2;
    cout << agenda3;

    cout << "\nOn teste agenda1[ScoobyDoo]" << endl;
    cout << agenda1["ScoobyDoo"] << endl;
    cout << "\nOn teste agenda1[jqhsdqjsdhb] qui n'est pas dans l'agenda" << endl;
    cout << agenda1["jqhsdqjsdhb"] << endl;

    cout << "\nOn teste la concaténation de agenda 2 et agenda 3 avec +=" << endl;
    agenda3.ajouter("Robert", "1");
    agenda3.ajouter("David", "987");
    agenda3.supprimer("Xavier");
    cout << "\nagenda2:\n" << agenda2 << endl << "agenda3:\n" << agenda3 << endl;

    cout<<"Test agenda2+=agenda3 : res de la concatenation:"<<endl;
    agenda2+=agenda3;
    cout<<agenda2<<endl;

    cout << "\nagenda3-=" "David" << endl;
    agenda3 -= "David";
    cout<<agenda3<<endl;

    cout<<"\nTest agenda2==agenda1"<<endl;
    agenda2==agenda1;
    cout<<"\nTest agenda2==agenda2"<<endl;
    agenda2==agenda2;
    cout<<"\nTest agenda4==agenda5"<<endl;
    Agenda agenda4(10);
    agenda4+="Larissa 33";
    agenda4+="Arnaud 974";
    Agenda agenda5(10);
    agenda5+="Arnaud 974";
    agenda5+="Larissa 33";
    agenda4==agenda5;






    return 0;
}


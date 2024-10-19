#include <iostream>
#include "Complexe.h"

using namespace std;

int main() {

    Complexe* C1 = new Complexe(3, 4);  // z1 = 3 + 4i
    Complexe C2(1,2);  // z2 = 1 + 2i


    //creation d'un complexe en utilisant  cnstructeur de recopie 
    Complexe C3(*C1);
    cout <<"L'affichage de C3 :"<< endl;
    C3.affichage();
    cout << endl;



    cout << "L'affichage de C1 :" << endl;
    C1->affichage();
    cout << endl;

    cout << "L'affichage de C2 :" << endl;
    C2.affichage();
    cout << endl;


    //teste de la fonction operator=
    C3 = C2;
    cout << "L'affichage de C3 :" << endl;
    C3.affichage();
    cout << endl;


    // Test de l'opérateur +
    Complexe addition = *C1 + C2;
    cout << "Addition de C1 et C2 : " << endl;
    addition.affichage();
    cout << endl;

    // Test de l'opérateur -
    Complexe soustraction = *C1 - C2;
    cout << "Soustraction de C1 et C2  : " << endl;
    soustraction.affichage();
    cout << endl;

    // Test de l'opérateur *
    Complexe multiplication = *C1 * C2;
    cout << "Multiplication de C1 et C2  : " << endl;
    multiplication.affichage();
    cout << endl;

    // Test de l'opérateur /
    Complexe division = *C1 / C2;
    cout << "Division de C1 sur C2  : " << endl;
    division.affichage();
    cout << endl;

    // Test de l'opérateur ==
    bool egalite = (*C1 == C2);
    cout << "Le resultat de l'egalite  : " << (egalite ? "Vrai" : "Faux") << endl;
    cout << endl;


    // Test du module de z1
    double moduleC1 = C1->module();
    cout << "Module de C1 : " << moduleC1 << endl;
    cout << endl;

    // Test du conjugué de z1
    Complexe conjugueC1 = C1->conjugue();
    cout << "Conjugue de C1 : " << endl;
    conjugueC1.affichage();
    cout << endl;

    // Test de l'ajout d'un nombre réel à z1
    Complexe additionReelle = *C1 + 5.0;
    cout << "Addition d'un complexe C1 avec un reel (C1 + 5.0) : " << endl;
    additionReelle.affichage();
    cout << endl;

    // Test de la soustraction d'un nombre réel de z1
    Complexe soustractionReelle = *C1 - 2.0;
    cout << "Soustraction d'un complexe C1 avec un reel (C1 - 2.0) : " << endl;
    soustractionReelle.affichage();
    cout << endl;

    // Test de la multiplication par un nombre réel
    Complexe multiplicationReelle = *C1 * 3.0;
    cout << "Multiplication d'un complexe C1 avec un reel (C1 * 3.0) : " << endl;
    multiplicationReelle.affichage();
    cout << endl;

    // Test de l'ajout d'un complexe à un double
    Complexe additionComplexe = 4.0 + *C1;  // Test de double + Complexe
    cout << "Addition d'un complexe a un reel (4.0 + C1) : " << endl;
    additionComplexe.affichage();
    cout << endl;

    // Test de la soustraction d'un complexe d'un double
    Complexe soustractionComplexe = 5.0 - C2;  // Test de double - Complexe
    cout << "Soustraction d'un complexe a un reel (5.0 - C2) : " << endl;
    soustractionComplexe.affichage();
    cout << endl;

    // Test de la multiplication d'un complexe par un double
    Complexe multiplicationComplexe = 2.0 * *C1;  // Test de double * Complexe
    cout << "Multiplication d'un reel par un complexe (2.0 * C1) : " << endl;
    multiplicationComplexe.affichage();
    cout << endl;

    delete C1;




    /*
    Complexe* C1 = new Complexe(3, 4);  // z1 = 3 + 4i
    Complexe C2;

    //teste Utilisation de l'opérateur *
    //C2 = C1->operator*();  // Cela doit appeler operator* et afficher le message
    C2 = *C1;
    // Affichage de C2 pour vérifier qu'il a reçu les valeurs de C1
    C2.affichage();
    */


    /*
    //teste Utilisation de l'opérateur =
    Complexe* C1 = new Complexe(3, 4);  // z1 = 3 + 4i
    Complexe C2;
    //C2 = C1->operator*();  // Cela doit appeler operator* et afficher le message
    //C2.operator=(C1->operator*());
    C2 = *C1;
    // Affichage de C2 pour vérifier qu'il a reçu les valeurs de C1
    C2.affichage();

    delete C1;
    */
    

    return 0;


}

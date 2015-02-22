#include <iostream>
#include <string>
using namespace std;

int main()
{

//Déclaration des variables opérandes (type double).
double A;
double B;

//Déclaration des variables de résultat (type double également).
double resultatMulti;
double resultatDiv;
double resultatAdd;
double resultatSous;

//Déclaration de la variable de type d'opération (type entier).
int opération;

//Déclaration et initialisation des variables du type d'opération (type entier).
int multiplication = 1;
int division = 2;
int addition = 3;
int soustraction = 4;


//Saisie du premier nombre, A(opérande 1).
cout<<"Veuillez saisir un nombre: "<<endl;
cin>>A;

//Saisie du deuxième nombre, B (opérande 2).
cout<<"Veuillez saisir un autre nombre: "<<endl;
cin>>B;

//Saisie du type d'opération souhaité à l'aide de l'affichage d'un menu.
cout<<"Quel type d'opération souhaitez-vous faire ? \n 1- Multiplication \n 2- Division \n 3- Addition \n 4- Soustraction"<<endl;
cin>>opération;



//Exécution de l'opération en fonction des paramètres précédemment saisis.

switch(opération)
{
//Cas de multiplication.
case 1:
  resultatMulti = A*B;
  cout<<"\n Le resultat de cette opération est: "<<resultatMulti<<endl;
  break;
  
//Cas de division.
case 2:
  resultatDiv = A/B;
  cout<<"\n Le resultat de cette opération est: "<<resultatDiv<<endl;
  break;
  
//Cas d'addition.
case 3:
  resultatAdd = A+B;
  cout<<"\n Le resultat de cette opération est: "<<resultatAdd<<endl;
  break;
  
//Cas de soustraction.
case 4:
  resultatSous = A-B;
  cout<<"\n Le resultat de cette opération est: "<<resultatSous<<endl;
  break;
  
//Tout autre cas que ceux précédemment définis: le programme retourne une erreur.
  default:
  cout<<"Erreur de saisie. Vous devez saisir: 1 ou 2 ou 3 ou 4, selon l'opération que vous voulez effectuer."<<endl;
  break;
}

return 0;
}

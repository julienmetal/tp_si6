# tp_si6
#fromage

#include <cstdint>
int main();
{

//Déclaration des variables
double A;
double B;
double resultat*;
double resultat/;
double resultat+;
double resultat-;
string opération;

//déclaration des fonctions


printf("Veuillez saisir un nombre: ")
scanf(A)

printf("Veuillez saisir un autre nombre: ")
scanf(B)

printf("Quel type d'opération souhaitez-vous faire ?");
scanf(opération);

switch(opération)
{
  case opération= "multiplication"
  resultat* = A*B;
  printf(resultat*);
  break;
  
  case opération= "division"
  resultat/ = A/B;
  printf(resultat/);
  break;
  
  case opération= "addition"
  resultat+ = A+B;
  printf(resultat+);
  break;
  
  case opération= "soustraction"
  resultat- = A-B;
  printf(resultat-);
  break;
  
  default:
  printf("Erreur de saisie, veuillez saisir l'un des mots clés suivants: |multiplication| ou |division| ou |addition| ou |soustraction|")
  break;
}

return 0;
}

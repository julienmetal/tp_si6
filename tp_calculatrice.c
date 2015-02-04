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

//declaration de la fonction multiplier
double add(double A, B)
  {
  return A * B;
  }
  
//declaration de la fonction diviser
double add(double A, B)
  {
  return A / B;
  }

//declaration de la fonction addition
double add(double A, B)
  {
  return A + B;
  }

//declaration de la fonction soustraire
double add(double  A, B)
  {
  return A - B;
  }

resultat*= add(A, B)
printf(resultat*);

resultat/= add(A, B)
printf(resultat/);

resultat+= add(A, B)
printf(resultat+);

resultat-= add(A, B)
printf(resultat-);
}

printf("Quel type d'opération souhaitez-vous faire ?");
scanf(opération);

switch(opération)
{
  case opération= "multiplication"
  A*B;
  break;
  
  case opération= "division"
  A/B;
  break;
  
  case opération= "addition"
  A+B;
  break;
  
  case opération= "soustraction"
  A-B;
  break;
  
  default:
  printf("Erreur de saisie, veuillez saisir l'un des mots clés suivants: |multiplication| ou |division| ou |addition| ou |soustraction|")
  break;
}

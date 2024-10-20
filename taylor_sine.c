#include "taylor_sine.h"

long long factorial(int k) //Funktion for vores factorial
{
  long long result=1; //sætter vores result til at være 1, da det første led er factorial af 1.
  for (int i=1; i<=k; i++) //For loop til at køre alle værdier inde for k til at blive ganget på vores factorial.
  {
    result*=i;
  } return result;
}

double power(int n, double x){
  double sum = 1.0; //Sætter vores sum til at 1, da alt opløftet i 0 er lig 1.
  for (int i=1; i<=n; i++) //For loop til at beregne den nye sum af vores potens.
  {
    sum *= x; 
  } return sum; //returnerer summen
}

double taylor_sine(double x, int n) {
  double result = 0.0; //Resultatet sættes til 0.
  double term; //Midlertidlig variabel
  for(int i=0; i<n; i++)
  {
    int exponent =2*i+1; //Her sørges der for at potensen altid er ulige.
    term = (i % 2 == 0 ? 1 : -1)*(power(exponent, x)/factorial(exponent)); //Beregner det nye led
    result += term; //Tilføjer det nye led til vores samlede resultat.
  }
  return result; //Returnerer resultatet.
}

//Project Euler
//Michail Razzakov

//Largest prime factor
//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?


#include <iostream>
#include <cmath>
using namespace std;

int main()
{
long int n=600851475143;
long int i,j,num;

   for(i=1;i<n;i++)
      if(n%i == 0){
         n = n/i;
         i = 1;
      }
   cout << "prime: " << n << endl;
}

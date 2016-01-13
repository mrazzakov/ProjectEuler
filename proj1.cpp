//Project Euler
//Michail Razzakov
//
//Multiples of 3 and 5
//Find sum of all multiples of 3 and 5 below 1000.

#include <iostream>
using namespace std;

int main()
{
int i,sum=0;

   for(i=0;i<1000;i++){
      if(i%3 == 0 || i%5 == 0)
         sum += i;
}
   cout << "Sum of multiples of 3 and 5 between 0 and 1000 is: " << sum << endl;
}


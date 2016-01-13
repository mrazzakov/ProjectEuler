//Project Euler
//Michail Razzakov
//
//Even Fibonacci Numbers from 0 to 4,000,000
//i+j=I
//1+0=1
//1+1=2 *   sum=2
//2+1=3
//3+2=5
//5+3=8 *   sum=10
//... all the way to 4000000



#include <iostream>
using namespace std;

int main()
{
int i=1,j=0,sum=0,temp;
   
   while(i<4000000){
      if(i%2 == 0)
         sum += i;
      temp = i;
      i += j;
      j = temp;
   }

   cout << "Fibonacci of evens (0-4000000): " << sum << endl;
}


# include <iostream>
using namespace std;

int main(){
   int guess;
   int numBoi = 32;
   cout << "Type a number: ";
   cin >> guess;
   
   if (guess == numBoi){
      cout << "Guessed right!\n";
   }

   if(guess < numBoi){
      cout << "Too low!\n";
   }

   else{
      cout << "Too high!\n";
   }

   return(0);

}
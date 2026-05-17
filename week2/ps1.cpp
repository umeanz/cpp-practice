#include <iostream>
using namespace std; 
int main(){
    
   cout<<"Enter an anoun in cent:";
   int x{0};
   cin>>x;
   const int dollar_to_cent = 100;
   const int quater_to_cent = 25;
   const int dime_to_cent = 10;
   const int nickel_to_cent = 5;
   const int penny_to_cent = 1;

   cout<<"dollar: "<< x/dollar_to_cent << endl;
   cout<<"\nquaters: "<< (x%dollar_to_cent)/quater_to_cent << endl;
   cout<<"\ndimes: "<< ((x%dollar_to_cent)%quater_to_cent)/ dime_to_cent << endl;
   cout<<"\nnickels: "<< (((x%dollar_to_cent)%quater_to_cent)%dime_to_cent)/nickel_to_cent << endl;
   cout<<"\npennies: "<< ((((x%dollar_to_cent)%quater_to_cent)%dime_to_cent)%nickel_to_cent)/penny_to_cent << endl;
    return 0;

 }
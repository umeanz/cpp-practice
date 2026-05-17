// looping interation
/* 
FOR, DO, WHLE 
*/
#include <iostream>

using namespace std;
int main(){
    int x {0};
    
    for(int i {1};i<16;++i){
        if(i%2!=0)
            x += i; 
        
   }

   cout<< x;
    return 0; 
}

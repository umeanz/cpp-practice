#include <iostream>

int main(){
    std::cout << "what is your favorit number between 1 and 100"<< std::endl;
    int a;
    std::cin>>a;
    std::cout << "amazning!! " << a<< "is my favorit number too!"<<std::endl;
       
    if(a==24){
        std::cout<< "No really!! "<<a <<" is my favorite number " <<std::endl;
    }

    return 0;
}
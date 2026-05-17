#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    char choice {};
    vector<int> list_num {};

    do{
        cout<<R"(
        P-Print numbers
        A-Add a number
        M-Dispay mean of the numbers
        S-Display the smallest number
        L-Display the largest number
        Q-Quit"; 
        )";
        
        cout<<"Enter your choice: ";
        
        cin >> choice;
        

        if(choice=='p'||choice=='P'){
            if(list_num.empty())
                cout<<"The list is empty";
            else
                for(int i {0}; i < list_num.size();++i )
                    cout << list_num[i]<<" ";
        }else if (choice=='a'||choice=='A')
        {
            int x;
            cout<<"type in number to add: ";
            cin >> x; 
            list_num.push_back(x);
            cout << list_num.back() << " added"; 
        }else if (choice=='m'||choice=='M') //calculate mean or average of elements
        {
            double mean {0.0};
            double s {0};
            for(int j {0}; j < list_num.size();++j){
                s += list_num[j];
            }
            mean = s/list_num.size();
            cout<<"mean(average) is: "<<mean;
        }else if (choice=='s'||choice=='S') //smallest element in the list
        {
            int n {0};
            n = list_num[0];
            for(int m {1}; m <list_num.size();++m){ 
                if( n > list_num[m]){
                    n = list_num[m];
                }
            }        
            cout<<"smallest number: "<< n;
        }else if (choice=='l'||choice=='L') // largest element 
        {
            int t {0};
            t = list_num[0];
            for(int b {1}; b <list_num.size();++b){ 
                if( t < list_num[b]){
                    t = list_num[b];
                }
            }        
            cout<<"largest number: "<< t;
        }else if (choice=='q'||choice=='Q'){// largest element 
            cout<<"Good bye";
        }else
            cout<<"Uknown selection, please try again";
    }while(choice !='q'&& choice!='Q');
    

    return 0;
}
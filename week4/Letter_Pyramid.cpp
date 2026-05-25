#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    cout<<" type in your letters without space:  ";
    string letter = "";
    cin>> letter; 

    size_t len = letter.size();
    cout<<len<<endl;
    string rev = "";

    for(int i = len-1; i>=0 ;--i){
        rev += letter[i];
    }
    cout << rev<<endl;
    string pyramid = "";
    
    int k = len - 1;
    for(int x = 0; x < len; ++x) {

    // 공백
        for(int i = 0; i < k; ++i)
            pyramid += " ";

    // 앞부분: letter[0..x]
        for(int j = 0; j <= x; ++j)
            pyramid += letter[j];

    // 뒷부분 역순: letter[x-1..0]
        for(int j = x - 1; j >= 0; --j)
            pyramid += letter[j];

        cout << pyramid << endl;
        pyramid = "";  // ✅ 다음 줄 위해 초기화
        k--;
    }
 
    return 0; 
}
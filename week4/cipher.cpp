#include <iostream>
#include <cstring>
#include <cctype>
#include <string>

using namespace std;

char encryptChar(char c, int key){
    if(!isalpha(c))
        return c;
    char base = isupper(c)?'A':'a';
    return base + (c - base + key)%26;
}

char decryptChar(char c, int key){
    if(!isalpha(c))
        return c;
    char base = isupper(c)? 'A':'a';
    return base +(c - base - key +26)%26;
} 

int main(){
    cout<<"Type in your secret message: ";
    string message {};
    getline(cin, message);
    
    cout<<message<<endl;
    for (char x:message){
        cout<<"letter num: "<<x<<endl;
        cout<<"letter num: "<<static_cast<int>(x)<<endl;
    }
    // ── 키 입력 ──────────────────────────────────────
    int key;
    cout << "암호화 키를 입력하세요 (1~25): ";
    cin >> key;
    key = ((key % 26) + 26) % 26; // 음수/26이상 키 정규화
 
    
    string encrypted = "";
    for (char c : message)
        encrypted += encryptChar(c, key);
 
    string decrypted = "";
    for (char c : encrypted)
        decrypted += decryptChar(c, key);
 
    
    cout << "\noriginal:   " << message   << "\n";
    cout << "encrypted: " << encrypted << "\n";
    cout << "decrypted: " << decrypted << "\n";

    return 0;
}
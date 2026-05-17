#include <iostream>
#include <vector>
using namespace std;
int main(){
  vector<int> vec1;
  vector<int> vec2;

  vec1.push_back(10);
  vec1.push_back(20);
 cout<< vec1.at(0) <<endl;
 cout<< vec1.at(1) <<endl;
 cout<< vec1.size() <<endl;
cout<<"=====================================================\n";
  vec2.push_back(100);
  vec2.push_back(200);
cout<< vec2.at(0) <<endl;
cout<< vec2.at(1) <<endl;
cout<< vec1.size() <<endl;

vector<vector<int>> twod_vec;
twod_vec.push_back(vec1);
twod_vec.push_back(vec2);

cout<<"=====================================================\n";
cout<<twod_vec.at(0).at(0)<<endl;
cout<<twod_vec.at(0).at(1)<<endl;
cout<<twod_vec.at(1).at(0)<<endl;
cout<<twod_vec.at(1).at(1)<<endl;

cout<<"=====================================================\n";
vec1.at(0) = 100;
cout<<twod_vec.at(0).at(0)<<endl;
cout<<twod_vec.at(0).at(1)<<endl;
cout<<twod_vec.at(1).at(0)<<endl;
cout<<twod_vec.at(1).at(1)<<endl;

cout<<"=====================================================\n";
cout<<"Vector1 print\n";
cout<< vec1.at(0) <<endl;
cout<< vec1.at(1) <<endl;
cout<< vec1.size() <<endl;
 return 0;
}
#include <iostream>
#include <string>

using namespace std;



int main(void) {

  int n;
  string str1,str2;
  cin >>n;

  for (int i =0; i < n; ++i){
    cin >> str1 >> str2;
    cout <<str1 <<"\n"<<str2<<"\n";
    for(int j =0; j <= str1.length()-1;++j){

        if(str1.at(j) == str2.at(j)){cout <<".";}
        else cout <<"*";
    }
    cout <<"\n";
  }


  return 0;
}

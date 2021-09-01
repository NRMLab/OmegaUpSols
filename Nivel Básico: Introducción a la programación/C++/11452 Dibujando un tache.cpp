#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int r = n;
  for(int i=0; i<n;i++){
    if(i < (n/2)){
      for(int j=0; j<i;j++){
        cout << " ";
      }
      cout << "@";
      for(int j=0; j<(r-2);j++){
        cout << " ";
      }
      cout << "@\n";
      r = r-2;
    }else if(i == (n/2)){
      for(int j=0; j<i;j++){
        cout << " ";
      }
      cout << "@\n";
    }else{
      r = r+2;
      for(int j=0; j<(n-(i+1));j++){
        cout << " ";
      }
      cout << "@";
      for(int j=0; j<(r-2);j++){
        cout << " ";
      }
      cout << "@\n";
    }
  }
  
  return 0;
}

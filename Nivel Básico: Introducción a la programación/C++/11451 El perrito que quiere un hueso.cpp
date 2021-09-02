#include <iostream>
using namespace std;

int main() {
  int L1; cin >> L1;
  int T1; cin >> T1;
  int L2; cin >> L2;
  int T2; cin >> T2;
  
  if(L1 > L2 && T1 > T2){
    cout << "Hueso 1";
  }else if(L1 < L2 && T1 < T2){
    cout << "Hueso 2";
  }else{
    cout << "Perrito confundido :(";
  }
}

#include <iostream>
#include <vector>
using namespace std;

int n;
int k;
vector<int> sec;

int main() {
  cin >> n;  

  for(int i = 0; i<n; i++){
    int el;
    cin >> el;
    sec.push_back(el);
  }
  cin >> k;
  for(int i = 0; i<n; i++){
    if(sec[i] % k != 0){
      cout << "X ";
    }else{
      cout << sec[i] << ' ';
    }
  }
  
  return 0;
}

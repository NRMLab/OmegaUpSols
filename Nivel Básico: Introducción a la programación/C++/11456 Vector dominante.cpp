#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> s1;
vector<int> s2;
int main() {
  cin >> n;
  for (int i = 0; i < n; i++){
    int l ;
    cin >> l;
    s1.push_back(l);
  }
  for (int i = 0; i < n; i++){
    int l ;
    cin >> l;
    s2.push_back(l);
  }
  for (int i = 0; i < n; i++){
    if (s1[i] <= s2[i]){
      cout << 0;
      return 0;
    }
  }
  cout << 1;
  return 0;
}

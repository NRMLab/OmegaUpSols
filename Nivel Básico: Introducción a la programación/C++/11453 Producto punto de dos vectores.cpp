#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n;
  int r=0;
  vector<int> a;
  vector<int> b;
  cin >> n;
  for(int i=0;i<n;i++){
    int l;
    cin >> l;
    a.push_back(l);
  }
  for(int i=0;i<n;i++){
    int l;
    cin >> l;
    b.push_back(l);
  }
  for(int i=0;i<n;i++){ 
    r = r + a[i]*b[i];
  }
  cout << r;
}

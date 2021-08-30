#include <iostream>
using namespace std;
int w;

int main() {
  cin >> w;
  if (w > 2 && w % 2 == 0)
    cout << "SI\n";
  else
    cout << "NO\n";
}

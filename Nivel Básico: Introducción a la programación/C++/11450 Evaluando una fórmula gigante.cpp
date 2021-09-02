#include <iostream>
#include<math.h>
using namespace std;

int main() {
  float x; cin >> x;
  float y; cin >> y;
  float z; cin >> z;

  cout <<  ((((2*x+y)/(z))*(pow(y,3)-z))/(((x+2*y+3*z)/(z-2*y-3*x))+(pow(x,2))+pow(z,2)));
}

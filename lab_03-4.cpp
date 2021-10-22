#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  double x;
  double y;
  double R;

  cout << "x = "; cin >> x; //вхідний параметр
  cout << "y = "; cin >> y; //вхідний параметр
  cout << "R = "; cin >> R; //вхідний аргумент

  // розгалуження в повній формі
  if((x >= 0 && (x*x + y*y <= R*R)) 
    || (x < 0 && x >= -R && y <= R && y >= 0 && x >= -y)
    || (x < 0 && x >= -R && y >= -R && y <= 0 && x >= y))

      cout << "yes" << endl;
  else
      cout << "no" << endl;
  cin.get();
  return 0;
}
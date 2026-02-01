#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
  double area;
  double perimeter;

  cout << "Rectangle Properties" << endl;
  cout << "Length = " << length << endl;
  cout << "Width = " << width << endl;
  
  area = length*width;
  cout << "Area = " << area << endl;

  perimeter = (length*2)+(width*2);
  cout << "Perimeter = " << perimeter << endl;
  
}
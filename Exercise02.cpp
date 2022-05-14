#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  
   Box box1;

   // ======= DO NOT CHANGE THE INPUT ===========
   int heigth, length, width;
   cout << "Enter the Heigth of the Box : ";
   cin >> heigth;
   cout << "Enter the Length of the Box : ";
   cin >> length;
   cout << "Enter the width of the Box : ";
   cin >> width;
   // ===========================================
  
   // 2. Use setters assign height, length, width throw
  box1.setLength(length);
  box1.setWidth(width);
  box1.setHeigth(heigth);
   // === DO NOT CHANGE THE OUTPUT =============
   cout << "Box Height " << box1.getHeigth() << endl;
   cout << "Box Length " << box1.getLength() << endl;
   cout << "Box Width " << box1.getWidth() << endl;
   cout << "Volume of Box is " << box1.calcVolume() << endl;
   // ==========================================
      return 0;
}


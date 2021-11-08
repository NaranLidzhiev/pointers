#include <iostream>
using namespace std;
const int MAX = 7;
int main() {

   void *voidPtr;// такому указателю можно присвоить значение
   // другого указателя, при этом компилятор не станет возмущаться.
   int *intPtr;
   voidPtr = intPtr;//работает без проблем
   intPtr = (int *)voidPtr; // требуются скобки
}

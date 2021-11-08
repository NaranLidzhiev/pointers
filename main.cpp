#include <iostream>
using namespace std;
int main() {
  int *int_pointer = 0;
  int intVar = 5;
  int_pointer = &intVar;
  //указатель получает адрес переменной intVar
  // теперь int_pointer указывает на  intVar
  *int_pointer = 1;
  // переменной, на которую указывает int_pointer,  будет присвоение значение 1
  // При этом только содержимое intVar равно 1
  intVar = *int_pointer + 1;
  //значение intVar будет изменено на сумму 1 и значение, на
  // которое указывает  int_pointer. Но только сама перменная.
  // Поэтому значение intVar в итоге будет равно 2
}

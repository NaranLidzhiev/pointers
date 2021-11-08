#include <iostream>
using namespace std;
int main() {
    char *char_pointer;
    char letter = 'A';
    char_pointer = &letter;
    cout << *char_pointer << endl;
    //можно присвоить переменной letter новое значение, используя указатель
    *char_pointer = 'B';
    cout << letter;
}

#include <iostream>
using namespace std;
const int MAX = 7;
int main() {
    int values[MAX];
    int *pointer = values;
    for (int i=0; i <MAX; i++){
        *pointer  = 0;
        pointer++;//тут мы адрес инкрементируем
    }

    char source[MAX] = "Love";
    for (char *p = source; *p; p++){
        //условие *p содержит символ
        //на который указатель p  ссылается в настоящий момент
        //Заключительная команда в итоге заботится о том,
        //чтобы после каждого прохода цикла
        //переменная р указывала на следующий символ строки.
        cout << *p;
    }

}

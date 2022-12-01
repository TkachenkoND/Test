
#include<iostream>
#include<locale>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int chok = 50, milk = 45, java = 120;
    int chokCount = 0, milkCount = 0, javaCount = 0;
    int sum = 0;

    cout << "Введiть кiлькість продуктів: " << endl;

    cout << "- плиток шоколаду : ";
    cin >> chokCount;
    cout << endl;

    cout << "- кава : ";
    cin >> milkCount;
    cout << endl;

    cout << "- молоко : ";
    cin >> javaCount;
    cout << endl;

    sum = (chok * chokCount) + (milk * milkCount) + (java * javaCount);

    cout << "Вивід : Загальна сума товарів = "<< sum << endl;
    
}







#include<iostream>
#include<locale>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");

    int chok = 50, milk = 45, java = 120;
    int chokCount = 0, milkCount = 0, javaCount = 0;
    int sum = 0;

    cout << "����i�� �i������ ��������: " << endl;

    cout << "- ������ �������� : ";
    cin >> chokCount;
    cout << endl;

    cout << "- ���� : ";
    cin >> milkCount;
    cout << endl;

    cout << "- ������ : ";
    cin >> javaCount;
    cout << endl;

    sum = (chok * chokCount) + (milk * milkCount) + (java * javaCount);

    cout << "���� : �������� ���� ������ = "<< sum << endl;
    
}






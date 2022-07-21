//Beni Yaratan Elbet Yolumu Gösterir. Şuara/78
//Bu program kullanıcıdan alınan 2 sayının üzerinde dört işlem yapılmasını sağlamaktadır.
//This program written for getting from user two numbers doing 4 basic operations.

#include <iostream>
using namespace std;

int main()
{
    double number1;
    double number2;
    double sum;
    double distinction;
    double multipication;
    double division;

    cout << "Please enter first number :";
    cout << endl;
    cin >> number1;

    cout << endl;

    cout << "Please enter second number:";
    cout << endl;
    cin >> number2;

    cout << endl;

    sum = number1 + number2;
    distinction = number1 - number2;
    multipication = number1 * number2;
    division = number1 / number2;

    cout << "Sum of entried two numbers :\t" << sum << endl;

    cout << "Distinction of entried two numbers :\t" << distinction << endl;

    cout << "Multipicaiton of entried two numbers :\t" << multipication << endl;

    cout << "Division of entried two numbers :\t" << division << endl;

    system("PAUSE");
    return 0;

}


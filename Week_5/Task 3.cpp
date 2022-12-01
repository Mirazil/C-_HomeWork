#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    //Приклад 4
    int a;
    int b;
    int h;

    cout << "Введіть число a" << "\n";
    cin >> a;
    cout << "Введіть число b" << "\n";
    cin >> b;
    cout << "Введіть число h" << "\n";
    cin >> h;

    for (int i = a; i <= b; i += h) {
        double x = i;
        double y;

        y = 8 + sqrt(x-7)/(x+5);

        cout << "-------------" << endl;
        cout << " : " << " X " << " : " << " Y " << ":" << endl;
        cout << "-------------" << endl;
        cout << " :  " << a << "  : " << y << " : " << endl;
        cout << "-------------" << endl;


        while (y == 0)

            cout << "x не належить ОДЗ";
    }

    return 0;
}
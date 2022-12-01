#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int count = 1;
    while(count <= 5){
        int x;
        cout << count << ". " << "Введіть x: " << endl;
        cin >> x;
        
        int y = pow(sin(x), 5) + abs(5 * x - 1.5);
        cout << "y = " << y << endl;
        
        count++;
    }
    

    return 0;
}
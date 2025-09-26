#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

int main(){
    double a, b, c;
 
    cout << "Value A : \n";
    cin >> a;

    cout << "Value B : \n";
    cin >> b;
    a = pow(a,2);
    b = pow(b,2);
    c = a + b;
    c = sqrt(c);
    cout << "Value C : \n";
    cout << c << '\n';

    return 0;
}
#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

namespace one{
    double a, b, c;
}
namespace two {
    double a, b, c;
}

int main(){
    cout << " 1 : Pythagorean\n";
    cout << " 2 : Pythagorean reciprocal\n";
    cout << "Choose your method :";
    
    std::string input;
    std::getline(cin >> std::ws, input);

    if(input == "1"){
        using namespace one;
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
    }
    else if (input == "2"){
        using namespace two;
        cout << "Hypothenus Value : \n";
        cin >> c;
        c = pow(c,2);

        cout << "Value A : \n";
        cin >> a;

        cout << "Value B : \n";
        cin >> b;
        double sum = pow(a,2) + pow(b,2);
        if(sum == c){
            cout << "It's a right angled Triangle\n";
        }
        else{
            cout << "it is not a right angled triangle\n";
        }
    
    }
    else{
        cout << "Wrong input\n";
        main();
    }
    return 0;
}
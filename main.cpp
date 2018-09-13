#include <iostream>
#include "gcd.hpp"

using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    cout << "Hello Jeff" << endl;
    cout << "GCD is: " << gcd(10, 20) << endl;
    return 0;
}

int gcd ( const int a, const int b) {
    if (a<=0 || b<=0)
        return 0;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

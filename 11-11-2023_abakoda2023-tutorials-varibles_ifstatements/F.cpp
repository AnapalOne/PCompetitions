// unaccepted: floating-point error at test 3

#include <iostream>
#include <string>
#include <cmath>
#define PI 3.141592653589793238
using namespace std;

int main (int argc, char **argv) 
{
    int k1, k2, d1, d2;
    double s1, s2;

    cin >> k1;
    cin >> d1;
    cin >> k2;
    cin >> d2;

    s1 = k1 * ( PI * pow((d1/2), 2) );
    s2 = k2 * ( PI * pow((d2/2), 2) );

    if (s1 == s2)
        cout << "Garfield's Lasagna\n";
    if (s1 > s2)
        cout << "Maguire's Pizza\n";
    if (s1 < s2)
        cout << "Holland's Pizza\n";
}

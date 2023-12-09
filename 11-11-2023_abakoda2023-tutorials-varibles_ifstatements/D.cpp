#include <iostream>
#include <string>
#include <cmath>
#define PI 3.141592653589793238
using namespace std;
 
int main (int argc, char **argv) 
{
    int x, y;
    double diameter;
 
    cin >> x;
    cin >> y;
 
    diameter = (cbrt((3.0 / (4.0 * PI)) * (y - x))) * 2.0f;
 
    printf("%.10f", diameter);
}

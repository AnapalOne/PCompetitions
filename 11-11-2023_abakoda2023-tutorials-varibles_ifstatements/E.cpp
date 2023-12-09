#include <iostream>
#include <string>
#include <cmath>
#define PI 3.141592653589793238
using namespace std;
 
int main (int argc, char **argv) 
{
    int n;
    cin >> n;
    if ((n % 2) == 0) {
        cout << "EVENING SAVED";
    } else {
        cout << "EVENING RUINED";
    }
}

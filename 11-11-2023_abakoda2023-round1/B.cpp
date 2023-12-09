#include <iostream>
#include <string>
#include <cmath>
#define PI 3.141592653589793238
using namespace std;
 
int main (int argc, char **argv) 
{
    int n, s1=0,s2=0,s3=0,s4=0;
    string solv;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> solv;
        if (solv.find("A") != string::npos)
            s1++;
        if (solv.find("B") != string::npos)
            s2++;
        if (solv.find("K") != string::npos)
            s3++;
        if (solv.find("D") != string::npos)
            s4++;
    }
    printf("%d %d %d %d", s1,s2,s3,s4);
}   

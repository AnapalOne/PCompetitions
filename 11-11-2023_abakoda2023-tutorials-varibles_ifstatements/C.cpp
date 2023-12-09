#include <iostream>
#include <string>
using namespace std;
 
int main (int argc, char **argv) 
{
    string first, last, honor;
 
    cin >> first;
    cin >> last;
    cin >> honor;
 
    cout << last << ", " << first << endl;
    cout << first << "-" << honor;
}

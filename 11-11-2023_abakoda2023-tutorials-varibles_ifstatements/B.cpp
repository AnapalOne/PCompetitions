#include <iostream>
#include <string>
using namespace std;

int main (int argc, char **argv) 
{
    int length = 5;
    string text[length];

    for (int i = 0; i < length; i++) {
        cin >> text[i];
    }

    for (int j = length - 1; j >= 0; j--){
        cout << text[j] << endl;
    }
}

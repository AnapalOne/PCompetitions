// unaccepted: slow program

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#define PI 3.141592653589793238
using namespace std;
 
int main (int argc, char **argv) 
{
    int n;
    cin >> n;
    int score[n];
    string name[n];
    for (int i = 0; i < n; i++) {
        cin >> name[i] >> score[i];
    }
 
    int temp_int;
    string temp_str;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if(score[j] > score[i]) {
                swap(score[j], score[i]);
                swap(name[j], name[i]);
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (name[j] < name[i] && score[j] == score[i]) {
                swap(name[j], name[i]);
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        cout << name[i] << " " << score[i] << endl;
    }
}

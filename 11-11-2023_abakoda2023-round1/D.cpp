// unaccepted: incorrect output

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
 
    int s;
    cin >> s;
    int pos[s];
    for (int i = 1; i <= s; i++) {
        int x = 1;
        string search;
        cin >> search;
        for (string j : name) {
            if (j.find(search) != string::npos) {
                pos[i] = x;
            } else {
                x++;
            }
        }
    }
 
    for (int i = 0; i < s; i++) {
        cout << pos[i] << endl;
    }
}

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main(){
    int n,max1=0,max2=0;
    ifstream fin("C:\\test.txt");
    fin >> n;
    while (n != 0) {
        if (n % 7 == 0 && n % 49 != 0 && n > max1) {
            max1 = n;
        }
        if (n % 7 != 0 && n > max2) {
            max2 = n;
        }
        fin >> n;
    }
    cout << max1 * max2;
    return 0;
}


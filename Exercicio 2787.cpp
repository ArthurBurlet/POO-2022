#include <iostream>

using namespace std;

int main() {
    
    int l, c;
    cin >> l >> c;
    
    if (l + c & 1)
        cout << "0" << endl;
    else
        cout << "1" << endl;
    
    return 0;
}
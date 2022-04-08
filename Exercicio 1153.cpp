#include <iostream>

using namespace std;

int main(){
    
    int op;
    int fatorial = 1;
    
    cin >> op;
    
    for(int i = 0; i < (op-1); i++){
            fatorial *= (op - i);
    }
    cout << fatorial << endl;
    return 0;
}
#include <iostream>

using namespace std;

int main(){
    
    int op;
    int alcool = 0;
    int gasolina = 0;
    int diesel = 0;
    
    while(true){
                cin >> op;
                if(op == 1) alcool++;
                else if(op == 2) gasolina++;
                else if(op == 3) diesel++;
                else if(op == 4) break;
                else continue;
    }
    
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcool << "\n";
    cout << "Gasolina: " << gasolina << "\n";
    cout << "Diesel: " << diesel << "\n";
    return 0;
}
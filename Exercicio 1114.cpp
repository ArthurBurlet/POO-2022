#include <iostream>

using namespace std;

int main()
{
    int numero = 1;

    while(numero != 2002)
    {
        cin >> numero;
        if(numero == 2002){
            cout << "Acesso Permitido" << endl;
            return 0;
        }else{
            cout << "Senha Invalida" << endl;
        }

    }

    return 0;
}
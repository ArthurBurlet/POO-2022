#include <bits/stdc++.h>
#include <iostream>

using namespace std;
int main ()
{
    int primeiro = 0;
    int segundo = 1;
    int fibonacci;
    int n;
    cin >> n;
    cout << "0";
    n--;
    while (n--)
    {
        cout << " " << segundo;
        fibonacci = segundo;
        segundo+= primeiro;
        primeiro = fibonacci;
    }
    cout << '\n';
    return 0;
}
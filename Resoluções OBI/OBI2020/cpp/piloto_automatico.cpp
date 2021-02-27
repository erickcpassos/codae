#include <bits/stdc++.h>
using namespace std;

// declarar variáveis da entrada
int a, b, c;

int main() {

    // ler a entrada
    cin >> a >> b >> c;
    
    // variáveis que representam as diferenças entre as posições dos carros
    int diff1 = b-a, diff2 = c-b;

    if(diff1 < diff2) { // se o carro B está mais perto do A do que do C
        cout << 1 << endl;
    } else if(diff1 > diff2) { // se o carro B está mais perto do C do que do A
        cout << -1 << endl;
    } else { // se o carro B está no exato meio entre os outros dois carros
        cout << 0 << endl;
    }

}

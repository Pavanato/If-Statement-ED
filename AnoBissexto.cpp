#include <iostream>

using std :: cout;
using std :: cin;

bool ehAnoBissexto(int ano) {
    if (ano % 400 == 0)
        return true;
    if (ano % 100 == 0)
        return false;
    if (ano % 4 == 0)
        return true;
    return false;
}

int main() {
    int ano;

    do {
        cout << "Digite um ano: ";
        cin >> ano;
        if (ano <= 0) {
            cout << "Por favor, insira um valor positivo para o ano.\n";
        }
    } while (ano <= 0);

    if (ehAnoBissexto(ano))
        cout << ano << " é um ano bissexto.\n";
    else
        cout << ano << " não é um ano bissexto.\n";

    return 0;
}
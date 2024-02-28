#include <iostream>
#include <string>

using std :: cin;
using std :: cout;
using std :: string;

string classificarIMC(double massa, double altura) {
    double imc = massa / (altura * altura);

    if (imc < 17)
        return "Muito abaixo do peso";
    else if (imc < 18.5)
        return "Abaixo do peso";
    else if (imc < 25)
        return "Peso normal";
    else if (imc < 30)
        return "Acima do peso";
    else if (imc < 35)
        return "Obesidade";
    else if (imc < 40)
        return "Obesidade severa";
    else
        return "Obesidade mórbida";
}

int main() {
    double massa, altura;

    do {
        cout << "Digite a massa (kg): ";
        cin >> massa;
        if (massa <= 0) {
            cout << "Por favor, insira um valor positivo para a massa.\n";
        }
    } while (massa <= 0);

    do {
        cout << "Digite a altura (m): ";
        cin >> altura;
        if (altura <= 0) {
            cout << "Por favor, insira um valor positivo para a altura.\n";
        }
    } while (altura <= 0);
    
    string classificacao = classificarIMC(massa, altura);
    cout << "Classificacao IMC: " << classificacao << std::endl;

    return 0;
}
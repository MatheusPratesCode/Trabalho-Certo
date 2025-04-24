#include <iostream>
#include <string>

//Trabalho de Dev Ops


using namespace std;

int main() {
    string nome;
    float nota1, nota2, media;

    // Entrada de dados
    cout << "Digite o nome do aluno: ";
    getline(cin, nome);

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    // Cálculo da média
    media = (nota1 + nota2) / 2;

    // Saída de resultados
    cout << "Aluno: " << nome << endl;
    cout << "Media: " << media << endl;

    if (media >= 7.0) {
        cout << "Status: Aprovado ?" << endl;
    } else {
        cout << "Status: Reprovado ?" << endl;
    }

    return 0;
}

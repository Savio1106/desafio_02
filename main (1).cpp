#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Pessoa {
    string nome;
    string endereco;
    string cidade;
    string estado;
    string cpf;
};

int main() {
    vector<Pessoa> pessoas;
    int quant;

    cout << "Quantas pessoas deseja cadastrar? ";
    cin >> quant;

    for (int i = 0; i < quant; ++i) {
        Pessoa pessoa;
        cout << "Digite nome: ";
        cin >> pessoa.nome;
        cout << "Digite endereco: ";
        cin >> pessoa.endereco;
        cout << "Digite cidade: ";
        cin >> pessoa.cidade;
        cout << "Digite estado: ";
        cin >> pessoa.estado;
        cout << "Digite CPF/CNPJ: ";
        cin >> pessoa.cpf;
        pessoas.push_back(pessoa);
    }

    cout << "\n--- Pessoas cadastradas ---\n";
    for (const auto& pessoa : pessoas) {
        cout << "\nNome: " << pessoa.nome << endl;
        cout << "Endereco: " << pessoa.endereco << endl;
        cout << "Cidade: " << pessoa.cidade << endl;
        cout << "Estado: " << pessoa.estado << endl;
        cout << "CPF/CNPJ: " << pessoa.cpf << endl;
    }

    cout << "\nEscolha uma instituicao para se inscrever:\n";
    cout << "1. Asilo Sta Rita\n";
    cout << "2. Todos sem fome\n";
    cout << "3. Casa Sao Rafael\n";
    
    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "Inscrito no Asilo Sta Rita\n";
            break;
        case 2:
            cout << "Inscrito no Todos sem fome\n";
            break;
        case 3:
            cout << "Inscrito na Casa Sao Rafael\n";
            break;
        default:
            cout << "Opcao invalida\n";
            break;
    }

    return 0;
}

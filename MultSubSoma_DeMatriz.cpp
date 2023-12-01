#include <iostream>
#include <vector>

using namespace std;
void somaSub();
void mulT();

int main()
{
    int x;
    cout <<"Voce deseja somar e subtrair(1) ou multiplicar(2)" << endl;
    cin >> x;
    if(x==1){
        somaSub();
    }
    if(x==2){
        mulT();
    }
    return 0;
}
void somaSub(){
    
    cout << "Digite os valores das matrizes A e B 3x3"<< endl;
    vector<vector<int>> matrizA(3, vector<int>(3));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> matrizA[i][j];
        }
    }
    
    vector<vector<int>> matrizB(3, vector<int>(3));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> matrizB[i][j];
        }
    }
    
    int linhas = matrizA.size();
    int colunas = matrizA[0].size();
    
    vector<vector<int>> resultadoSoma(linhas, vector<int>(colunas));
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            resultadoSoma[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }

    vector<vector<int>> resultadoSubtracao(linhas, vector<int>(colunas));
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            resultadoSubtracao[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }

    cout << "Soma das matrizes A e B" << endl;
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << resultadoSoma[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Subtraçao das matrizes A e B" << endl;
    for (int i = 0; i < linhas; ++i){
        for (int j = 0; j < colunas; ++j){
            cout << resultadoSubtracao[i][j] << " ";
        }
        cout << endl;
    }
}

void mulT(){
    
    cout << "Digite os valores das matrizes A e B 3x3"<< endl;
    vector<vector<int>> matrizA(3, vector<int>(3));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> matrizA[i][j];
        }
    }

    vector<vector<int>> matrizB(3, vector<int>(3));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            cin >> matrizB[i][j];
        }
    }

    vector<vector<int>> resultadoMultiplicacao(3, vector<int>(3));
    for (int i = 0; i < 3; ++i){
        for (int j = 0; j < 3; ++j){
            resultadoMultiplicacao[i][j] = 0;
            for (int k = 0; k < 3; ++k){
                resultadoMultiplicacao[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    cout << "Multiplicaçao das matrizes A e B" << endl;
    for (const auto& linha : resultadoMultiplicacao){
        for (int elemento : linha){
            cout << elemento << " ";
        }
        cout << endl;
    }
}

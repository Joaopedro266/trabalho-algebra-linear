#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector<vector<float>> matriz(2, vector<float>(3, 0.0));
    float aux = 0, x;

    cout << "Digite os valores da matrix 2x3" <<endl;
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            cin >> matriz[i][j];
        }
    }
    cout <<endl;

    aux = matriz[0][0];
    matriz[0][0] /= aux;
    matriz[0][1] /= aux;
    matriz[0][2] /= aux;

    aux = matriz[1][0];
    matriz[1][0] += (-aux) * (matriz[0][0]);
    matriz[1][1] += (-aux) * (matriz[0][1]);
    matriz[1][2] += (-aux) * (matriz[0][2]);

    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << matriz[i][j] << " ";
        }
        cout <<endl;
    }

    cout <<endl;

    aux = matriz[1][1];
    matriz[1][1] /= aux;
    matriz[1][2] /= aux;

    aux = matriz[0][1];
    matriz[0][1] += (-aux) * (matriz[1][1]);
    matriz[0][2] += (-aux) * (matriz[1][2]);
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout <<endl;
    }

    cout <<endl;
}

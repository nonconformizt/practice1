#include <iostream>
using namespace std;

#define DIM 512

void read_matrix( float** M, int* m, int* n ) {
    cout << "Введите высоту матрицы\n";
    cin >> *m;
    cout << "Введите ширину матрицы\n";
    cin >> *n;
    cout << "Вводите элементы матрицы\n";
    for (int i = 0; i < *m; ++i) {
        cout << "Строка " << i << endl;
        for (int j = 0; j < *n; ++j) {
            cin >> M[i][j];
        }
    }
}

void show_matrix( float** M, int* m, int* n ) {
    cout << "==== Матрица ====\n";
    for (int i = 0; i < *m; ++i) {
        for (int j = 0; j < *n; ++j)
            cout << M[i][j] << "  ";
        cout << "\n";
    }
}


int main() {
    system("chcp 65001 > nul");
    int m, n;
    float ** A = new float*[DIM];

    for (long x = 0; x < DIM; x++)
        A[x] = new float[DIM];

    read_matrix(A, &m, &n);

    getchar();
}
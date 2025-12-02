#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Copia aquí las definiciones: Arista, union-find, compararAristas, ejecutarKruskal, etc.

struct Arista {
    int u, v, w;
};
Arista aristas[300], mst[300];
int padre[300], rangoUF[300];
int N, E;

void hacerSet(int n) {
    for(int i = 0; i < n; i++) {
        padre[i] = i;
        rangoUF[i] = 0;
    }
}
int encontrarPadre(int x) {
    if(padre[x] == x) return x;
    return padre[x] = encontrarPadre(padre[x]);
}
void unir(int a, int b) {
    a = encontrarPadre(a);
    b = encontrarPadre(b);
    if(a != b) {
        if(rangoUF[a] < rangoUF[b])
            padre[a] = b;
        else if(rangoUF[b] < rangoUF[a])
            padre[b] = a;
        else {
            padre[b] = a;
            rangoUF[a]++;
        }
    }
}
bool compararAristas(const Arista &A, const Arista &B) {
    return A.w < B.w;
}
int ejecutarKruskal() {
    sort(aristas, aristas + E, compararAristas);
    hacerSet(N);

    int contador = 0;
    int pesoTotal = 0;
    for(int i = 0; i < E; i++) {
        int u = aristas[i].u;
        int v = aristas[i].v;
        if(encontrarPadre(u) != encontrarPadre(v)) {
            mst[contador++] = aristas[i];
            pesoTotal += aristas[i].w;
            unir(u, v);
        }
    }
    return pesoTotal; // Solo devuelve el peso total del MST
}

// Test automático con datos
void testKruskalSimple() {
    N = 4;
    E = 5;
    Arista testAristas[5] = {
        {0, 1, 10},
        {0, 2, 6},
        {0, 3, 5},
        {1, 3, 15},
        {2, 3, 4}
    };
    for(int i = 0; i < E; i++) aristas[i] = testAristas[i];
    int esperado = 19;
    int obtenido = ejecutarKruskal();
    if(obtenido == esperado) {
        cout << "TestKruskalSimple: OK\n";
    } else {
        cout << "TestKruskalSimple: ERROR, esperado " << esperado << ", obtenido " << obtenido << "\n";
    }
}

// Puedes agregar más tests
void testKruskalOtro() {
    N = 3;
    E = 3;
    Arista testAristas[3] = {
        {0, 1, 1},
        {1, 2, 2},
        {2, 0, 3}
    };
    for(int i = 0; i < E; i++) aristas[i] = testAristas[i];
    int esperado = 3; // El MST une 0-1 y 1-2
    int obtenido = ejecutarKruskal();
    if(obtenido == esperado) {
        cout << "TestKruskalOtro: OK\n";
    } else {
        cout << "TestKruskalOtro: ERROR, esperado " << esperado << ", obtenido " << obtenido << "\n";
    }
}

int main() {
    testKruskalSimple();
    testKruskalOtro();
    // Agrega más tests aquí
    return 0;
}
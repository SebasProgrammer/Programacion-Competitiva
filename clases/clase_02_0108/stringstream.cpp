#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "hola mundo";
    int anio = 2021;
    ostringstream oss; //buffer para escribir
    oss << s << " " << anio;
    cout << oss.str() << "\n";

    string ss = "bienvenido peru 2021";
    istringstream iss(ss); // buffer para leer
    string cad;
    int cont = 0;
    while (iss >> cad) {
        //cout << cad
        cont++;
    }
    cout << cont;
}
#include <bits/stdc++.h>
using namespace std;

// Limite memoria <= 256 MB

int A[64000000]; // 256MB   ---> data segment

int main() {
    int B[64000000]; // 2 MB --->stack
    int *C = new int[64000000]; // límite es la RAM  ---> heap 
}

//expande la memoria stack  -->  g++ -Wl,--stack=256000000 archivo.cpp

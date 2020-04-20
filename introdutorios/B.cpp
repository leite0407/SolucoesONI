/*
ano: introdutorios
fase: introdutorios
problema: B
pontos: 100
autor: Manuel Leite
linguagem: C++
topicos: 
url do problema: http://oni.dcc.fc.up.pt/loop/guias/inicial/pintro/
url da solucao: 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int A, L, C; cin >> A >> L >> C;

	if (A * L * C < 50 || A < 3)
		cout << 0 << '\n';
	else
		cout << 1 << '\n';
}
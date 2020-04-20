/*
ano: 2018
fase: qualificacao
problema: A
pontos: 100
autor: Manuel Leite
linguagem: C++
topicos: sort
url do problema: https://www.dcc.fc.up.pt/oni/problemas/2018/qualificacao/probA.html
url da solucao: 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, Z; cin >> N >> Z;

	int livros[N];

	for (int i = 0; i < N; i++) {
		cin >> livros[i];
	}

	sort(livros, livros+N);

	int count = 0;

	while (Z > 0) {
		Z -= livros[count];
		count++;
	}

	cout << count << '\n';
}
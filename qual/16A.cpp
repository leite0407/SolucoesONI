/*
ano: 2016
fase: qualificacao
problema: A
pontos: 100
autor: Manuel Leite
linguagem: C++
topicos: stack
url do problema: https://www.dcc.fc.up.pt/oni/problemas/2016/qualificacao/probA.html
url da solucao: 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, K; cin >> N >> K;

	queue<int> mulheres;

	int count = 0;

	for (int i = 0; i < N; i++) {

		if (!mulheres.empty() && i - mulheres.front() > K)
			mulheres.pop();
		
		char c; cin >> c;

		if (c == 'H')
			count += mulheres.size();
		else
			mulheres.push(i);
	}

	cout << count << '\n';
}
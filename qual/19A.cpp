/*
ano: 2019
fase: qualificacao
problema: A
pontos: 100
autor: Manuel Leite
linguagem: C++
topicos: stack
url do problema: https://www.dcc.fc.up.pt/oni/problemas/2019/qualificacao/probA.html
url da solucao: 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, K, T; cin >> N >> K >> T;

	queue<int> profundos;

	int count = 0;

	for (int i = 0; i < N; i++) {

		int curr; cin >> curr;

		if (i - profundos.front() >= K)
			profundos.pop();

		if (curr >= T) profundos.push(i);

		if ((int)profundos.size() >= (K+1)/2 && i >= K-1)
			count++;
	}

	cout << count << '\n';
}
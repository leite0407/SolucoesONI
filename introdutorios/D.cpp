/*
ano: introdutorios
fase: introdutorios
problema: D
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

	int N, K; cin >> N >> K;

	int count = 0;

	bool possible = false;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {

			char c; cin >> c;

			if (c == '#')
				count = 0;
			else {
				count++;
				if (count == K)
					possible = true;
			}
		}
		count = 0;
	}

	if (possible)
		cout << 1 << '\n';
	else
		cout << 0 << '\n';
}
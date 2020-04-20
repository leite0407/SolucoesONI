/*
ano: introdutorios
fase: introdutorios
problema: C
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

	int N; cin >> N;

	int max = 0;
	int count = 0;

	for (int i = 0; i < N; i++) {

		int curr; cin >> curr;

		if (curr > max) {
			count++;
			max = curr;
		}
	}

	cout << count << '\n';
}
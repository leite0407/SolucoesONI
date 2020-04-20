/*
ano: 2017
fase: qualificacao
problema: A
pontos: 100
autor: Manuel Leite
linguagem: C++
topicos:
url do problema: https://www.dcc.fc.up.pt/oni/problemas/2017/qualificacao/probA.html
url da solucao: 
*/

#include <bits/stdc++.h>

using namespace std;

int main() {

	int N, B, I; cin >> N >> B >> I;

	char locais[N];
	for (int i = 0; i < N; i++)
		cin >> locais[i];

	
	int maxPos = B-1;
	int minPos = B-1;
	int currPos = B-1;

	for (int i = 0; i < I; i++) {

		char dir; cin >> dir;

		int passo; cin >> passo;

		if (dir == 'D') {
			currPos += passo;
			maxPos = max(maxPos, currPos);
		}
		else {
			currPos -= passo;
			minPos = min(minPos, currPos);
		}
	}

	int count = 0;

	for (int i = minPos; i <= maxPos; i++) {

		if (locais[i] == 'T') count++;
	}

	cout << count << '\n';
}
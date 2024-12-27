#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
	int N, D;
	cin >> N >> D;

	vector<int> A(N);
	for (int i = 0; i < N; i++)
		cin >> A[i];

	int ans1 = 0;
	int l = 0, r = 0;
	int soma = 0;

	while (l < N) {
		while (r < N && soma + A[r] <= D) {
			soma += A[r];
			r += 1;
		}

		if (soma == D)
			ans1++;

		soma -= A[l];
		l += 1;
	}

	vector<int> Pref(N), Suf(N);

	int acc = 0;
	for (int i = 0; i < N; i++) {
		acc += A[i];
		Pref[i] = acc;
	}

	acc = 0;
	for (int i = N - 1; i >= 0; i--) {
		acc += A[i];
		Suf[i] = acc;
	}

	map<int, int> SufCount;
	
	int ans2 = 0;
	for (int i = N - 2; i >= 0; i--) {
		SufCount[Suf[i + 1]] += 1;
		if (Pref[i] > D) continue;
		ans2 += SufCount[D - Pref[i]];
	}

	cout << ans1 + ans2 << endl;
}

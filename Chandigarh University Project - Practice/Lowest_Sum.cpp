// Lowest Sum
// Link - https://www.codechef.com/CUPP2101/problems/LOWSUM



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <queue>
#include <vector>
#define MIN(a,b) (a < b ? a : b)
#define MAX(a,b) (a > b ? a : b)
using namespace std;
long long ar1[20010], ar2[20010];
long long mins[10010];
priority_queue<SS, vector<SS>, SSComp> pq;
int N;

struct SS {
	long long val;
	int id1, id2;
};

struct SSComp {
	bool operator()(SS a, SS b) {
		if (a.val > b.val) return true;
		return false;
	}
};

void Work() {
	SS s;
	while (!pq.empty()) pq.pop();

	for (int i = 0; i < N; i++) {
		s.val = ar1[i] + ar2[0];
		s.id1 = i;
		s.id2 = 0;
		pq.push(s);
	}

	for (int i = 0; i < 10000; i++) {
		if (pq.empty()) break;
		s = pq.top();
		pq.pop();
		mins[i] = s.val;

		s.id2++;
		if (s.id2 < N) {
			s.val = ar1[s.id1] + ar2[s.id2];
			pq.push(s);
		}
	}
}

int main() {
	int jcase;
	int Q, q;

	scanf("%d", &jcase);
	for (int icase = 0 ; icase < jcase; icase++) {
		scanf("%d %d", &N, &Q);
		for (int i = 0; i < N; i++) scanf("%lld", &ar1[i]);
		for (int i = 0; i < N; i++) scanf("%lld", &ar2[i]);
		sort(ar1, ar1 + N);
		sort(ar2, ar2 + N);
		Work();

		for (int i = 0; i < Q; i++) {
			scanf("%d", &q);
			printf("%lld\n", mins[q - 1]);
		}
	}
	return 0;
}

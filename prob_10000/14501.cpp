# include <iostream>
#include <algorithm>
using namespace std;

int N;
int T[16] = {0}; // 시간
int P[16] = {0}; // 금액

int counselor (int n); // prototype

int main() {
  cin >> N;
  for (int i=1;i<=N;i++) cin >> T[i] >> P[i];
  cout << counselor(1) << endl;
  return 0;
}

int counselor (int n) {
  // cout << n << endl;
  if (n>N+1) return -1001;
  if (n==N+1) return 0;
  return max(counselor(n+1), counselor(n+T[n])+P[n]);
}

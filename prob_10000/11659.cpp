//////////////////////////
// 2022.10.07 / kkarung //
//      prefix Sum      //
//////////////////////////
///////////////////////// report ///////////////////////////////
// 0~i-1번째까지의 부분합을 저장하는 psum[i] 배열을 값을 입력 받을 때부터 같이 만들어준다
// (psum[i]는 i개의 원소를 더한 값이라고 생각하면 편할 듯)
// i~j번째까지 부분합을 구하려면 psum[j+1]-psum[i]를 하면 된다(i, j는 0부터 시작)
// M번동안 새로 구하면 시간복잡도가 O(NM)인데 위와 같은 방식은 시간복잡도가 O(M)

#include <iostream>
using namespace std;
#define MAXN 100001

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, n;
	int psum[MAXN] = {0};
	cin >> N >> M;
	for (int i=0; i<N; i++) {
		cin >> n;
		psum[i+1] = psum[i]+n;
	}
	for (int k=0, i, j; k<M; k++) {
		cin >> i >> j;
		cout << psum[j]-psum[i-1] << '\n';
	}
}

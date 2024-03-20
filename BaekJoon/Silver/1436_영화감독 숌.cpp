#include <iostream>
#include <string>

using namespace std;

int main(){
	const string apocalypse_num = "666";
	int N;
	int count = 666;
	int want_idx = 1;

	cin >> N;
	
	while (1) {
		if(to_string(count).find(apocalypse_num) != string::npos) {
			if (want_idx == N) break;
			else {
				want_idx++;  
				count++;
			}
		}
		else count++;
	}
	cout << count;

	return 0;
}
/* Comment
브루트포스 알고리즘 (Brute Force Algorithm)
해가 존재할 것으로 예상되는 모든 영역 전체를 탐색하는 알고리즘

100% 최적해를 찾아낼 수 있지만, 경우에 따라 시간이 오래걸릴 수 있다.

따라서 문제의 크기가 작을 때 주로 사용한다.
-------------------------------------------------------------------------
string의 A.find(B)는 문자열A 안에 문자열B가 들어있다고 가정하면,
문자열A 안 B의 인덱스를 반환한다.
만약 들어있지 않다면 쓰레기 값(string::npos)을 반환한다.
*/
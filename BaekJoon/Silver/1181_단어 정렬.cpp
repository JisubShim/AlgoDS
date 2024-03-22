#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N = 0;
	cin >> N;
	vector<pair<int, string>> v;
	
	for (int i = 0; i < N; i++) {
		string input;
		cin >> input;
		v.push_back(make_pair(input.length(), input));
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N - 1; i++) {

		bool last = false;

		if(v[i].second != v[i + 1].second)
			cout << v[i].second << '\n';

		if (i == N - 1)
			last = true;
	}
	cout << v[N - 1].second;

	return 0;
}
/* Comment
vector<pair> �� sort�ϸ� �⺻������ first�� ���� ���ϰ� �����ϸ� second�� ���ϴ� ������� �ȴ�.
*/
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
���Ʈ���� �˰��� (Brute Force Algorithm)
�ذ� ������ ������ ����Ǵ� ��� ���� ��ü�� Ž���ϴ� �˰���

100% �����ظ� ã�Ƴ� �� ������, ��쿡 ���� �ð��� �����ɸ� �� �ִ�.

���� ������ ũ�Ⱑ ���� �� �ַ� ����Ѵ�.
-------------------------------------------------------------------------
string�� A.find(B)�� ���ڿ�A �ȿ� ���ڿ�B�� ����ִٰ� �����ϸ�,
���ڿ�A �� B�� �ε����� ��ȯ�Ѵ�.
���� ������� �ʴٸ� ������ ��(string::npos)�� ��ȯ�Ѵ�.
*/
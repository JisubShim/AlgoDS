#include <iostream>
#include <string>
using namespace std;
#define SIZE 1234567
bool era[SIZE];

bool isPal(int pal);
void isPrime();

int main() {
	int input;
	cin >> input;
	isPrime();
	for (int i = input; i < SIZE; i++)
		if (era[i] == true && isPal(i)) {
			cout << i;
			break;
		}
	return 0;
}

bool isPal(int pal) { // �Ӹ���� ������ �Ǻ�
	string strPal = to_string(pal);
	for (int i = 0; i < strPal.size() / 2; i++) {
		if (strPal[i] != strPal[strPal.size() - 1 - i])
			return false;
	}
	return true;
}

void isPrime() {// "�����佺�׳׽� ü"�� �Ҽ��Ǻ�

	for (int i = 2; i < SIZE; i++) // ���� : 0, 1�� �Ҽ��� �ƴ�
		era[i] = true;

	for (int i = 2; i < SIZE; i++) {
		if (era[i] == true) {
			for (int j = i * 2; j < SIZE; j += i) {
				era[j] = false;
			}
		}
	}
}

/* Comment
1. ���� ���� �Ҽ��Ǻ��� �ؾ��� ���� "�����佺�׳׽� ü"�� �̿��ϴ� ���� ���� ȿ�����̴�.
2. 0�� 1�� �Ҽ��� �ƴ��� �����ؼ��� �ȵȴ�.
*/
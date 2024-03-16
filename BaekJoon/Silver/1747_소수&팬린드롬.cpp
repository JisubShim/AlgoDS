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

bool isPal(int pal) { // 팰린드롬 수인지 판별
	string strPal = to_string(pal);
	for (int i = 0; i < strPal.size() / 2; i++) {
		if (strPal[i] != strPal[strPal.size() - 1 - i])
			return false;
	}
	return true;
}

void isPrime() {// "에라토스테네스 체"로 소수판별

	for (int i = 2; i < SIZE; i++) // 주의 : 0, 1은 소수가 아님
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
1. 많은 수의 소수판별을 해야할 때는 "에라토스테네스 체"를 이용하는 것이 가장 효율적이다.
2. 0과 1이 소수가 아님을 간과해서는 안된다.
*/
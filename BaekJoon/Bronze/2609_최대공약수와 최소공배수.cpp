#include <iostream>
#include <vector>
using namespace std;

int main() {
	int max = 1;
	int input1, input2;
	int mul;
	cin >> input1 >> input2;
	mul = input1 * input2;
	
	if (input1 > input2)
		swap(input1, input2);
	
	while (1) {
		int result = input2 % input1;
		if (result == 0)
			break;
		input2 = input1;
		input1 = result;
	}
	max = input1;

	cout << input1 << '\n';
	cout << mul / max;

	return 0;
}

/* Comment
* ��Ŭ���� ȣ�������� �ִ������� ���ϰ�,
* �ִ�����*�ּҰ���� = �� ���� �� �̶�� ������ �̿��Ͽ� �ּҰ������ ���Ѵ�.
*/
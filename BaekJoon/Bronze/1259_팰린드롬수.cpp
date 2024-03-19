#include <iostream>
#include <string>

using namespace std;

bool isPan(string input) {
	for (int i = 0; i < input.length() / 2; i++) {
		if (input[i] == input[input.length() - i - 1])
			continue;
		else
			return false;
	}
	return true;
}

int main() {
	string input;
	string result;

	while (1) {
		cin >> input;
		if (input == "0")
			break;

		result = isPan(input) ? "yes" : "no";
		cout << result << '\n';
	}
	
	return 0;
}

/* Comment
앞에서부터 읽어도, 뒤에서부터 읽어도 같은 수를 팰린드롬수라고 한다.
*/
#include <iostream>
#include <stack>
using namespace std;

int main() {
	int T;
	cin >> T;
	int* result = new int[T];
	for (int i = 0; i < T; i++) {
		string ps;
		cin >> ps;

		stack<char> st;
		bool isValid = true;
		for (char c : ps) {
			if (c == '(')
				st.push(c);
			else if (c == ')') {
				if (st.empty() || st.top() != '(') {
					isValid = false;
					break;
				}
				st.pop();
			}
		}

		if (!st.empty() || !isValid)
			result[i] = 0;
		else
			result[i] = 1;
	}
	for (int i = 0; i < T; i++) {
		if (result[i] == 0)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
	delete result;

	return 0;
} 
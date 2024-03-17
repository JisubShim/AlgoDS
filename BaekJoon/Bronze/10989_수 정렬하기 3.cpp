#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    int idx;
    cin >> N;
    int arr[10001] = {};
    for (int i = 0; i < N; i++) {
        cin >> idx;
        arr[idx]++;
    }

    for (int i = 0; i < 10001; i++) {
        for(int j = 0; j < arr[i]; j++)
            cout << i << '\n';
    }

    return 0;
}
/* Comment
�ð� �ʰ�, �޸� �ʰ� �ȳ��� ����

�ð� ���̴� ���1
ios::sync_with_stdio(false);
cin.tie(NULL);

�ð� ���̴� ���2
endl ��� '\n' ���� �������. -> endl�� flush���� ���ֱ� ������, ���� flush�� �ʿ������ '\n' ���°� �ð� ���࿡ �� ����.
*/
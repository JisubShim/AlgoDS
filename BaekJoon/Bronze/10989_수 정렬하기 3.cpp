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
시간 초과, 메모리 초과 안나게 하자

시간 줄이는 방법1
ios::sync_with_stdio(false);
cin.tie(NULL);

시간 줄이는 방법2
endl 대신 '\n' 으로 사용하자. -> endl은 flush까지 해주기 때문에, 버퍼 flush가 필요없으면 '\n' 쓰는게 시간 절약에 더 좋다.
*/
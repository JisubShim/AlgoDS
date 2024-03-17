#include <iostream>
#include <string>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int count = 0;
    int result = 9999999;
    char arr[50][50] = { 0, };

    for (int j = 0; j < N; j++) {
        string color;
        cin >> color;
        for (int i = 0; i < M; i++) {
            arr[j][i] = color[i];
        }
    }
    for (int n = 0; n < N - 8 + 1; n++) {
        for (int m = 0; m < M - 8 + 1; m++) {

            for (int i = n; i < 8 + n; i++) {
                for (int j = m; j < 8 + m; j++) {
                    if ((j + i) % 2 == 0 && arr[i][j] != 'W')
                        count++;
                    else if ((j + i) % 2 == 1 && arr[i][j] != 'B')
                        count++;
                }
            }
            if (result > count) {
                result = count;
            }
            count = 0;

            for (int i = n; i < 8 + n; i++) {
                for (int j = m; j < 8 + m; j++) {
                    if ((j + i) % 2 == 0 && arr[i][j] != 'B')
                        count++;
                    else if ((j + i) % 2 == 1 && arr[i][j] != 'W')
                        count++;
                }
            }
            if (result > count) {
                result = count;
            }
            count = 0;

        }
    }

    cout << result;
    return 0;
}
/* Comment
2차원 배열의 각 원소의 행과 열의 합이 짝수인지 홀수인지로 W, B 파악하는게 핵심 
*/
#include <iostream>
using namespace std;
bool arr[1000001] = { false, false, };

void isPrime(int N) {
    for (int i = 2; i <= N; i++) arr[i] = true;

    for (int i = 2; i * i <= N; i++) {
        if (arr[i])
            for (int j = i * 2; j <= N; j += i) {
                arr[j] = false;
            }
    }
}

int main() {
    int M, N;
    cin >> M >> N;
    isPrime(N);
    for (int i = M; i <= N; i++)
        if (arr[i])
            cout << i << '\n';
    return 0;
}
// Comment 벡터로도 가능하다
// 
//#include <iostream>
//#include <vector>
//using namespace std;
//
//void isPrime(int N, vector<bool>& arr) {
//    for (int i = 2; i <= N; i++) arr[i] = true;
//
//    for (int i = 2; i * i <= N; i++) {
//        if (arr[i]) {
//            for (int j = i * i; j <= N; j += i) {
//                arr[j] = false;
//            }
//        }
//    }
//}
//
//int main() {
//    int M, N;
//    cin >> M >> N;
//
//    vector<bool> arr(N + 1, false);
//    isPrime(N, arr);
//
//    for (int i = M; i <= N; i++) {
//        if (arr[i]) {
//            cout << i << '\n';
//        }
//    }
//    return 0;
//}
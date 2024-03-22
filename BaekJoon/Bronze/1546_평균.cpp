#include <iostream>

using namespace std;
float score[1000] = {};

int main() {
    int N, M = -1;
    cin >> N;
    float sum = 0;
    for (int i = 0; i < N; i++) {
        float input;
        cin >> input;
        score[i] = input;
        if (input > M)
            M = input;
    }
    for (int i = 0; i < N; i++) {
        score[i] = (score[i] / M) * 100;
    }
    for (int i = 0; i < N; i++) {
        sum += score[i];
    }

    cout << sum / N;
    return 0;
}
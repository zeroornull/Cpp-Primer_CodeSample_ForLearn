//
// Created by xxp on 2022/3/27.
//
#include <iostream>
#include <cstring>

const int N = 2;

struct chaff {
    char dross[20];
    int slag;
};

chaff buffer1[N];

int main() {
    using namespace std;

    chaff arr[N] = {
            {"xp", 24},
            {"x",  23},
    };
    chaff *buffer2 = new(buffer1) chaff[N];

    strcpy(buffer2[0].dross, arr[0].dross);
    buffer2[0].slag = arr[0].slag;
    strcpy(buffer2[1].dross, arr[1].dross);
    buffer2[1].slag = arr[1].slag;

    for (int i = 0; i < N; ++i) {
        cout << "chaff[" << i << "]" << endl;
        cout << "dross: " << buffer2[i].dross << endl;
        cout << "slag: " << buffer2[i].slag << endl;
    }
    return 0;

}

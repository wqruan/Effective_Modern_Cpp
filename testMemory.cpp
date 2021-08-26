#include <iostream>

class test {
    int * t;
    public:
        test(int s) {
            t = new int[s];
            for (int i =0; i < s ;i++) {
                t[i] = 1;
            }
        }
        void replace (int tmp) {
           // delete t+tmp;
            t[tmp] = tmp;
        }

};


int main() {
    test tmp(5);
}
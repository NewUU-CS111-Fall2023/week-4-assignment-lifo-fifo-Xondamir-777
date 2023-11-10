
#include <iostream>
using namespace std;

class TowerOfHanoi{
    void show(int a, int c){
        cout << "\tMove disc from " << a << " - peg to " << c << " - peg" << endl;
    }
public:
    void change(int N, int a, int b, int c){
        if (N==1) {
            show(a, c);
        }
        else {
            change(N-1, a, b, c);
            change(1, a, c, b);
            change(N-1, b, c, a);
        }
    }
};
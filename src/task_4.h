#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<stack<int>> con(N);

    for (int i = 0; i < N; i++) {
        int ki;
        cin >> ki;
        for (int j = 0; j < ki; j++) {
            int n;
            cin >> n;
            con[i].push(n);
        }

    }

    for (int i = 0; i < N; i++) {
        if (con[i].top() != con[i].size()) {
            for (int x = 0; x < N; x++) {
                if (x != i and x+1 == con[i].top() and (con[x].empty() or con[x].top()==con[i].top())){
                    int d = con[i].top();
                    con[i].pop();
                    con[x].push(d);
                    cout << i+1 << " " << x+1 << endl;
                    //break;
                }
            }
        }
    }

    return 0;
}


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
        con[i].push(0);
        for (int j = 0; j < ki; j++) {
            int n;
            cin >> n;
            con[i].push(n);
        }
        //cout << "________" << endl;
    }
    int ii = 0, b = 0;
    int comp;
    while (true){
        bool is_not_right = 0;
        for (int c= 0; c < con.size(); c++){
            stack ss = con[c];
            for (int j = 0; j <= con[c].size(); j++) {
                if (1+c != ss.top()){
                    ss.pop();
                    is_not_right = true;
                    break;
                }
            }
            if (is_not_right){
                break;
            }
        }
        if (!is_not_right){
            break;
        }

        if (con[ii].size()>1){
            comp = con[ii].top() -1;
        }

        for (int c= 0; c < con.size(); c++){
            if (c == ii){
                continue;
            }
            else if (((con[comp].size()<=1) or ((con[comp].size()>1) and (con[comp].top() == ++comp))) and (con[ii].size()>1) and (ii != comp)){
                cout << ii+1 << " " << ++comp << endl;
                int cc = con[ii].top();
                con[ii].pop();
                con[comp].push(cc);
                break;
            }
            else{
                b++;
            }
            if (ii == con.size()-1){
                ii=0;
                if (b==con.size()){
                    con.clear();
                    cout << 0 << endl;
                    break;
                }
                b=0;
            }
            else{
                ii++;
            }
        }

    }
    return 0;
}

#include <iostream>
#include <stack>
using namespace std;

class Expression{
public:
    int expression(string exp){
        stack<int> n1;
        stack<int> n2;
        char prev;
        for (char i : exp) {
            if (i == ' ') {
                continue;
            }
            if ((i == '*' or i == '-' or i == '+') and (prev == '*' or prev == '-' or prev == '+')) {
                n1 = n2;
                while (!n2.empty()) {
                    n2.pop();
                }
            }


            if (i>=48 && i<=57){
                int d = int(i) - 48;
                n1.push(d);
            }
            else if (i == '+'){
                int sum = 0;
                while (!n1.empty()) {
                    sum += n1.top();
                    n1.pop();
                }
                n2.push(sum);
            }

            else if (i == '-') {
                int sub = 0;//2*n1[0]
                while (!n1.empty()) {
                    if (n1.size() == 1){
                        sub += n1.top();
                        n1.pop();
                    }
                    else{
                        sub -= n1.top();
                        n1.pop();
                    }
                }
                n2.push(sub);

            }

            else if (i == '*') {
                int mult = 1;
                while (!n1.empty()) {
                    mult *= n1.top();
                    n1.pop();
                }
                n2.push(mult);
            }
            prev = i;
        }
        return n2.top();
    }
};
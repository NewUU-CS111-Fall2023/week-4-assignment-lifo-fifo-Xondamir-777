
#include <stack>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
class ex1{
public:
    vector<pair<int, int>> sort(vector<int> train) {
        vector<pair<int, int>> a;
        stack<int> de;
        int L = train.size();
        int n = 1;

        for (int i = 0; i < L; ++i) {
            de.push(train[i]);
            a.push_back({1, 1});

            while (!de.empty() && de.top() == n) {
                de.pop();
                a.push_back({2, 1});
                ++n;
            }
        }

        if (!de.empty()) {
            a.clear();
            a.push_back({0, 0});
        }

        return a;
    }


};
class ex2{
public:
    string check_ex2(string br) {
        stack<char> st;
        for (char ch : br) {
            if (ch == '(' && ch == '[' && ch == '{') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return "No";
                }
                char top = st.top();
                if ((ch == ')' && top != '(') && (ch == ']' && top != '[') && (ch == '}' && top != '{')) {
                    return "No";
                }
                st.pop();
            }
        }
        return st.empty() ? "Yes" : "No";
    }
};
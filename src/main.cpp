/*
 * Author: Zokirjonov Xondamir
 * Date: 8.11.2023
 * Name: 
 */

#include <iostream>
#include "task_1.h"
#include "task_2.h"
#include "task_3.h"
#include "task_5.h"

using namespace std;

int main() {
    cout << "Task 1" << std::endl;
    // call for task 1
    cout << "Task 2" << std::endl;
    ex1 e;
    vector<int> v= {3, 2, 1};
    vector<pair<int, int>> a = e.sort(v);
    ex2 ee;
    cout << ee.check_ex2("{[()]}") << "\n" << endl;

    cout << "Task 3" << std::endl;
    Expression E;
    cout << E.expression("8 9 + 1 7 - * ") << endl;

    cout << "Task 4" << std::endl;

    cout << "Task 5" << std::endl;
    TowerOfHanoi toh;
    toh.change(5, 1, 2, 3);
    return 0;
}

#include <iostream>
#include <vector>
#include <locale.h>
#include <algorithm>
using namespace std;

int main() {
    vector <char> list(0, 0);
    vector <char> list1(0, 0);
    vector <char> list2(0, 0);
    char s1 = ' ', s2 = ' ';
    cout << "enter for list1, to end enter '*' " << ' ' << endl;
    while (cin >> s1) {
        list1.push_back(s1);
        if (s1 == '*') {
            list1.pop_back();
            break;
        }
    }
    cout << endl;
    cout << "list1:" << ' ';
    for (unsigned int i = 0; i < list1.size(); ++i) {
        cout << list1[i] << ' ';
    }
    cout << endl;
    cout << "enter for list2, to end enter '*' " << endl;
    while (cin >> s2) {
        list2.push_back(s2);
        if (s2 == '*') {
            list2.pop_back();
            break;
        }
    }
    cout << endl;
    cout << "list2:" << ' ';
    for (unsigned int i = 0; i < list2.size(); ++i) {
        cout << list2[i] << ' ';
    }
    cout << endl;
    for (unsigned int i = 0; i < list1.size(); ++i) {
        for (unsigned int j = 0; j < list2.size(); ++j) {
            if (list2[j] == list1[i]) {
               list.push_back(list1[i]);
            }
        }
    }
    cout << endl;
    sort(list.begin(), list.end());
    vector<char>::iterator t;
    t = unique(list.begin(), list.end());
    list.resize(t - list.begin());
    if (list.size() > 0) {
        cout << "coincidence:";
        for (unsigned int i = 0; i < list.size(); ++i) {
            cout << list[i] << ' ';
        }
        cout << endl;
    }
    else {
        cout << "not coincidence" << ' ' << endl;
    }
    cout << endl << endl;
    list1.clear();
    list2.clear();
    list.clear();
}

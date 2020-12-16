#include <iostream>
#include <string>
#include <set>

using namespace std;

set<string> dict;

int main() {
    string s;
    char c;
    do {
        c = getchar();
        if (isalpha(c)) {
            c = tolower(c);
            s = s + c;
        } else {
            dict.insert(s);
            s = "";
        }
    } while (c != EOF);
    for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it) {
        cout << *it << endl;
    }
}
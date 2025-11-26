#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "Hello";
    string result = "";
    for (int i = 0; i < str.size(); i++) {
        char ch = tolower(str[i]);
        if (ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') {
            result += str[i];
        }
    }
    cout << result << endl;
    return 0;
}


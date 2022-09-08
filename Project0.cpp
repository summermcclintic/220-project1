#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print_vec(const vector<string> vec, string q) {
    string c = string(1, 44);
    string s = string(1, 32);
    string b = string(1, 125);
    string sc = string(1, 59);
    cout << vec[32];
    for (int i = 0; i < 37; i++) {
        cout << q << vec[i] << q << c << s;
    }
    cout << q << vec[37] << q << b << sc << endl;
}

void print_all(const vector<string> vec, string q) {
    for (int i = 0; i < 32; i++) {
        cout << vec[i];
        cout << endl;
    }
    print_vec(vec, q);
    for (int i = 33; i < vec.size(); i++) {
        cout << vec[i];
        cout << endl;
    }
}

//added a comment!
int main() {
    string q = string(1, 34);
    vector<string> data = {"#include <iostream>", "#include <vector>", "#include <string>", "", "using namespace std;", "", "void print_vec(const vector<string> vec, string q) {", "    string c = string(1, 44);", "    string s = string(1, 32);", "    string b = string(1, 125);", "    string sc = string(1, 59);", "    cout << vec[32];", "    for (int i = 0; i < 37; i++) {", "        cout << q << vec[i] << q << c << s;", "    }", "    cout << q << vec[37] << q << b << sc << endl;", "}", "", "void print_all(const vector<string> vec, string q) {", "    for (int i = 0; i < 32; i++) {", "        cout << vec[i];", "        cout << endl;", "    }", "    print_vec(vec, q);", "    for (int i = 33; i < vec.size(); i++) {", "        cout << vec[i];", "        cout << endl;", "    }", "}", "", "int main() {", "    string q = string(1, 34);", "    vector<string> data = {", "    print_all(data, q);", "", "    return 0;", "}", ""};
    print_all(data, q);

    return 0;
}

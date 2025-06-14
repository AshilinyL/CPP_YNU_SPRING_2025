#include <iostream>
#include <string>
using namespace std;

template <typename T>
class minElement {
private:
    T y;
public:
    minElement(T val) : y(val) {}
    void check(T x) {
        cout << (x < y ? x : y);
    }
};

int main() {
    int c;
    cin >> c;
    if (c == 1) {
        string a, b;
        cin >> a >> b;
        minElement<string> me(a);
        me.check(b);
    } else if (c == 2) {
        int a, b;
        cin >> a >> b;
        minElement<int> me(a);
        me.check(b);
    } else if (c == 3) {
        char a, b;
        cin >> a >> b;
        minElement<char> me(a);
        me.check(b);
    }
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum(T x, T y) {
    return x + y;
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << sum(x, y) << endl;

    double a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    string name1 = "fatih", name2 = "mehmet";
    string space = " ";
    cout << sum(name1, sum(space, name2));

    return 0;
}

#include <iostream>
using namespace std;

namespace Demo {
    int a; // In Demo namespace
}

int x; // this is in global namespace

namespace Demo {
    int b; // In Demo namespace
}

int main() {
    using namespace Demo;
    a = b = x = 100;
    cout << a << " " << b << " " << x << endl;
    return 0;
}

#include <iostream>

using namespace std;

namespace Demo {

int a; // In Demo namespace

}

int x; // this is in global namespace

namespace Demo {

int b; // this is in Demo namespace, too
}

int main() {

using namespace Demo;

a = b = x = 100;

cout << a << " " << b << " " << x;

return 0;

}
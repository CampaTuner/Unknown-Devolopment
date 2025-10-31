#include <iostream>

namespace first
{
    int x = 1;
}
namespace second
{
    int x = 2;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically names entities
    //             as long as the namespaces are different

    using namespace first;
    // using namespace std;
    using std::cout;
    // using std::string;
    // int x = 0;

    cout << x;
    cout << first::x;
    cout << second::x;

    return 0;
}

// 32.10

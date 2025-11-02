#include <iostream>
#include <string>
using namespace std;

namespace std2{
    int x = 10;
}

using namespace std2;

int main(){
    
    // cout << std2::x;
    cout << x;

    return 0;
}
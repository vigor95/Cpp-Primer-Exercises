#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main(int argc, char **argv) {
    list<int> li = {
        0, 1, 2, 0, 3, 4, 5, 0, 6
    };
    auto last_z = find(li.rbegin(), li.rend(), 0);
    last_z++;
    int p = 1;
    for (auto iter = li.begin(); iter != last_z.base(); iter++, p++);
    if (p >= (int)li.size())
        cout << "none" << endl;
    else
        cout << p << endl;
    return 0;
}

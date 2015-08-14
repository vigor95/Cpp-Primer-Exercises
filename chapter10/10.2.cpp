#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main (int argc, char **argv)
{
    ifstream in(argv[1]);
    if (!in) {
        cout << "error" << endl;
        exit(1);
    }

    list<string> ls;
    string word;
    while(in >> word)
        ls.push_back(word);
    cin >> word;
    cout << count(ls.begin(), ls.end(), word) << endl;
    return 0;
}

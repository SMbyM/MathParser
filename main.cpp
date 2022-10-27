#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string formula;
    ifstream math("..\\math.txt");
    if (math.is_open())
        while (getline(math, formula))
            cout << formula << endl;
    return 0;
}
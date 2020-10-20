#include "program.cpp"
#include <iostream>

using namespace std;

int main() {
    Chain ch;
    ch.put(3);
    ch.put(7);
    ch.put(2);

    cout << ch.get(3) << endl;

    ch.put(8);

    cout << ch.get(2) << endl;

    for (auto val :  ch.list()){
        cout << val << " ";
    }

    cout << endl;
}
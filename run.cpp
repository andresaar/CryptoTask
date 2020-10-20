#include "program.cpp"
#include <iostream>

using namespace std;

int main() {
    Chain ch;
    ch.put(3);
    ch.put(7);
    ch.put(2);

    cout << "listing: " << endl;
    for (auto val :  ch.list()){
        cout << val << " ";
    }
    cout << endl;

    cout << ch.get(3) << endl;

    ch.put(8);

    cout << "listing sorted: " << endl;
    for (auto val :  ch.sort()){
        cout << val << " ";
    }
    cout << endl;

    cout << ch.get(2) << endl;
    cout << ch.first() << endl;
    cout << ch.last() << endl;

    ch.remove(2);

    cout << "listing: " << endl;
    for (auto val :  ch.list()){
        cout << val << " ";
    }
    cout << endl;

    ch.clear();

    cout << "listing: " << endl;
    for (auto val :  ch.list()){
        cout << val << " ";
    }
    cout << endl;
}
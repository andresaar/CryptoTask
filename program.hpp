#ifndef PROGRAM
#define PROGRAM

#include <vector>
#include <limits.h>

using namespace std;

class Node {
    public:
        int value;
        Node * next;
        Node (int n) {this->value = n; this->next = NULL;};
};

class Chain {
    private:
        Node * firstN;
        Node * lastN;

    public:
        Chain(void);

        void put(int n);
        int get(int n);
        vector<int> list(void);
        int remove(int n);
        void clear(void);
        int first(void);
        int last(void);
        vector<int> sort(void);
        void bubbleSort(vector<int> &a);
};

#endif
#include <vector>

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
        void remove(int n);
        void clear(void);
        int first(void);
        int last(void);
};
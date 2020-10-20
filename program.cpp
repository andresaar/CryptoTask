#include "program.hpp"

Chain::Chain() {
    this->firstN= NULL;
    this->lastN = NULL;
}

void Chain::put(int n){
    if (this->firstN == NULL) {
        this->firstN = new Node(n);
        this->lastN = this->firstN;
    }
    else{
        this->lastN->next = new Node(n);
        this->lastN = this->lastN->next;
    }
}

int Chain::get(int n){
    Node * current = this->firstN;
    if (current == NULL) return INT_MAX;
    for (; n > 0; n++) {
        current = current->next;
    }
    return (current == NULL) ? INT_MAX : current->value;
}
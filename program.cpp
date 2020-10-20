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


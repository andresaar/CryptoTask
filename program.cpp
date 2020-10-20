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
    for (; n > 1; n--) {
        current = current->next;
        if (current == NULL) break;
    }
    return (current == NULL) ? INT_MAX : current->value;
}

vector<int> Chain::list(void) {
    vector<int> vec;
    Node * current = this->firstN;
    while (current != NULL){
        vec.push_back(current->value);
        current = current->next;
    }
    return vec;
}

int Chain::remove(int n){
    Node * current = this->firstN;
    if (current == NULL) return INT_MAX;
    for (; n > 2; n--) {
        current = current->next;
        if (current == NULL) return INT_MAX;
    }

    if (current->next == NULL) return INT_MAX;
    int retVal = current->next->value;
    current->next = current->next->next;

    return retVal;
}

void Chain::clear(void){
    this->firstN = NULL;
}

int Chain::first(void) {
    return this->firstN->value;
}

int Chain::last(void){
    return this->firstN->value;
}
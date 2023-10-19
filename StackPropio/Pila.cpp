#include "Pila.h"

void Pila::Push(String^ value) {
    Node^ newNode = gcnew Node(value);
    if (isEmpty()) {
        start = newNode;
    }
    else {
        newNode->next = start;
        start = newNode;
    }
    count++;
}

bool Pila::isEmpty() {
    return count == 0;
}

String^Pila::Pop() {
    if (!isEmpty()) {
        Node^ temp = start;
        start = start->next;
        count--;
        return temp->dato;
    }
    return nullptr;
}

String^ Pila::Peek() {
    if (!isEmpty()) {
        return start->dato;
    }
    return nullptr;
}

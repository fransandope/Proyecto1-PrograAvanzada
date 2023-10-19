#include "Pila.h"
//extraer cola
void Pila::PushPila(String^ value) {
    Node^ newNode = gcnew Node(value);
    if (isEmptyPila()) {
        start = newNode;
    }
    else {
        newNode->next = start;
        start = newNode;
    }
    count++;
}

bool Pila::isEmptyPila() {
    return count == 0;
}

String^Pila::PopPila() {
    if (!isEmptyPila()) {
        Node^ temp = start;
        start = start->next;
        count--;
        return temp->dato;
    }
    return nullptr;
}

String^ Pila::PeekPila() {
    if (!isEmptyPila()) {
        return start->dato;
    }
    return nullptr;
}

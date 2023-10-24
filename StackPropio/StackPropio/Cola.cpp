#include "Cola.h"
void Cola::Push(String^ value) {
    Node^ newNode = gcnew Node(value);
    if (isEmpty()) {
        start = newNode;
        last = newNode;
    }
    else {
        newNode->next = start;
        start = newNode;
        
    }
    count++;
}

bool Cola::isEmpty() {
    return count == 0;
}

String^ Cola::Pop() {
    if (!isEmpty()) {

        Node^ temp = last;
        start = start->next;
        count--;
        return temp->dato;
    }
    return nullptr;
}

String^ Cola::Peek() {
    if (!isEmpty()) {
        return start->dato;
    }
    return nullptr;
}

void Cola::Clear() {
    while (!isEmpty()) {
        Pop(); // Llama a Pop repetidamente hasta que la pila esté vacía
    }
}

Cola^ Cola::Copiar() {
    Cola^ copia = gcnew Cola();

    Node^ temp = start;

    while (temp != nullptr) {
        copia->Push(temp->dato);
        temp = temp->next;
    }

    return copia;
}

void Cola::BubbleSort() {
    if (isEmpty()) {
        return; // No hay elementos para ordenar
    }

    Node^ top = start;
    Node^ com;

    while (top->next != nullptr) {
        com = top->next;

        while (com != nullptr) {
            if (top->dato->CompareTo(com->dato) > 0) {
                // Intercambia los valores de los nodos
                String^ t = top->dato;
                top->dato = com->dato;
                com->dato = t;
            }
            com = com->next;
        }

        top = top->next;
    }
}

String^ Cola::ElementAt(int index) {
    if (index >= this->count || index < 0) return nullptr;

    Node^ actual = start;
    while (index > 0) {
        actual = actual->next;
        index--;
    }

    return actual->dato;
}

int Cola::Count() {
    return count;
}
#include "Cola.h"
void Cola::PushCola(String^ value) {
    Node^ newNode = gcnew Node(value);
    if (isEmptyCola()) {
        start = newNode;
        rear = newNode;
    }
    else {
        newNode->next = rear;
        start = newNode;
    }
    count++;
}

bool Cola::isEmptyCola() {
    return count == 0;
}

String^ Cola::PopCola() {
    if (!isEmptyCola()) {
        Node^ temp = start;
        start = start->next;
        count--;
        return temp->dato;
    }
    return nullptr;
}

String^ Cola::PeekCola() {
    if (!isEmptyCola()) {
        return start->dato;
    }
    return nullptr;
<<<<<<< Updated upstream
}
=======
}
>>>>>>> Stashed changes

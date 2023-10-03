#include "Stack.h"

void Stack::InsertAtEnd(int value) {
    Node^ new_node = gcnew Node();
    new_node->value = value;
    if (isEmpty()) {
        start = new_node;
        end = new_node;
    }
    else {
        end->next = new_node;
        end = new_node;
    }
    count++;
}

Node^ Stack::ExtractAtEnd() {
    Node^ temp = end;
    if (!isEmpty()) {
        if (count == 1) {
            end = end->next;
            start = end;
        }
        else {
            Node^ pretemp = start;
            temp = pretemp->next;
            while (temp != end) {
                pretemp = temp;
                temp = pretemp->next;
            }
            pretemp->next = temp->next;
            end = pretemp;
        }
        count--;
    }
    return temp;
}

Node^ Stack::GetNode(int value) {
    Node^ temp = start;
    while ((temp) && (temp->value != value)) {
        temp = temp->next;
    }
    return temp;
}

bool Stack::isEmpty() {
    return count == 0;
}

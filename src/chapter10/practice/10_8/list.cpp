//
// Created by xxp on 2022/4/2.
//

#include "list.h"
#include <iostream>

List::List() {
    count = 0;
}

bool List::isempty() const {
    return count == 0;
}

bool List::isfull() const {
    return count == MAX;
}

int List::itemcount() const {
    return count;
}

void List::additem(const Item &item) {
    if (isfull()) {
        std::cout << "full already" << std::endl;
    } else {
        items[++count] = item;
    }
}

void List::visit(void (*pf)(Item &)) {
    for (int i = 0; i < count; ++i) {
        (*pf)(items[i]);
    }
}
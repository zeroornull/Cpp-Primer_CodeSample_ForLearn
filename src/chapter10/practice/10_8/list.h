//
// Created by xxp on 2022/4/2.
//

#ifndef FIRSTPROJECT_LIST_H
#define FIRSTPROJECT_LIST_H

#include <string>

const int MAX = 10;

struct people {
    std::string name;
    int age;
};

typedef struct people Item;

class List {
private:
    Item items[MAX];
    int count;
public:
    List();

    bool isempty() const;

    bool isfull() const;

    int itemcount() const;

    void additem(const Item &item);

    void visit(void (*pf)(Item &));
};


#endif //FIRSTPROJECT_LIST_H

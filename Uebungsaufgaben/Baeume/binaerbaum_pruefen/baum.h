#ifndef BAUM_H
#define BAUM_H

struct Element {
    int key = 0;
    Element * left = nullptr;
    Element * right = nullptr;

    bool empty() {
        return left == nullptr;
    }

    void set(int key_) {
        key = key_;
        if (empty()) {
            left = new Element();
            right = new Element();
        }
    }
};

#endif
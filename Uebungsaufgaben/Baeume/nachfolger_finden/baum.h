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

    void insert(int key_) {
        if (empty()) { set(key_); return; }
        if (key_ <= key) { left->insert(key_); return; }
        right->insert(key_);
    }

    Element * get( int key_ ) {
        if (empty()) { return nullptr; }
        if (key_ == key) { return this; }
        if (key_ < key) { return left->get(key_); }
        return right->get(key_);
    }

    Element * successor( int key_ );
};

#endif
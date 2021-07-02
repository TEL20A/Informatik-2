#include<iostream>
#include<string>

class Knoten
{
private:
    int data;
    Knoten * links = nullptr;
    Knoten * rechts = nullptr;

public:
    bool empty()
    {
        return links == nullptr && rechts == nullptr;
    }
    
    void insert(int x)
    {
        if (empty())
        {
            data = x;
            links = new Knoten();
            rechts = new Knoten();
            return;
        }
        if (x <= data) links->insert(x);
        else rechts->insert(x);
    }
    
    void print()
    {
        if (empty()) return;
        
        links->print();
        std::cout << " " << data << " ";
        rechts->print();
    }
    
    // Aufgabe 01
    int summe();
    
    // Aufgabe 02
    void min_einfuegen();
    
    // Aufgabe 03
    int get(std::string s);
};


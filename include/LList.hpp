#pragma once

struct Node
{
    Node(int d) : data(d) {}

    int data;
    Node* next;
};

class List
{
 public:
    List() : head(nullptr), tail(nullptr) {}
    virtual ~List();

    void add_node(int data);
    void traverse();
    void reverse();

    Node* get_head() const { return head; }
    Node* get_tail() const { return tail; }

 private:
    Node* head;
    Node* tail;
};

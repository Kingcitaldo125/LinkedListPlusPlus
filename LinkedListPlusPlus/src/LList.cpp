#include <iostream>

#include "LList.hpp"

namespace llist_plus_plus {

List::~List()
{
    auto x = head;

    while(x)
    {
        const auto tmp = x->next;
        if (x)
            delete x;
        x = nullptr;
        x = tmp;
    }
}

void List::add_node(int data)
{
    Node* nnode = new Node(data);
    nnode->next = head;

    if (head == nullptr)
        tail = nnode;

    head = nnode;
}

void List::remove(int val)
{
    if(head == nullptr)
        return;

    auto h = head;
    auto prev = h;
    prev = nullptr;

    while(h)
    {
        if (h->data == val)
        {
            const auto hnxt = h->next;

            if (prev == nullptr)
            {
                head = hnxt;
                return;
            }

            prev->next = hnxt;
            return;
        }

        prev = h;
        h = h->next;
    }

    std::cout << "Cannot find '" << val << "' in list.\n";
}

void List::traverse()
{
    auto x = head;

    while(x)
    {
        std::cout << x->data << " ";
        x = x->next;
    }
    std::cout << "\n";
}

void List::reverse()
{
    Node* h = head;
    Node* prev = nullptr;

    if (h == nullptr)
        return;

    tail = h;

    while(h->next)
    {
        const auto tmp = h->next;
        h->next = prev;
        prev = h;
        h = tmp;
    }

    h->next = prev;

    head = h;
}
}

#pragma once
#include "Node.h"

template <typename T>
class LinkedList
{
private:
    Node<T>* head;
    Node<T>* tail;
    size_t size;
public:
    LinkedList();
    ~LinkedList();
    size_t GetSize() const;
    void InsertAtEnd(T value);
    void InsertAtBeginning(T value);
};

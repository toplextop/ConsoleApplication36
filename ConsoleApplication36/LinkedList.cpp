#include "LinkedList.h"

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr), size(0) {}
template <typename T>
LinkedList<T>::~LinkedList()
{
    while (head != nullptr)
    {
        Node<T>* temp = head;
        head = head->GetNext();
        delete temp;
    }
}
template <typename T>
size_t LinkedList<T>::GetSize() const
{
    return size;
}
template <typename T>
void LinkedList<T>::InsertAtEnd(T value)
{
    Node<T>* newNode = new Node<T>(value);
    if (tail == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        tail->SetNext(newNode);
        newNode->SetPrev(tail);
        tail = newNode;
    }
    size++;
}
template <typename T>
void LinkedList<T>::InsertAtBeginning(T value)
{
    Node<T>* newNode = new Node<T>(value);
    if (head == nullptr)
    {
        head = tail = newNode;
    }
    else
    {
        newNode->SetNext(head);
        head->SetPrev(newNode);
        head = newNode;
    }
    size++;
}

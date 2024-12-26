#include "Node.h"

template <typename T>
Node<T>::Node(T data) : data(data), next(nullptr), prev(nullptr) {}
template <typename T>
T Node<T>::GetData() const
{
    return data;
}
template <typename T>
void Node<T>::SetData(T data)
{
    this->data = data;
}
template <typename T>
Node<T>* Node<T>::GetNext() const
{
    return next;
}
template <typename T>
void Node<T>::SetNext(Node* next)
{
    this->next = next;
}
template <typename T>
Node<T>* Node<T>::GetPrev() const
{
    return prev;
}
template <typename T>
void Node<T>::SetPrev(Node* prev)
{
    this->prev = prev;
}
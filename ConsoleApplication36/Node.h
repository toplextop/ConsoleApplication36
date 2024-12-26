#pragma once
template <typename T>
class Node
{
private:
    T data;
    Node* next;
    Node* prev;
public:
    Node(T data);
    T GetData() const;
    void SetData(T data);
    Node* GetNext() const;
    void SetNext(Node* next);
    Node* GetPrev() const;
    void SetPrev(Node* prev);
};


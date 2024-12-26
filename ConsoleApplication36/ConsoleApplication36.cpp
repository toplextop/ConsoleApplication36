#include "LinkedList.h"
#include <iostream>

int main()
{
    LinkedList<int> list;
    list.InsertAtEnd(10);
    list.InsertAtBeginning(20);
    list.InsertAtEnd(30);
    std::cout << "Size of list: " << list.GetSize() << std::endl;
}
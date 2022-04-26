#pragma once
#include <iostream>

using namespace std;

template<typename T>
class List
{
public:
    List();
    ~List();
    int get_Size();
    void push_back(T data);
    void push_front(T data);
    void pop_front();
    void pop_back();
    void insert(T data, const int index);
    void removeInd(const int index);
    void clear();
    T& operator[](const int index);

private:
    template<typename T>
    class Node
    {
    public:
        Node* pNext;
        T data;
        Node(T data = T(), Node* pNext = nullptr)
        {
            this->data = data;
            this->pNext = pNext;
        }
    };
    int Size;
    Node<T>* head;
};
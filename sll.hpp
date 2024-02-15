#include "node.h"
#include <memory>

template <typename T>
class SLL
{
public:
    // Constructor
    SLL() : head_(nullptr) {}

    // ⭐TODO: Using your knowledge from the activity and the add function, finish the function below to insert a NEW NODE to the head of SLL
    void push_front(Node *newHead)
    {
        
    }

    // ⭐TODO: Using your knowledge from the activity and the add function, finish the function below to remove the first element of the SLL
    void pop_front(Node *newHead)
    {
        
    }

    // ⭐TODO: Loop through the entire SLL and display each value
    // ➕ADDITIONALLY: print what is the head SLL in a new line and the size of the elements in a new line
    void display()
    {
        
    }

    // ⭐TODO: Loop through the entire SLL and add the element to the back of the SLL
    void push_back(T value)
    {
        
    }
    

    // ⭐TODO: Finish the function below so that it inserts the value before the target location
    void insert(Node *newTrain, T target)
    {
        
    }

private:
    Node<T> *head_;
};
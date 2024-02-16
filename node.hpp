
template <typename T>
struct Node
{
    Node(T value) : value_(value), next_(nullptr) {}

    Node *next_;
    T value_;
};

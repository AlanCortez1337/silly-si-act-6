
template <typename T>
struct DLLNode
{
    DLLNode(int value) : value_(value), next_(nullptr), prev_(nullptr) {}

    DLLNode *next_;
    DLLNode *prev_;

    T value_;
};

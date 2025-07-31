#pragma once
#include <vector>
#include <functional>

template <typename T, typename Compare = std::less<T>>
class Heap {
public:
    virtual void push(const T& value) = 0;
    virtual T pop() = 0;
    virtual bool isEmpty() const = 0;
    virtual ~Heap() = default;
};

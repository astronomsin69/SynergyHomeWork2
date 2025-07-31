#pragma once
#include <stdexcept>

template <typename T>
class Queue {
public:
    virtual void push(const T& value) = 0;
    virtual T pop() = 0;
    virtual bool isEmpty() const = 0;
    virtual ~Queue() = default;
};

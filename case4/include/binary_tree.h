#pragma once
#include <optional>

template <typename T>
class BinaryTree {
public:
    virtual void push(const T& value) = 0;
    virtual std::optional<T> pop() = 0; // Возвращает std::nullopt, если дерево пусто
    virtual bool search(const T& value) const = 0;
    virtual ~BinaryTree() = default;
};

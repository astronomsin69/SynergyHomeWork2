#include <gtest/gtest.h>
#include "../include/heap.h"

class TestHeap : public ::testing::Test {
protected:
    Heap<int>* heap;

    void SetUp() override {
        heap = new Heap<int>();
    }

    void TearDown() override {
        delete heap;
    }
};

TEST_F(TestHeap, PushPop) {
    heap->push(10);
    heap->push(5);
    EXPECT_EQ(heap->pop(), 5); // Для min-heap
}

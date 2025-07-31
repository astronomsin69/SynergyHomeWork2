#include <gtest/gtest.h>
#include "../include/queue.h"

class TestQueue : public ::testing::Test {
protected:
    Queue<int>* queue;

    void SetUp() override {
        queue = new Queue<int>(); // 
    }

    void TearDown() override {
        delete queue;
    }
};

TEST_F(TestQueue, PushPop) {
    queue->push(42);
    EXPECT_EQ(queue->pop(), 42);
    EXPECT_TRUE(queue->isEmpty());
}

TEST_F(TestQueue, EmptyQueue) {
    EXPECT_THROW(queue->pop(), std::out_of_range);
}

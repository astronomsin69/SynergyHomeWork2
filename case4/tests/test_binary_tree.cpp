#include <gtest/gtest.h>
#include "../include/binary_tree.h"

class TestBinaryTree : public ::testing::Test {
protected:
    BinaryTree<int>* tree;

    void SetUp() override {
        tree = new BinaryTree<int>();
    }

    void TearDown() override {
        delete tree;
    }
};

TEST_F(TestBinaryTree, Search) {
    tree->push(10);
    tree->push(20);
    EXPECT_TRUE(tree->search(10));
    EXPECT_FALSE(tree->search(99));
}

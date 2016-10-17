#include <gtest/gtest.h>
#include "Collisions.h"


TEST(Collisions, Right) {
    ASSERT_EQ(getCollisionWithBrick(Ball(QPointF(), QPointF()), QRectF(2, -2, 20, 20)), Right);
}

TEST(Collisions, Left) {
    ASSERT_EQ(getCollisionWithBrick(Ball(QPointF(), QPointF()), QRectF(-20, -2, 20, 20)), Left);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
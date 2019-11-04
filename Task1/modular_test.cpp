#include "modular.cpp"
#include <gtest/gtest.h>
 
TEST(ModularExponentialTest, NonZeroModulus) 
    { 
    ASSERT_EQ(10, fastModExp(100, 30, 45));
    ASSERT_EQ(0, fastModExp(1000, 1000, 1000));
    ASSERT_EQ(847766448, fastModExp(130882282, 326753, 982929929));
    ASSERT_EQ(397778425, fastModExp(151515157, 676622, 828282882));
    ASSERT_EQ(682771105, fastModExp(131999920, 234979, 991540365));
    }
 
TEST(ModularExponentialTest, ZeroModulus) 
    {
    ASSERT_EQ(-1, fastModExp(0, 0, 0));
  
    }

 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }

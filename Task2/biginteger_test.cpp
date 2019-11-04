#include "biginteger.cpp"
#include <gtest/gtest.h>

using namespace std;

struct BigintegerTest : public testing::Test {
	Biginteger *sum;
        void SetUp() { sum = new Biginteger;}
        void TearDown() {delete sum; }

};

TEST_F(BigintegerTest, Addition) 
    { 
    Biginteger *sum;
    ASSERT_EQ("2000", sum->findSum("1000","1000"));
    ASSERT_EQ("39794490416508552682075", sum->findSum("39793007149945436100475", "1483266563116581600"));
    ASSERT_EQ("1664528000760286702952579179821677915367868112822353247564", sum->findSum("1664528000760286702952579179595709221605411669348936629786", "225968693762456443473416617778"));
    }

TEST_F(BigintegerTest, Subtraction) 
 { 
    Biginteger *sub;
    ASSERT_EQ("0000", sub->findDiff("1000","1000"));
    ASSERT_EQ("09999999999999", sub->findDiff("10000000000000","1"));
    ASSERT_EQ("00081810464646470000000000000", sub->findDiff("10081818181818187171771717171","10000007717171717171771717171"));
    ASSERT_EQ("1664528000760286702952579179369740527842955225875520012008", sub->findDiff("1664528000760286702952579179595709221605411669348936629786", "225968693762456443473416617778"));
    }
 
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    }





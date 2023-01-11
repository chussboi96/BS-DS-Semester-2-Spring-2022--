#include "Q2.cpp"
#include <gtest/gtest.h>


TEST(Class_Company, inttype) 
{   		
   Company<int>c(3,3);
   int array[]={1,2,3};
   int array2[]={3,4,4};
   c.insert(array,array2);
   EXPECT_FLOAT_EQ(4,(c.Union()));
   EXPECT_FLOAT_EQ(3,c.intersection());
   EXPECT_FLOAT_EQ(0,c.disjoint());
}

TEST(Class_Company, chartype) 
{   		
   Company<char>c(3,3);
   char array[]={'a','b','c'};
   char array2[]={'c','d','d'};
   c.insert(array,array2);
   EXPECT_FLOAT_EQ('d',(c.Union()));
   EXPECT_FLOAT_EQ('c',c.intersection());
   EXPECT_FLOAT_EQ(0,c.disjoint());
}
TEST(Class_Company, stringtype) 
{   		
   Company<string>c(3,3);
   string array[3]={"Programming", "Debugging","RequirementVerification"};
   string array2[3]={"Debugging","RequirementVerification","Testing"};
   c.insert(array,array2);
   EXPECT_EQ("Testing",(c.Union()));
   EXPECT_EQ("Debugging",c.intersection());
   EXPECT_FLOAT_EQ(0,c.disjoint());
}

int main(int argc, char **argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}

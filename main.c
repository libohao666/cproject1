//#include<gtest/gtest.h>
#include<iostream>
#include<cstdio>
#include <haizei_test.h>
#include <test.h>

using namespace std;

__attribute__((constructor))
int haizei_init() {
	printf("hello haizei\n");
	return 0;
}

TEST(testCase,test0){
	EXPECT_EQ(add(2,3),5);
	EXPECT_EQ(add(2,4),6);
	EXPECT_EQ(add(2,5),7);
	EXPECT_EQ(add(2,6),8);
}
TEST(testCase,test1){
	EXPECT_EQ(add(2,3),5);
	EXPECT_EQ(add(2,4),6);
	EXPECT_EQ(add(2,5),7);
	EXPECT_EQ(add(2,6),8);
}
TEST(testCase,test2){
	EXPECT_EQ(add(2,3),5);
	EXPECT_EQ(add(2,4),6);
	EXPECT_EQ(add(2,5),7);
	EXPECT_EQ(add(2,6),8);
}

int main(int argc,char **argv){
	return RUN_ALL_TESTS();
}

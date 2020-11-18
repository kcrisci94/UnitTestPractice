/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

/*********TESTS FOR PALINDROMES*********/

//tests a simple non-palindrome
TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

//tests a simple palindrome
TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

//tests a palindrome with spaces
TEST(PracticeTest, is_simple_spaces_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ada d ada");
    ASSERT_TRUE(actual);
}

//tests a palindrome with spaces, letters and symbols
TEST(PracticeTest, symbols_and_letters_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ada //;d;// ada");
    ASSERT_TRUE(actual);
}

//tests a palindrome with spaces, letters, symbols, and numbers
TEST(PracticeTest, symbols_and_letters_and_numbers_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("ada 2//;1d1;//2 ada");
    ASSERT_TRUE(actual);
}

//tests a simple non-palindrome
TEST(PracticeTest, symbols_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}

//tests an empty palindrome
TEST(PracticeTest, empty_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

//tests 5 consecutive spaces
TEST(PracticeTest, spaces5_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("     ");
    ASSERT_TRUE(actual);
}

//tests 6 consecutive spaces
TEST(PracticeTest, spaces4_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("    ");
    ASSERT_TRUE(actual);
}


/************TESTS FOR DESCENDING ORDER***************/

//The following 6 tests test simple integers starting from all combinations
TEST(PracticeTest, integers_increasing_sorted)
{
    Practice obj;
    int x = 5;
    int y = 6; 
    int z = 7;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, sorted_integers_sorted)
{
    Practice obj;
    int x = 7;
    int y = 6;
    int z = 5;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, mixed_integers_sorted)
{
    Practice obj;
    int x = 6;
    int y = 7;
    int z = 5;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, mixed_integers2_sorted)
{
    Practice obj;
    int x = 6;
    int y = 5;
    int z = 7;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, mixed_integers3_sorted)
{
    Practice obj;
    int x = 7;
    int y = 5;
    int z = 6;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, mixed_integers4_sorted)
{
    Practice obj;
    int x = 5;
    int y = 7;
    int z = 6;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 7);
    ASSERT_TRUE(y == 6);
    ASSERT_TRUE(z == 5);
}


//tests 3 integers using a negative value
TEST(PracticeTest, negative_and_positive__sorted)
{
    Practice obj;
    int x = 0;
    int y = -4;
    int z = 6;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 6);
    ASSERT_TRUE(y == 0);
    ASSERT_TRUE(z == -4);
}

//tests larger integers with a negative value
TEST(PracticeTest, medium_integers_sorted)
{
    Practice obj;
    int x = 580;
    int y = 324;
    int z = -689;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 580);
    ASSERT_TRUE(y == 324);
    ASSERT_TRUE(z == -689);
}

//tests large integers
TEST(PracticeTest, large_integers_sorted)
{
    Practice obj;
    int x = 5800000;
    int y = 3240000;
    int z = -6890000;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 5800000);
    ASSERT_TRUE(y == 3240000);
    ASSERT_TRUE(z == -6890000);
}

TEST(PracticeTest, two_same_sorted)
{
    Practice obj;
    int x = 5;
    int y = 5;
    int z = 10;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 10);
    ASSERT_TRUE(y == 5);
    ASSERT_TRUE(z == 5);
}


TEST(PracticeTest, all_same_sorted)
{
    Practice obj;
    int x = 5;
    int y = 5;
    int z = 5;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 5);
    ASSERT_TRUE(y == 5);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, two_same2_sorted)
{
    Practice obj;
    int x = 5;
    int y = 10;
    int z = 5;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 10);
    ASSERT_TRUE(y == 5);
    ASSERT_TRUE(z == 5);
}

TEST(PracticeTest, two_same3_sorted)
{
    Practice obj;
    int x = 10;
    int y = 5;
    int z = 5;
    obj.sortDescending(x, y, z);
    ASSERT_TRUE(x == 10);
    ASSERT_TRUE(y == 5);
    ASSERT_TRUE(z == 5);
}




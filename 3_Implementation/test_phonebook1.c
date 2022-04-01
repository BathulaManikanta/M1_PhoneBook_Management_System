/**
 * @file test_phonebook1.c
 * @author Jayanth (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-09-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include "phonebook1.h"
#include "unity.h"
#include<stdlib.h>

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

search_t s = TEST;


void test_displayContact(void)
{
    TEST_ASSERT_EQUAL(0, displayContact(457));
}

void test_displayAllContacts(void)
{
    TEST_ASSERT_EQUAL(0, displayAllContacts());
}

void test_searchContact(void)
{
    char sel[10] = "hjggg" ;
    TEST_ASSERT_EQUAL(0, searchContact(sel,s));
}


void test_retriveFromFile(void)
{
    TEST_ASSERT_EQUAL(5,retriveFromFile());
}


void test_storeToFile(void)
{
    TEST_ASSERT_EQUAL(5,storeToFile());
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_displayContact);
    RUN_TEST(test_displayAllContacts);
    RUN_TEST(test_searchContact);
    //RUN_TEST(test_removeContact);
    RUN_TEST(test_retriveFromFile);
    RUN_TEST(test_storeToFile);

    /* Close the Unity Test Framework */
    return UNITY_END();
}
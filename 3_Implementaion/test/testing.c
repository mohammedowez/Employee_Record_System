#include "unity.h"
#include "headerFiles.h"


void gotoxy_test()
{ 
	TEST_ASSERT_EQUAL(1,gotoxy(1,2));
	
}

void  login_test()
{
	TEST_ASSERT_EQUAL(1,login());
}

void setUp()
{ 

}

void tearDown()
{ 

}


int main()
{
	UNITY_BEGIN();
	
	
	RUN_TEST(gotoxy_test);
	RUN_TEST(login_test);
	//RUN_TEST(print_char_test);
	return UNITY_END();
	
}
	

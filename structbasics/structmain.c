#include <stdio.h>
#include "struct.h"
int		main()
{
	t_name test1;  //creating variables of data type t_name (look @ struct.h file)
	t_name test2;
	t_name test3;

	test1.a = 5;  //. allows you to access attribute of struct that you want to use
	test2.b = 6;
	test3.str = "Hello world";

	printf("test1=%d\n", test1.a);	
	printf("test2=%d\n", test2.b);	
	printf("test3=%s\n", test3.str);

	return (0);
}

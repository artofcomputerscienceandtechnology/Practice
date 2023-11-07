/*
Project: C++ Class
File: lesson0.cpp

Notes:
Remember ; after each code statement (but not after {} or ()
If you get errors, check the line and the lines above where 
the computer says the error is

Escape characters for inside quotes
\n newline
\\ print backslash character
\' \" print quote mark

https://www.cplusplus.com
https://www.tutorialspoint.com/cplusplus/index.htm
https://www.w3schools.com/cpp/default.asp
*/

//Include file stdio.h, uses preprocessor derective #include
#include <stdio.h>

int main()
{
	
	//Customary first program "Hello World"
	//example of printf() function
	printf("Hello world \n ");

	
	//Declare variables
	int a, b, c; //integers
	float pi; //floating points (variables with decimals)
	//Intialize variables
	a = 1;
	b = 2;
	pi = 3.14; 
	//Add 2 variables
	c = a + b;
	

	
	//Print value of variable c
	printf("%d  \n", c);


	if (c >= 10)
	{
		printf("C >= 10 \n");
	}
	else if (c < 10)
	{
		printf("C < 10 \n");
	}
	else
	{
		printf("C is not >, <, or = 10 \n");
	}
	
	//switch ()
	switch (c)
	{
 		case 1:
    	case 2:
    	case 10:
    		printf("c is 1, 2 or 3 \n");
    		break;
    	default:
    		printf("c is not 1, 2 nor 3 \n");
    }
	//For Loop
	for (int x = 0; x < 10; x++)
	{
		printf("X is %d. X + 10 = %d \n", x, x + 10);
		
	}
	

	
	
	//While Loop
	int y = 0;
	while (y < 20)
	{
		printf("Y = %d \n", y);
		y += 2; 
		y = y + 2;
		
	}

	
	//Infinite loop
	
	bool tf = true;
	int z = 0;
	while (false)
	{
		printf("Z = %d \n", z);
		z++; //Incriment z by 1
	}
	
	
	return 0; //the value returned by the function, here main()
}

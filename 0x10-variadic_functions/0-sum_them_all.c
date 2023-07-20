#include <stdio.h>
#include <stdarg.>
#include "variadic_functions.h"
 /**
  * sum_function takes an integer num as the first parameter
  * function specifies the number of integers that will be passed as additional arguments
  *  @n: The number of paramters passed to the function.
  * @...: A variable number of paramters to calculate the sum of.	 
  * Return: If n == 0 - 0.
  * Otherwise - the sum of all parameters.
  **/
        int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, a);

	for (i = 0; i < a; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

}

int main() {
    int result = sum_them_all(5, 1, 2, 3, 4, 5);
    printf("Sum: %d\n", result); // Output: Sum: 15

    return 0;
}


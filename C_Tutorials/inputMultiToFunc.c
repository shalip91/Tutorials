#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>
#include <stdarg.h>



int
add_multiple_values (int number, ...)
{
  int corrent, counter, total = 0;
  
  /* Declare a variable of type ‘va_list’. */
  va_list parameters;

  /* Call the ‘va_start’ function. */
  va_start (parameters, number);

  for (counter = 0; counter < number; counter++)
    {
      /* Get the values of the optional parameters. */
      corrent = va_arg (parameters, int);
      printf("corrent num is :%d\n", corrent);
      total += corrent;
    }

  /* End use of the ‘parameters’ variable. */
  va_end (parameters);

  return total;
}

int main()
{
  

    printf("%d ", add_multiple_values(5, 1, 2, 3, 4, 5));

    return 0;
}

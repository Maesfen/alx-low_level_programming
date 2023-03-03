#include <stdio.h>

int main(void)
{
  int n;
  int a[5];
  int *p;

<<<<<<< HEAD
	 printf("a[2] = %d\n", a[2]);
<<<<<<< HEAD
	return (0);
=======
return (0);
>>>>>>> 8abe44deae50174625e055e3d0ae7a2a33ebd047
=======
  a[2] = 1024;
  p = &n;
  /*
   * write your line of code here...
   * Remember:
   * - you are not allowed to use a
   * - you are not allowed to modify p
   * - only one statement
   * - you are not allowed to code anything else than this line of code
   */
 p[5] = 98;
  /* ...so that this prints 98\n */
  printf("a[2] = %d\n", a[2]);
  return (0);
>>>>>>> 28452a65173499cfb83604cd25da3b0d013ceeb5
}

#include "myhead.h"
#include <assert.h>

void test_assert(int x)
{
    assert(x ==20);
  
}

int main() {
   int num1 = 10, num2 = 10, num3;
   num3 = add(num1, num2);

printf("Addition of Two numbers : %d", num3);   
test_assert(num3);
//assert(num3 !=20 && "function add: p should be 20");
//printf("Addition of Two numbers : %d", num3);
return 0;
}

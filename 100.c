#include <stdio.h>
int main()
{
int count = 0;
for (;;)
{
printf("count %d\n", count);
count += 1;
if (count == 1000000000000) break;
}
}
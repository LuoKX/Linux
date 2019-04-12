#include <stdio.h>
int main()
{
struct X { int a; char b; int c; };
printf("%ld,", sizeof(struct X));
struct Y { int a; char b; char c; int d; };
printf("%ld\n", sizeof(struct Y));
return 0;
}

#include <stddef.h>
#include <stdio.h>
#include <string.h>

void
print_xtime(const char* s, int* x);

int
main()
{
  int x;
  scanf("%d", &x);
  print_xtime("Hello Worlds", &x);
  return 0;
}

void
print_xtime(const char* s, int* x)
{
  const char* p = s;
  for (size_t i = 0; i < *x; i++) {
    while (*s != '\0') {
      printf("%c",*s);
      s++;
    }
    printf("\n");
    s = p;
  }
}
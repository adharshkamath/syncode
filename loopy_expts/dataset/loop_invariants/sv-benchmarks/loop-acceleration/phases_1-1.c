
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);

int main(void) {
  unsigned int x = 0;

  while (x < 0x0fffffff) {
    if (x < 0xfff0) {
      x++;
    } else {
      x += 2;
    }
  }

  {;
//@ assert(!(x % 2));
}

}
#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);
extern int unknown(void);

int main() {
  
  int c;
  int n;
  
  (c = 0);
  assume((n > 0));
  
  while (unknown()) {
    {
      if ( unknown() ) {
        if ( (c != n) )
        {
        (c  = (c + 1));
        }
      } else {
        if ( (c == n) )
        {
        (c  = 1);
        }
      }

    }

  }
  
if ( (n <= -1) )
{;
//@ assert( (c != n) );
}

}
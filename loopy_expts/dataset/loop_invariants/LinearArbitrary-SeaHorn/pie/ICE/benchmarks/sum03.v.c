#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);
extern int unknown_int(void);
extern unsigned int unknown_uint(void);

#define a (1)

int main() { 
  int sn=0;
  unsigned int loop1=unknown_uint(), n1=unknown_uint();
  unsigned int x=0;
  int v1, v2, v3;

  while(1){
    sn = sn + a;
    x++;
    {;
//@ assert(sn==x*a || sn == 0);
}

    v1 = unknown_int();
    v2 = unknown_int();
    v3 = unknown_int();
  }
}

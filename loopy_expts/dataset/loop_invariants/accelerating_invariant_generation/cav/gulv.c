#include <stdlib.h>
#define assume(e) if(!(e)) exit(-1);
extern int unknown_int(void);

int nondet();

int main(){
  int x = 0, y = 0, w = 0, z = 0;
while (unknown_int()) {
   if (unknown_int())
     {x = x+1; y = y+100;}
   else if (unknown_int()){
     if (x >= 4)
       {x = x+1; y = y+1;}
   }
 else if (y > 10*w && z >= 100*x)
     {y = -y;}
   w = w+1; z = z+10;
  x = x; 
 
}
if (x >= 4 && y <= 2)
  goto ERROR;

return 0;

{ ERROR: {; 
//@ assert(\false);
}
}
}
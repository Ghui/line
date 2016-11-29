#include <stdio.h>
#include <stdlib.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

//Insert your line algorithm here
void draw_line(int x0, int y0, int x1, int y1, screen s, color c) {
  int x,y;
  double A,B,m;
  x = x0;
  y = y0;
  A = y1 - y0;
  B = x0 - x1;
  if(A/-B >= 0 && A/-B <= 1){
    m = A + 0.5*B;
    while(x<=x1){
      plot(s,c,x,y);
      if(m>0){
	y++;
	m +=B;
      }
      x++;
      m+=A;
    }
  }
  else if(A/-B > 1){
    m = 0.5*A + B;
    while(x<=x1){
      plot(s,c,x,y);
      if(m<0){
	x++;
	m += A;
      }
      y++;
      m += B;
    }
  }
  else if(A/-B <= 0 && A/-B >= -1){
    m = A - 0.5*B;
    while(x <= x1){
      plot(s,c,x,y);
      if(m<0){
	y--;
	m = m - B;
      }
      x++;
      m +=A;
    }
  }
  else if(A/-B < -1){
    m = -0.5 *A + B;
    while(x <=x1){
      plot(s,c,x,y);
      if(m>0){
	x++;
	m += A;
      }
      y--;
      m = m - B;
    }
  }

}


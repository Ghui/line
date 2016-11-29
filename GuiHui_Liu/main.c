#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"

int main() {

  screen s;
  color c;
 
  
  c.red = MAX_COLOR;
  c.green = MAX_COLOR;
  c.blue = 0;
  
  clear_screen(s);

  int i, j;

  for (i=0; i < YRES; i++)
    for (j=0; j < XRES; j++ )
      plot(s, c, i, j);
  
  c.green = 0;

  /*draw_line(0, 0, 500, 400, s, c);
  draw_line(0,0,50,500,s,c);
  draw_line(0,350,450,0,s,c);
  draw_line(0,350,150,0,s,c);*/
  draw_line(0,0,250,500,s,c);
  draw_line(250,500,500,0,s,c);
  draw_line(0,350,500,0,s,c);
  draw_line(0,350,500,350,s,c);
  draw_line(0,0,500,350,s,c);
  
  //Note: Display may not work on your system
  //save_ppm and save_extension should be fine
  display(s);
  save_ppm(s, "pic.ppm");
  save_extension(s, "whatevs.png");
}  

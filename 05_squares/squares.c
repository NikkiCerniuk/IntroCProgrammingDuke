#include <stdio.h>
#include <stdlib.h>

int isInRange(int coord, int offset, int size) {
  if ((coord >=offset) && coord < (offset+size)){
    return 1;
  }
  else{
    return 0;
  }
}

int isAtBorder(int coord, int offset, int size) {
  if (coord == offset || coord == offset+size){
    return 1;
  }
  else
    {
      return 0;
    }
}

int max(int x1, int x2){
    if (x1>x2){
      return x1;
    }
    else{
      return x2;
    }
  }

void squares(int size1, int x_offset, int y_offset, int size2) {
    int w = max(size1,x_offset+size2);
    int h = max(size1,size2+y_offset);


    int count =0;
    for (int  y =0;y < h; y++){
        for (int x =0;x < w; x++){
        if ((isInRange(x,x_offset,size2) && isAtBorder(y,y_offset, size2-1)\
)||(isInRange(y,y_offset,size2)&& isAtBorder(x,x_offset,size2-1)))
          {
          printf("*");
          }
        else if (((x<size1) && (y==0 || y==size1-1))|| (y<size1 && (x==0||x\
==size1-1)))
            {
              printf("#");
            }
              else
                {
                  printf(" ");
                }
              }
            if ( count < h-1){
              printf("\n");
            }
            count++;
            }
    printf("\n");
}

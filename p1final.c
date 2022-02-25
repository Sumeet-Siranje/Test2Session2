#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2){
  printf("enter the numbers\n");
  scanf("%f%f%f%f",x1,y1,x2,y2);
}
void find_distance(float x1,float y1,float x2,float y2,float *distance)
{
  *distance=sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
}
void output(float x1,float y1,float x2,float y2,float distance){
  printf("the distance between (%f,%f) and (%f,%f)is %f\n",x1,y1,x2,y2,distance);
}
int main(){
  float a,b,c,d,e;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&e);
  output(a,b,c,d,e);
  return 0;
  
}


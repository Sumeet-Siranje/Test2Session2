
#include<stdio.h>
#include<math.h>
void input_line(float *x1,float *y1,float *x2,float *y2,float *x3,float *y3){
  printf("enter the coordinates\n");
  scanf("%f%f%f%f%f%f",x1,y1,x2,y2,x3,y3);
}
int is_triangle(float x1, float y1, float x2, float y2,float x3, float y3)
{
  float a,b,c;
  a=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
  b=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
  c=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
  if(a+b>c && b+c>a && c+a>b)
    return 1;
  else
    return 0;   
}

void output(float x1, float y1, float x2, float y2,float x3, float y3,int istriangle){
  if(is_triangle==1){
    printf("the given side form atriangle\n");
    }
  else{
    printf("the given side dont form a triangle\n");
    }
}
int main(){
  float x1,y1,x2,y2,x3,y3,triangle;
  input_line(&x1,&y1,&x2,&y2,&x3,&y3);
  triangle=is_triangle(x1,y1,x2,y2,x3,y3);
  output(x1,y1,x2,y2,x3,y3,triangle);
  return 0;
}
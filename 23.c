#include<stdio.h>
#define PI 3.14159
int main()
{
  double R,VOLUME;
  scanf("%lf",&R);
  VOLUME=(4/3.0)*PI*R*R*R;
  printf("VOLUME = %.3lf\n",VOLUME);
  return 0;
}

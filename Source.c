#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() 
{
  double a = 0;
  int b = 0;
  int n = 0;
  int max = 0, min = 0;
  int y = 0;
  double c = 0.0;
  double g = 0.0;

  printf_s("n = ");
  scanf_s("%d", &n);
  printf_s("max = ");
  scanf_s("%d", &max);
  printf_s("min = ");
  scanf_s("%d", &min);

  srand(time(NULL));
  for (int i = 0; i < n; i++) 
  {
  	a = min + (rand()*rand()) % (max - min + 1);
	b = rand() % (n);
	y = b;

	while (b > 0) {
		c += b % 10;
		b = b / 10;
		c = c * 0.1;
	}

	a += c;
	printf_s("%lf\n", a);
	if (y == i) g -= a;
	else g += a;

	c = 0;
	a = 0;
	b = 0;
  }

  printf_s("sum = %lf\n", g);
}
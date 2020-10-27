#include<stdio.h>

#define N_STEPS (100)

int main(void){
		int i;
		double x,v,y,z,xnew,vnew;
		x=y=z=0;
		//init
		double x0 = 0.0, v0 = 1.0, dt = 0.1,k=0.5;
		v = v0,x = x0;

		for(i = 0;i < N_STEPS;i++){
			vnew = v - k * x * dt; 
			xnew = x + v * dt; 
			printf("1\n\n");
			printf("C %5.3f %5.3f %5.3f\n",x,y,z);
			v = vnew;
			x = xnew;
		}
		return 0;
	}

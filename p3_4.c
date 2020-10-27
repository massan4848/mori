#include<stdio.h>
#include<math.h>
// P15 Euler-Richardson
#define N_STEPS (100)

int main(void){
		int i;
		double x,v,y,z,xnew,vnew;
		x=y=z=0;
		//init
		double x0 = 0.0, v0 = 1.0, dt = 0.1,k=0.5;
		double omega = pow(k,0.5);
		v = v0,x = x0;

		for(i = 0;i < N_STEPS;i++){
			x = cos(omega * dt * i);
			v = -omega * sin(omega * dt * i);
			double K = 0.5 * v * v;
			double V = 0.5 * k * x * x; 
			printf("%5.3f %5.3f %5.3f %5.3f\n",dt * i,x,v,K+V);
		}
		return 0;
	}

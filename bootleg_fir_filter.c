#include <stdio.h>

int main(){
  int i;
  int n; // N for the N number of taps
  scanf("%d",&n);
  int b[n]; // Coefficients b_i for the FIR filter
  int x[n]; // Input of the FIR filter x[n]
  int y[n]; // Output of the FIR filter y[n]

  for(i=0;i<n;i++){
    scanf("%d",&x[i]);
    b[i]=(i+1);
    y[i]=b[i]*x[i];
    printf("y = %d\n",y[i]);
  }
  for(i=1;i<n;i++)
    y[i]+=y[i-1];
  printf("The sum is %d",y[n-1]);
  return 0;
}

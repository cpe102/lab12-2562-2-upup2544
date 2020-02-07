#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double []);

int main()
{
    double A[] = {1.2,-3.5,6.9,7.8,12.5,-0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[4];
    stat(A,N,B);
    cout << "Average = " << B[0];
    cout << "\nS.D. = " << B[1];
    cout << "\nMax = " << B[2];
    cout << "\nMin = " << B[3];
    return 0;
}

void stat(const double x[],int y,double z[]){
    for(int i=0;i<y;i++){
z[0]+=x[i];
    }
    z[0]/=y;
    for(int j=0;j<y;j++){
z[1]+=pow(x[j],2);
    }
    z[1]=(z[1]/y)-pow(z[0],2);
    z[1]=pow(z[1],0.5);
    double max=x[0],min=x[0];
    for(int k=0;k<y;k++){
if(x[k]>max) max=x[k];
if(x[k]<min) min=x[k];    
}
z[2]=max;
z[3]=min;
}

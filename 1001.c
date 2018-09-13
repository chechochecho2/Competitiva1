#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	long long V[500000];
    long long n;
    double o;
    int i=0;
    while(scanf("%lli",&n) != EOF){
    	V[i]=n;
    	i++;
    }
    i--;
    for(i;i>=0;i--){
        o = sqrt(V[i]);
        printf("%.4lf\n",o);
    }    
    return 0;
}

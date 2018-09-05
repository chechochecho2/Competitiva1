#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int n,i,j,m,s1=0,s2=0,dif;
	scanf("%d",&n);
	int V[n];
	for(i=0;i<n;i++){
		scanf("%d",&V[i]);
	}
	dif=100000;
	int p=pow(2,n);
	for(i=1;i<p;i++){
		s1=0;
		s2=0;
		for(j=0;j<n;j++){
			m=1<<j;
			if(m&i){
				s1+=V[j];
			}else{
				s2+=V[j];
			}
		}
		if(fabs(s2-s1)<dif){
			dif=fabs(s2-s1);
		}
	}
	printf("%d\n",dif);
	return 0;
}
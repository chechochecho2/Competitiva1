// Timus JUDGE_ID: 247823ZJ 
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,i,j,aux,mingrup,s=0;
	
	scanf("%d",&n);
	mingrup=((n/2)+1);
	
	int K[n];
	for(i=0;i<n;i++){
		scanf("%d",&K[i]);
	}
	for(i=0;i<(n-1);i++){
		for(j=i+1;j<n;j++){
			if(K[j]<K[i]){
				aux=K[i];
				K[i]=K[j];
				K[j]=aux;
			}
		}
	}
	for(i=0;i<mingrup;i++){
		s+=((K[i]/2)+1);
	}
	printf("%d\n",s);
	return 0;
}
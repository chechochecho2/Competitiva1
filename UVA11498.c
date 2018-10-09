#include <stdio.h>
#include <stdlib.h>
int main(){
	int K;
	int x,y,i;
	int X[1000], Y[1000];
	scanf("%d",&K);
	while(K!=0){
		scanf("%d%d",&x,&y);		
		for(i=0;i<K;i++){
			scanf("%d%d",&X[i],&Y[i]);
		}
		for(i=0;i<K;i++){
			if(X[i]==x || Y[i]==y){
				printf("divisa\n");
			}else if(X[i]>x){
				if(Y[i]>y){
					printf("NE\n");
				}else{
					printf("SE\n");
				}
			}else if(X[i]<x){
				if(Y[i]>y){
					printf("NO\n");
				}else{
					printf("SO\n");
				}
			}
		}
		scanf("%d",&K);
	}
	return 0;
}
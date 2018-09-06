// Timus JUDGE_ID: 247823ZJ 
#include <stdio.h>
int main(){
	int h,l;
	scanf("%d%d",&h,&l);
	if((((h+l)-1)>0) && (((h+l)-1)<=10)){
		printf("%d %d\n",(((h+l)-1)-h),(((h+l)-1)-l));
	}
	return 0;
}
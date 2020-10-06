#include<stdio.h>

int main(){




int n;
int x = 2;
scanf("%d",&n);


while(n != 1){
	
	if(n%x == 0){
		printf("%d\n",x);
		n = n/x;
	}
	else{
		x++;
	}
	
}




	
	
	return 0;
}	


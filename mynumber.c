#include <stdio.h>

int main() {
	for(int i=0; i<=100; i++) {
		if(i%2==1) printf("%d\n", i);
	}

	for(int i=0; i<=100; i++) { 
		if(i%2==0) printf("%d\n", i);
	}
	for(int i=0; i<=100; i++) {
		if(i==2) printf("%d\n", i); 
		else if (i>2) {	
			int flag = 1;
			for(int k=2; k<i; k++) {
				if(i%k==0) { 
					flag=0;
					break;
				}
			}
			if(flag==1) printf("%d\n", i);
		}	
	}
	return 0;
}

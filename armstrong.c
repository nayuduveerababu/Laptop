/*153 = (1*1*1)+(5*5*5)+(3*3*3)  
where:  (1*1*1)=1  (5*5*5)=125  (3*3*3)=27  
So:  Armstrong number 1+125+27=153  */

#include <stdio.h>

int main(){
	int n,rem,temp,sum;
	printf("Armstrong checking number == ");
	scanf("%d",&n);
	temp = n;
	while(n>0){
		rem = n%10;
		if(rem != 0){
			sum += rem*rem*rem;
		}
		n = n/10;
	}
	if(temp == sum)
		printf("Given %d number is armstrong!!!!\n",temp);
	else
		printf("Given %d number is not a armstrong!!!!!\n",temp);
	return 0;
}

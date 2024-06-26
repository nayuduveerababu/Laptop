#include <stdio.h>
#include <string.h>

int main(){
	char s1[] = "How Are You";
	char s2[] = "Are";
	char str[100];
	int l1,l2,i,j,k;
	l1 = strlen(s1);
	l2 = strlen(s2);
	
	for(i=0; i<l1; i++){
		int f=1;
		str[i] = s1[i];
		printf("babu!!!!\n");
			for(j=0; j<l2; j++){
				if(s1[i+j] != s2[j]){
					f=0;
					printf("veera!!!!\n");
					break;
				}
			}
			if(f == 1){
				for(k=i-1,j=i+l2; j<l1; j++,k++){
					str[k] = s1[j];
					printf("nayudu!!!!!!!\n");
				}
				puts(str);
				break;
			}
	}
	return 0;
}

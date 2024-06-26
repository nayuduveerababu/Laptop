
#include <stdio.h>

void main()  
{  
    FILE *fptr;  
    int id;  
    char name[30];  
    float salary;  
    fptr = fopen("text.txt", "w+");/*  open for writing */  
    if (fptr == NULL)  
    {  
        printf("File does not exists \n");  
        return;  
    }  
    printf("Enter the id\n");  
    scanf("%d", &id);  
    fprintf(fptr, "Id= %d\n", id);  
    printf("Enter the name \n");  
    scanf("%s", name);  
    fprintf(fptr, "Name= %s\n", name);  
    printf("Enter the salary\n");  
    scanf("%f", &salary);  
    fprintf(fptr, "Salary= %.2f\n", salary);  
    fclose(fptr);  
}  


/*
#include <stdio.h>

void main(){
	FILE *fp = fopen("text.txt","r");
	char arr[255];
	while(!feof(fp)){
	while(fscanf(fp, "%s", arr)=='\n'){
	printf("%s ",arr);
	printf("\n");
	}
	}
	fclose(fp);
	//return 0;
}


#include <stdio.h>

int main(){
	FILE *fp = fopen("text.txt","w");
	fprintf(fp, "Hello Veera babu Nayudu!!!!!\n");
	return 0;
}
    #include <stdio.h>  
    main(){  
       FILE *fp;  
       char buff[255];//creating char array to store data of file  
       fp = fopen("file.txt", "r");  
       while(fscanf(fp, "%s", buff)!=EOF){  
       printf("%s ", buff );  
       }  
       fclose(fp);  
    }  

*/

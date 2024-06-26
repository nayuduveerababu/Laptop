/*
#include <stdio.h>

int main(){
	int arr[] = {10,1,3,5,2,6,7,8,3,9,2,4};
	int i,len,n;
	len = sizeof(arr)/sizeof(arr[0]);
	printf("size of array == %d\n",len);
	for(int j=0; j<len; j++){
		for(int k=j+1; k<len; k++){
		if(arr[j] == arr[k]){
		//	printf("array == %d\n",arr[k]);
			for(int r=k; r<len-1; r++){
				arr[r] = arr[r+1];	
			}
			len--;
			k--;
		}
		}
	}
	n = sizeof(arr)/sizeof(arr[0]);
	printf("size of array == %d\n",n);
	printf("After array sorting!!!!!!!!!!\n");
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}


*/


    #include <stdio.h>
    
	int main ()
    {
        // declare local variables
        int i, j, k, size;

	int arr[] = {10,1,3,5,2,6,7,8,3,9,2,4};
/*
        printf (" Define the number of elements in an array: ");
        scanf (" %d", &size);

        printf (" \n Enter %d elements of an array: \n ", size);
        // use for loop to enter the elements one by one in an array
        for ( i = 0; i < size; i++)
        {
            scanf (" %d", &arr[i]);
        }
*/
	size = sizeof(arr)/sizeof(arr[0]);
        // use nested for loop to find the duplicate elements in array
        for ( i = 0; i < size; i ++)
        {
            for ( j = i + 1; j < size; j++)
            {
                // use if statement to check duplicate element
                if ( arr[i] == arr[j])
                {
                    // delete the current position of the duplicate element
                    for ( k = j; k < size - 1; k++)
                    {
                        arr[k] = arr [k + 1];
                    }
                    // decrease the size of array after removing duplicate element
                    size--;

                // if the position of the elements is changes, don't increase the index j
                    j--;
                }
            }
        }


        /* display an array after deletion or removing of the duplicate elements */
        printf (" \n Array elements after deletion of the duplicate elements: \n");

        // for loop to print the array
        for ( i = 0; i < size; i++)
        {
            printf (" %d  ", arr[i]);
        }
	printf("\n");
        return 0;
    }

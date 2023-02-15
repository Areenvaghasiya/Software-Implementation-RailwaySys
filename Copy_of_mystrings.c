#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int read_strings(char *a[], int n)
{                                            // function to read into a dynamically allocated string array
	for(int i=0; i<n ;i++)
	{
		a[i] = malloc(20*sizeof(char));
		scanf("%s",a[i]);
		if(strcmp(a[i], "finish")==0)        //condition to end the string input by "finish" keyworc
		{
			return i;
		}
		
	}

}

void sort_strings(char* a[],int n)
{
	char* temp;
	for(int j=0; j<n; j++)                        //loop for sorting using bubble sort
	{
		for(int i=0; i<n-1; i++)
		{
			if(strcmp(a[i], a[i+1]) > 0)           //using string compare function
			{
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
}

void main()
{
	char* arr[10];
	int n = read_strings(arr, 10);                  // taking the input strings
	for(int i=0; i<n; i++)                        // printing the strings
	{
		printf("%s\n", arr[i]);
	}
	printf("\n");
	sort_strings(arr, n);                           //sorting it alphabetically
	for(int i=0; i<n; i++)
	{
		printf("%s\n", arr[i]);                     //printing sorted strings
	}
}





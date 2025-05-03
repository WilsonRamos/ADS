#include <stdio.h>
#include <stdlib.h>

int* filter_positive_elements(int*vector, int n, int* size){
    int* positive_elements=malloc(sizeof(int)*n);

    *size = 0;
    // We iterate through the vector and store the positive elements in dynamic memory
   for (size_t i = 0; i < n; i++)
    {
        if (*(vector+i) > 0)
        {
            // We use pointer arithmetic
            *(positive_elements+*(size)) = *(vector+i);
            (*size)++;
        }
        
    }

    return positive_elements;
    
}

int main(){
    int v[] = {-21,34,-56,-78,32,-45};
    int n = 6;
    int size; // We will use this to update the number of positive elements

    int * positive_elements = filter_positive_elements(v,n,&size);

    for (size_t i = 0; i < size; i++) {
        printf("%d ", positive_elements[i]);
    }
    printf("\n");E
}
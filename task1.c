
#include <stdio.h>

int count_negatives(int *A, int size);
double average_negatives(int *A, int size);

int main()
{
    printf("Enter the size of the array: ");
    int size_array;
    scanf("%d",&size_array);
    if(size_array <= 0){
        printf("Sorry, size should be positive number ");
        return -1;
    }else{
        int A[size_array];
    for(int i=0; i<size_array; i++)
    {
        printf("\nenter the #%d element:", i+1);
        scanf("%d", A+i);
        
    }
    printf("\nThis is the array : ");
    for(int i=0; i<size_array; i++) {
        printf("%d | ",A[i]);
    }
    
    int negative = count_negatives(A,size_array);
    double average = average_negatives(A,size_array);
    printf("\nNegative Numbers different than the first array element are %d", negative);
    printf("\naverage of Negative Numbers different than the first array element are %lf", average);
    }
    
    

    return 0;
}

int count_negatives(int *A, int size)
{
    int first = A[0];
    int count = 0;
    for(int i=0; i<size; i++){
        if(A[i] != A[0] && A[i] < 0){
            count++;
        }
    }
        return count ;
}

double average_negatives(int *A, int size){
    int first = A[0];
    double sum = 0;
    double count = 0;
    for(int i=0; i<size; i++){
        if(A[i] != A[0] && A[i] < 0){
            sum += A[i];
            count++;
        }
    }
    int average = sum/count;
        return average ;
}

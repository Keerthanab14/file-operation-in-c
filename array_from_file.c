/*program to read integers from a text fie and find its average*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int count = 0, num = 0;
    double sum = 0.0, avg;
    FILE *ifp;
    ifp = fopen("integers.txt", "r+");
    int data[20];
    while (fscanf(ifp, "%d", &data[count]) != EOF){
        count++;
    }

    /*storing the elements into the array*/
    printf("The array is \n");
    for(int i = 1; i <= data[0]; i++)
    {
        printf("%d ", data[i]);
        sum += data[i];
        num++;
    }

    printf("\n\nThe size of array is %d",num);
    avg = sum/num;
    /*finding average of array*/
    printf("\nThe average of values is %f\n", avg);

    /*finding the maximum element of the array*/
    int max = data[0];
    for(int i = 0; i <= num; i++){
        if(data[i] > max)
        {
            max = data[i];
        }
    }
    printf("The max value is %d\n",max);
    return 0;
}

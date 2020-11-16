#include<stdio.h>
#include "searching.c"
#include "Shorting.c"
void searchingOperation(){
    printf("*********************************************************\n");
    printf("\t\t\t01.Linear Search\n\t\t\t02.Binary Search\n");
    printf("**********************************************************\n");
    printf("\t\t\tPlease Choice a number:");
     while(1){
        int sr;
        scanf("%d",&sr);
        (sr==1)?linearSearch():binarySearch();
    }
}
void shortingOperation(){
     printf("=========================================================\n");
     printf("\t\t\t01.Bubble Sort\n\t\t\t02.Selection Sort\n\t\t\t03.Insertion Sort\n\t\t\t04.Merge Sort\n\t\t\t05.Quick Sort\n\t\t\t06.Counting Sort\n\t\t\t07.Radix Sort\n");
     printf("=========================================================\n");
    printf("\t\t\tPlease Choice a number:");
     int type;
     scanf("%d",&type);
     switch (type){
            case 1:
                bubbleSort();
              break;
            case 2:
                selectionSort();
              break;
            case 3:
                insertionSort();
              break;
            case 4:
                mergeSort();
              break;
            case 5:
                quickSort();
              break;
            case 6:
                countingSort();
              break;
            case 7:
                radixSort();
              break;

        }
}
int main(){
    printf("=========================================================\n=========================================================\n");
    printf("\t\t\t1.Shorting,\n\t\t\t2.Searching\n");
     printf("=========================================================\n=========================================================\n");
    printf("\t\t\tPlease Choice a number:");
    while(1){
    int ch;
    scanf("%d",&ch);
        (ch==1)?shortingOperation():searchingOperation();
    }
    getch();
    return 0;
}

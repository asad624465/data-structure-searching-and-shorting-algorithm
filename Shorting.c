void merge(int arr[], int left, int middle, int right)
{
    int i, j, k;
    int left_size = middle - left + 1;
    int right_size = right - middle;

    /* create temp arrays */
    int L[left_size], R[right_size];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < left_size; i++)
        L[i] = arr[left + i];
    for (j = 0; j < right_size; j++)
        R[j] = arr[middle + 1 + j];
    i = 0;
    j = 0;
    k = left;
    while (i < left_size && j < right_size) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }


    while (i < left_size) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < right_size) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void merge_sort(int arr[], int left, int right)
{
    if (left < right) {
        int center = left + (right - left) / 2;
        merge_sort(arr, left, center);
        merge_sort(arr, center + 1, right);

        merge(arr, left, center, right);
    }
}














void bubbleSort(){
    int pass,N,prt,temp;
    printf("\t\t\tHow many numbers do you want to enter:");
    scanf("%d",&N);
    printf("\t\t\tPlease Enter %d Integer Number:",N);
    int arr[N];
    for(int i=0; i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(pass=0;pass<N-1;pass++){
        for(prt=0;prt<N-pass-1;prt++){
            if(arr[prt]>arr[prt+1]){
                temp = arr[prt];
                arr[prt]=arr[prt+1];
                arr[prt+1]=temp;

            }
        }
    }
    printf("*********************************************************\n");
    printf("\t\t\tThe Sorted numbers is:");
    for(int j=0;j<N;j++){
        printf("%d ",arr[j]);
    }
    printf("\n");
    printf("*********************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?shortingOperation():main();
}
void selectionSort(){
    int i,N,j,temp;
    printf("\t\t\tHow many numbers do you want to enter:");
    scanf("%d",&N);
    printf("\t\t\tPlease Enter %d Integer Number: \n",N);
    int arr[N];
    for(int m=0; m<N;m++){
        scanf("%d",&arr[m]);
    }
    for(i=0;i<N;i++){
        int min=i;
        for(j=0+i;j<N;j++){
            if(arr[j]<arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("*********************************************************\n");
    printf("\t\t\tThe Sorted numbers is:");
    for(int t=0;t<N;t++){
      printf("%d ",arr[t]);
    }
    printf("*********************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?shortingOperation():main();
}
void insertionSort(){
    int i,N,j,temp;
    printf("\t\t\tHow many Number you want to enter:");
    scanf("%d",&N);
    printf("\t\t\tPlease Enter %d Integer Number: \n",N);
    int arr[N];
    for(i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=N;j++){
        temp=arr[j];
        int k=j-1;
        while(k>=0 && arr[k]>temp){
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1]=temp;
    }
    printf("*********************************************************\n");
    printf("\t\t\tThe Sorted numbers is:");
    for(int op=0;op<N;op++){
        printf("%d ",arr[op]);
    }
    printf("*********************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?shortingOperation():main();
}
void mergeSort(){
    int n,left=0,right,input;
    printf("\t\t\tHow many numbers do want to enter ? :");
    scanf("%d",&n);
    int arr[n];
    printf("\t\t\tPlease enter %d numbers? :",n);
    for(input=0;input<n;input++){
        scanf("%d",&arr[input]);
    }
    merge_sort(arr, left, n - 1);
    printf("*********************************************************\n");
    printf("\t\t\Shorted numbers is:");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("*********************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?shortingOperation():main();
}
void quickSort(){
    int i, count,arr[25];
    printf("\t\t\tHow many numbers you want to enter? : ");
    scanf("%d",&count);
    arr[count];
    printf("\t\t\tEnter %d elements: ", count);
    for(i=0;i<count;i++){
        scanf("%d",&arr[i]);
        quick_sort_inner(arr,0,count-1);
    }
    printf("*********************************************************\n");
    printf("\t\t\tThe Sorted numbers is:");
    for(i=0;i<count;i++)
    printf(" %d",arr[i]);
    printf("\n");
    printf("*********************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?shortingOperation():main();
}
void countingSort(){
}
void radixSort(){

}
void quick_sort_inner(int number[25],int first,int last){
    int i, j, pivot, temp;
    if(first<last){
        pivot=first;
        i=first;
        j=last;
        while(i<j){
            while(number[i]<=number[pivot]&&i<last)
            i++;
            while(number[j]>number[pivot])
            j--;
            if(i<j){
                temp=number[i];
                number[i]=number[j];
                number[j]=temp;
            }
        }
        temp=number[pivot];
        number[pivot]=number[j];
        number[j]=temp;
        quick_sort_inner(number,first,j-1);
        quick_sort_inner(number,j+1,last);
    }
}

#include<stdio.h>
void linearSearch(){
    int item,loc,n;
    printf("\t\t\tHow many number you want to enter?:");
    scanf("%d",&n);
    printf("\n\t\t\tPlease Enter %d Integer number:\n",n);
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("\t\t\t%d",&arr[a]);
    }
    printf("\n\t\t\tWhich number will you find?:");

    scanf("%d",&item);
    for(loc=0;loc<n;loc++){
        if(arr[loc]==item){
          printf("\t\t\titem found \n");
            break;
        }
    }
    if(loc==n){
       printf("\t\t\titem not found\n");
    }
    printf("**************************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?searchingOperation():main();
}
void binarySearch(){
    int item,loc=0,n,beg=1;
    printf("\t\t\tHow many number you want to enter?:");
    scanf("%d",&n);
    printf("\n\t\t\tPlease Enter %d Integer number:\n",n);
    int end=n,mid=(beg+end)/2;
    int arr[n];
    for(int a=0;a<n;a++){
        scanf("%d",&arr[a]);
    }
    printf("\n\t\t\tWhich number will you find?:");

    scanf("%d",&item);
    while(beg<=end){
       if(item<arr[mid]){
            end = mid-1;
       } else if(item>arr[mid]){
            beg=mid+1;
       }else if(item==arr[mid]){
            printf("\t\t\titem found\n");
            break;
       }
       mid = (beg+end)/2;
       loc++;
    }
    if(beg>end){
         printf("\t\t\titem not found\n");
    }
    printf("************************************************************\n");
    printf("\t\t\t 1.continue Or 2.Main menu: ");
    int status;
    scanf("%d",&status);
    (status==1)?searchingOperation():main();
}

#include <stdio.h>
#include <time.h>
#include<time.h>
#define N 1000

void readArray(int *A,int size)
{
    for(int i=0;i<size;i++)
    {
        scanf("%d",&A[i]);
    }
}
int linear_Sea rch(int *A,int size,int key)
{
    int flag=0;
    for(int i=0;i<size;i++)
    {
        if(key==A[i])
        {
            cout << "Found "<<endl;
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        return -1;
    }
}

int binary_search(int *A,int size,int key)
{
    int lb =0;
    int ub=size-1;
    int mid ;
    while(lb<ub)
    {
        mid = lb+ub/2;
        if(A[mid]==key)
        {
            return mid;
        }
        else if(A[mid]>key)
        {
            ub = mid-1;
        }
        else if(A[mid]<key)
        {
            lb = mid+1;
        }
    }
    return -1;
}
int clock()
{
    clock_t=clock();
    ts t=(double)(e-b)/CLOCKS_PER_SEC;
    printf("the elapsed time is %f seconds",ts);
    return 0;
}
int main()
{
    int size;
    printf("ENTER THE SIZE OF ARRAY \n");
    scanf("%d",&size);

    int Array[N];
    printf("Enter the elements of array \n");
    readArray(Array,size);

    int key;
    printf("Enter the key \n");
    scanf("%d",&key);

    while(1)
    {

    int choice;
    printf("Enter 1 for linear_Search \nEnter 2 for binary Search\nEnter 0 for exit\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:{
            if(linear_Search(Array,size,key)==-1)
            {
                cout << "not found";
            }
            else{
                int value = linear_Search(Array,size,key);
                printf("element found at Array["%d"]",value);
            }
            break;
        }

        case 2:{
            if(binary_search(Array,size,key)==-1)
            {
                cout << "not found";
            }
            else{
                int value_2 = binary_search(Array,size,key);
                printf("element found at Array["%d"]",value_2);
            }
        }

        case 3:{
            exit(1);
        }
    }
    }

    return 0;
    
}

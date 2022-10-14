#include <stdio.h>
#define size 5
int main()
{
    int arr[size]={'\0'};
    int front = -1, last = -1;
    int option, n=0;
   
    while(n>=0)
    {
        printf("\nEnter Your Choice : \n1.Store \n2.Remove \n3.Display\n4.Exit\n");
        scanf("%d", &option);
       
        switch(option)
        {
            case 1:
                if(last<size-1)
                {
                    if(front==-1)
                    {
                        front=0;
                    }
                    last++;
                    printf("Enter the Element :\n");
                    scanf("%d", &arr[last]);
                    printf("\nElement Stored\n");
                }
                else
                {
                    printf("\nArray is Full!!!\n");
                }
                break;
           
            case 2:
                if(front==-1)
                {
                    printf("\nArray is Empty \n");
                }
                else
                {
                    printf("Removed element is %d\n", arr[front]);
                    if(front==last)
                    {
                        front=last=-1;
                    }
                    else
                    {
                        front=front+1;
                    }
                }
                break;
           
            case 3:
                if(front>=0)
                {
                    for(int i=front;i<=last;i++)
                    {
                                printf("array[%d]= ", i);
                                printf("%d\n", arr[i]);
                    }
                }
                else
                {
                    printf("Array is Empty!!!");
                }
                break;
           
            case 4:
                printf("\nExit");
                exit(0);
           
            default:
                printf("\nInvalid Choice!!!\n");
        }
    }
    return 0;
}
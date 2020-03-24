#include <stdio.h>
#include <stdlib.h>
void Sorting(int x, int *y);
int BinarySearch(int*, int , int , int );

int main(void)

{   int y[] = {12, 54, 78, 65, 90, 32, 55, 1, 33, 88};
    int test;
    int x = sizeof(y)/sizeof(y[0]);
    int a, first, last;
    int *mid;
    int r = 0;
    int *p;

    printf("Unsorted array \n [");
    for(int i = 0; i < 10; i++)
    {
        printf(" %d ", *(y + i));
    }
    printf("] \n");
    Sorting(x,y);
    printf("Sorted array \n [");
    for (int i = 0; i < 10; i++)
    {
        printf(" %d ", *( y + i ));
    }
    printf("]");

    printf("\nEnter the number to be searched \n");
    scanf("%d",&a);
    first = 0;
    last = x - 1;
    int  pos = BinarySearch(y, 0 ,x - 1,a);
    printf("Element is presented at index %d", pos);





    return 0;
}




void Sorting(int x, int *y) {

    int c,d, temp = 0;
    for(c = 0; c < x - 1; c++)
    {
        for(d = c + 1; d < x; d ++)
        {
            if (*(y + d) < *(y + c)){
                temp = *(y + c);
                *(y + c) = *(y + d);
                *(y + d) = temp;


            }
        }
    }
}


int BinarySearch(int *y, int first, int last, int a){
            while (first <= last)
	{
		int mid = first + (last - first) / 2;

		if ((*(y + mid) == a))
			return mid;

		if ((*(y + mid)) < a)
			first = mid + 1;

		else
			last = mid - 1;
	}

	return -1;
}
















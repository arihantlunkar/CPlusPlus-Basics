// Example program
#include <iostream>
#include <string>

int main()
{
    //------1D Array------
    
    //first way to initialize array
    int a[3]; //an array of 3 integers
    a[0] = 100;
    a[1] = 200;
    a[2] = 300;
    
    //second way 
    int b[5] = {1,2,3,4,5}; //or int b[] = {1,2,3}; also fine
    
    //third way
    int* c = &a[0]; //pointer to integer array
    
    //fourth way
    int* d = (int*)malloc(sizeof(b));  //pointer to integer array
    for(unsigned int i=0;i<sizeof(b)/sizeof(int);++i)
    {
        *(d+i) = b[i];
    }
    
    //fifth way
    int* m = new int;
    for(int i=0;i<3;++i)
	{
        m[i] = i*7; //since i is incrementing continuously it becomes array eventually 
        printf("%d",m[i]);
	}
    //print c
    for(unsigned int i=0;i<sizeof(a)/sizeof(int);++i)
    {
        printf("%d\n",*(c+i));
    }
    printf("\n");
    
    //print d
    for(unsigned int i=0;i<sizeof(b)/sizeof(int);++i)
    {
        printf("%d\n",*(d+i));
    }
    printf("\n");
    
    free(d);
    
    
    //------2D Array------
    
    //first way
    int e[3][2]; //2d array
    e[0][0] = 1;
    e[0][1] = 2;
    e[1][0] = 3;
    e[1][1] = 4;
    e[2][0] = 5;
    e[2][1] = 6;
    
    //second way
    int f[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}}; //or int f[3][] = {{1,2},{3,4},{5,6}};
    
    //third way
    int* g[3]; //array of pointers            
    for(unsigned int i=0;i<sizeof(e)/sizeof(e[0]);++i)
    {
        g[i] = &e[i][0]; //or g[i] = e[i]
    }
    
    //fourth way
    int** h = (int **)malloc(sizeof(f)); //2d pointers
    for (unsigned int i=0; i<sizeof(f)/sizeof(f[0]); ++i) 
    {
        h[i] = (int *)malloc(sizeof(f[i])); 
        h[i] = &f[i][0];
    }
    
    //fifth way
    int (*k)[3]; //pointer to integer array
    k = &f[0];
    
    //print g
    for (unsigned int i=0; i<sizeof(e)/sizeof(e[0]); ++i) 
    {
        for(unsigned int j=0;j<sizeof(e[0])/sizeof(int);++j)
        {
            printf("%d ",*(*(g+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    
    //print h
    for (unsigned int i=0; i<sizeof(f)/sizeof(f[0]); ++i) 
    {
        for(unsigned int j=0;j<sizeof(f[0])/sizeof(int);++j)
        {
            printf("%d ",h[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    //print k
    for (unsigned int i=0; i<sizeof(f)/sizeof(f[0]); ++i) 
    {
        for(unsigned int j=0;j<sizeof(f[0])/sizeof(int);++j)
        {
            printf("%d ",k[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}

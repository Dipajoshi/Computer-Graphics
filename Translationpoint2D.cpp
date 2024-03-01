#include<graphics.h> 
#include<iostream> 
#include<conio.h>
using namespace std;
// Structure to represent a 2D point
struct Point 
{
    int x;
    int y;
};

// Function to perform 2D translation
void translatePoint(struct Point *point, int tx, int ty) 
{
    point->x += tx;
    point->y += ty;
}

int main() 
{
    int gd=DETECT,gm;  
    initgraph (&gd,&gm,NULL);  
    
    struct Point myPoint = {3, 5};
    int tx = 2;  // Translation in the x-direction
    int ty = -1; // Translation in the y-direction
    cout<<"enter the point and translation value";
    cin>>myPoint.x>>myPoint.y>>tx>>ty;
    printf("Before Translation: (%d, %d)\n", myPoint.x, myPoint.y);
     putpixel(myPoint.x,myPoint.y,WHITE);
    // Perform the translation
    translatePoint(&myPoint, tx, ty);
    
   putpixel(myPoint.x,myPoint.y,WHITE);
    printf("After Translation: (%d, %d)\n", myPoint.x, myPoint.y);
     getch();
    return 0;
}


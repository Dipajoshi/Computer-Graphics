#include<graphics.h>  
#include<iostream>
#include<conio.h>
using namespace std;
// Structure to represent a 2D line
struct Line 
{
    int x;
    int y;
    int z;
    int a;
};

// Function to perform 2D translation
void translatePoint(struct Line *line, int tx, int ty) 
{
    line->x += tx;
    line->y += ty;
    line->z += tx;
    line->a += ty;
}

int main() 
{
    int gd=DETECT,gm;  
    initgraph (&gd,&gm,NULL);  
    
    struct Line myline = {3, 5,10,19};
    int tx = 2;  // Translation in the x-direction
    int ty = -1;
     // Translation in the y-direction

      cout<<"enter initial coordinates, final coordinates of line and translation value";
      cin>>myline.x>>myline.y>>myline.z>>myline.a>>tx>>ty;
    printf("Before Translation: (%d, %d)\n", myline.x, myline.y,myline.z,myline.a);
    line(myline.x,myline.y,myline.z,myline.a);
    // Perform the translation
    translatePoint(&myline, tx, ty);
    
    line(myline.x,myline.y,myline.z,myline.a);
    printf("After Translation: (%d, %d)\n", myline.x, myline.y,myline.z,myline.a);
     getch();
    return 0;
}


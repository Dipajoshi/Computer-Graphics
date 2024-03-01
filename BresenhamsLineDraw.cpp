#include <stdio.h>
#include <graphics.h>

void drawline(int x0, int y0, int x1, int y1) 
{
    int dx, dy, p, x, y;
    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;
    p = 2 * dy - dx;
    while (x < x1) 
	{
        if (p >= 0)
		{
            putpixel(x, y, WHITE);
            y = y + 1;
            p = p + 2 * dy - 2 * dx;
        } 
		else 
		{
            putpixel(x, y, WHITE);
            p = p + 2 * dy;
        }
        
        x = x + 1;
    }
}

int main() 
{
    int gdriver = DETECT, gmode, x0, x1, y0, y1;
    initgraph(&gdriver, &gmode, NULL);
    printf("enter initial and final points");
    scanf("%d%d%d%d", &x0, &y0, &x1, &y1);
	// int x0=90, y0=100, x1=400, y1=500;
    drawline(x0, y0, x1, y1);
    delay(20000);  // Add a delay to view the result
    closegraph();
    return 0;
}


#include<graphics.h>  
#include<conio.h>  
int main()  
{  
    int gd=DETECT,gm, x1, y1, x2, y2,x_lt_top,y_lt_top, x_rt_bottom,y_rt_bottom,x_center,
    y_center, r, x_coordinate, y_coordinate, st_ang, end_ang, rad, x_rad, y_rad ;  
    initgraph (&gd,&gm,NULL);  
    //setbkcolor(GREEN);  
    // printf("\t\t\t\n\nLINE"); 
    // line(50,40,600,40);  
    printf("Enter Start and end point of a line");  
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    line(x1, y1, x2, y2);

     
    // printf("\t\t\n\n\n\nRECTANGLE");  
    // rectangle(120,110,200,200);
    printf("Enter the left-top and right-bottom point of rectangle");
    scanf("%d%d%d%d",&x_lt_top, &y_lt_top, &x_rt_bottom, &y_rt_bottom );
    rectangle(x_lt_top,y_lt_top, x_rt_bottom,y_rt_bottom);



    // printf("\t\t\t\n\n\n\n\n\n\nARC");  
    // arc(120,200,180,0,30); 
    printf("Enter the value of x_coordinate, y_coordinate, start angle, end angle and radius of arc");
    scanf("%d%d%d%d%d", &x_coordinate, &y_coordinate, &st_ang, &end_ang, &rad);
    arc(  x_coordinate, y_coordinate, st_ang, end_ang, rad); 



    // printf("\t\n\n\n\nCIRCLE");  
    // circle(400,270,100);  
    printf("enter the value of centre and radius of circle");
    scanf("%d%d%d", &x_center, &y_center, &r);
    circle(x_center, y_center, r);


    // printf("\t\n\n\n\nECLIPSE");  
    // ellipse(120,350,0,360,30,20);  
    printf("Enter the value of x_coordinate, y_coordinate, start angle, end angle, x_radius and y_radius of ellipse");
    scanf("%d%d%d%d%d%d", &x_coordinate, &y_coordinate, &st_ang, &end_ang, &x_rad, &y_rad);
    ellipse(x_coordinate, y_coordinate, st_ang, end_ang, x_rad, y_rad);
    delay(20000);
	closegraph();
	return 0;
}  

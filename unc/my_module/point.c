# include <stdio.h>

# include "Point.h"

Point Point_val(double x,double y){
    Point initialized={x,y};
    return initialized;
}
void Point_print(const Point *self){
    printf("Point: (%0.2f,%0.2f)\n",self->x,self->y);    
}

void Point_offset(Point *self,const Point *offset_by){
    self->x += offset_by->x;
    self->y += offset_by->y;
}

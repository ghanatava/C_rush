#ifndef POINT_H
#define POINT_H


typedef struct Point{
   double x;
   double y;
} Point;
/**
 * Initialized and returned a point struct value
 * */
Point Point_val(double x,double y);

/**
 * Print a representaion of point to a standard out
 * */
void Point_print(const Point *self);
/**
 * Offset a Point by another Point
 */

void Point_offset(Point *self,const Point *offset_by);

#endif 

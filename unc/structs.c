#include <stdio.h>

struct Point{
    double x;
    double y;
};

typedef struct Point Point; //this will rename struct Point to Point like Point being a class name and hence use of struct keyword is not required anymore

void Point_print(const struct Point* self);    //Point_print(const Point* self) works fine.
//alternate declaration;

typedef struct PointA{
    double x;
    double y;
} PointA;

void PointA_print(const PointA* self);    //Point_print(const Point* self) works fine.
//alternate declaration;


int main(){
    
	struct Point aPoint;    //Point aPoint works fine
	aPoint.x=2.0;			
	aPoint.y=5.0;
        Point_print(&aPoint);

	PointA aptr={0};
	PointA_print(&aptr);
	

}
void Point_print(const struct Point* self){
    printf("(%0.2f,%0.3f)\n",(*self).x,(*self).y);
}

void PointA_print(const PointA* self){
    printf("(%0.2f,%0.3f)\n",self->x,self->y);//the -> is same as (*self).y
}

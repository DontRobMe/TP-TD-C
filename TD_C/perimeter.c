#include "stdio.h"
#include "math.h"


typedef struct {
    int x;
    int y;
} Point;

double distance(Point p1,Point p2){
    double variable = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
    return variable;
}

double perimetre(const Point *points, int numpoints){
    double perimetre = 0;
    for(int i = 0; i <= numpoints; i++){
        perimetre += distance(points[i], points[i+1]);
    }
    perimetre += distance(points[numpoints - 1], points[0]);
    return perimetre;
}

int main() {
    Point points[] = {
            {0, 2},
            {0, 6},
            {2, 10},
            {6, 8},
            {8, 2},
            {4, 0}
    };
    int numpoints = sizeof(points) / sizeof(Point);
    printf("result %f", perimetre(points, numpoints));
    return 0;
}
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){

    double x1, y1,x2,y2;
    double x_axis, y_axis, distance, x_square, y_square;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    x_axis = x1 - x2;
    y_axis = y1 - y2;
    x_square = x_axis * x_axis;
    y_square = y_axis * y_axis;
    distance = x_square + y_square;
    printf("%0.4lf\n", sqrt(distance));
    return 0;
}

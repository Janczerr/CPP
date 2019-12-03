#include <cmath>
#include <iostream>

using namespace std;

struct Point {
    double x;
    double y;
};

struct Rect {
    Point leftUpper;
    Point rightLower;
};

void obliczenia(Rect rect){

    int x, y, pole, przekatna;

    if(rect.leftUpper.x < rect.rightLower.x){
        x = rect.rightLower.x - rect.leftUpper.x;
        if (rect.rightLower.y < rect.leftUpper.y){
            y = rect.leftUpper.y - rect.rightLower.y;
        }

        if (rect.rightLower.y > rect.leftUpper.y){
            y = rect.rightLower.y - rect.leftUpper.y;
        }
    }

    if(rect.leftUpper.x > rect.rightLower.x){
        x = rect.rightLower.x - rect.leftUpper.x;
        if (rect.rightLower.y < rect.leftUpper.y){
            y = rect.leftUpper.y - rect.rightLower.y;
        }

        if (rect.rightLower.y > rect.leftUpper.y){
            y = rect.rightLower.y - rect.leftUpper.y;
        }
    }

    pole = x* y;
    przekatna = sqrt((x*x) + (y*y));

    cout <<"Dlugosc: " << x << " Wysokosc: " << y << " Pole powierzchni: " << pole << " Przekatna: " << przekatna << endl;
}

int main() {

    Rect rect = {-6,3,6,-2};

    obliczenia(rect);
}

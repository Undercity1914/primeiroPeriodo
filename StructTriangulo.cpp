#include<iostream>

using namespace std;

struct Coordenadas{
    float x, y;
};

struct Triangulo{
    Coordenadas A, B, C;
};

Triangulo fill_value(){
    Triangulo abc;

    cout << "Digite as coordenadas do ponto A:\nx: ";
    cin >> abc.A.x;
    cout << "y: ";
    cin >> abc.A.y;
    cout << "Digite as coodernadas do ponto B:\nx: ";
    cin >> abc.B.x;
    cout << "y: ";
    cin >> abc.B.y;
    cout << "Digite as coordenadas do ponto C:\nx: ";
    cin >> abc.C.x;
    cout << "y: ";
    cin >> abc.C.y;

    return abc;
}

float calc_area(Triangulo abc){
    float calc1 = abc.A.x * abc.B.y + abc.B.x * abc.C.y + abc.C.x * abc.A.y;
    float calc2 = abc.A.y * abc.B.x + abc.B.y * abc.C.x + abc.C.y * abc.A.x;
    float area = (calc1 - calc2)/2;
    
    if(area < 0)
        area *= -1;
    return area;
}

int main(){

    Triangulo abc;

    abc = fill_value();

    float area = calc_area(abc);

    cout << "A area do triangulo ABC e igual a " << area << "." << endl;

    return 0;
}

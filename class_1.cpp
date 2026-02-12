#include <iostream>
#include<string.h>
using namespace std;
class Circle{
    private:
    float radius;
    public:
    void get(float rad){
        radius=rad;
    }
    void area(){
        float A=3.14*radius*radius;
        cout<<"Area of circle is "<<A;
        cout<<" cm.sq\n";
        cout<<"\n";
    }
        void circumference(){
        float circu=2*3.14*radius;
        cout<<"Area of circumference is "<<circu;
        cout<<" cm\n";
        cout<<"\n";
    }
};
int main(){
    float rad;
    cout<<"Enter radius of circle in cm\n";
    cin>>rad;
    Circle c;
    c.get(rad);
    c.area();
    c.circumference();
    return 0;
}

 

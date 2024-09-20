#include <iostream>
using namespace std; 
void calc (float x1, float y1,float x2,float y2,float x3,float y3,float x,float y,int *flag, float *area);
int position (float area,float A,float B,float c);
float distance(float x1, float y1, float x2, float y2);

void calc (float x1, float y1,float x2,float y2,float x3,float y3,float x,float y,int *flag, float *area) 
{
    float a,b,c,d,e,f;
    a= distance (x1,y1,x2,y2);
    b= distance (x2,y2,x3,y3);
    c= distance (x3,y3,x1,y1);
    *area = cacal_area(a,b,c); 

    d= distance (x1,y1,x,y);
    e= distance (x2,y2,x,y);
    f= distance (x3,y3,x,y);

    A= cal_area(d,a,e); 
    B= cal_area(e,b,f);
    C= cal_area(f,c,d); 

    *flag = position (*area, A, B, c);
} 
    int position (float area, float A, float B, float C);
    {
        float res= area - (A+B+c);
        if (res<0) {
            res *=-1;
        }
        if (res==0||res<0.001){
            return (1);
        } 
        else {
            return 0;
        }
    }
        


float distance (float x1,float y1,float x2,float y2 )
{
    return (sqrt (pow((x2-x1),2)+pow((x2-x1),2)))
} 
 
 float cal_area (float a, float b, float c) {
     float s;
     s=(a+b+c)/2.0;
     return (sqrt (s*(s-a)*(s-b)*(s-c)));
 }


    int main() {
    float x1, y1, x2, y2, x3, y3, x, y;
    int flag =0;
    float area =0;

    cout << "enter the value of (x1, y1)"<<endl;
    cin>> x1>>y1;
    cout << "enter the value of (x2, y2)"<<endl;
    cin>> x2>>y2;
    cout << "enter the value of (x3, y3)"<<endl;
    cin>> x3>>y3;
    cout << "enter points (x,y)to check if it lies inside the triangle "<<endl;
    cin>>x>>y; 

    calc(x1,y1,x2,y2,x3,y3,x,y,&flag, &area);
    cout << "area of triangle "<< area;

    if (flag)
    cout <<"point lies within the triangle "<<x<<y;
    else 
    cout << "point lies outside the triangle "<<x<<y;
    return 0;
    } 



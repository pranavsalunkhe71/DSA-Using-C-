#include<iostream>

using namespace std;

int main(){
float pencil;
float pen;
float eraser;


cout<<"enter a cost for pencil : ";
cin>>pencil;

cout<<"enter a cost for pen : ";
cin>>pen;


cout<<"enter a cost for eraser : ";
cin>>eraser;

float gst = 0.18;
float gstpencil = (gst*pencil)+pencil;
float gstpen = (gst*pen)+pen;
float gsteraser = (gst*eraser)+eraser;

cout<<"The Value Of Pencil Is : "<<gstpencil<<" The Value Of Pen : "<<gstpen<<" The Value Of Eraser : "<<gsteraser;

    return 0;
}
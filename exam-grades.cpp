#include <iostream>
using namespace std;
int main()
{
    int midterm,final,average,mid_average,final_average;

    cout<<"please enter your midterm grade: " ;
    cin>>midterm;

    cout<<"please enter your final grade: ";
    cin>>final;

    mid_average = ((midterm*4)/10);
    final_average = ((final*6)/10);
    average=(mid_average+final_average);
    
    cout<<"your average is...."<<average<<endl;

    }


/*
#include<iostream>
using namespace std;
int main(){
    int a=4;
    int b=5;
    int c=a+b;
    cout<<"Sum of a and b is:"<<c;
    return 0;

}
*/
#include<iostream>
using namespace std;
void swap(int& x,int& y){
    int temp=x;
    x=y;
    y=temp;
}
int main(){
    int x=10;
    int y=5;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

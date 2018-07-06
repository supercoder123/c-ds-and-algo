#include<iostream>
#include<math.h>
#include<algorithm>
#include<iomanip>
using namespace std;
int main (){
    int a = 5, b=8, maximum;
    maximum = max(a,b);
 //   cout<<maximum;

    swap(a,b);
    //cout<<a<<b;

    int number = 2;
    double cube;
    cube = pow((double)number,1.0/3);
    cout<<cube<<endl;
    cout<<fixed<<setprecision(10)<<cube<<endl;
    cout<<fixed<<setprecision(3)<<cube<<endl;


}

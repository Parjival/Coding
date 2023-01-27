#include <bits/stdc++.h>
using namespace std ;

double area(double r, double angle)
{
    return 0.5*r*r*angle ;
}

//double angle(double opp_A, double opp_B, double opp_C)
//{
//    return acos( ( (opp_B*opp_B)+(opp_C*opp_C)-(opp_A*opp_A) ) / (2*opp_B*opp_C) ) ;
//}




int main ()
{
    int testCase = 1 ;
    cin >> testCase ;
    for (int i = 0; i < testCase; i++)
    {
        //cout << "Case " << i+1 << ": " ;
        double a,b,c ;
        cin >> a >> b >> c ;
         cout << "Case " << i+1 << ": " ;
        double s = (a+a+b+b+c+c)/2.0 ;

        double f=a+b;
        double sec=b+c;
        double t=a+c;

        double total_area =  sqrt(s*(s-a-b)*(s-b-c)*(s-c-a)) ;
        double abc1=acos((f*f)+(t*t)-(sec*sec)/(2*f*t));
        double abc2=acos((f*f)-(t*t)+(sec*sec)/(2*f*sec));
        double abc3=acos((sec*sec)+(t*t)-(f*f)/(2*sec*t));
        total_area-= area(a,abc1) ;
        total_area-= area(b,abc2) ;
        total_area-= area(c,abc3) ;

        cout << fixed << setprecision(10) << total_area << "\n" ;
    }
}

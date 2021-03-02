#include <bits/stdc++.h>
using namespace std;
//------------------------------
// DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion
{
    public:
    double a;
    double b;
    double c;
    double d;
  
    Quaternion(double a,double b,double c,double d)
    {
        this->a=a;
        this->b=b;
        this->c=c;
        this->d=d;
    }
    
    bool operator== (const Quaternion &q)
    {
            return (this->a==q.a && this->b==q.b && this->c ==q.c && this->d==q.d);
    }
    
    Quaternion operator+ (const Quaternion &q)
    {
        Quaternion res(0,0,0,0);
      
        res.a=this->a+q.a;
        res.b=this->b+q.b;
        res.c=this->c+q.c;
        res.d=this->d+q.d;
        return res;
    }
    
     Quaternion operator- (const Quaternion &q)
    {
        Quaternion res(0,0,0,0);
        
        res.a=this->a-q.a;
        res.b=this->b-q.b;
        res.c=this->c-q.c;
        res.d=this->d-q.d;
        return res;
    }
    
     Quaternion operator* (const double &x)
    {
        Quaternion res(0,0,0,0);
        
        res.a=this->a*x;
        res.b=this->b*x;
        res.c=this->c*x;
        res.d=this->d*x;
        return res;
    }
};

//------------------------------
// DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
SECTION( "q1" ) {
Quaternion q{1.0, 2.0, 3.0, 4.0};
Quaternion p{1.0, 2.0, 3.0, 4.0};
REQUIRE( q == p );
}
SECTION( "q2" ) {
Quaternion q{1.0, 2.0, 3.0, 4.0};
Quaternion p{1.0, 2.0, 3.0, 4.0};
Quaternion r{2.0, 4.0, 6.0, 8.0};
REQUIRE( (q + p) == r );
}
SECTION( "q3" ) {
Quaternion q{1.0, 2.0, 3.0, 4.0};
Quaternion p{1.0, 2.0, 3.0, 4.0};
Quaternion r{0.0, 0.0, 0.0, 0.0};
REQUIRE( (q - p) == r );
}
SECTION( "q3" ) {
Quaternion q{1.0, 2.0, 3.0, 4.0};
Quaternion r{2.0, 4.0, 6.0, 8.0};
REQUIRE( (q * 2.0) == r );
}
}
//------------------------------
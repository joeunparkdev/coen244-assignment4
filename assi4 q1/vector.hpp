//
//  Vector.hpp
//  assi4
//
//  Created by Joeun Park on 3/21/19.
//  Author: Jonah Dorant(21313339) Joeun Park (40066406).
//

#ifndef Vector_hpp
#define Vector_hpp


#include <iostream>


class vector
{
    int a,b,c;
    
public:
    vector(int i,int j,int k){
        a=i;
        b=j;
        c=k;
    }
    void create(const vector v){
        std::cout<<v.a<<"i+"<<v.b<<"j+"<<v.c<<"k"<<std::endl;
    }
    
    // vector point(1,1,1);
    // vector other_one(1,2,3);
    // //////// cout << "2, 3, 4";
    // vector target = (point + other_one);
    vector operator +(const vector m){
        vector result(0,0,0);
        result.a= a+m.a;
        result.b= b+m.b;
        result.c= c+m.c;
        return result;
        
    }
    
    // vector point(1,1,1);
    // vector other_one(1,2,3);
    
    // point.dot(other_one);
    // void dot(vector v2) { //member of object
    //     int n = 0;
    //     // Dot product of a and b is:
    //     // this_a * v2_a + this_b * v2_b + this_z * v2_z
    //     n += this->a * v2.a;
    //     n += this->b * v2.b;
    //     n += this->c * v2.c;
    //     std::cout<<"Dot Product: "<<n<<std::endl;
    // }
    
    // vector point(1,1,1);
    // vector other_one(1,2,3);
    // vector::sdot(point, other_one);
    // in here, we cannot use "this"
    static float sdot(vector v1, vector v2) {
        float n = 0;
        // Dot product of a and b is:
        // a_x * b_x + a_y * b_y + a_z * b_z
        n += v1.a * v2.a;
        n += v1.b * v2.b;
        n += v1.c * v2.c;
        
        return n;
    }
    
    // vector v1(1,2,3);
    // vector v2(6,7,8);
    // vector the_result = v1*v2; // <- when we return, the value goes into "the_result"
    // cout << the_result;
    vector operator *(vector m){
        vector result(0,0,0);
        result.a=((this->b*m.c)-(this->c*m.b));
        result.b=((this->a*m.c)-(this->c*m.a));
        result.c=((this->a*m.b)-(this->b*m.a));
        return result;
        
        
    }
    
    bool operator ==(vector m){
        vector result(0,0,0);
        
        if(m.a==this->a&&m.b==this->b&&m.c==this->c){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    bool operator !=(vector m){
        
        if(!(m.a==this->a&&m.b==this->b&&m.c==this->c)){
            return true;
        }
        else{
            return false;
        }
        
    }
    
    friend std::ostream & operator << (std::ostream &out, const vector &v)
    {
        out << v.a;
        out << "i+" << v.b<<"j+"<<v.c<<"k" << std::endl;
        return out;
    }
    
    friend std::istream & operator >> (std::istream &in, vector &v)
    {
        in >> v.a;
        in >> v.b;
        in>>v.c;
        return in;
    }
    
};
#endif //Vector_hpp

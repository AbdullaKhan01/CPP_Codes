#include<bits/stdc++.h>
using namespace std; 
class Increase{
    private:
    int value;
    public:
    Increase(){
        value = 10;
    }
    void operator ++(int){
        value = value+5;
    }
    void display(){
        cout << "Value is: " << value << endl;
    }

};
class Complex{
    private:
    float real,complex;
    public:
    void input(){
        cout << "Enter the real and imaginary parts respectively : " << endl;
        cin >> real >> complex;
    }
    Complex operator+(Complex &obj){
        Complex ans;
        ans.real = real+obj.real;
        ans.complex = complex+obj.complex;
        return ans;
    }
    void output(){
        cout << "Real Part is " << real << " and Complex Part is " << complex << "i" << endl;
    }
};
int main(){ 
    /*
    Operator Overloading means changing the already defined property of an opertor 

    There are two types of Operator Oveloading in C++
    1.Unary Operator Overloading
    2.Binary Operator Overloading

    */ 
    // Increase inc;
    // inc++;
    /*
    For prefix(++a) we need no do anything 
    but for prefix(a++) we have to mention the datatype inside the bracket in overloading func
    */
    // inc.display();

    //For Binary Operator Overloading (below)
    Complex c1,c2,res;

    c1.input();c2.input();
    res = c1+c2;
    res.output();
    return 0;
}

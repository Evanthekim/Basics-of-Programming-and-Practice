#include<iostream>
#include "Calculator.h"

using namespace std;

void Calculator::Init(){
  add_num = 0;
  min_num = 0;
  div_num = 0;
  mul_num = 0;
}

double Calculator::Add(double x,double y){
  ++add_num;
  return x+y;
}

double Calculator::Min(double x,double y){
  ++min_num;
  return x-y;
}

double Calculator::Div(double x,double y){
  ++div_num;
  return x/y;
}

double Calculator::Mul(double x,double y){
  ++mul_num;
  return x*y;
}

void Calculator::ShowOpCount(){
  cout<<"덧셈: "<<add_num<<" 뺄셈: "<<min_num<<" 곱셈: "<<mul_num<<" 나눗셈: "<<div_num<<endl;
}

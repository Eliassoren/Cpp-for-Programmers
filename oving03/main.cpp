#include <iostream>
#include <string>
#include "circle.h"
#include "ware.h"
using namespace std;
void clientTask2(){
  circle circle(5.0);
  cout << "Areal: " << circle.getArea() << endl;
  cout << "Omkrets: " << circle.getCircumference() << endl;
  
  
}
void clientTask3(){
  const double amount = 2.5;
  const double kiloprice1 = 73.5;
  const double kiloprice2 = 79.6;
  ware ware(1,"Norvegia",kiloprice1);
  cout << ware.getName() << " " << ware.getPrice()<< " " << ware.getWareId() << endl;
  cout << "Med moms: " << ware.priceWithTax(amount) << " Uten moms: " << ware.priceWithoutTax(amount);
}
void task4(){
  // a
  string word1, word2, word3;
  cin >> word1;
  cin >> word2;
  cin >> word3;
  //b
  string sentence = word1 + " " + word2 + " " + word3 + ".";
  cout << "Setning: "<< sentence << endl;
  //c
  cout << "Setning lengde: " << sentence.length() << " ord1 lengde: " << word1.length() << " ord2 lengde: " << word2.length() << " ord3 lengde: " << word3.length() << endl;
  //d
  string copy = sentence;
  //e
  copy.replace(9, 3, "xxx");
  cout << copy << endl;
  //f
  string beginning = sentence.substr(0,4);
  cout << "Begynnelsen: " << beginning << endl;
  //g
  string searchstr = "hallo";
  if(sentence.find(searchstr) != string::npos){
    cout << "Inneholder hallo" << endl;
  }else{
    cout << "Inneholder ikke hallo" << endl;
  }
  //h
  int count = 0;
  searchstr = "er";
  for(int i = 0; i < sentence.length()-2;i++){
    if(!sentence.substr(i,2).compare(searchstr))count++;
  }
  cout << "Antall forekomster av " << searchstr << ": " << count << endl;
}
int main() {
  clientTask2();
  clientTask3();
  task4();
}


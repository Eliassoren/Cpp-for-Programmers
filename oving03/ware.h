#include <string>
using namespace std;
const double moms = 0.25;
class ware{
public:
   ware(int id,string name, double price);
   string getName();
   int getWareId() const;
   double getPrice();
   void setPrice(double price);
   double priceWithoutTax(int amount);
   double priceWithTax(int amount);
private:  
    int id;
    string name;
    double price;
};

ware::ware(int id, string name, double price): id(id),name(name),price(price){}

int ware::getWareId() const{
  return id;
}
string ware::getName(){
  return name;
}
double ware::getPrice(){
  return price;
}
void ware::setPrice(double price){
  ware::price = price;
}
double ware::priceWithoutTax(int amount){
  return price*amount;
}
double ware::priceWithTax(int amount){
  return amount*price*(1+moms);
}
using namespace std;
const double pi = 3.141592;
class circle{
  public:
    circle(double startRadius);
    int getArea() const;
    double getCircumference() const;
  private:
    double radius;
};

circle::circle(double startRadius) : radius(startRadius){}
int circle::getArea() const{
  return pi*radius*radius;
}
double circle::getCircumference() const {
  return 2*pi*radius;
}
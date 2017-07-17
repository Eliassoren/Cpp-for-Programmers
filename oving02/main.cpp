#include <iostream>
using namespace std;

void oppg1(){
  
  //Oppg a)
  int i = 3;
  int j = 5;
  int *p = &i;
  int *q = &j;
  cout << "i: " << i << " j: " << j << " *p: " << p << " *q: " << q << endl;
  cout << "&i: " << &i << " &j: " << &j << " &p: " << &p << " &q: " << &q << endl;
  
  //Oppg b)
  
  *p = 7;
  cout << "p: " << *p << endl;
  *q += 4;
  cout << "q: " << *q << endl;
  *q = *p+1;
  cout << "q: " << *q << endl;
  p = q;
  cout << "p: " << *p << endl;
}
void oppg4(){
  /*/home/elias/Documents/git/cpp/Cpp-for-Programmers/oving02/main.cpp: In function ‘void oppg4()’:
  /home/elias/Documents/git/cpp/Cpp-for-Programmers/oving02/main.cpp:27:8: error: ‘b’ declared as reference but not initialized
     int &b;
          ^
  /home/elias/Documents/git/cpp/Cpp-for-Programmers/oving02/main.cpp:30:4: error: invalid type argument of unary ‘*’ (have ‘int’)
     *a = *b + *c;
      ^
  /home/elias/Documents/git/cpp/Cpp-for-Programmers/oving02/main.cpp:30:9: error: invalid type argument of unary ‘*’ (have ‘int’)
     *a = *b + *c;
           ^
  /home/elias/Documents/git/cpp/Cpp-for-Programmers/oving02/main.cpp:31:6: error: lvalue required as left operand of assignment
     &b = 2;
        ^*/
  int a = 5;
  int &b = a; // Referansen må initieres.
  int *c = &b;
  a = b + *c; // a og b er ikke definert som pekere
  b = 2; //En referanse er allerede tildelt, og kan ikke endres på.
  
}
void oppg5(){
  int num;
  int *ptr = &num;
  int &ref = num;
  num = 1; // Metode 1
  cout << "Num1: " << num << endl;
  ++*ptr; // Metode 2
  cout << "Num2: " << num << endl;
  ++ref; // Metode 3
  cout << "Num3: " << num << endl;
}
int sum(int *arr, int elems){
  int sum = 0;
  for(int i = 0; i < elems; ++i){
    sum += arr[i];
  }
  return sum;
}
void oppg6(){
  
  int len = 20;
  int arr[len];

  for(int i = 0; i < len;i++){
    arr[i] = i;
  }
  // Oppg a)
  cout << "Sum a): " << sum(arr,10) << endl;
  // Oppg b)
  cout << "Sum b): " << sum(&arr[9],5) << endl;
  // Oppg c)
  cout << "Sum c) " << sum(&arr[14],5) << endl;
  
}

int main() {
  oppg1();
  oppg4();
  oppg5();
  oppg6();
  return 0;
}
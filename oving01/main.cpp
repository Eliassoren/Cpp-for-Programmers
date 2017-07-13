#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<string> readTextFile(string file){
  ifstream inputStream;
  vector<string> data;
  string tmp = "";
  inputStream.open(file);
  if(!inputStream){
    cout << "File stream err" << endl;
    exit(EXIT_FAILURE);
  }
  while(!inputStream.eof()){
    inputStream >> tmp;
    data.push_back(tmp);
  }
  return data;
}

void readTemperatures(vector<double>& temp,int readings,string fileName){

  vector<string> data = readTextFile(fileName);
  for(int i = 0; i < readings ; ++i){
    double input = stod(data.at(i));
    temp.push_back(input);
  }
 
}

int main() {
  //Oppg a)
  const int AMOUNT = 5;
  const int LOWER = 10;
  const int UPPER = 20;
  
  double input = 0.;
  vector<double> temperatures;
  int subLowerCount = 0;
  int midCount = 0;
  int overUpperCount = 0;
  
  cout << "Du skal skrive inn "<< AMOUNT << " temperaturer." << endl;
  for(int i = 0; i < AMOUNT;++i){
    cout << "Temperatur nr " << i+1 << " : ";
    cin >> input;
    cout << input << endl;
    if (input < LOWER)subLowerCount++;
    else if(input >= LOWER && input <= UPPER)midCount++;
    else overUpperCount++;
  }
  cout << "-----------------------Oppg a) --------------------------" << endl;
  cout << "Antall under " << LOWER << " er " << subLowerCount << endl;
  cout << "Antall mellom " << LOWER << " og " << UPPER << " er " << midCount << endl;
  cout << "Antall over " << UPPER << " er " << overUpperCount << endl;
  
  //Oppg b)
  const string fileName = "temps.txt";
  subLowerCount = 0, midCount = 0, overUpperCount = 0;
  readTemperatures(temperatures,AMOUNT,fileName);
  for(int i = 0; i < AMOUNT;++i){
    double temperature = temperatures.at(i);
    if (temperature < LOWER)subLowerCount++;
    else if(temperature >= LOWER && temperature <= UPPER)midCount++;
    else overUpperCount++;
  }
  cout << "-----------------------Oppg b) --------------------------" << endl;
  cout << "Antall under " << LOWER << " er " << subLowerCount << endl;
  cout << "Antall mellom " << LOWER << " og " << UPPER << " er " << midCount << endl;
  cout << "Antall over " << UPPER << " er " << overUpperCount << endl;
  return 0;
}

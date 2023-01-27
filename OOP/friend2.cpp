#include<iostream>
using namespace std;

class Humidity;
class Temperature{

private: 
    int m_temp{};

public:
   Temperature(int temp=0)
      :m_temp{temp}
    {    
    }
   friend void printWeather(Temperature& temperature,Humidity& humidity);
};

class Humidity{
private:
  int m_humydty{};

public:
   Humidity(int humidity=0):m_humydty{humidity}{
        
   }

   friend void printWeather(Temperature& temperature,Humidity& humidity);
};


void printWeather(Temperature& temperature,Humidity& humidity)
{
    cout << "The temperature is " << temperature.m_temp <<
       " and the humidity is " << humidity.m_humydty<< '\n';
}

int main(){
    Humidity hum=10;
    Temperature tem=15;
    printWeather(tem,hum);
    return 0;
}
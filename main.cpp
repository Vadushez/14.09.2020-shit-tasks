#define базарю cin>>
#define авдруг if
#define базарь cout<<
#define чиселко int
#define погоняло string
#define базар bool
#define мамойклянусь true
#define шакалится false
#define шмон ==
#define чееще &&
#define почемутак else
#define мутим for
#define илитак ||
#define четко =
#define ещебазарь <<
#define снова <<endl
#define тудасюда swap
#define процентуем %
#define всеравно >=
#define данетнаверное <=
#define многа >
#define матеша +
#define числище double
#define копаем sqrt

#include <iostream>
#include <cmath>

using namespace std;

void task7(){
чиселко b;
числище a;
базарь "Введите A>0 и B=[0,1,2]" снова ;
базарю a;
базарю b;
авдруг (b шмон 0)
  {
    базарь "Площадь круга с радиусом А=" ещебазарь a*a*3.14 снова ; 
  }
авдруг (b шмон 1)
  {
    базарь "ПЛощадь равностороннего треугольника со стороной A=" ещебазарь копаем(3)/4*a*a снова ;
  }
авдруг (b шмон 2)
  {
    базарь "Площадь квадрата со стороной A=" ещебазарь a*a снова;
  }
}

int main() {
  task7();
}
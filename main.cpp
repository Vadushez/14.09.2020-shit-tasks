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
#define минуснуло -
#define числище double
#define копаем sqrt
#define западня switch
#define щарасскажу case
#define стопэ break

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

void task8(){
  чиселко a;
  базарь "Введите меcяц" снова ;
  базарю a;
  чиселко b;
  базарь "Введите год" снова;
  базарю b;
  западня(a){
    щарасскажу 1: базарь "Январь.30 дней" снова;
                  стопэ;
    щарасскажу 2: авдруг (b процентуем 2 шмон 0)
                  {
                    базарь "Фебраль.29 дней" снова;
                  }
                  почемутак 
                  {
                    базарь "Фебраль.29 дней" снова;
                  }
                  стопэ;
    щарасскажу 3: базарь "Март.31 день" снова;
    стопэ;
    щарасскажу 4:базарь "Апрель.30 дней" снова;
    стопэ;
    щарасскажу 5:базарь "Май.31 день" снова;
    стопэ;
    щарасскажу 6:базарь "Июнь.30 дней" снова;
    стопэ;
    щарасскажу 7:базарь "Июль.31 день" снова;
    стопэ;
    щарасскажу 8:базарь "Август.31 день" снова;
    стопэ;
    щарасскажу 9:базарь "Сентябрь.30 дней" снова;
    стопэ;
    щарасскажу 10:базарь "Октябрь.31 день" снова;
    стопэ;
    щарасскажу 11:базарь "Ноябрь.30 дней" снова;
    стопэ;
    щарасскажу 12:базарь "Декабрь.31 день" снова;
    стопэ;
  }

}
void task9(){
  числище a,b;
  чиселко c;
  базарь "Введите A,B>=0 & C = [0,1,2,3]";
  базарю a;
  базарю b;
  базарю c;
  западня(c){
    щарасскажу 0: базарь a матеша b;
    стопэ;
    щарасскажу 1: базарь a минуснуло b;
    стопэ;
    щарасскажу 2: базарь a*b;
    стопэ;
    щарасскажу 3: базарь a/b;
    стопэ;
  }
}
void task10(){
  чиселко a;
  базарь "Введите день недели: ";
  базарю a;
  западня(a){
    щарасскажу 1: базарь "Понедельник";
    стопэ;
    щарасскажу 2: базарь "Вторник";
    стопэ;
    щарасскажу 3: базарь "Среда";
    стопэ;
    щарасскажу 4: базарь "Четверг";
    стопэ;
    щарасскажу 5: базарь "Пятница";
    стопэ;
    щарасскажу 6: базарь "Суббота";
    стопэ;
    щарасскажу 7: базарь "Воскресенье";
    стопэ;
  }
}

int main() {
  task7();
  task8();
  task9();
  task10();
}
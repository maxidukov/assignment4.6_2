#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

int real_string_hash(std::string, int, int);

int main() {
  std::string str;
  int p{},n{};
  std::cout<<"Введите p: ";
  std::cin>>p;
  std::cout<<"Введите n: ";
  std::cin>>n;
  do{
  std::cout << "Введите строку: ";
  std::cin>>std::setw(255)>>str;
  std::cout<<"Хэш строки "<<str<<" = "<<real_string_hash(str,p,n)<<"\n";
  }while(str!="exit");
}

int real_string_hash(std::string str, int p, int n){
   //long long hash = 0;
   uint64_t hash = 0;
   for(int i = 0; i<str.length();i++){
     //std::cout<<"\nChar is "<<int(str[i])<<"\n";
     //std::cout<<static_cast<long long>(std::pow(p,i))<<"\n";
     //std::cout<<static_cast<uint64_t>(std::pow(p,i))<<"\n";
     //std::cout<<str[i]*static_cast<uint64_t>(std::pow(p,i))<<"\n";
     //std::cout<<str[i]*std::pow(p,i)<<"\n";
     //hash += str[i]*static_cast<long long>(std::pow(p,i));
     hash += str[i]*static_cast<uint64_t>(std::pow(p,i));
     //hash += str[i]*std::pow(p,i);
     //std::cout<<int(str[i])<<" ";
   }
  //std::cout<<"\n";
  //std::cout<<hash<<"\n";
  //return static_cast<int>(hash % n);
   return hash % n;
}

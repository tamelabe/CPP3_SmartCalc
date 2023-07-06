#include <iostream>

#include "model.h"

int main() {
  std::string str = "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";
  int i = 0;
  s21::Model model;
//  std::cout << model.getStatus().second << '\n';
  model.setExpr(str, str);
//  std::cout << model.getStatus().second << '\n';
  model.prepareExpr();
//  std::cout << model.getStatus().second << '\n';
//  model.validateExpr();
//  std::cout << model.getStatus().second << '\n';
  model.calculateExpr();
//  std::cout << model.getStatus().second << '\n';
  model.replaceStr();
//  std::cout << model.getStatus().second << '\n';
  std::cout << str << "\n";
  return 0;
};
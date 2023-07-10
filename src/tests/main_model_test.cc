#include <gtest/gtest.h>

#include "../model/main_model.h"

using namespace s21;

class MainCalc : public testing::Test {
 public:
  void calculate(std::string &expr, std::string x_def = "") {
    calc_.setExpr(expr, x_def);
//    std::cout << calc_.getStatus().second << '\n';
    calc_.prepareExpr();
//    std::cout << calc_.getStatus().second << '\n';
    calc_.validateExpr();
//    std::cout << calc_.getStatus().second << '\n';
    calc_.calculateExpr();
//    std::cout << calc_.getStatus().second << '\n';
  }
 protected:
  Model calc_;

  std::string error_ = "Error";


  std::string err_div_zero_ = "1/0";
  std::string err_sqrt_oppos_ = "sqrt(-1)";
  std::string err_abracadabra_ = "1234g43s;;";
  std::string err_empty_ = "";

  std::string multifold_ = "15/(7-(1+1))*3-(2+(1+1))*15/(7-(200+1))*3-(2+(1+1))*(15/(7-(1+1))*3-(2+(1+1))+15/(7-(1+1))*3-(2+(1+1)))";
  std::string multifold_res_ = "-30.07216495";
  std::string functions_ = "sin(1)+cos(1)+asin(1)+acos(1)+atan(1)+tan(1)+sqrt(16)+ln(10)+log(10)";
  std::string functions_res_ = "12.5979606";
  std::string folded_funcs_ = "(132+sin(asin(sqrt(ln(log(228.11)))))-4*5^6*(123))";
  std::string folded_funcs_res_ = "-7687367.07378458";
  std::string exp_notation_ = "2.5 * 10^3 + 1.8 * 10^-2 * (3.7e-5 + 2.1e2)";
  std::string exp_notation_res_ = "2500.00037867";
  std::string exp_not_simple_ = "1.5e5";
  std::string exp_not_simple_res_ = "150000";
//  std::string ;
//  std::string ;
//  std::string ;
//  std::string ;
//  std::string ;
//  std::string ;
//  std::string ;
//  std::string ;
};

TEST_F(MainCalc, DivByZero) {
  calculate(err_div_zero_, "");
  EXPECT_EQ(calc_.getResultS(), error_);
}

TEST_F(MainCalc, sqrtOpp) {
  calculate(err_sqrt_oppos_, "");
  EXPECT_EQ(calc_.getResultS(), error_);
}

TEST_F(MainCalc, invExpr) {
  calculate(err_abracadabra_, "");
  EXPECT_EQ(calc_.getResultS(), error_);
}

TEST_F(MainCalc, Multifold) {
  calculate(multifold_, "");
  EXPECT_EQ(calc_.getResultS(), multifold_res_);
}

TEST_F(MainCalc, Functions) {
  calculate(functions_, "");
  EXPECT_EQ(calc_.getResultS(), functions_res_);
}

TEST_F(MainCalc, Folded_funcs) {
  calculate(folded_funcs_, "");
  EXPECT_EQ(calc_.getResultS(), folded_funcs_res_);
}

TEST_F(MainCalc, Exp_notation) {
  calculate(exp_notation_, "");
  std::cout << calc_.getResultD() << '\n';
  EXPECT_EQ(calc_.getResultS(), exp_notation_res_);
}

TEST_F(MainCalc, expNSimple) {
  calculate(exp_not_simple_, "");
  EXPECT_EQ(calc_.getResultS(), exp_not_simple_res_);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
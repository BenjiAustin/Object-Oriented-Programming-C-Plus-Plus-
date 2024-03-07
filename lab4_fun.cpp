#include <iostream>
using namespace std;

/** sumOfThree
  * @brief returns the sum of  x, y, and z
  *
  * @param x : (int) 
  * @param y : (int)
  * @param z : (int)
  * @return int 
  */
// Write Function Here
int sumOfThree(int x, int y, int z){
  return x + y + z;
}
/** division
  * @brief returns x / y
  *
  * @param x : (double)
  * @param y : (double)
  * @return double
  */
// WRITE FUNCTION HERE 
double division(double x, double y){
return x / y;
}
/** isGreaterThan 
  * @breif returns whether x is greater than y 
  *
  * @param x : (double)
  * @param y : (int)
  * @return true: x is greater than y
  * @return false : x is less than or equal to y
  */ 
//   WRITE FUNCTION HERE 
bool isGreaterThan(double x, int y){
return x > y;
}
/** select
  * @brief output the statements based on func_type 
  * fun_type : ouput 
  * "sum"          : "The sum is"
  * "division"     : "The quetient is"
  * "comparison"   : "The first value being greater than the second value is"
  *  All other phrases: "invalid function type\n"
  * @param func_type : (string)
  * @return string
  */
// write function here 
    string select(string func_type) {
        string out = "";
        if (func_type == "sum") {
            out = "The sum is";
        } else if (func_type == "division") {
            out = "The quotient is";
        } else if (func_type == "comparison") {
            out = "The first value being greater than the second value is";
        } else {
            out = "invalid function type\n";
        }
        return out;
    }
/** myprint
  *@breif calls select() to print out the putput with the correct prompt
  *
  * @tparam T :(int, double, or string) output of sum, division, or isGreater Than
  * @param func_type : (string)
  * @ param output
  */
template <typename T>
void myPrint(string func_type, T output){  
cout << select(func_type) << output << endl;
}

int main()
{
  // intiialize 3 int parameters
  int x1 = 2;
  int x2 = 3;
  int x3 = 5;

  // call sumOfThree
  int sum_out  = sumOfThree(x1, x2, x3);
  // call myPrint
  myPrint("sum", sum_out);

  // initialize 2 double parameters
  double dividend = 12345.1;
  double divisor = 2345.6;

  // call division
  double div_out = division(dividend, divisor);
  myPrint("division", div_out);

  // comprare div_out and sum_out
  bool is_greater_out = isGreaterThan(div_out, sum_out);
  myPrint("comparison", is_greater_out);
  return 0;
}
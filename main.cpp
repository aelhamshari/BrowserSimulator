/* -------------------------------------------------
 *
 * File Name: main.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: main runs the whole program by passing in a file as a parameter.
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#include "Executive.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
  if (argc < 2)
  {
    cout << "Invalid Number of inputs. Terminating the Program.\n";
  }
  else
  {
    Executive exec(argv);
    exec.run();
  }
  return 0;
}

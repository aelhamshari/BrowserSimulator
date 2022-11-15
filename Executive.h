/* -------------------------------------------------
 *
 * File Name: Executive.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Declaration of the Executive class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "Browser.h"
#include "LinkedList.h"
#include <string>
using namespace std;

class Executive
{
  private:
    string FileName;
    Browser* Bro;
    Tab* current_tab;
    LinkedList <string> temp;
    

  public:
    /*
    * @pre arguments are imported from main
    * @post creates an Executive object
    */
    Executive(char** arg);
    /*
    * @pre an existing Executive object
    * @post deletes the Executive object
    */
    ~Executive();
    /*
    * @pre a constructor is created
    * @post runs the program
    */
    void run();
};
#endif

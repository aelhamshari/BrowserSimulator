/* -------------------------------------------------
 *
 * File Name: Browser.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Declaration of the Browser class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#ifndef BROWSER_H
#define BROWSER_H
#include "Tab.h"
#include <stdexcept>
#include <string>
using namespace std;

class Browser
{
  private:
    LinkedList<Tab>* Tablist;
    int total_num_tabs;
    int current_tab;

  public:
    /*
    * @pre none
    * @post creates an Browser object
    */
    Browser();
    /*
    * @pre an existing Browser object
    * @post deletes the Browser object
    */
    ~Browser();
    /*
    * @pre The position is between 1 and the list's length+1
    * @post The entry is inserted at the given position in the Tablist
    * @param position:  1<= position <= length+1
    * @param entry: An Tab to put in the list
    */
    void NewTab(int position, Tab& tab);
    /*
    * @pre The position is between 1 and the list's length
    * @post The tab at position is in focus
    * @param position:  1<= position <= length
    */
    void Focus(int position);
    /*
    * @pre The amount is between 1 and the list's length-1
    * @post The tab is moved to the left in the amount given
    * @param position:  1<= position <= length-1
    */
    void MoveLeft(int amount);
    /*
    * @pre The amount is between 1 and the list's length-1
    * @post The tab is moved to the right in the amount given
    * @param position:  1<= position <= length-1
    */
    void MoveRight(int amount);
    /*
    * @pre a current_tab member variable
    * @post The current_tab of the list is returned
    * @return returns the current_tab of the list
    */
    int getcurrenttabPosition();

    /*
    * @pre a current_tab member variable
    * @post The current_tab of the list is returned
    * @return returns a pointer to the current tab of the list
    */
    Tab* getcurrenttab();
};
#endif

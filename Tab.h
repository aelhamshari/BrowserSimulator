/* -------------------------------------------------
 *
 * File Name: Tab.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Declaration of the Tab class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#ifndef TAB_H
#define TAB_H
#include "TabInterface.h"
#include "LinkedList.h"
#include <string>
using namespace std;

class Tab: public TabInterface
{
  private:
    LinkedList<string> List;
    string m_url;
    int currentposition;
    int m_length;
  public:
    Tab();
    ~Tab();
    /**
    * @pre none
    * @post the browser navigate to the given url
    * @param url, a string representing a URL
    */
    void navigateTo(std::string url);
    /**
    * @pre none
    * @post if possible, the browser navigates forward in the history otherwise it keeps focus on the current URL
    */
    void forward();
    /**
    * @pre none
    * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
    *         on the current URL
    */
    void back();
    /**
    * @return the currentposition in the Tab LinkedList
    */
    int getcurrentposition() const;
    /**
    * @return the URL currently open in the tab
    */
    string current() const;
    /**
    * @pre The list being passed in is empty
    * @post The current browser history is copied into the given list
    * @param destination, an empty list of strings
    */
    void copyCurrentHistory(LinkedList<string>& destination);

};
#endif

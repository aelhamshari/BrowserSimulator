/* -------------------------------------------------
 *
 * File Name: TabInterface.h
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Declaration of the TabInterface
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#ifndef TAB_INTERFACE_H
#define TAB_INTERFACE_H
#include "LinkedList.h"
#include <string>
using namespace std;

class TabInterface
{
  public:
  /**
  * @post All memory allocated by the implementing class should be freed.
  *       This, as with all virtual destrucors, is an empty definition since we
  *       have no knowledge of specific implementation details.
  */
  virtual ~TabInterface(){}

  /**
  * @pre none
  * @post the browser navigate to the given url
  * @param url, a string representing a URL
  */
  virtual void navigateTo(std::string url) = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates forward in the history otherwise it keeps focus on the current URL
  */
  virtual void forward() = 0;

  /**
  * @pre none
  * @post if possible, the browser navigates backwards in the history otherwise it keeps focus
  *         on the current URL
  */
  virtual void back() = 0;

  /**
  * @return the URL currently open in the tab
  */
  virtual std::string current() const = 0;

  /**
  * @pre The list being passed in is empty
  * @post The current browser history is copied into the given list
  * @param destination, an empty list of strings
  */
  virtual void copyCurrentHistory(LinkedList<string>& destination) = 0;
  
};
#endif

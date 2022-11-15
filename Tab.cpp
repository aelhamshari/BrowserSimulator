/* -------------------------------------------------
 *
 * File Name: Tab.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Implementation of the Tab class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#include "Tab.h"
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

Tab::Tab()
{
  m_length = 0;
  currentposition = 0;
  m_url = " ";
}

Tab::~Tab()
{
  //delete List;
}

void Tab::navigateTo(std::string url)
{
  m_url = url;
  currentposition++;
  try
  {
      List.insert(List.getLength()+1,m_url);
      currentposition = List.getLength();
  }
  catch (exception& e)
  {
    e.what();
  }
}

int Tab::getcurrentposition() const
{
  return(List.getLength());
}

void Tab::forward()
{
  if (currentposition < (List.getLength()))
  {
    currentposition++;
  }
}
void Tab::back()
{
  if (currentposition > 1)
  {
    currentposition--;
  }
}
string Tab::current() const
{
  return (List.getEntry(currentposition));
}

void Tab::copyCurrentHistory(LinkedList<string>& destination)
{
  try
  {
    for(int i=1; i<=List.getLength(); i++)
    {
      destination.insert(i, List.getEntry(i));
    }
    //destination = List;
  }
  catch (exception& e)
  {
    cout << e.what();
  }
}

/* -------------------------------------------------
 *
 * File Name: Browser.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Implementation of the Browser class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#include "Browser.h"
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;

Browser::Browser()
{
  Tablist = new LinkedList<Tab>();
  total_num_tabs = 0;
  current_tab = 0;
}

Browser::~Browser()
{
  Tablist->clear();
  delete Tablist;
}

void Browser::NewTab(int position, Tab& tab)
{
  try
  {
    Tablist->insert(position, tab);
    current_tab ++;
  }
  catch(std::runtime_error& e)
  {
    e.what();
  }
  total_num_tabs = Tablist->getLength();
}

void Browser::Focus(int position)
{
  current_tab=position;
}

void Browser::MoveLeft(int amount)
{
  if (amount < current_tab)
  {
    int pos = current_tab-amount;
    Tablist->insert(pos, Tablist->getEntry(current_tab));
    Tablist->remove(current_tab+1);
    current_tab = pos;
    Focus(current_tab);
  }
  else
  {
    cout << "Can't MoveLeft\n";
  }

}

void Browser::MoveRight(int amount)
{
  if (amount > current_tab)
  {
    int pos = current_tab+amount;
    Tablist->insert(pos, Tablist->getEntry(current_tab));
    Tablist->remove(current_tab);
    current_tab=pos;
    Focus(current_tab);
  }
  else
  {
    cout << "Can't MoveRight\n";
  }
}

int Browser::getcurrenttabPosition()
{
  return(current_tab);
}


Tab* Browser::getcurrenttab()
{
  return(Tablist->getEntryptr(current_tab));
}

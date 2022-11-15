/* -------------------------------------------------
 *
 * File Name: Executive.cpp
 * Author: Afnan Elhamshari
 * Assignment: EECS-269 Lab03
 * Description: Implementation of the Executive class
 * Date: 02/15/2018
 *
 ------------------------------------------------ */
#include "Executive.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

Executive::Executive(char** arg)
{
  FileName = arg[1];
  Bro = new Browser();
  current_tab = nullptr;
}

Executive::~Executive()
{
  delete Bro;
}

void Executive::run()
{
  int Tabnumber = 0;
  string read;
  ifstream inFile;
  inFile.open(FileName);
  inFile >> read;
  while(!(inFile.eof()))
  {
    if (read == "NEW_TAB")
    {
      Tab newtab;
      Tabnumber++;
      Bro->NewTab(Tabnumber, newtab);
      current_tab = Bro->getcurrenttab();
    }
    else if(read == "NAVIGATE")
    {
      inFile >> read;
      current_tab = Bro->getcurrenttab();
      current_tab -> navigateTo(read);
    }
    else if (read == "HISTORY")
    {
      current_tab = Bro->getcurrenttab();
      current_tab-> copyCurrentHistory(temp);
      cout << "Tab "<< Bro->getcurrenttabPosition() << endl;
      cout << "===========\n";
      for (int i = 1; i<= current_tab->getcurrentposition();i++)
      {
        if (temp.getEntry(i)==current_tab->current())
        {
          cout << temp.getEntry(i) << "   <===current\n";
        }
        else
        {
          cout << temp.getEntry(i)<< endl;
        }
      }
      cout << "===========\n";
      cout << "Newest\n\n";
      //delete temp;
    }
    else if (read == "BACK")
    {
      current_tab = Bro->getcurrenttab();
      current_tab->back();
    }
    else if (read == "FORWARD")
    {
      current_tab = Bro->getcurrenttab();
      current_tab->forward();
    }
    else if (read == "MOVE_LEFT")
    {
      inFile >> read;
      int Read = stoi(read);
      Bro->MoveLeft(Read);
    }
    else if (read == "MOVE_RIGHT")
    {
      inFile >> read;
      int Read = stoi(read);
      Bro->MoveRight(Read);
    }
    else if (read == "FOCUS")
    {
      inFile >> read;
      int Read = stoi(read);
      Bro->Focus(Read);
    }
    inFile >> read;
  }
}

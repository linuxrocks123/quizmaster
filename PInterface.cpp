/***************************************************************************
                          PInterface.cpp  -  QuizMaster Program Interface
                             -------------------
    begin                : Sat Nov 23 2002
    copyright            : (C) 2002 by Patrick Simmons
    email                : psimmons@flash.net
 ***************************************************************************/

/***************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

 #include <fstream>
 #include "PInterface.h"
 #include "UInterface.h"

 using std::ifstream;

 PInterface::PInterface(UInterface& User_) : User(User_)
 {
   string Filename=User.GetFileName();
   fin.open(Filename.c_str());
   VocabDatabase=new Database(fin);
   counter=0;
   NumRight=0;
   AskEnglish=User.GetLanguage();
  }

 void PInterface::DoQuestion()
 {
   counter++;
   VocabWord Word=VocabDatabase->GetNextWord();
   if (User.GetAnswer(Word,AskEnglish,counter)==Word)
   {
     NumRight++;
     User.PrintGotRight();
   }
   else
   {
     User.PrintGotWrong(Word,AskEnglish);
   } 
 }

 void PInterface::PrintScore()
 {
   User.PrintScore((float) NumRight/counter);
 }

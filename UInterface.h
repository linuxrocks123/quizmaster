#ifndef UINTERFACE_H
#define UINTERFACE_H
/***************************************************************************
                          UInterface.h  -  Quizmaster User Interface
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

 #include <string>
 #include <iostream>
 #include "VocabWord.h"
 #include "safecin.h"
 
 using std::cout;
 using std::cin;
 using std::string;

 class PInterface;

 class UInterface
 {
   public:
   UInterface();
   string GetFileName();
   bool GetLanguage();
   string GetAnswer(VocabWord Word,bool AskEnglish,int counter);
   void PrintScore(float);
   bool RunQuestion();
   void PrintGotRight();
   void PrintGotWrong(VocabWord Word,bool AskEnglish);
   private:
   PInterface* Program;
   safecin cin2;
   unsigned short QuestionsAsked;
   unsigned short QuestionIncrements;
 };

 #endif
 

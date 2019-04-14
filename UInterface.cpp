/***************************************************************************
                          UInterface.cpp  -  Quizmaster UI Implementation
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
 #include "VocabWord.h"
 #include "UInterface.h"
 #include "PInterface.h"

 using std::ifstream;
 using std::cin;
 using std::getline;
 
 UInterface::UInterface()
 {
   cout << "How many vocabulary words do you want to quiz per round? ";
   cin2 >> QuestionIncrements;
   cin.ignore();
   Program=new PInterface(*this);
   QuestionsAsked=0;
 }

 string UInterface::GetFileName()
 {
   string ReturnVal;
   bool BadFile=true;
   while(BadFile)
   {
     cout << "Input name of vocabulary word file: ";
     getline(cin,ReturnVal,'\n');
     ifstream test(ReturnVal.c_str());
     if(test.good())
      BadFile=false;
     else
      cout << "INVALID FILENAME\n";
   }
   return ReturnVal;
 }

 bool UInterface::GetLanguage()
 {
   cout << "Do you want to be given the English words instead of the foreign language words (Y/N)? ";
   char answer;
   cin >> answer;
   cin.ignore();
   if(answer=='Y' or answer=='y')
    return true;
   return false;
 }

 string UInterface::GetAnswer(VocabWord Word, bool AskEnglish,int counter)
 {
   cout << counter << ". ";
   if(AskEnglish)
    cout << Word.GetEnglish();
   else
    cout << Word.GetOther();
   cout << ": ";
   string Response;
   getline(cin,Response,'\n');
   return Response;
 }

 void UInterface::PrintScore(float Score)
 {
   cout << "Percentage Correct: " << Score*100 << '\n';
 }

 bool UInterface::RunQuestion()
 {
   if(QuestionsAsked>=QuestionIncrements)
   {
     cout << "Continue (Y/N)? ";
     char GoOn;
     cin >> GoOn;
     cin.ignore();
     if(GoOn=='Y' or GoOn=='y')
     {
       QuestionsAsked=0;
     }
     else
     {
       Program->PrintScore();
       return false;
     }
   }
   Program->DoQuestion();
   QuestionsAsked++;
   return true;
 }

 void UInterface::PrintGotRight()
 {
   cout << "Correct.\n";
 }

 void UInterface::PrintGotWrong(VocabWord Word,bool AskEnglish)
 {
   cout << "Incorrect: ";
   if(AskEnglish)
    cout << Word.GetOther();
   else
    cout << Word.GetEnglish();
   cout << std::endl;
 } 

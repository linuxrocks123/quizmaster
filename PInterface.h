#ifndef PINTERFACE_H
#define PINTERFACE_H
/***************************************************************************
                          PInterface.h  -  Main Quizmaster Program Interface
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

 #include "Database.h"
 #include "UInterface.h"

 class PInterface
 {
   public:
   PInterface(UInterface&);
   ~PInterface();
   void DoQuestion();
   void PrintScore();
   private:
   bool AskEnglish;
   ifstream fin;
   unsigned short NumRight;
   unsigned short int counter;
   UInterface& User;
   Database* VocabDatabase;
 };

 #endif
/***************************************************************************
                          Database.cpp  -  Database Implementation
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

 Database::Database(ifstream& fin)
 {
   VocabList.clear();
   string Latin,English;
   while(getline(fin,Latin,'|') and getline(fin,English,'\n'))
   {
     VocabList.push_back(VocabWord(Latin,English));
     ActiveList.push_back(VocabWord(Latin,English));
   }
 }

 VocabWord Database::GetNextWord()
 {
   int num=WordNum.Draw()%ActiveList.size();
   VocabWord to_return = ActiveList[num];
   ActiveList.erase(ActiveList.begin()+num);
   if(ActiveList.size()==0)
	ActiveList = VocabList;
   return to_return;
 }

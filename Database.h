#ifndef DATABASE_H
#define DATABASE_H
/***************************************************************************
                          Database.h  -  Central VocabWord Database
                             -------------------
    begin                : Fri Nov 22 2002
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
 #include <vector>
 #include "VocabWord.h"
 #include "RandInt.h"
 
 using std::vector;
 using std::ifstream;
 
 class Database
 {
   public:
   Database(ifstream& fin);
   VocabWord GetNextWord();
   private:
   vector<VocabWord> VocabList;
   vector<VocabWord> ActiveList;
   RandInt WordNum;
 };

 #endif
 

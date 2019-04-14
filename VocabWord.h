#ifndef VOCABWORD_H
#define VOCABWORD_H
/***************************************************************************
                          VocabWord.h  -  Vocabulary Word Class Header
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
 #include <string>

 using std::string;
 
 class VocabWord
 {
   public:
   string GetOther() const;
   string GetEnglish() const;
   VocabWord(string Other_, string English_);
   private:
   string Other;
   string English;
 };

 bool operator==(const string& LVal, const VocabWord& RVal);

 #endif
 
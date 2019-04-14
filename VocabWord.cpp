/***************************************************************************
                          VocabWord.cpp  -  VocabWord Implementation
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

 #include "VocabWord.h"

 VocabWord::VocabWord(string Other_, string English_)
 {
   Other=Other_;
   English=English_;
 }

 string VocabWord::GetOther() const
 {
   return Other;
 }

 string VocabWord::GetEnglish() const
 {
   return English;
 }

 bool operator==(const string& LVal, const VocabWord& RVal)
 {
   return (LVal==RVal.GetOther() or LVal==RVal.GetEnglish());
 }
 
/***************************************************************************
                          main.cpp  -  Quizmaster Main Funcion
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

 #include "UInterface.h"

 int main()
 {
   cout << "Quizmaster Version 0.1\n";
   cout << "Copyright (c) 2002 Patrick Simmons.\n\n";
   cout << "This program is free software and you are welcome to distribute\nit\
under certain conditions.\n\n";
   cout << "\nQuizmaster comes with ABSOLUTELY NO WARRANTY.\n";
   cout << "\nFor details see the file COPYING.\n\n";
   UInterface User;
   while(User.RunQuestion())
    ;
   return 0;
 }

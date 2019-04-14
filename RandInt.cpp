 //RandInt.cpp
 //Implementation for C++ Wrapper
 //for C Standard Random Number Functions
 //Copyright (C) 2002 Patrick Simmons
 #include <cstdlib>
 #include <ctime>
 #include "RandInt.h"
 
 using std::rand;
 using std::srand;
 using std::time;
  
 bool RandInt::Initialized=false;

 RandInt::RandInt()
 {
  if(not Initialized)
  {
   srand(time(NULL));
   Initialized=true;
  }
 }

 int RandInt::Draw() const
 {
   return rand();
 }
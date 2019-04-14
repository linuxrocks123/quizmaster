 //RandInt.h
 //Definition for C++ Wrapper
 //for C Standard Random Number Functions
 //Copyright (C) 2002 Patrick Simmons
 #ifndef RANDINT_H
 #define RANDINT_H

 class RandInt
 {
  public:
  RandInt();
  int Draw() const;
  private:
  static bool Initialized;
 };

 #endif
 
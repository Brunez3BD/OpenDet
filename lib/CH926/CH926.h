/*
 * CH926.h - Library for ch-926 coin acceptor
 * Created by Michele Brunelli on 16 dec 2017
 * Ask the creator if you want to use this library, email me at brunellim94@gmail.com
 */

#ifndef CH926_H
#define CH926_H

#define ACTIVE_LOW 0
#define ACTIVE_HIGH 1

class CH926{
  public:
    CH926(int, int, int);
    void start();
    void stop();
  private:
    int _sigPin;
    int _pwrPin;
    int _logic;
};

#endif
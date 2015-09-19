/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Borc.h
 *   Purpose:   Assignment 5 , Comp 2404
 *   Author:    Rehnuma Tarannum, Abdul Bin Asif Niazi
 *   Date:      April 7 2015
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
#ifndef Borc_H
#define Borc_H

#include <iostream>
#include "Pirate.h"

using namespace std;

class Borc : public Pirate
{
	public :
		Borc();
                virtual int getSpace();
                virtual string identify();
};
#endif

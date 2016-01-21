/*
 * File Name:     Memory.c++
 * Description:   Memory class contains the global short term memory
 *                for SATAN
 * Developer:     Roman S.
 */

#include "Memory.h"



Memory::Memory()
{
  // constructor method
}

Memory::~Memory()
{
  // deconstructor method

  // save short term memory to long term memory later
}

void Memory::loadToMemory(std::string key, std::string value)
{
  memry[key] = value;
}

std::string Memory::loadFromMemory(std::string key)
{
  return memry[key];
}

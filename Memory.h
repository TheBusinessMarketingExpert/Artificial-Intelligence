// Memory.h

#ifndef MEMORY_H_
#define MEMORY_H_

#include <map>
#include <string>

class Memory
{
 private:
  std::map<std::string, std::string> memry;
 public:
  Memory();
  ~Memory();

  // accessor methods
  void loadToMemory(std::string key, std::string value);
  std::string loadFromMemory(std::string key);

  // maintenance methods
  //void removeFromMemory(std::string key);
};

#endif

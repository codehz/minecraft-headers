#pragma once

#include <string>
#include "../util/uuid.h"

struct Entity
{
  virtual ~Entity();
  char fillerZ[40];
  char fillerX[0x117c];
  UUID uuid;
  char fillerY[0x142c - 0x117c - sizeof(UUID)];
  void *id;
  const std::string &getNameTag() const;
};
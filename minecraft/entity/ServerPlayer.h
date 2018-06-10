#pragma once

#include "Player.h"

struct Packet;

struct ServerPlayer : Player
{
  virtual ~ServerPlayer();
  void sendNetworkPacket(Packet &packet) const;
};
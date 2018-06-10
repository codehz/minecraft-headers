#pragma once

#include <string>

struct Packet
{
};

enum class TextPacketType;

struct TextPacket : Packet
{
  char filler[0x30];
  static TextPacket createSystemMessage(std::string const&);
};
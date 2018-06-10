#pragma once

#include "../util/typeid.h"
struct Player;
struct CommandRegistry;
struct CommandOrigin;

template <typename T>
struct PVector {
  T *begin, *end, *cap;
};

template <typename T>
struct CommandSelectorResults
{
  std::shared_ptr<PVector<T *>> content;
  bool empty() const;
  T **start() const {
    return content->begin;
  }
  T **finish() const {
    return content->end;
  }
};

struct CommandSelectorBase
{
  CommandSelectorBase(bool);
  virtual ~CommandSelectorBase();
};

template <typename T>
struct CommandSelector : CommandSelectorBase
{
  char filler[0x74];
  CommandSelector();

  const CommandSelectorResults<T> results(CommandOrigin const &) const;
};

template <>
struct CommandSelector<Player> : CommandSelectorBase
{
  char filler[0x74];
  CommandSelector();

  static typeid_t<CommandRegistry> type_id()
  {
    static typeid_t<CommandRegistry> ret = type_id_minecraft_symbol<CommandRegistry>("_ZZ7type_idI15CommandRegistry15CommandSelectorI6PlayerEE8typeid_tIT_EvE2id");
    return ret;
  }

  const CommandSelectorResults<Player> results(CommandOrigin const &) const;
};
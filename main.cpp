#include "LList.hpp"

using llist_plus_plus::LList;

inline void app()
{
  LList mlist;
  mlist.add_node(3);
  mlist.add_node(2);
  mlist.add_node(1);
  mlist.traverse();
}

int main()
{
  app();

  return 0;
}

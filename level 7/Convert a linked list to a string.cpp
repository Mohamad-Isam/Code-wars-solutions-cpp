#include <string>

std::string stringify(Node* list)
{
  std::string s;
  Node* temp = list;
  while(temp != NULL)
  {
    s += std::to_string(temp->data) + " -> ";
    temp = temp->next;
  }
  s += "nullptr";
  return s;
}

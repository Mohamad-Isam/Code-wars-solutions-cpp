/* Node Definition
struct Node {
  Node * next;
  int data;
}
*/

int Length(Node *head)
{
  int count = 0;
  Node *temp = head;
  while(temp)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

int Count(Node *head, int data)
{
  int count = 0;
  Node *temp = head;
  while(temp)
  {
    if(temp->data == data) count++;
    temp = temp->next;
  }
  return count;
}

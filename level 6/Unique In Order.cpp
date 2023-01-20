#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable){
  std::vector<T> s = iterable;
  s.erase(unique(s.begin(), s.end()), s.end());
  std::vector<T> v;
  for(T c : s)
    v.push_back(c);
  return v;
}
std::vector<char> uniqueInOrder(const std::string& iterable){
  std::string s = iterable;
  s.erase(unique(s.begin(), s.end()), s.end());
  std::vector<char> v;
  for(char c : s)
    v.push_back(c);
  return v;
}

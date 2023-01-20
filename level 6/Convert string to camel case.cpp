#include <string>

std::string to_camel_case(std::string text) {
  std::string s;
  for(int i = 0; i < text.length(); i++)
  {
    if(text[i] == '-' || text[i] == '_')
    {
      s += (toupper(text[++i]));
      continue;
    }
    s += text[i];
  }  
  return s;
}

#include <cinttypes>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    uint64_t a = 23355;

  std::string casted = to_string(a);
  std::vector <int> ordered(casted.length());

    cout <<ordered.size();
  for (int i = 0; i < casted.length(); i++)
  {
      ordered.push_back(stoi(casted.substr(i, i+1)));
  }

  
  cout<<"\n";
  sort(ordered.begin(), ordered.end(), greater<int>());
  
  string new_order;
  
  for (int i = 0; i < ordered.size(); i++)
  {
      new_order += to_string(ordered[i]);  
  }
  
  cout <<(new_order);
}
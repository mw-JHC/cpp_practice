#include <iostream>
#include <vector>
std::vector<std::string> unique_names(const std::vector<std::string>& names1, const std::vector<std::string>& names2)
    {
        std::vector <std::string> vectors {};
        vectors = names1;
      int count {0};
        for (int i{0}; i< names2.size(); ++i){
        count = 0;
            for (int j{0}; j < names1.size(); ++j){
              if (names2.at(i) != names1.at(j)){
                  ++count; 
              }
              if (count == names1.size()){
                vectors.push_back(names2.at(i));
              }
            }
        }
    
        return vectors;
    }


#ifndef RunTests
int main()
{
    std::vector<std::string> names1 = {"Ava", "Emma", "Olivia"};
    std::vector<std::string> names2 = {"Olivia", "Sophia", "Emma"};
    std::vector<std::string> result = unique_names(names1, names2);

    for(auto element : result)
    {
        std::cout << element << ' '; // should print Ava Emma Olivia Sophia
    }
}
#endif
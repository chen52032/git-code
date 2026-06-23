#include <fstream>
#include <iostream>
#include <istream>
#include <map>
#include <set>
#include <string>
void process_file(std::map<std::string, int> &, const std::set<std::string> &,
                  std::ifstream &);
void query(const std::map<std::string, int> &word_map);
void write_map(const std::map<std::string, int> &, std::ofstream &);

int main() {
  std::set<std::string> exclude_set{
      "the",   "and", "but",  "that",  "then", "are",  "been", "can", "a",
      "could", "did", "for",  "of",    "had",  "have", "him",  "his", "her",
      "its",   "is",  "were", "which", "when", "with", "would"};

  std::ifstream in_file("column.txt");
  std::ofstream out_file("column.map");
  if (!in_file || !out_file) {
    std::cerr << "Unable to open file" << "\n";
    return -1;
  }
  std::map<std::string, int> word_count;
  process_file(word_count, exclude_set, in_file);
  query(word_count);
  write_map(word_count, out_file);
}

void process_file(std::map<std::string, int> &word_count,
                  const std::set<std::string> &exclude_set,
                  std::ifstream &ifile) {
  std::string str;
  while (ifile >> str) {
    if (exclude_set.count(str)) {
      continue;
    }
    word_count[str]++;
  }
}

void query(const std::map<std::string, int> &word_map) {
  std::string search;
  std::cout << "Please enter a word to search (q to quit): ";
  std::cin >> search;
  while (search.size() && search != "q") {
    std::map<std::string, int>::const_iterator iter_map{word_map.find(search)};
    if (iter_map != word_map.end()) {
      std::cout << "Found: " << iter_map->first << " occurs " << iter_map->second
                << " times" << "\n";
    } else {
      std::cout << search << " " << "was not found in text.\n";
    }
    std::cout << "\nAnother search? (q to quit) : ";
    std::cin >> search;
  }
}

void write_map(const std::map<std::string, int> &word_map,
               std::ofstream &ofile) {
  std::map<std::string, int>::const_iterator iter_map{word_map.begin()},
      iter_map_end{word_map.end()};
  for (; iter_map != iter_map_end; ++iter_map) {
    ofile << iter_map->first << " (" << iter_map->second << ")" << "\n";
  }
}
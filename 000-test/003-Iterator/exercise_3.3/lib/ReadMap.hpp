#pragma once

void read_map(std::ifstream &,
              std::map<std::string, std::vector<std::string>> &);

void display_map(const std::map<std::string, std::vector<std::string>> &,
                 std::ostream &os = std::cout);

void query_map(std::string &,
               std::map<std::string, std::vector<std::string>> &);
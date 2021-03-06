//
// Copyright 2020 Daniil Rybakov <pochtaworld7@gmail.com>
//
#ifndef INCLUDE_PARSER_HPP_
#define INCLUDE_PARSER_HPP_
#include "student.hpp"
#include <iostream>
#include <iomanip>
#include <nlohmann/json.hpp>
#include "string"
#include <vector>

using nlohmann::json;
class Parser {
 public:
  Parser();
  explicit Parser(const std::string &JsonObject);
  std::vector<student_t> students;
  friend std::ostream& operator<<(std::ostream& out, std::vector<student_t> st);
};
#endif // INCLUDE_PARSER_HPP_"

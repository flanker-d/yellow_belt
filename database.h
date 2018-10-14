#pragma once

#include <map>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>
#include <functional>

#include "date.h"

using namespace std;

class Database {
public:
  void AddEvent(const Date& date, const string& event);
  bool DeleteEvent(const Date& date, const string& event);
  int DeleteDate(const Date& date);
  set<string> Find(const Date& date) const;
  void Print() const;

  void Add(const Date& date, const string& event) {}
  void Print(ostream& os) {}
  set<string> FindIf(function<void(const Date& date, const string& event)> predicate){}
  int RemoveIf(function<void(const Date& date, const string& event)> predicate){}
  string Last(const Date& date) {}

private:
  map<Date, set<string>> storage;
};

#pragma once

//Node, EmptyNode, DateComparisonNode, EventComparisonNode, LogicalOperationNode

#include <iostream>
#include <memory>
#include <stack>
#include <vector>

#include "date.h"

using namespace std;

enum class Comparison {
  Less,
  LessOrEqual,
  Greater,
  GreaterOrEqual,
  Equal,
  NotEqual
};

enum class LogicalOperation
{
  And,
  Or
};

struct Node {
    virtual int Evaluate(const Date&, const string& event) const = 0;
};

struct EmptyNode : public Node
{
    int Evaluate(const Date&, const string& event) const override {}
};
struct DateComparisonNode : public Node
{
    DateComparisonNode(const Comparison&, const Date&) {}
    int Evaluate(const Date&, const string& event) const override {}
};
struct EventComparisonNode : public Node
{
    EventComparisonNode(const Comparison&, const string&) {}
    int Evaluate(const Date&, const string& event) const override {}
};
struct LogicalOperationNode : public Node
{
    LogicalOperationNode(const LogicalOperation& op, shared_ptr<Node>&, shared_ptr<Node>) {}
    int Evaluate(const Date&, const string& event) const override {}
};

#include <bits/stdc++.h>
unordered_map<int, int> kjhhgffsasd;
template <typename A, typename B> string to_string(pair<A, B> p);

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p);

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p);

string to_string(const string &s) { return '"' + s + '"'; }

string to_string(char t) { return "'" + string({t}) + "'"; }

string to_string(const char *s) { return to_string((string)s); }

string to_string(bool b) { return (b ? "true" : "false"); }

string to_string(vector<bool> v) {
  bool first = true;
  string res = "{";
  for (int i = 0; i < static_cast<int>(v.size()); i++) {
    if (!first) {
      res += ",";
    }
    first = false;
    res += to_string(v[i]);
  }
  res += "}";
  return res;
}

template <size_t N> string to_string(bitset<N> v) {
  string res = "";
  for (size_t i = 0; i < N; i++) {
    res += static_cast<char>('0' + v[i]);
  }
  return res;
}

template <typename A> string to_string(A v) {
  bool first = true;
  string res = "{";
  for (const auto &x : v) {
    if (!first) {
      res += ",";
    }
    first = false;
    res += to_string(x);
  }
  res += "}";
  return res;
}

template <typename A, typename B> string to_string(pair<A, B> p) {
  return "(" + to_string(p.first) + "," + to_string(p.second) + ")";
}

template <typename A, typename B, typename C>
string to_string(tuple<A, B, C> p) {
  return "(" + to_string(get<0>(p)) + "," + to_string(get<1>(p)) + "," +
         to_string(get<2>(p)) + ")";
}

template <typename A, typename B, typename C, typename D>
string to_string(tuple<A, B, C, D> p) {
  return "(" + to_string(get<0>(p)) + "," + to_string(get<1>(p)) + "," +
         to_string(get<2>(p)) + "," + to_string(get<3>(p)) + ")";
}

vector<string> vec_splitter(string s) {
  s += ',';
  remove(s.begin(), s.end(), ' ');
  vector<string> res;
  while (!s.empty()) {
    res.push_back(s.substr(0, s.find(',')));
    s = s.substr(s.find(',') + 1);
  }
  return res;
}
void debug_out(vector<string> __attribute__((unused)) args,
               __attribute__((unused)) int idx,
               __attribute__((unused)) int LINE_NUM) {
  clog << endl;
}

template <typename T, size_t size>
void print(const T (&array)[size], int LINE_NUM) {
  clog << "[" << LINE_NUM << "]"
       << "[" << ++kjhhgffsasd[LINE_NUM] << "] {";
  for (size_t i = 0; i < size; ++i) {
    clog << array[i] << ((i < size - 1) ? "," : "");
  }
  clog << "}" << endl;
}

template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {
  if (idx > 0)
    clog << endl
         << "[" << LINE_NUM << "]"
         << "[" << kjhhgffsasd[LINE_NUM] << "] ";
  else
    clog << "[" << LINE_NUM << "]"
         << "[" << ++kjhhgffsasd[LINE_NUM] << "] ";
  // stringstream ss; ss << H;
  clog << args[idx] << ":" << to_string(H);
  debug_out(args, idx + 1, LINE_NUM, T...);
}
#define debug(...)                                                             \
  debug_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__);
#define dclear(x) dclear_out(x);
#define print(x) print(x, __LINE__);

void dclear_out(int I) {
  kjhhgffsasd.clear();
  clog << "-------" << I << "-------" << endl;
}

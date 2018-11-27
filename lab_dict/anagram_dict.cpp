/**
 * @file anagram_dict.cpp
 * Implementation of the AnagramDict class.
 *
 * @author Matt Joras
 * @date Winter 2013
 */

#include "anagram_dict.h"

#include <algorithm> /* I wonder why this is included... */
#include <fstream>

using std::string;
using std::vector;
using std::ifstream;
using std::sort;

/**
 * Constructs an AnagramDict from a filename with newline-separated
 * words.
 * @param filename The name of the word list file.
 */
AnagramDict::AnagramDict(const string& filename)
{
    /* Your code goes here! */
    vector<string> words;
    ifstream wordsFile(filename);
    string word;
    if (wordsFile.is_open()) {
    /* Reads a line from `wordsFile` into `word` until the file ends. */
      while (getline(wordsFile, word)) {
        words.push_back(word);
      }
    }
    for (size_t i = 0; i < words.size(); i++) {
      vector<string> anagram;
      for (size_t j = 0; j < words.size(); j++) {
        string w1 = words[i];
        string w2 = words[j];
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());
        if (words[i] != words[j] && (w1 == w2)) {
          if (j < i) break;
          anagram.push_back(words[j]);
        }
      }
      if (!anagram.empty()) {
        anagram.push_back(words[i]);
        dict[words[i]] = anagram;
      }
    }
}

/**
 * Constructs an AnagramDict from a vector of words.
 * @param words The vector of strings to be used as source words.
 */
AnagramDict::AnagramDict(const vector<string>& words)
{
    /* Your code goes here! */
    for (size_t i = 0; i < words.size(); i++) {
      vector<string> anagram;
      for (size_t j = 0; j < words.size(); j++) {
        string w1 = words[i];
        string w2 = words[j];
        sort(w1.begin(), w1.end());
        sort(w2.begin(), w2.end());
        if (words[i] != words[j] && (w1 == w2)) {
          if (j < i) break;
          anagram.push_back(words[j]);
        }
      }
      if (!anagram.empty()) {
        anagram.push_back(words[i]);
        dict[words[i]] = anagram;
      }
    }
}

/**
 * @param word The word to find anagrams of.
 * @return A vector of strings of anagrams of the given word. Empty
 * vector returned if no anagrams are found or the word is not in the
 * word list.
 */
vector<string> AnagramDict::get_anagrams(const string& word) const
{
    /* Your code goes here! */
    for( auto const& x : dict ){
      string w1 = word;
      string w2 = x.first;
      sort(w1.begin(), w1.end());
      sort(w2.begin(), w2.end());
      if (w1 == w2) {
        return x.second;
      }
    }
    return vector<string>();
}

/**
 * @return A vector of vectors of strings. Each inner vector contains
 * the "anagram siblings", i.e. words that are anagrams of one another.
 * NOTE: It is impossible to have one of these vectors have less than
 * two elements, i.e. words with no anagrams are ommitted.
 */
vector<vector<string>> AnagramDict::get_all_anagrams() const
{
    /* Your code goes here! */
    vector<vector<string>> allAnagram;
    for( auto const& x : dict ) {
      allAnagram.push_back(x.second);
    }
    return allAnagram;
}

#!/usr/bin/env python3

import collections


class TrieNode:
    def __init__(self):
        self.children = collections.defaultdict(TrieNode)
        self.is_word = False


class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        current = self.root
        for letter in word:
            current = current.children[letter]
            # 1. If key does not exist in defaultdict, it will create one
            #   key = letter, value = TrieNode object
            # 2. After creation, it will return the TrieNode object, which will get stored in current
            #   If the key already exists, then it will just be looked up and stored in current.
        current.is_word = True

    def search(self, word):
        current = self.root
        for letter in word:
            current = current.children.get(letter)
            if current is None:
                return False
        return current.is_word

    def startsWith(self, prefix):
        current = self.root
        for letter in prefix:
            current = current.children.get(letter)
            if current is None:
                return False
        return True


if __name__ == "__main__":
    trie = Trie()
    trie.insert("hello")
    print(trie.search("hello"))
    print(trie.search("he"))
    print(trie.startsWith("he"))

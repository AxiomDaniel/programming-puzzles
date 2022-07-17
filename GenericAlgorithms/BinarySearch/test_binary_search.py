#!/usr/bin/env python3

import unittest
from binary_search import binary_search


class TestBinarySearch(unittest.TestCase):
    def test_binary_search_target_first_elem(self):
        self.assertEqual(
            binary_search([0, 1, 2, 3, 4, 5], 0),
            0,
        )

    def test_binary_search_target_not_found_too_small(self):
        self.assertEqual(
            binary_search([0, 1, 2, 3, 4, 5], -1),
            -1,
        )

    def test_binary_search_target_not_found_too_big(self):
        self.assertEqual(
            binary_search([0, 1, 2, 3, 4, 5], 6),
            -1,
        )

    def test_binary_search_no_infinite_loop_target_found_1(self):
        self.assertEqual(
            binary_search([0, 1], 0),
            0,
        )

    def test_binary_search_no_infinite_loop_target_found_2(self):
        self.assertEqual(
            binary_search([0, 1], 1),
            1,
        )


if __name__ == "__main__":
    unittest.main()

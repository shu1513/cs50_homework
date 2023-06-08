from hello import sayhello

import unittest

class HelloTest(unittest.TestCase):
    def test_sayhello(self):
        self.assertEqual(sayhello('shu'), 'hello shu')
if __name__ = "__main__":
    unittest.main

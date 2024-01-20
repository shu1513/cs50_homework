import hello

import unittest

class HelloTest(unittest.TestCase):
    def test_sayhello(self):
        self.assertEqual(hello.sayhello('shu'), 'hello, shu')

    def test_square(self):
        self.assertEqual(hello.square(-2), 4)

    def test_square_zero(self):
        self.assertEqual(hello.square(0),0)


if __name__ == "__main__":
    unittest.main(verbosity=1)

from test import square

def test_positive():
    assert square(3) == 9

def test_negative():
    assert square(-4) == 16
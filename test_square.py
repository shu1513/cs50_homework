import pytest

from hello import square

def test_positive():
    assert square(2)==4
    assert square(5)==25

def test_negative():
    assert square(-3)==9
    assert square(-1)==1

def test_zero():
    assert square(0)==0

def test_str():
    with pytest.raises(TypeError):
        square('a')

from setuptools import find_packages
from setuptools import setup

setup(
    name='unitree_hg',
    version='0.0.0',
    packages=find_packages(
        include=('unitree_hg', 'unitree_hg.*')),
)

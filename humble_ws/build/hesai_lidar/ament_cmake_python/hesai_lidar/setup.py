from setuptools import find_packages
from setuptools import setup

setup(
    name='hesai_lidar',
    version='0.9.2',
    packages=find_packages(
        include=('hesai_lidar', 'hesai_lidar.*')),
)

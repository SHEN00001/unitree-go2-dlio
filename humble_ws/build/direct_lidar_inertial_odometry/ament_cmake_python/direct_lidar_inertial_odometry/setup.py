from setuptools import find_packages
from setuptools import setup

setup(
    name='direct_lidar_inertial_odometry',
    version='1.1.1',
    packages=find_packages(
        include=('direct_lidar_inertial_odometry', 'direct_lidar_inertial_odometry.*')),
)

from setuptools import find_packages
from setuptools import setup

setup(
    name='navbot_utils',
    version='0.0.0',
    packages=find_packages(
        include=('navbot_utils', 'navbot_utils.*')),
)

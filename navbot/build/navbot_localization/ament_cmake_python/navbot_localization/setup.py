from setuptools import find_packages
from setuptools import setup

setup(
    name='navbot_localization',
    version='0.0.0',
    packages=find_packages(
        include=('navbot_localization', 'navbot_localization.*')),
)

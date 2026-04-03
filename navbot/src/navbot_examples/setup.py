from setuptools import find_packages, setup

package_name = 'navbot_examples'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='valen',
    maintainer_email='valen@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'simple_parameter = navbot_examples.simple_parameter:main',
            'simple_turtlesim_kinematics = navbot_examples.simple_turtlesim_kinematics:main',
            'valen_pub = navbot_examples.valen_pub:main',
            'valen_subscribing = navbot_examples.valen_subscribing:main',
            'simple_tf_kinematics = navbot_examples.simple_tf_kinematics:main',
            'simple_service_server = navbot_examples.simple_service_server:main',

            'simple_service_client = navbot_examples.simple_service_client:main'
        ],
    },
)

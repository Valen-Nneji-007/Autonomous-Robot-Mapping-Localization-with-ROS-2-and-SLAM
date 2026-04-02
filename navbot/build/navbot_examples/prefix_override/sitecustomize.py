import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/c/Users/Administrator/Documents/SLAM/Autonomous-Robot-Mapping-Localization-with-ROS-2-and-SLAM-1/navbot/install/navbot_examples'

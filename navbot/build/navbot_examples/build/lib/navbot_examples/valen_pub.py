import rclpy
from rclpy.node import Node
from std_msgs.msg import String


class ValenPub(Node):
    def __init__(self):
        super().__init__("valen_pub")

        self.valen_pub_ = self.create_publisher(String, "Goodboy", 10)
        self.timer = self.create_timer(1.0, self.Callback)

    def Callback(self):
        msg = String()
        msg.data = "Getting Stronger as the day goes"
        self.valen_pub_.publish(msg)
        self.get_logger().warning(f'Must be richer: {msg.data}')

def main():
    rclpy.init()
    node = ValenPub()
    rclpy.spin(node)
    rclpy.destroy_node()
    rclpy.shutdown()

if __name__ =='__main__':
    main()
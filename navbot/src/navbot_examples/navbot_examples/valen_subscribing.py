import rclpy
from rclpy.node import Node
from std_msgs.msg import String

class ValenSub(Node):
    def __init__(self):
        super().__init__("valen_subscribing")

        self.valsub_ = self.create_subscription(String, "Goodboy", self.Callbackfun, 10)

    def Callbackfun(self, msg):
        self.get_logger().info(f"i can hear you: {msg.data}")

def main():
    rclpy.init()
    node = ValenSub()
    rclpy.spin(node)
    rclpy.destroy_node()
    rclpy.shutdown()

if __name__ =='__main__':
    main()
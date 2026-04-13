import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from tf2_ros import StaticTransformBroadcaster, TransformBroadcaster
from geometry_msgs.msg import TransformStamped



class ValenPub(Node):
    def __init__(self):
        super().__init__("valen_pub")

        self.valen_pub_ = self.create_publisher(String, "Goodboy", 10)
        self.timer = self.create_timer(1.0, self.Callback)

        self.dynamic = TransformBroadcaster(self)
        self.trans = TransformStamped()


        self.static = StaticTransformBroadcaster(self)
        self.transform_ = TransformStamped()
        self.transform_.header.frame_id = "odom"
        self.transform_.child_frame_id = "base_footprint"
        self.transform_.transform.translation.x = 0.0
        self.transform_.transform.translation.y = 0.0
        self.transform_.transform.translation.z = 0.5

        self.static.sendTransform(self.transform_)

        self.get_logger().info("it is working correctly")



    def Callback(self):
        msg = String()
        msg.data = "Getting Stronger as the day goes"
        

        
        self.trans.header.stamp = self.get_clock().now().to_msg()
        self.trans.header.frame_id = "odom"
        self.trans.child_frame_id = "base_link"

        self.trans.transform.translation.x += 0.1
        self.trans.transform.translation.y = 0.0
        self.trans.transform.translation.z = 0.0

        self.trans.transform.rotation.x = 0.0
        self.trans.transform.rotation.y = 0.0
        self.trans.transform.rotation.z += 0.4
        self.trans.transform.rotation.w += 1.0

        self.dynamic.sendTransform(self.trans)

        self.get_logger().info("the tf2 is moving very smoothly")

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
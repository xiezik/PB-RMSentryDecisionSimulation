// Generated by gencpp from file hero_msgs/JudgeSysControlResponse.msg
// DO NOT EDIT!


#ifndef HERO_MSGS_MESSAGE_JUDGESYSCONTROLRESPONSE_H
#define HERO_MSGS_MESSAGE_JUDGESYSCONTROLRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hero_msgs
{
template <class ContainerAllocator>
struct JudgeSysControlResponse_
{
  typedef JudgeSysControlResponse_<ContainerAllocator> Type;

  JudgeSysControlResponse_()
    : error_code(0)  {
    }
  JudgeSysControlResponse_(const ContainerAllocator& _alloc)
    : error_code(0)  {
  (void)_alloc;
    }



   typedef int32_t _error_code_type;
  _error_code_type error_code;





  typedef boost::shared_ptr< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> const> ConstPtr;

}; // struct JudgeSysControlResponse_

typedef ::hero_msgs::JudgeSysControlResponse_<std::allocator<void> > JudgeSysControlResponse;

typedef boost::shared_ptr< ::hero_msgs::JudgeSysControlResponse > JudgeSysControlResponsePtr;
typedef boost::shared_ptr< ::hero_msgs::JudgeSysControlResponse const> JudgeSysControlResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hero_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'hero_msgs': ['/home/ycz/ICRA_HERO_ws/devel/share/hero_msgs/msg', '/home/ycz/ICRA_HERO_ws/src/hero_msgs/msg', '/home/ycz/ICRA_HERO_ws/src/hero_msgs/msg/referee_system'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ea324a22c787839f822b9a025bc2c6fe";
  }

  static const char* value(const ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xea324a22c787839fULL;
  static const uint64_t static_value2 = 0x822b9a025bc2c6feULL;
};

template<class ContainerAllocator>
struct DataType< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hero_msgs/JudgeSysControlResponse";
  }

  static const char* value(const ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 error_code\n\
";
  }

  static const char* value(const ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JudgeSysControlResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hero_msgs::JudgeSysControlResponse_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERO_MSGS_MESSAGE_JUDGESYSCONTROLRESPONSE_H

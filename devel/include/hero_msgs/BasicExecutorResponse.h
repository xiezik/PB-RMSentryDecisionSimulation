// Generated by gencpp from file hero_msgs/BasicExecutorResponse.msg
// DO NOT EDIT!


#ifndef HERO_MSGS_MESSAGE_BASICEXECUTORRESPONSE_H
#define HERO_MSGS_MESSAGE_BASICEXECUTORRESPONSE_H


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
struct BasicExecutorResponse_
{
  typedef BasicExecutorResponse_<ContainerAllocator> Type;

  BasicExecutorResponse_()
    : error_code(0)  {
    }
  BasicExecutorResponse_(const ContainerAllocator& _alloc)
    : error_code(0)  {
  (void)_alloc;
    }



   typedef uint8_t _error_code_type;
  _error_code_type error_code;



  enum {
    OK = 100u,
    I_AM_DEAD = 101u,
    OUT_OF_AMMO = 102u,
    TARGET_IS_DEAD = 103u,
    INVALID_TARGET = 104u,
  };


  typedef boost::shared_ptr< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct BasicExecutorResponse_

typedef ::hero_msgs::BasicExecutorResponse_<std::allocator<void> > BasicExecutorResponse;

typedef boost::shared_ptr< ::hero_msgs::BasicExecutorResponse > BasicExecutorResponsePtr;
typedef boost::shared_ptr< ::hero_msgs::BasicExecutorResponse const> BasicExecutorResponseConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "99f30f8d8cf28fa4411b9b2a9dbd60cb";
  }

  static const char* value(const ::hero_msgs::BasicExecutorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x99f30f8d8cf28fa4ULL;
  static const uint64_t static_value2 = 0x411b9b2a9dbd60cbULL;
};

template<class ContainerAllocator>
struct DataType< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hero_msgs/BasicExecutorResponse";
  }

  static const char* value(const ::hero_msgs::BasicExecutorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 OK = 100\n\
uint8 I_AM_DEAD = 101\n\
uint8 OUT_OF_AMMO = 102\n\
uint8 TARGET_IS_DEAD = 103\n\
uint8 INVALID_TARGET = 104\n\
uint8 error_code\n\
\n\
";
  }

  static const char* value(const ::hero_msgs::BasicExecutorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BasicExecutorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hero_msgs::BasicExecutorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hero_msgs::BasicExecutorResponse_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.error_code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HERO_MSGS_MESSAGE_BASICEXECUTORRESPONSE_H

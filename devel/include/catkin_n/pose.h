// Generated by gencpp from file catkin_n/pose.msg
// DO NOT EDIT!


#ifndef CATKIN_N_MESSAGE_POSE_H
#define CATKIN_N_MESSAGE_POSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace catkin_n
{
template <class ContainerAllocator>
struct pose_
{
  typedef pose_<ContainerAllocator> Type;

  pose_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , pos_x(0.0)
    , pos_y(0.0)
    , pos_z(0.0)  {
    }
  pose_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , pos_x(0.0)
    , pos_y(0.0)
    , pos_z(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _pos_x_type;
  _pos_x_type pos_x;

   typedef double _pos_y_type;
  _pos_y_type pos_y;

   typedef double _pos_z_type;
  _pos_z_type pos_z;





  typedef boost::shared_ptr< ::catkin_n::pose_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::catkin_n::pose_<ContainerAllocator> const> ConstPtr;

}; // struct pose_

typedef ::catkin_n::pose_<std::allocator<void> > pose;

typedef boost::shared_ptr< ::catkin_n::pose > posePtr;
typedef boost::shared_ptr< ::catkin_n::pose const> poseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::catkin_n::pose_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::catkin_n::pose_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::catkin_n::pose_<ContainerAllocator1> & lhs, const ::catkin_n::pose_<ContainerAllocator2> & rhs)
{
  return lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z &&
    lhs.pos_x == rhs.pos_x &&
    lhs.pos_y == rhs.pos_y &&
    lhs.pos_z == rhs.pos_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::catkin_n::pose_<ContainerAllocator1> & lhs, const ::catkin_n::pose_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace catkin_n

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::catkin_n::pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::catkin_n::pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::catkin_n::pose_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::catkin_n::pose_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::catkin_n::pose_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::catkin_n::pose_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::catkin_n::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c9d8df97dbb33dcc641b54fdc205153e";
  }

  static const char* value(const ::catkin_n::pose_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc9d8df97dbb33dccULL;
  static const uint64_t static_value2 = 0x641b54fdc205153eULL;
};

template<class ContainerAllocator>
struct DataType< ::catkin_n::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "catkin_n/pose";
  }

  static const char* value(const ::catkin_n::pose_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::catkin_n::pose_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 pos_x\n"
"float64 pos_y\n"
"float64 pos_z\n"
"\n"
;
  }

  static const char* value(const ::catkin_n::pose_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::catkin_n::pose_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.pos_x);
      stream.next(m.pos_y);
      stream.next(m.pos_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct pose_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::catkin_n::pose_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::catkin_n::pose_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "pos_x: ";
    Printer<double>::stream(s, indent + "  ", v.pos_x);
    s << indent << "pos_y: ";
    Printer<double>::stream(s, indent + "  ", v.pos_y);
    s << indent << "pos_z: ";
    Printer<double>::stream(s, indent + "  ", v.pos_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CATKIN_N_MESSAGE_POSE_H
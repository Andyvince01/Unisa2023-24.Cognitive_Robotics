// Generated by gencpp from file features/Text2SpeechRequest.msg
// DO NOT EDIT!


#ifndef FEATURES_MESSAGE_TEXT2SPEECHREQUEST_H
#define FEATURES_MESSAGE_TEXT2SPEECHREQUEST_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace features
{
template <class ContainerAllocator>
struct Text2SpeechRequest_
{
  typedef Text2SpeechRequest_<ContainerAllocator> Type;

  Text2SpeechRequest_()
    : input()  {
    }
  Text2SpeechRequest_(const ContainerAllocator& _alloc)
    : input(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::String_<ContainerAllocator>  _input_type;
  _input_type input;





  typedef boost::shared_ptr< ::features::Text2SpeechRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::features::Text2SpeechRequest_<ContainerAllocator> const> ConstPtr;

}; // struct Text2SpeechRequest_

typedef ::features::Text2SpeechRequest_<std::allocator<void> > Text2SpeechRequest;

typedef boost::shared_ptr< ::features::Text2SpeechRequest > Text2SpeechRequestPtr;
typedef boost::shared_ptr< ::features::Text2SpeechRequest const> Text2SpeechRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::features::Text2SpeechRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::features::Text2SpeechRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::features::Text2SpeechRequest_<ContainerAllocator1> & lhs, const ::features::Text2SpeechRequest_<ContainerAllocator2> & rhs)
{
  return lhs.input == rhs.input;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::features::Text2SpeechRequest_<ContainerAllocator1> & lhs, const ::features::Text2SpeechRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace features

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::features::Text2SpeechRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::features::Text2SpeechRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::features::Text2SpeechRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::features::Text2SpeechRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::features::Text2SpeechRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::features::Text2SpeechRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::features::Text2SpeechRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "53159356b214209e01f9f93bea8428fd";
  }

  static const char* value(const ::features::Text2SpeechRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x53159356b214209eULL;
  static const uint64_t static_value2 = 0x01f9f93bea8428fdULL;
};

template<class ContainerAllocator>
struct DataType< ::features::Text2SpeechRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "features/Text2SpeechRequest";
  }

  static const char* value(const ::features::Text2SpeechRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::features::Text2SpeechRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/String input\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/String\n"
"string data\n"
;
  }

  static const char* value(const ::features::Text2SpeechRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::features::Text2SpeechRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.input);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Text2SpeechRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::features::Text2SpeechRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::features::Text2SpeechRequest_<ContainerAllocator>& v)
  {
    s << indent << "input: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.input);
  }
};

} // namespace message_operations
} // namespace ros

#endif // FEATURES_MESSAGE_TEXT2SPEECHREQUEST_H

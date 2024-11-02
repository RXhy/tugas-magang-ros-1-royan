// Generated by gencpp from file manage_supermarket/restockResponse.msg
// DO NOT EDIT!


#ifndef MANAGE_SUPERMARKET_MESSAGE_RESTOCKRESPONSE_H
#define MANAGE_SUPERMARKET_MESSAGE_RESTOCKRESPONSE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace manage_supermarket
{
template <class ContainerAllocator>
struct restockResponse_
{
  typedef restockResponse_<ContainerAllocator> Type;

  restockResponse_()
    : feedback()
    , jumlah(0)  {
    }
  restockResponse_(const ContainerAllocator& _alloc)
    : feedback(_alloc)
    , jumlah(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _feedback_type;
  _feedback_type feedback;

   typedef int64_t _jumlah_type;
  _jumlah_type jumlah;





  typedef boost::shared_ptr< ::manage_supermarket::restockResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manage_supermarket::restockResponse_<ContainerAllocator> const> ConstPtr;

}; // struct restockResponse_

typedef ::manage_supermarket::restockResponse_<std::allocator<void> > restockResponse;

typedef boost::shared_ptr< ::manage_supermarket::restockResponse > restockResponsePtr;
typedef boost::shared_ptr< ::manage_supermarket::restockResponse const> restockResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manage_supermarket::restockResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manage_supermarket::restockResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manage_supermarket::restockResponse_<ContainerAllocator1> & lhs, const ::manage_supermarket::restockResponse_<ContainerAllocator2> & rhs)
{
  return lhs.feedback == rhs.feedback &&
    lhs.jumlah == rhs.jumlah;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manage_supermarket::restockResponse_<ContainerAllocator1> & lhs, const ::manage_supermarket::restockResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manage_supermarket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manage_supermarket::restockResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manage_supermarket::restockResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manage_supermarket::restockResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manage_supermarket::restockResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manage_supermarket::restockResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manage_supermarket::restockResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manage_supermarket::restockResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18b11ccb085c9fd7d9d8afd8e1296376";
  }

  static const char* value(const ::manage_supermarket::restockResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18b11ccb085c9fd7ULL;
  static const uint64_t static_value2 = 0xd9d8afd8e1296376ULL;
};

template<class ContainerAllocator>
struct DataType< ::manage_supermarket::restockResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manage_supermarket/restockResponse";
  }

  static const char* value(const ::manage_supermarket::restockResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manage_supermarket::restockResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string feedback\n"
"int64 jumlah\n"
;
  }

  static const char* value(const ::manage_supermarket::restockResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manage_supermarket::restockResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.feedback);
      stream.next(m.jumlah);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct restockResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manage_supermarket::restockResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manage_supermarket::restockResponse_<ContainerAllocator>& v)
  {
    s << indent << "feedback: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.feedback);
    s << indent << "jumlah: ";
    Printer<int64_t>::stream(s, indent + "  ", v.jumlah);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANAGE_SUPERMARKET_MESSAGE_RESTOCKRESPONSE_H
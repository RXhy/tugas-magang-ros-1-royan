// Generated by gencpp from file manage_supermarket/jual_productResponse.msg
// DO NOT EDIT!


#ifndef MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCTRESPONSE_H
#define MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCTRESPONSE_H


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
struct jual_productResponse_
{
  typedef jual_productResponse_<ContainerAllocator> Type;

  jual_productResponse_()
    : transaction()  {
    }
  jual_productResponse_(const ContainerAllocator& _alloc)
    : transaction(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> _transaction_type;
  _transaction_type transaction;





  typedef boost::shared_ptr< ::manage_supermarket::jual_productResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manage_supermarket::jual_productResponse_<ContainerAllocator> const> ConstPtr;

}; // struct jual_productResponse_

typedef ::manage_supermarket::jual_productResponse_<std::allocator<void> > jual_productResponse;

typedef boost::shared_ptr< ::manage_supermarket::jual_productResponse > jual_productResponsePtr;
typedef boost::shared_ptr< ::manage_supermarket::jual_productResponse const> jual_productResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manage_supermarket::jual_productResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manage_supermarket::jual_productResponse_<ContainerAllocator1> & lhs, const ::manage_supermarket::jual_productResponse_<ContainerAllocator2> & rhs)
{
  return lhs.transaction == rhs.transaction;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manage_supermarket::jual_productResponse_<ContainerAllocator1> & lhs, const ::manage_supermarket::jual_productResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manage_supermarket

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manage_supermarket::jual_productResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manage_supermarket::jual_productResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manage_supermarket::jual_productResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "05574955e4ec9e974e1444a4ae3053cc";
  }

  static const char* value(const ::manage_supermarket::jual_productResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x05574955e4ec9e97ULL;
  static const uint64_t static_value2 = 0x4e1444a4ae3053ccULL;
};

template<class ContainerAllocator>
struct DataType< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manage_supermarket/jual_productResponse";
  }

  static const char* value(const ::manage_supermarket::jual_productResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string transaction\n"
;
  }

  static const char* value(const ::manage_supermarket::jual_productResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.transaction);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct jual_productResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manage_supermarket::jual_productResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manage_supermarket::jual_productResponse_<ContainerAllocator>& v)
  {
    s << indent << "transaction: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>>::stream(s, indent + "  ", v.transaction);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCTRESPONSE_H
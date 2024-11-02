// Generated by gencpp from file manage_supermarket/jual_product.msg
// DO NOT EDIT!


#ifndef MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCT_H
#define MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCT_H

#include <ros/service_traits.h>


#include <manage_supermarket/jual_productRequest.h>
#include <manage_supermarket/jual_productResponse.h>


namespace manage_supermarket
{

struct jual_product
{

typedef jual_productRequest Request;
typedef jual_productResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct jual_product
} // namespace manage_supermarket


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::manage_supermarket::jual_product > {
  static const char* value()
  {
    return "5bd0de7fab394602d0d215365e0c3e08";
  }

  static const char* value(const ::manage_supermarket::jual_product&) { return value(); }
};

template<>
struct DataType< ::manage_supermarket::jual_product > {
  static const char* value()
  {
    return "manage_supermarket/jual_product";
  }

  static const char* value(const ::manage_supermarket::jual_product&) { return value(); }
};


// service_traits::MD5Sum< ::manage_supermarket::jual_productRequest> should match
// service_traits::MD5Sum< ::manage_supermarket::jual_product >
template<>
struct MD5Sum< ::manage_supermarket::jual_productRequest>
{
  static const char* value()
  {
    return MD5Sum< ::manage_supermarket::jual_product >::value();
  }
  static const char* value(const ::manage_supermarket::jual_productRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::manage_supermarket::jual_productRequest> should match
// service_traits::DataType< ::manage_supermarket::jual_product >
template<>
struct DataType< ::manage_supermarket::jual_productRequest>
{
  static const char* value()
  {
    return DataType< ::manage_supermarket::jual_product >::value();
  }
  static const char* value(const ::manage_supermarket::jual_productRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::manage_supermarket::jual_productResponse> should match
// service_traits::MD5Sum< ::manage_supermarket::jual_product >
template<>
struct MD5Sum< ::manage_supermarket::jual_productResponse>
{
  static const char* value()
  {
    return MD5Sum< ::manage_supermarket::jual_product >::value();
  }
  static const char* value(const ::manage_supermarket::jual_productResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::manage_supermarket::jual_productResponse> should match
// service_traits::DataType< ::manage_supermarket::jual_product >
template<>
struct DataType< ::manage_supermarket::jual_productResponse>
{
  static const char* value()
  {
    return DataType< ::manage_supermarket::jual_product >::value();
  }
  static const char* value(const ::manage_supermarket::jual_productResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MANAGE_SUPERMARKET_MESSAGE_JUAL_PRODUCT_H
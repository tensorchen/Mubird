//
// @author: tensorchen
// @time: 2016年06月05日
//

#ifndef MUBIRD_UTIL_NONCOPYABLE_H
#define MUBIRD_UTIL_NONCOPYABLE_H

namespace mubird {
namespace util {

class NonCopyable {
protected:
    NonCopyable() = default;
    ~NonCopyable() = default;

    NonCopyable(const NonCopyable&) = delete;
    const NonCopyable& operator=(const NonCopyable&) = delete;
};

}//namespace util
}//namespace mubird

#endif//MUBIRD_UTIL_NONCOPYABLE_H

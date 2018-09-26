#include <memory>

namespace PTK {

  template<typename T, template<typename...> typename Ptr, typename... Args>
  Ptr<T> create_ptr(Args const&... args) {
    return Ptr<T>(new T(args...));
  }

  template<typename T, typename... Args>
  std::shared_ptr<T> create(Args const&... args) {
    return create_ptr<T, std::shared_ptr, Args...>(args...);
  }

}

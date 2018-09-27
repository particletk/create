#include <memory>
#include <utility>

namespace PTK {

  template<typename T, template<typename...> typename Ptr, typename... Args>
  Ptr<T> create_ptr(Args&&... args) {
    return Ptr<T>(new T(std::forward<Args>(args)...));
  }

  template<typename T, typename... Args>
  std::shared_ptr<T> create(Args&&... args) {
    return create_ptr<T, std::shared_ptr, Args...>(std::forward<Args>(args)...);
  }

}

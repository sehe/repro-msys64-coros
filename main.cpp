#include <boost/asio.hpp>
#include <iostream>
namespace asio = boost::asio;
using namespace std::chrono_literals;

asio::awaitable<void> foo(int i) {
    using namespace asio;
    co_await steady_timer(co_await this_coro::executor, 100ms).async_wait();
    std::cout << "Timer expired # " << i << '\n';
}

int main() {
    std::cout << "Hello world! " << BOOST_VERSION << std::endl;

    for (int i = 0; i < 5; i++) {
        asio::io_context ioc;
        asio::co_spawn(ioc, foo(i), asio::detached);
        ioc.run();
    }
}

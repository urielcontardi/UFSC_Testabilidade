FROM gcc:13.2

LABEL Description="Docker for development"
# User Settings
ARG USERNAME=some_user
ARG USER_UID=1000
ARG USER_GID=$USER_UID
RUN groupadd --gid $USER_GID $USERNAME \
    && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME

# [Optional] Uncomment this section to install additional OS packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive && apt-get -y install --no-install-recommends git cmake cppcheck valgrind ccache graphviz gdb doxygen gcovr lcov python3 python3-pip clang-tools lldb curl ninja-build dos2unix wget cmake-format && rm -rf /var/lib/apt/lists/*

RUN pip3 install conan lizard --break-system-packages 
RUN mkdir /workspaces

WORKDIR /workspaces

USER $USERNAME
VOLUME ["/tmp"]

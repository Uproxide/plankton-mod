export GEODE_SDK=~/geode 
export GEODE_BINDINGS_REPO_PATH=~/bindings
cmake -B build-ios -DGEODE_TARGET_PLATFORM=iOS \
    -DCMAKE_SYSTEM_NAME=iOS \
    -DCMAKE_BUILD_TYPE=RelWithDebInfo \
    -DCURL_LIBRARY=/Users/fire/Downloads/curl.xcframework/ios-arm64/curl.framework/curl \
    -DCURL_INCLUDE_DIR=/Users/fire/Downloads/curl.xcframework/ios-arm64/curl.framework/Headers 
cmake --build build-ios
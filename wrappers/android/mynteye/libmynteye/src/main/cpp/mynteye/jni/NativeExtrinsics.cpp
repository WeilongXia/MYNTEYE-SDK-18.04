// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mynteye_types.djinni

#include "NativeExtrinsics.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeExtrinsics::NativeExtrinsics() = default;

NativeExtrinsics::~NativeExtrinsics() = default;

auto NativeExtrinsics::fromCpp(JNIEnv* jniEnv, const CppType& c) -> ::djinni::LocalRef<JniType> {
    const auto& data = ::djinni::JniClass<NativeExtrinsics>::get();
    auto r = ::djinni::LocalRef<JniType>{jniEnv->NewObject(data.clazz.get(), data.jconstructor,
                                                           ::djinni::get(::djinni::List<::djinni::F64>::fromCpp(jniEnv, c.rotation)),
                                                           ::djinni::get(::djinni::List<::djinni::F64>::fromCpp(jniEnv, c.translation)))};
    ::djinni::jniExceptionCheck(jniEnv);
    return r;
}

auto NativeExtrinsics::toCpp(JNIEnv* jniEnv, JniType j) -> CppType {
    ::djinni::JniLocalScope jscope(jniEnv, 3);
    assert(j != nullptr);
    const auto& data = ::djinni::JniClass<NativeExtrinsics>::get();
    return {::djinni::List<::djinni::F64>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mRotation)),
            ::djinni::List<::djinni::F64>::toCpp(jniEnv, jniEnv->GetObjectField(j, data.field_mTranslation))};
}

}  // namespace djinni_generated

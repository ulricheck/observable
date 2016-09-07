#pragma once
#include "test_shared_export.h"
#include "observable/subject.hpp"

namespace shared {

TEST_SHARED_EXPORT void subscribe_in_shared_lib(observable::subject<> & subject);

TEST_SHARED_EXPORT void notify_void(observable::subject<> & subject);

TEST_SHARED_EXPORT int call_count();

TEST_SHARED_EXPORT void increment_call_count();

TEST_SHARED_EXPORT void reset_call_count();

}

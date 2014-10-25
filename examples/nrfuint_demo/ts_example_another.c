/* 
 * Copyright (c) 2014 Next Play Labs Inc. All Rights Reserved.
 */

#include <stdio.h>
#include "nrfunit.h"
#include "ts_example_another.h"

#define YES 1
#define NO 0

// This is a test, this is only a test...
// By convention, there is a function for each
// test, beginning with test_, that asserts
// a series of related assertions.
static const char *test_example_success() {

    nu_assert_equals("This will succeed.", 17, 10 + 7);
    nu_assert_not_equals("This too", 17, 10000 + 7);

    return TEST_SUCCEEDED;
}

// Another test
static const char *test_example_failure() {

    // Congratulations, you found the test that will
    // fail. You can fix this, but please don't check
    // it in. We want others to learn how the test
    // framework works too.
    nu_assert_equals("This will fail.", 17, 99);

    // And we won't get here due to the test failure.
    return TEST_SUCCEEDED;
}

// This is a test suite for a series of tests.
// By convention, test suites' names start with ts_
const char *ts_example_another() {

    nu_run_test(test_example_success);
    nu_run_test(test_example_failure);

	return TEST_SUCCEEDED;
}


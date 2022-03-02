#include <iostream>
#include <atomic>
#include <mutex>
#include <memory>
#include <vector>
#include <string>
#include <tuple>
#include <chrono>
#include <set>

//Assume that move operations are not present, not cheap, and not used.

/**
 * Four scenarios in which C++ 11's move semantics do you no good:
 *   1. No move operations: The object to be moved from fails to offer move operations. The move request therefore becomes a copy request.
 *   2. Move not fast: The object to be moved from has move operations that are no faster than its copy operations.
 *   3. Move not usable: The context in which the moving would take place requires a move operation tha emits no exceptions, but that operation isn't declared noexcept.
 *   4. Source object is lvalue: With very few exceptions (see e.g., Item 25) only rvalues may be used as the source of a move operation.
 */
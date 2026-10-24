#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0011e7bc
// Address: 0x11e7bc - 0x11e7c0
void entry_0011e7bc_0x11e7bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e7bc_0x11e7bc");
#endif

    ctx->pc = 0x11e7bcu;

    // 0x11e7bc: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x11e7bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
    ctx->pc = 0x11e7c0u;
}

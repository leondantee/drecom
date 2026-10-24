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

// Function: entry_00292e7c
// Address: 0x292e7c - 0x292e80
void entry_00292e7c_0x292e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292e7c_0x292e7c");
#endif

    ctx->pc = 0x292e7cu;

    // 0x292e7c: 0xae005dc4  sw          $zero, 0x5DC4($s0)
    ctx->pc = 0x292e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24004), GPR_U32(ctx, 0));
    ctx->pc = 0x292e80u;
}

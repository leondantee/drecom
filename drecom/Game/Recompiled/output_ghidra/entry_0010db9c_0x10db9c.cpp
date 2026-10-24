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

// Function: entry_0010db9c
// Address: 0x10db9c - 0x10dba0
void entry_0010db9c_0x10db9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db9c_0x10db9c");
#endif

    ctx->pc = 0x10db9cu;

    // 0x10db9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10db9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x10dba0u;
}

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

// Function: entry_00110794
// Address: 0x110794 - 0x11079c
void entry_00110794_0x110794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00110794_0x110794");
#endif

    ctx->pc = 0x110794u;

    // 0x110794: 0x26225280  addiu       $v0, $s1, 0x5280
    ctx->pc = 0x110794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
    // 0x110798: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x110798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x11079cu;
}

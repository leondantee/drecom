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

// Function: entry_001b332c
// Address: 0x1b332c - 0x1b3338
void entry_001b332c_0x1b332c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b332c_0x1b332c");
#endif

    ctx->pc = 0x1b332cu;

    // 0x1b332c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b3330: 0xa20211f0  sb          $v0, 0x11F0($s0)
    ctx->pc = 0x1b3330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4592), (uint8_t)GPR_U32(ctx, 2));
    // 0x1b3334: 0x0  nop
    ctx->pc = 0x1b3334u;
    // NOP
    ctx->pc = 0x1b3338u;
}

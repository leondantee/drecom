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

// Function: entry_001a0340
// Address: 0x1a0340 - 0x1a0350
void entry_001a0340_0x1a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0340_0x1a0340");
#endif

    ctx->pc = 0x1a0340u;

    // 0x1a0340: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x1a0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x1a0344: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a0348: 0xaea30024  sw          $v1, 0x24($s5)
    ctx->pc = 0x1a0348u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 3));
    // 0x1a034c: 0x0  nop
    ctx->pc = 0x1a034cu;
    // NOP
    ctx->pc = 0x1a0350u;
}

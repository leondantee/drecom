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

// Function: entry_0018a348
// Address: 0x18a348 - 0x18a358
void entry_0018a348_0x18a348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018a348_0x18a348");
#endif

    ctx->pc = 0x18a348u;

    // 0x18a348: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x18a348u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x18a34c: 0x269402d0  addiu       $s4, $s4, 0x2D0
    ctx->pc = 0x18a34cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
    // 0x18a350: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a350u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a354: 0x0  nop
    ctx->pc = 0x18a354u;
    // NOP
    ctx->pc = 0x18a358u;
}

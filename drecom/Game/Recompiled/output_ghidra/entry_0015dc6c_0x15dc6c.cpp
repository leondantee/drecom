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

// Function: entry_0015dc6c
// Address: 0x15dc6c - 0x15dc84
void entry_0015dc6c_0x15dc6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015dc6c_0x15dc6c");
#endif

    ctx->pc = 0x15dc6cu;

    // 0x15dc6c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15dc70: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x15dc70u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15dc74: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x15dc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x15dc78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15DC78u;
    {
        const bool branch_taken_0x15dc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15dc78) {
            ctx->pc = 0x15DC84u;
            return;
        }
    }
    ctx->pc = 0x15DC80u;
    // 0x15dc80: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x15dc80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x15dc84u;
}

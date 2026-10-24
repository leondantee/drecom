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

// Function: entry_001186cc
// Address: 0x1186cc - 0x1186e8
void entry_001186cc_0x1186cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186cc_0x1186cc");
#endif

    ctx->pc = 0x1186ccu;

    // 0x1186cc: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x1186ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1186d0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x1186d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1186d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1186d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1186d8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1186d8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1186dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1186dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1186e0: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x1186E0u;
    {
        const bool branch_taken_0x1186e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1186E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1186E0u;
        // 0x1186e4: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186e0) {
            ctx->pc = 0x118680u;
            return;
        }
    }
    ctx->pc = 0x1186E8u;
}

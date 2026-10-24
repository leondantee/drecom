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

// Function: entry_001015f8
// Address: 0x1015f8 - 0x101614
void entry_001015f8_0x1015f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001015f8_0x1015f8");
#endif

    ctx->pc = 0x1015f8u;

label_1015f8:
    // 0x1015f8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1015f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1015fc: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1015FCu;
    {
        const bool branch_taken_0x1015fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1015FCu;
        // 0x101600: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1015fc) {
            ctx->pc = 0x101554u;
            return;
        }
    }
    ctx->pc = 0x101604u;
    // 0x101604: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x101608: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x101608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x10160c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10160Cu;
    {
        const bool branch_taken_0x10160c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10160Cu;
        // 0x101610: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10160c) {
            ctx->pc = 0x1015F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1015f8;
        }
    }
    ctx->pc = 0x101614u;
}

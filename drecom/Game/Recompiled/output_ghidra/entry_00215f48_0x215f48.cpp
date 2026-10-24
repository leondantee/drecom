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

// Function: entry_00215f48
// Address: 0x215f48 - 0x215f64
void entry_00215f48_0x215f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215f48_0x215f48");
#endif

    ctx->pc = 0x215f48u;

label_215f48:
    // 0x215f48: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x215f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f4c: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x215F4Cu;
    {
        const bool branch_taken_0x215f4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x215f4c) {
            ctx->pc = 0x215F68u;
            return;
        }
    }
    ctx->pc = 0x215F54u;
    // 0x215f54: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x215f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x215f58: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x215F58u;
    {
        const bool branch_taken_0x215f58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x215F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x215F58u;
        // 0x215f5c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215f58) {
            ctx->pc = 0x215F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_215f48;
        }
    }
    ctx->pc = 0x215F60u;
    // 0x215f60: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x215f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    ctx->pc = 0x215f64u;
}

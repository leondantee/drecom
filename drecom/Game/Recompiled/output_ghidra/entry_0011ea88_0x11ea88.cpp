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

// Function: entry_0011ea88
// Address: 0x11ea88 - 0x11eab4
void entry_0011ea88_0x11ea88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ea88_0x11ea88");
#endif

    ctx->pc = 0x11ea88u;

label_11ea88:
    // 0x11ea88: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x11ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x11ea8c: 0x72078  dsll        $a0, $a3, 1
    ctx->pc = 0x11ea8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << 1);
    // 0x11ea90: 0x6483ffff  daddiu      $v1, $a0, -0x1
    ctx->pc = 0x11ea90u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4294967295);
    // 0x11ea94: 0xfcc40010  sd          $a0, 0x10($a2)
    ctx->pc = 0x11ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 4));
    // 0x11ea98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ea9c: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11eaa0: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x11eaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x11eaa4: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x11EAA4u;
    {
        const bool branch_taken_0x11eaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAA4u;
        // 0x11eaa8: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaa4) {
            ctx->pc = 0x11EA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ea88;
        }
    }
    ctx->pc = 0x11EAACu;
    // 0x11eaac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11EAACu;
    {
        const bool branch_taken_0x11eaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EAACu;
        // 0x11eab0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaac) {
            ctx->pc = 0x11EAC4u;
            return;
        }
    }
    ctx->pc = 0x11EAB4u;
}

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

// Function: entry_0011f06c
// Address: 0x11f06c - 0x11f088
void entry_0011f06c_0x11f06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f06c_0x11f06c");
#endif

    ctx->pc = 0x11f06cu;

    // 0x11f06c: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11F06Cu;
    {
        const bool branch_taken_0x11f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f06c) {
            ctx->pc = 0x11F070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F06Cu;
            // 0x11f070: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F018u;
            return;
        }
    }
    ctx->pc = 0x11F074u;
    // 0x11f074: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x11f074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f078: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f07c: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F07Cu;
    {
        const bool branch_taken_0x11f07c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f07c) {
            ctx->pc = 0x11F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F07Cu;
            // 0x11f080: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F094u;
            return;
        }
    }
    ctx->pc = 0x11F084u;
    // 0x11f084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x11f088u;
}

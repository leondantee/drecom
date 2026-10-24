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

// Function: entry_0011c058
// Address: 0x11c058 - 0x11c07c
void entry_0011c058_0x11c058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011c058_0x11c058");
#endif

    ctx->pc = 0x11c058u;

    // 0x11c058: 0x8fa201dc  lw          $v0, 0x1DC($sp)
    ctx->pc = 0x11c058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 476)));
    // 0x11c05c: 0x8fa301e0  lw          $v1, 0x1E0($sp)
    ctx->pc = 0x11c05cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x11c060: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x11c060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11c064: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C064u;
    {
        const bool branch_taken_0x11c064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c064) {
            ctx->pc = 0x11C068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11C064u;
            // 0x11c068: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11C07Cu;
            return;
        }
    }
    ctx->pc = 0x11C06Cu;
    // 0x11c06c: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x11c06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x11c070: 0x104001ad  beqz        $v0, . + 4 + (0x1AD << 2)
    ctx->pc = 0x11C070u;
    {
        const bool branch_taken_0x11c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11C070u;
        // 0x11c074: 0x33c20004  andi        $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c070) {
            ctx->pc = 0x11C728u;
            return;
        }
    }
    ctx->pc = 0x11C078u;
    // 0x11c078: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x11c078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    ctx->pc = 0x11c07cu;
}

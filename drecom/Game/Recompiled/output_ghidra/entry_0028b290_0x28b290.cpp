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

// Function: entry_0028b290
// Address: 0x28b290 - 0x28b2c0
void entry_0028b290_0x28b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028b290_0x28b290");
#endif

    ctx->pc = 0x28b290u;

    // 0x28b290: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b294: 0x8c272044  lw          $a3, 0x2044($at)
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x622044u));
    // 0x28b298: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x28b298u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x28b29c: 0x34c50011  ori         $a1, $a2, 0x11
    ctx->pc = 0x28b29cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17);
    // 0x28b2a0: 0x10e5003c  beq         $a3, $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x28B2A0u;
    {
        const bool branch_taken_0x28b2a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x28b2a0) {
            ctx->pc = 0x28B394u;
            return;
        }
    }
    ctx->pc = 0x28B2A8u;
    // 0x28b2a8: 0x2404008c  addiu       $a0, $zero, 0x8C
    ctx->pc = 0x28b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x28b2ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28b2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28b2b0: 0x8c292044  lw          $t1, 0x2044($at)
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x622044u));
    // 0x28b2b4: 0xa124011c  sb          $a0, 0x11C($t1)
    ctx->pc = 0x28b2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 284), (uint8_t)GPR_U32(ctx, 4));
    // 0x28b2b8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x28B2B8u;
    {
        const bool branch_taken_0x28b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b2b8) {
            ctx->pc = 0x28B394u;
            return;
        }
    }
    ctx->pc = 0x28B2C0u;
}

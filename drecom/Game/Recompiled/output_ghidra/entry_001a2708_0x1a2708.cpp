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

// Function: entry_001a2708
// Address: 0x1a2708 - 0x1a2730
void entry_001a2708_0x1a2708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2708_0x1a2708");
#endif

    ctx->pc = 0x1a2708u;

    // 0x1a2708: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a2708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a270c: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x1a270cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x1a2710: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1a2710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1a2714: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1a2718: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2730u;
            return;
        }
    }
    ctx->pc = 0x1A2720u;
    // 0x1a2720: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2724: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1a2724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1a2728: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a2728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a272c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1a272cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    ctx->pc = 0x1a2730u;
}

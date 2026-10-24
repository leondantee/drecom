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

// Function: entry_00216b18
// Address: 0x216b18 - 0x216b34
void entry_00216b18_0x216b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216b18_0x216b18");
#endif

    switch (ctx->pc) {
        case 0x216b30u: goto label_216b30;
        default: break;
    }

    ctx->pc = 0x216b18u;

    // 0x216b18: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x216b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x216b1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216B1Cu;
    {
        const bool branch_taken_0x216b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B1Cu;
        // 0x216b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b1c) {
            ctx->pc = 0x216B34u;
            return;
        }
    }
    ctx->pc = 0x216B24u;
    // 0x216b24: 0x2d11025  or          $v0, $s6, $s1
    ctx->pc = 0x216b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 17));
    // 0x216b28: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216B28u;
    SET_GPR_U32(ctx, 31, 0x216B30u);
    ctx->pc = 0x216B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B28u;
    // 0x216b2c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216B28u, 0x216B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B30u;
label_216b30:
    // 0x216b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x216b34u;
}

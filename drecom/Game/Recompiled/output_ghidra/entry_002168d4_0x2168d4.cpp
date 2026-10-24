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

// Function: entry_002168d4
// Address: 0x2168d4 - 0x2168f4
void entry_002168d4_0x2168d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002168d4_0x2168d4");
#endif

    switch (ctx->pc) {
        case 0x2168f0u: goto label_2168f0;
        default: break;
    }

    ctx->pc = 0x2168d4u;

    // 0x2168d4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2168d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2168d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2168D8u;
    {
        const bool branch_taken_0x2168d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2168DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2168D8u;
        // 0x2168dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168d8) {
            ctx->pc = 0x2168F4u;
            return;
        }
    }
    ctx->pc = 0x2168E0u;
    // 0x2168e0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2168e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2168e4: 0x2421025  or          $v0, $s2, $v0
    ctx->pc = 0x2168e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x2168e8: 0xc0858c8  jal         func_216320
    ctx->pc = 0x2168E8u;
    SET_GPR_U32(ctx, 31, 0x2168F0u);
    ctx->pc = 0x2168ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2168E8u;
    // 0x2168ec: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x2168E8u, 0x2168F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2168F0u;
label_2168f0:
    // 0x2168f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2168f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2168f4u;
}

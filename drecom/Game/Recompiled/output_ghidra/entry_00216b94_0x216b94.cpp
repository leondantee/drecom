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

// Function: entry_00216b94
// Address: 0x216b94 - 0x216bc4
void entry_00216b94_0x216b94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216b94_0x216b94");
#endif

    switch (ctx->pc) {
        case 0x216ba8u: goto label_216ba8;
        default: break;
    }

    ctx->pc = 0x216b94u;

    // 0x216b94: 0x26d5bc40  addiu       $s5, $s6, -0x43C0
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949952));
    // 0x216b98: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x216b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x216b9c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x216b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x216ba0: 0xc0858b8  jal         func_2162E0
    ctx->pc = 0x216BA0u;
    SET_GPR_U32(ctx, 31, 0x216BA8u);
    ctx->pc = 0x216BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216BA0u;
    // 0x216ba4: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2162E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162E0u, 0x216BA0u, 0x216BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216BA8u;
label_216ba8:
    // 0x216ba8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x216ba8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216bac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x216bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x216bb0: 0x8c43aae8  lw          $v1, -0x5518($v0)
    ctx->pc = 0x216bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38AAE8u));
    // 0x216bb4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x216BB4u;
    {
        const bool branch_taken_0x216bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216bb4) {
            ctx->pc = 0x216BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216BB4u;
            // 0x216bb8: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BC4u;
            return;
        }
    }
    ctx->pc = 0x216BBCu;
    // 0x216bbc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x216BBCu;
    {
        const bool branch_taken_0x216bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BBCu;
        // 0x216bc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bbc) {
            ctx->pc = 0x216D18u;
            return;
        }
    }
    ctx->pc = 0x216BC4u;
}

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

// Function: entry_002169e4
// Address: 0x2169e4 - 0x216a14
void entry_002169e4_0x2169e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002169e4_0x2169e4");
#endif

    switch (ctx->pc) {
        case 0x2169f8u: goto label_2169f8;
        default: break;
    }

    ctx->pc = 0x2169e4u;

    // 0x2169e4: 0x26d2bc40  addiu       $s2, $s6, -0x43C0
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949952));
    // 0x2169e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2169e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2169ec: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2169ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2169f0: 0xc0858b8  jal         func_2162E0
    ctx->pc = 0x2169F0u;
    SET_GPR_U32(ctx, 31, 0x2169F8u);
    ctx->pc = 0x2169F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2169F0u;
    // 0x2169f4: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2162E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2162E0u, 0x2169F0u, 0x2169F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169F8u;
label_2169f8:
    // 0x2169f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2169f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2169fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x216a00: 0x8c43aae8  lw          $v1, -0x5518($v0)
    ctx->pc = 0x216a00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38AAE8u));
    // 0x216a04: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x216A04u;
    {
        const bool branch_taken_0x216a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216a04) {
            ctx->pc = 0x216A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216A04u;
            // 0x216a08: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216A14u;
            return;
        }
    }
    ctx->pc = 0x216A0Cu;
    // 0x216a0c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x216A0Cu;
    {
        const bool branch_taken_0x216a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A0Cu;
        // 0x216a10: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a0c) {
            ctx->pc = 0x216B34u;
            return;
        }
    }
    ctx->pc = 0x216A14u;
}

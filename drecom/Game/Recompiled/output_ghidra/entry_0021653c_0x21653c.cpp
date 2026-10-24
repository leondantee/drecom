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

// Function: entry_0021653c
// Address: 0x21653c - 0x216570
void entry_0021653c_0x21653c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021653c_0x21653c");
#endif

    ctx->pc = 0x21653cu;

    // 0x21653c: 0x8c43aae8  lw          $v1, -0x5518($v0)
    ctx->pc = 0x21653cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945512)));
    // 0x216540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x216540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216544: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x216544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x216548: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x216548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x21654c: 0xffa600b0  sd          $a2, 0xB0($sp)
    ctx->pc = 0x21654cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 6));
    // 0x216550: 0xffa700b8  sd          $a3, 0xB8($sp)
    ctx->pc = 0x216550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 7));
    // 0x216554: 0xffa800c0  sd          $t0, 0xC0($sp)
    ctx->pc = 0x216554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 8));
    // 0x216558: 0xffa900c8  sd          $t1, 0xC8($sp)
    ctx->pc = 0x216558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 9));
    // 0x21655c: 0xffaa00d0  sd          $t2, 0xD0($sp)
    ctx->pc = 0x21655cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 10));
    // 0x216560: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x216560u;
    {
        const bool branch_taken_0x216560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x216564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216560u;
        // 0x216564: 0xffab00d8  sd          $t3, 0xD8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216560) {
            ctx->pc = 0x216570u;
            return;
        }
    }
    ctx->pc = 0x216568u;
    // 0x216568: 0xc0858cc  jal         func_216330
    ctx->pc = 0x216568u;
    SET_GPR_U32(ctx, 31, 0x216570u);
    ctx->pc = 0x216330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216330u, 0x216568u, 0x216570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216570u;
}

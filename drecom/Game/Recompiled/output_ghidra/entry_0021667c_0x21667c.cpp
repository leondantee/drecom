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

// Function: entry_0021667c
// Address: 0x21667c - 0x21669c
void entry_0021667c_0x21667c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021667c_0x21667c");
#endif

    switch (ctx->pc) {
        case 0x216688u: goto label_216688;
        default: break;
    }

    ctx->pc = 0x21667cu;

    // 0x21667c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x21667cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x216680: 0xc0858c8  jal         func_216320
    ctx->pc = 0x216680u;
    SET_GPR_U32(ctx, 31, 0x216688u);
    ctx->pc = 0x216684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216680u;
    // 0x216684: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x216680u, 0x216688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216688u;
label_216688:
    // 0x216688: 0x6030004  bgezl       $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216688u;
    {
        const bool branch_taken_0x216688 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x216688) {
            ctx->pc = 0x21668Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216688u;
            // 0x21668c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21669Cu;
            return;
        }
    }
    ctx->pc = 0x216690u;
    // 0x216690: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x216690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x216694: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216694u;
    {
        const bool branch_taken_0x216694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216694u;
        // 0x216698: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216694) {
            ctx->pc = 0x2166B8u;
            return;
        }
    }
    ctx->pc = 0x21669Cu;
}

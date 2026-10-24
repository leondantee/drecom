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

// Function: entry_0010a990
// Address: 0x10a990 - 0x10a9b4
void entry_0010a990_0x10a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a990_0x10a990");
#endif

    switch (ctx->pc) {
        case 0x10a998u: goto label_10a998;
        case 0x10a9a8u: goto label_10a9a8;
        default: break;
    }

    ctx->pc = 0x10a990u;

    // 0x10a990: 0xc041d2e  jal         func_1074B8
    ctx->pc = 0x10A990u;
    SET_GPR_U32(ctx, 31, 0x10A998u);
    ctx->pc = 0x10A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A990u;
    // 0x10a994: 0xaeb13d1c  sw          $s1, 0x3D1C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 15644), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1074B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1074B8u, 0x10A990u, 0x10A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A998u;
label_10a998:
    // 0x10a998: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A998u;
    {
        const bool branch_taken_0x10a998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a998) {
            ctx->pc = 0x10A99Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A998u;
            // 0x10a99c: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A9B4u;
            return;
        }
    }
    ctx->pc = 0x10A9A0u;
    // 0x10a9a0: 0xc042a9c  jal         func_10AA70
    ctx->pc = 0x10A9A0u;
    SET_GPR_U32(ctx, 31, 0x10A9A8u);
    ctx->pc = 0x10A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9A0u;
    // 0x10a9a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AA70u, 0x10A9A0u, 0x10A9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A9A8u;
label_10a9a8:
    // 0x10a9a8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x10a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x10a9ac: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x10A9ACu;
    {
        const bool branch_taken_0x10a9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9ACu;
        // 0x10a9b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9ac) {
            ctx->pc = 0x10AA48u;
            return;
        }
    }
    ctx->pc = 0x10A9B4u;
}

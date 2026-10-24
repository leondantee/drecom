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

// Function: entry_0021658c
// Address: 0x21658c - 0x2165c0
void entry_0021658c_0x21658c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021658c_0x21658c");
#endif

    switch (ctx->pc) {
        case 0x216594u: goto label_216594;
        case 0x2165a4u: goto label_2165a4;
        case 0x2165b8u: goto label_2165b8;
        default: break;
    }

    ctx->pc = 0x21658cu;

    // 0x21658c: 0xc0858c6  jal         func_216318
    ctx->pc = 0x21658Cu;
    SET_GPR_U32(ctx, 31, 0x216594u);
    ctx->pc = 0x216590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21658Cu;
    // 0x216590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216318u, 0x21658Cu, 0x216594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216594u;
label_216594:
    // 0x216594: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x216594u;
    {
        const bool branch_taken_0x216594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216594u;
        // 0x216598: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216594) {
            ctx->pc = 0x2166B8u;
            return;
        }
    }
    ctx->pc = 0x21659Cu;
    // 0x21659c: 0xc08589c  jal         func_216270
    ctx->pc = 0x21659Cu;
    SET_GPR_U32(ctx, 31, 0x2165A4u);
    ctx->pc = 0x216270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216270u, 0x21659Cu, 0x2165A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165A4u;
label_2165a4:
    // 0x2165a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2165a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165a8: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2165A8u;
    {
        const bool branch_taken_0x2165a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2165a8) {
            ctx->pc = 0x2165ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2165A8u;
            // 0x2165ac: 0x92030000  lbu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2165C0u;
            return;
        }
    }
    ctx->pc = 0x2165B0u;
    // 0x2165b0: 0xc0858c8  jal         func_216320
    ctx->pc = 0x2165B0u;
    SET_GPR_U32(ctx, 31, 0x2165B8u);
    ctx->pc = 0x216320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216320u, 0x2165B0u, 0x2165B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2165B8u;
label_2165b8:
    // 0x2165b8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2165B8u;
    {
        const bool branch_taken_0x2165b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2165BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2165B8u;
        // 0x2165bc: 0x2402ffed  addiu       $v0, $zero, -0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165b8) {
            ctx->pc = 0x2166B8u;
            return;
        }
    }
    ctx->pc = 0x2165C0u;
}

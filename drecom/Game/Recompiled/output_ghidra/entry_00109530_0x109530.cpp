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

// Function: entry_00109530
// Address: 0x109530 - 0x109560
void entry_00109530_0x109530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109530_0x109530");
#endif

    switch (ctx->pc) {
        case 0x109538u: goto label_109538;
        default: break;
    }

    ctx->pc = 0x109530u;

    // 0x109530: 0xc042666  jal         func_109998
    ctx->pc = 0x109530u;
    SET_GPR_U32(ctx, 31, 0x109538u);
    ctx->pc = 0x109534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109530u;
    // 0x109534: 0x26450018  addiu       $a1, $s2, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109998u, 0x109530u, 0x109538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109538u;
label_109538:
    // 0x109538: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x109538u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x10953c: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x10953cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x109540: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x109540u;
    {
        const bool branch_taken_0x109540 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x109544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109540u;
        // 0x109544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109540) {
            ctx->pc = 0x10960Cu;
            return;
        }
    }
    ctx->pc = 0x109548u;
    // 0x109548: 0x8ec40048  lw          $a0, 0x48($s6)
    ctx->pc = 0x109548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x10954c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10954cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109550: 0x1880000f  blez        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x109550u;
    {
        const bool branch_taken_0x109550 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x109554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109550u;
        // 0x109554: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109550) {
            ctx->pc = 0x109590u;
            return;
        }
    }
    ctx->pc = 0x109558u;
    // 0x109558: 0xde450018  ld          $a1, 0x18($s2)
    ctx->pc = 0x109558u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x10955c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x10955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    ctx->pc = 0x109560u;
}

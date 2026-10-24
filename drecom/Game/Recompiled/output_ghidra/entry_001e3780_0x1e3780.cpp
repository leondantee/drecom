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

// Function: entry_001e3780
// Address: 0x1e3780 - 0x1e37c8
void entry_001e3780_0x1e3780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e3780_0x1e3780");
#endif

    switch (ctx->pc) {
        case 0x1e3794u: goto label_1e3794;
        default: break;
    }

    ctx->pc = 0x1e3780u;

    // 0x1e3780: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1e3780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3784: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3788: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e3788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e378c: 0xc078340  jal         func_1E0D00
    ctx->pc = 0x1E378Cu;
    SET_GPR_U32(ctx, 31, 0x1E3794u);
    ctx->pc = 0x1E0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0D00u, 0x1E378Cu, 0x1E3794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3794u;
label_1e3794:
    // 0x1e3794: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x1e3794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e379c: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e379cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e37a0: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e37a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e37a4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E37A4u;
    {
        const bool branch_taken_0x1e37a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e37a4) {
            ctx->pc = 0x1E37C8u;
            return;
        }
    }
    ctx->pc = 0x1E37ACu;
    // 0x1e37ac: 0x27a200f4  addiu       $v0, $sp, 0xF4
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
    // 0x1e37b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e37b4: 0x3401fff1  ori         $at, $zero, 0xFFF1
    ctx->pc = 0x1e37b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65521);
    // 0x1e37b8: 0x41082b  sltu        $at, $v0, $at
    ctx->pc = 0x1e37b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 1)) ? 1 : 0);
    // 0x1e37bc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E37BCu;
    {
        const bool branch_taken_0x1e37bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e37bc) {
            ctx->pc = 0x1E37D0u;
            return;
        }
    }
    ctx->pc = 0x1E37C4u;
    // 0x1e37c4: 0x0  nop
    ctx->pc = 0x1e37c4u;
    // NOP
    ctx->pc = 0x1e37c8u;
}

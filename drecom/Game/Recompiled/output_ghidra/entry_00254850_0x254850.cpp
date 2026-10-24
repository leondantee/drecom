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

// Function: entry_00254850
// Address: 0x254850 - 0x2548a0
void entry_00254850_0x254850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254850_0x254850");
#endif

    ctx->pc = 0x254850u;

    // 0x254850: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254854: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x254854u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254858: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x25485c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x25485cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x254860: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x254860u;
    {
        const bool branch_taken_0x254860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x254860) {
            ctx->pc = 0x254834u;
            return;
        }
    }
    ctx->pc = 0x254868u;
    // 0x254868: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x254868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25486c: 0x94420050  lhu         $v0, 0x50($v0)
    ctx->pc = 0x25486cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x254870: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x254870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x254874: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x254874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x254878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25487c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25487cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x254880: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x254880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x254884: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x254884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x254888: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x254888u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25488c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25488cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254894: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x254894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x254898: 0x3e00008  jr          $ra
    ctx->pc = 0x254898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2548A0u;
}

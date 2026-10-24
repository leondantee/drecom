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

// Function: ReadDataSetAddr
// Address: 0x35c830 - 0x35c8a0
void ReadDataSetAddr_0x35c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ReadDataSetAddr_0x35c830");
#endif

    ctx->pc = 0x35c830u;

    // 0x35c830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35c834: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35c834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35c838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35c838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35c83c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x35c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x35c840: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x35c840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x35c844: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c848: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x35c848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c84c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35c84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c850: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x35c850u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35c854: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x35C854u;
    {
        const bool branch_taken_0x35c854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c854) {
            ctx->pc = 0x35C86Cu;
            goto label_35c86c;
        }
    }
    ctx->pc = 0x35C85Cu;
    // 0x35c85c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x35c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c860: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x35c860u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x35c864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C864u;
    {
        const bool branch_taken_0x35c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c864) {
            ctx->pc = 0x35C874u;
            goto label_35c874;
        }
    }
    ctx->pc = 0x35C86Cu;
label_35c86c:
    // 0x35c86c: 0x8fb10028  lw          $s1, 0x28($sp)
    ctx->pc = 0x35c86cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35c870: 0x0  nop
    ctx->pc = 0x35c870u;
    // NOP
label_35c874:
    // 0x35c874: 0x72208628  paddub      $s0, $s1, $zero
    ctx->pc = 0x35c874u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x35c878: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x35c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35c87c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x35c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x35c880: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x35c880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35c884: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x35c884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x35c888: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x35c888u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35c88c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35c88cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c890: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35c890u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c894: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35c894u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35c898: 0x3e00008  jr          $ra
    ctx->pc = 0x35C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C8A0u;
}

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

// Function: entry_001d5e88
// Address: 0x1d5e88 - 0x1d5ed8
void entry_001d5e88_0x1d5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5e88_0x1d5e88");
#endif

    ctx->pc = 0x1d5e88u;

    // 0x1d5e88: 0x132980  sll         $a1, $s3, 6
    ctx->pc = 0x1d5e88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1d5e8c: 0x70a09e28  paddub      $s3, $a1, $zero
    ctx->pc = 0x1d5e8cu;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1d5e90: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1d5e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d5e94: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1d5e94u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1d5e98: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1d5e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1d5e9c: 0x1680ff30  bnez        $s4, . + 4 + (-0xD0 << 2)
    ctx->pc = 0x1D5E9Cu;
    {
        const bool branch_taken_0x1d5e9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e9c) {
            ctx->pc = 0x1D5B60u;
            return;
        }
    }
    ctx->pc = 0x1D5EA4u;
    // 0x1d5ea4: 0x7bbf0090  lq          $ra, 0x90($sp)
    ctx->pc = 0x1d5ea4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d5ea8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d5eac: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d5eacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d5eb0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d5eb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d5eb4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d5eb4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d5eb8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d5ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d5ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d5ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d5ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d5ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d5ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d5ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5ecc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1d5ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D5ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D5ED8u;
}

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

// Function: Save_file
// Address: 0x17a850 - 0x17a8b8
void Save_file_0x17a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Save_file_0x17a850");
#endif

    switch (ctx->pc) {
        case 0x17a874u: goto label_17a874;
        case 0x17a888u: goto label_17a888;
        default: break;
    }

    ctx->pc = 0x17a850u;

    // 0x17a850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17a854: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17a854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17a858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a85c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17a85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17a860: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x17a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x17a864: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x17a864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x17a868: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x17a868u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17a86c: 0xc084b28  jal         func_212CA0
    ctx->pc = 0x17A86Cu;
    SET_GPR_U32(ctx, 31, 0x17A874u);
    ctx->pc = 0x212CA0u;
    {
        ctx->pc = 0x17A874u;
        ps2_syscalls::FlushCache(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x17A874u) { return; }
    ctx->pc = 0x17A874u;
label_17a874:
    // 0x17a874: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17a874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a878: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x17a878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a87c: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x17a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a880: 0xc076570  jal         func_1D95C0
    ctx->pc = 0x17A880u;
    SET_GPR_U32(ctx, 31, 0x17A888u);
    ctx->pc = 0x1D95C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D95C0u, 0x17A880u, 0x17A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A888u;
label_17a888:
    // 0x17a888: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x17a888u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x17a88c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17A88Cu;
    {
        const bool branch_taken_0x17a88c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x17a88c) {
            ctx->pc = 0x17A8A0u;
            goto label_17a8a0;
        }
    }
    ctx->pc = 0x17A894u;
    // 0x17a894: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17A898u;
    {
        const bool branch_taken_0x17a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a898) {
            ctx->pc = 0x17A8A4u;
            goto label_17a8a4;
        }
    }
    ctx->pc = 0x17A8A0u;
label_17a8a0:
    // 0x17a8a0: 0x72001628  paddub      $v0, $s0, $zero
    ctx->pc = 0x17a8a0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_17a8a4:
    // 0x17a8a4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17a8a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a8a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a8a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a8ac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x17a8acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x17a8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x17A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A8B8u;
}

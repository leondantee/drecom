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

// Function: Srp07_scr_at_ck
// Address: 0x3200b0 - 0x32010c
void Srp07_scr_at_ck_0x3200b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Srp07_scr_at_ck_0x3200b0");
#endif

    switch (ctx->pc) {
        case 0x3200dcu: goto label_3200dc;
        default: break;
    }

    ctx->pc = 0x3200b0u;

    // 0x3200b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3200b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3200b4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x3200b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x3200b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3200b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3200bc: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3200bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x3200c0: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x3200c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x3200c4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3200c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3200c8: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3200c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3200cc: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x3200ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3200d0: 0x240707c0  addiu       $a3, $zero, 0x7C0
    ctx->pc = 0x3200d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1984));
    // 0x3200d4: 0xc059e1c  jal         func_167870
    ctx->pc = 0x3200D4u;
    SET_GPR_U32(ctx, 31, 0x3200DCu);
    ctx->pc = 0x167870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167870u, 0x3200D4u, 0x3200DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3200DCu;
label_3200dc:
    // 0x3200dc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x3200dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x3200e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3200E0u;
    {
        const bool branch_taken_0x3200e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200e0) {
            ctx->pc = 0x3200F4u;
            goto label_3200f4;
        }
    }
    ctx->pc = 0x3200E8u;
    // 0x3200e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3200e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3200ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3200ECu;
    {
        const bool branch_taken_0x3200ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3200ec) {
            ctx->pc = 0x3200F8u;
            goto label_3200f8;
        }
    }
    ctx->pc = 0x3200F4u;
label_3200f4:
    // 0x3200f4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x3200f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3200f8:
    // 0x3200f8: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3200f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3200fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3200fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320100: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x320100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x320104: 0x3e00008  jr          $ra
    ctx->pc = 0x320104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32010Cu;
}

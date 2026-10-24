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

// Function: Gp_Rengt416_init2
// Address: 0x1d34a0 - 0x1d3508
void Gp_Rengt416_init2_0x1d34a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gp_Rengt416_init2_0x1d34a0");
#endif

    switch (ctx->pc) {
        case 0x1d34bcu: goto label_1d34bc;
        default: break;
    }

    ctx->pc = 0x1d34a0u;

    // 0x1d34a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d34a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d34a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d34a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d34a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d34a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d34ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1d34acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1d34b0: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1d34b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1d34b4: 0x24110022  addiu       $s1, $zero, 0x22
    ctx->pc = 0x1d34b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x1d34b8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1d34b8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_1d34bc:
    // 0x1d34bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d34bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34c0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1d34c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d34c4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d34c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d34c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d34c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d34cc: 0xe46005dc  swc1        $f0, 0x5DC($v1)
    ctx->pc = 0x1d34ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1500), bits); }
    // 0x1d34d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d34d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d34d4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x1d34d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1d34d8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1d34d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d34dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d34dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d34e0: 0xe46005dc  swc1        $f0, 0x5DC($v1)
    ctx->pc = 0x1d34e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1500), bits); }
    // 0x1d34e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d34e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d34e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1d34e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1d34ec: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D34ECu;
    {
        const bool branch_taken_0x1d34ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d34ec) {
            ctx->pc = 0x1D34BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d34bc;
        }
    }
    ctx->pc = 0x1D34F4u;
    // 0x1d34f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d34f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d34f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d34f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d34fc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d34fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d3500: 0x3e00008  jr          $ra
    ctx->pc = 0x1D3500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D3500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D3508u;
}

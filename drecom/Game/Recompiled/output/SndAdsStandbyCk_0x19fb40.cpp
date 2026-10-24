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

// Function: SndAdsStandbyCk
// Address: 0x19fb40 - 0x19fbfc
void SndAdsStandbyCk_0x19fb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SndAdsStandbyCk_0x19fb40");
#endif

    switch (ctx->pc) {
        case 0x19fba4u: goto label_19fba4;
        case 0x19fbc4u: goto label_19fbc4;
        default: break;
    }

    ctx->pc = 0x19fb40u;

    // 0x19fb40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19fb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19fb44: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19fb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19fb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19fb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19fb4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19fb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19fb50: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x19fb50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x19fb54: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19fb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19fb58: 0x8c221a40  lw          $v0, 0x1A40($at)
    ctx->pc = 0x19fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A40u));
    // 0x19fb5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19fb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19fb60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB60u;
    {
        const bool branch_taken_0x19fb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb60) {
            ctx->pc = 0x19FB74u;
            goto label_19fb74;
        }
    }
    ctx->pc = 0x19FB68u;
    // 0x19fb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb6c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19FB6Cu;
    {
        const bool branch_taken_0x19fb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fb6c) {
            ctx->pc = 0x19FBE4u;
            goto label_19fbe4;
        }
    }
    ctx->pc = 0x19FB74u;
label_19fb74:
    // 0x19fb74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19fb7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FB7Cu;
    {
        const bool branch_taken_0x19fb7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19fb7c) {
            ctx->pc = 0x19FB90u;
            goto label_19fb90;
        }
    }
    ctx->pc = 0x19FB84u;
    // 0x19fb84: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb88: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19FB88u;
    {
        const bool branch_taken_0x19fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19fb88) {
            ctx->pc = 0x19FBB0u;
            goto label_19fbb0;
        }
    }
    ctx->pc = 0x19FB90u;
label_19fb90:
    // 0x19fb90: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19fb94: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x19fb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19fb98: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x19fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19fb9c: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FB9Cu;
    SET_GPR_U32(ctx, 31, 0x19FBA4u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FB9Cu, 0x19FBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBA4u;
label_19fba4:
    // 0x19fba4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19fba4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x19fba8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19FBA8u;
    {
        const bool branch_taken_0x19fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fba8) {
            ctx->pc = 0x19FBC8u;
            goto label_19fbc8;
        }
    }
    ctx->pc = 0x19FBB0u;
label_19fbb0:
    // 0x19fbb0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x19fbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x19fbb4: 0x34440001  ori         $a0, $v0, 0x1
    ctx->pc = 0x19fbb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x19fbb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19fbb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19fbbc: 0xc0ce8fc  jal         func_33A3F0
    ctx->pc = 0x19FBBCu;
    SET_GPR_U32(ctx, 31, 0x19FBC4u);
    ctx->pc = 0x33A3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A3F0u, 0x19FBBCu, 0x19FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FBC4u;
label_19fbc4:
    // 0x19fbc4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x19fbc4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_19fbc8:
    // 0x19fbc8: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19FBC8u;
    {
        const bool branch_taken_0x19fbc8 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x19fbc8) {
            ctx->pc = 0x19FBDCu;
            goto label_19fbdc;
        }
    }
    ctx->pc = 0x19FBD0u;
    // 0x19fbd0: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x19fbd0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19fbd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19FBD4u;
    {
        const bool branch_taken_0x19fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19fbd4) {
            ctx->pc = 0x19FBE0u;
            goto label_19fbe0;
        }
    }
    ctx->pc = 0x19FBDCu;
label_19fbdc:
    // 0x19fbdc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x19fbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19fbe0:
    // 0x19fbe0: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x19fbe0u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_19fbe4:
    // 0x19fbe4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19fbe4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19fbe8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19fbe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19fbec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19fbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19fbf0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19fbf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19fbf4: 0x3e00008  jr          $ra
    ctx->pc = 0x19FBF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FBF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FBFCu;
}

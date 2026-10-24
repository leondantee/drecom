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

// Function: Om27_R0_init
// Address: 0x35ecf0 - 0x35ede4
void Om27_R0_init_0x35ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om27_R0_init_0x35ecf0");
#endif

    switch (ctx->pc) {
        case 0x35ed24u: goto label_35ed24;
        case 0x35ed3cu: goto label_35ed3c;
        default: break;
    }

    ctx->pc = 0x35ecf0u;

    // 0x35ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35ecf4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x35ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x35ecf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35ecfc: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x35ecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x35ed00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x35ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed04: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x35ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35ed08: 0x24500360  addiu       $s0, $v0, 0x360
    ctx->pc = 0x35ed08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x35ed0c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x35ed0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35ed10: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x35ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x35ed14: 0x34452001  ori         $a1, $v0, 0x2001
    ctx->pc = 0x35ed14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x35ed18: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35ed18u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35ed1c: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x35ED1Cu;
    SET_GPR_U32(ctx, 31, 0x35ED24u);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x35ED1Cu, 0x35ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED24u;
label_35ed24:
    // 0x35ed24: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x35ed24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x35ed28: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x35ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x35ed2c: 0x34452001  ori         $a1, $v0, 0x2001
    ctx->pc = 0x35ed2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8193);
    // 0x35ed30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35ed30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35ed34: 0xc077a5c  jal         func_1DE970
    ctx->pc = 0x35ED34u;
    SET_GPR_U32(ctx, 31, 0x35ED3Cu);
    ctx->pc = 0x1DE970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE970u, 0x35ED34u, 0x35ED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35ED3Cu;
label_35ed3c:
    // 0x35ed3c: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35ed40: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35ed40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35ed44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ed44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ed48: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed4c: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x35ed4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x35ed50: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35ed50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35ed54: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35ed54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35ed58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ed58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ed5c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed60: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x35ed60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x35ed64: 0x3c03c974  lui         $v1, 0xC974
    ctx->pc = 0x35ed64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51572 << 16));
    // 0x35ed68: 0x34632400  ori         $v1, $v1, 0x2400
    ctx->pc = 0x35ed68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9216);
    // 0x35ed6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x35ed6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ed70: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed74: 0xe4600128  swc1        $f0, 0x128($v1)
    ctx->pc = 0x35ed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 296), bits); }
    // 0x35ed78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x35ed78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35ed7c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed80: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x35ed80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x35ed84: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed88: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x35ed88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x35ed8c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed90: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x35ed90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x35ed94: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x35ed94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35ed98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35ed98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35ed9c: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x35ed9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x35eda0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x35eda0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x35eda4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35eda4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35eda8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35edac: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x35edacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35edb0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35edb4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x35edb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35edb8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35edb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35edbc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x35edbcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35edc0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35edc4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x35edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35edc8: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x35edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35edcc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x35edccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x35edd0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x35edd0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35edd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35edd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35edd8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x35edd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35eddc: 0x3e00008  jr          $ra
    ctx->pc = 0x35EDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EDE4u;
}

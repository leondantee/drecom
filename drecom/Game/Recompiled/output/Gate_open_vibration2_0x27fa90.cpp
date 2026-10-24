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

// Function: Gate_open_vibration2
// Address: 0x27fa90 - 0x27fb88
void Gate_open_vibration2_0x27fa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gate_open_vibration2_0x27fa90");
#endif

    switch (ctx->pc) {
        case 0x27fac8u: goto label_27fac8;
        case 0x27fad0u: goto label_27fad0;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb68u: goto label_27fb68;
        default: break;
    }

    ctx->pc = 0x27fa90u;

    // 0x27fa90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27fa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27fa94: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27fa94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27fa98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27fa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27fa9c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27fa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27faa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27faa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27faa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27faa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27faa8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27faa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27faac: 0x8c33f9e0  lw          $s3, -0x620($at)
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27fab0: 0x8e7102d0  lw          $s1, 0x2D0($s3)
    ctx->pc = 0x27fab0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27fab4: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x27fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27fab8: 0x24520190  addiu       $s2, $v0, 0x190
    ctx->pc = 0x27fab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27fabc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27fabcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27fac0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27FAC0u;
    {
        const bool branch_taken_0x27fac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fac0) {
            ctx->pc = 0x27FB48u;
            goto label_27fb48;
        }
    }
    ctx->pc = 0x27FAC8u;
label_27fac8:
    // 0x27fac8: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27FAC8u;
    SET_GPR_U32(ctx, 31, 0x27FAD0u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27FAC8u, 0x27FAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FAD0u;
label_27fad0:
    // 0x27fad0: 0x3c02bc8e  lui         $v0, 0xBC8E
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48270 << 16));
    // 0x27fad4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fad8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fad8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fadc: 0x0  nop
    ctx->pc = 0x27fadcu;
    // NOP
    // 0x27fae0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fae0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fae4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fae8: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fae8u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27faec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27faecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27faf0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27faf0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27faf4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27faf4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27faf8: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FAF8u;
    SET_GPR_U32(ctx, 31, 0x27FB00u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FAF8u, 0x27FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB00u;
label_27fb00:
    // 0x27fb00: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x27FB00u;
    SET_GPR_U32(ctx, 31, 0x27FB08u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x27FB00u, 0x27FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB08u;
label_27fb08:
    // 0x27fb08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27fb0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fb10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fb14: 0x0  nop
    ctx->pc = 0x27fb14u;
    // NOP
    // 0x27fb18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fb18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fb1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fb20: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fb20u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fb24: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27fb24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fb28: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fb28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fb2c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fb2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fb30: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FB30u;
    SET_GPR_U32(ctx, 31, 0x27FB38u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FB30u, 0x27FB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB38u;
label_27fb38:
    // 0x27fb38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fb3c: 0xc084964  jal         func_212590
    ctx->pc = 0x27FB3Cu;
    SET_GPR_U32(ctx, 31, 0x27FB44u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FB3Cu, 0x27FB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB44u;
label_27fb44:
    // 0x27fb44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fb44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27fb48:
    // 0x27fb48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fb4c: 0x94221b78  lhu         $v0, 0x1B78($at)
    ctx->pc = 0x27fb4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B78u));
    // 0x27fb50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27fb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27fb54: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x27fb54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fb58: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27FB58u;
    {
        const bool branch_taken_0x27fb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fb58) {
            ctx->pc = 0x27FAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27fac8;
        }
    }
    ctx->pc = 0x27FB60u;
    // 0x27fb60: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FB60u;
    SET_GPR_U32(ctx, 31, 0x27FB68u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FB60u, 0x27FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FB68u;
label_27fb68:
    // 0x27fb68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27fb68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fb6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fb6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fb70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fb7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27fb7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27fb80: 0x3e00008  jr          $ra
    ctx->pc = 0x27FB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FB88u;
}

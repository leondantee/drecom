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

// Function: Gate_open_vibration
// Address: 0x27f990 - 0x27fa88
void Gate_open_vibration_0x27f990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Gate_open_vibration_0x27f990");
#endif

    switch (ctx->pc) {
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa44u: goto label_27fa44;
        case 0x27fa68u: goto label_27fa68;
        default: break;
    }

    ctx->pc = 0x27f990u;

    // 0x27f990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27f994: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x27f994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
    // 0x27f998: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27f99c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f99cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27f9a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f9a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27f9a4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27f9a8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f9ac: 0x8c33f9e0  lw          $s3, -0x620($at)
    ctx->pc = 0x27f9acu;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x27f9b0: 0x8e7102d0  lw          $s1, 0x2D0($s3)
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27f9b4: 0x8e6202d0  lw          $v0, 0x2D0($s3)
    ctx->pc = 0x27f9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 720)));
    // 0x27f9b8: 0x24520190  addiu       $s2, $v0, 0x190
    ctx->pc = 0x27f9b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
    // 0x27f9bc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27f9bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27f9c0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27F9C0u;
    {
        const bool branch_taken_0x27f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9c0) {
            ctx->pc = 0x27FA48u;
            goto label_27fa48;
        }
    }
    ctx->pc = 0x27F9C8u;
label_27f9c8:
    // 0x27f9c8: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27F9C8u;
    SET_GPR_U32(ctx, 31, 0x27F9D0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27F9C8u, 0x27F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F9D0u;
label_27f9d0:
    // 0x27f9d0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27f9d4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27f9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27f9d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27f9dc: 0x0  nop
    ctx->pc = 0x27f9dcu;
    // NOP
    // 0x27f9e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27f9e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27f9e4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27f9e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27f9e8: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27f9e8u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27f9ec: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27f9ecu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27f9f0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x27f9f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f9f4: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x27f9f4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x27f9f8: 0xc067808  jal         func_19E020
    ctx->pc = 0x27F9F8u;
    SET_GPR_U32(ctx, 31, 0x27FA00u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27F9F8u, 0x27FA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA00u;
label_27fa00:
    // 0x27fa00: 0xc06765c  jal         func_19D970
    ctx->pc = 0x27FA00u;
    SET_GPR_U32(ctx, 31, 0x27FA08u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x27FA00u, 0x27FA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA08u;
label_27fa08:
    // 0x27fa08: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x27fa08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
    // 0x27fa0c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
    // 0x27fa10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27fa10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27fa14: 0x0  nop
    ctx->pc = 0x27fa14u;
    // NOP
    // 0x27fa18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27fa18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x27fa1c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fa20: 0xc4201b7c  lwc1        $f0, 0x1B7C($at)
    ctx->pc = 0x27fa20u;
    { uint32_t bits = FAST_READ32(0x621B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27fa24: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x27fa24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x27fa28: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x27fa28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fa2c: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x27fa2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x27fa30: 0xc067808  jal         func_19E020
    ctx->pc = 0x27FA30u;
    SET_GPR_U32(ctx, 31, 0x27FA38u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x27FA30u, 0x27FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA38u;
label_27fa38:
    // 0x27fa38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27fa38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27fa3c: 0xc084964  jal         func_212590
    ctx->pc = 0x27FA3Cu;
    SET_GPR_U32(ctx, 31, 0x27FA44u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27FA3Cu, 0x27FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA44u;
label_27fa44:
    // 0x27fa44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fa44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27fa48:
    // 0x27fa48: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27fa4c: 0x94221b78  lhu         $v0, 0x1B78($at)
    ctx->pc = 0x27fa4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x621B78u));
    // 0x27fa50: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x27fa54: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x27fa54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fa58: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x27FA58u;
    {
        const bool branch_taken_0x27fa58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fa58) {
            ctx->pc = 0x27F9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27f9c8;
        }
    }
    ctx->pc = 0x27FA60u;
    // 0x27fa60: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FA60u;
    SET_GPR_U32(ctx, 31, 0x27FA68u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FA60u, 0x27FA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FA68u;
label_27fa68:
    // 0x27fa68: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27fa68u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fa6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fa6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fa70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fa70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fa74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fa74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fa78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fa78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fa7c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x27fa7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27fa80: 0x3e00008  jr          $ra
    ctx->pc = 0x27FA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FA80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FA88u;
}

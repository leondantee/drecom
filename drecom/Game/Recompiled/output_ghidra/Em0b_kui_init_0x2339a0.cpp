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

// Function: Em0b_kui_init
// Address: 0x2339a0 - 0x233adc
void Em0b_kui_init_0x2339a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0b_kui_init_0x2339a0");
#endif

    switch (ctx->pc) {
        case 0x233a2cu: goto label_233a2c;
        case 0x233a40u: goto label_233a40;
        case 0x233a54u: goto label_233a54;
        case 0x233a68u: goto label_233a68;
        case 0x233a88u: goto label_233a88;
        case 0x233a9cu: goto label_233a9c;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ac4u: goto label_233ac4;
        default: break;
    }

    ctx->pc = 0x2339a0u;

    // 0x2339a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2339a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2339a4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x2339a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x2339a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2339a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2339ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2339acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2339b0: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x2339b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x2339b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2339b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2339b8: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2339b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2339bc: 0x24513b60  addiu       $s1, $v0, 0x3B60
    ctx->pc = 0x2339bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15200));
    // 0x2339c0: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x2339c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2339c4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2339c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2339c8: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x2339c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2339cc: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x2339ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2339d0: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x2339d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2339d4: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x2339d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x2339d8: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x2339d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2339dc: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x2339dcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x2339e0: 0x26220150  addiu       $v0, $s1, 0x150
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x2339e4: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x2339e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x2339e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2339e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2339ec: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2339f0: 0x24514010  addiu       $s1, $v0, 0x4010
    ctx->pc = 0x2339f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16400));
    // 0x2339f4: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x2339f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2339f8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2339fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2339fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x233a00: 0x0  nop
    ctx->pc = 0x233a00u;
    // NOP
    // 0x233a04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x233a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x233a08: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x233a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x233a0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x233a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233a10: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x233a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x233a14: 0x24500510  addiu       $s0, $v0, 0x510
    ctx->pc = 0x233a14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x233a18: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a1c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x233a20: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233a20u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233a24: 0xc0961d0  jal         func_258740
    ctx->pc = 0x233A24u;
    SET_GPR_U32(ctx, 31, 0x233A2Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x233A24u, 0x233A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A2Cu;
label_233a2c:
    // 0x233a2c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a30: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x233a34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a38: 0xc0961d0  jal         func_258740
    ctx->pc = 0x233A38u;
    SET_GPR_U32(ctx, 31, 0x233A40u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x233A38u, 0x233A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A40u;
label_233a40:
    // 0x233a40: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a44: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x233a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233a48: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233a48u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233a4c: 0xc096254  jal         func_258950
    ctx->pc = 0x233A4Cu;
    SET_GPR_U32(ctx, 31, 0x233A54u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x233A4Cu, 0x233A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A54u;
label_233a54:
    // 0x233a54: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a58: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x233a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x233a5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a60: 0xc096254  jal         func_258950
    ctx->pc = 0x233A60u;
    SET_GPR_U32(ctx, 31, 0x233A68u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x233A60u, 0x233A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A68u;
label_233a68:
    // 0x233a68: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x233a6c: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x233a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x233a70: 0x24500750  addiu       $s0, $v0, 0x750
    ctx->pc = 0x233a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x233a74: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a78: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x233a7c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233a7cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233a80: 0xc0961d0  jal         func_258740
    ctx->pc = 0x233A80u;
    SET_GPR_U32(ctx, 31, 0x233A88u);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x233A80u, 0x233A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A88u;
label_233a88:
    // 0x233a88: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a88u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233a8c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x233a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x233a90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233a94: 0xc0961d0  jal         func_258740
    ctx->pc = 0x233A94u;
    SET_GPR_U32(ctx, 31, 0x233A9Cu);
    ctx->pc = 0x258740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258740u, 0x233A94u, 0x233A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233A9Cu;
label_233a9c:
    // 0x233a9c: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233a9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233aa0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x233aa4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x233aa4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x233aa8: 0xc096254  jal         func_258950
    ctx->pc = 0x233AA8u;
    SET_GPR_U32(ctx, 31, 0x233AB0u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x233AA8u, 0x233AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AB0u;
label_233ab0:
    // 0x233ab0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x233ab0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x233ab4: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x233ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x233ab8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x233ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x233abc: 0xc096254  jal         func_258950
    ctx->pc = 0x233ABCu;
    SET_GPR_U32(ctx, 31, 0x233AC4u);
    ctx->pc = 0x258950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x258950u, 0x233ABCu, 0x233AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233AC4u;
label_233ac4:
    // 0x233ac4: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x233ac4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x233ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x233acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x233ad0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x233ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x233ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x233AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233ADCu;
}
